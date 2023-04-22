--------------------------------------------------------------------------------------
-- Hochschule Mannheim - Informationstechnik
-- Prof. Dr. Kurt Ackermann
-- PLB
-- Labor 5, Aufgabe 1 (Fahrstuhlsteuerung) Testbench
--
-- Anmerkung: Simulationszeit: 18 ms
--------------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY ELEVATOR_TB IS
END ELEVATOR_TB;
 
ARCHITECTURE behavior OF ELEVATOR_TB IS 
 
    COMPONENT ELEVATOR
    PORT(
         CLK         : IN  std_logic;
			i_RST       : IN  std_logic;
         i_SPI_CS    : IN  std_logic;
         i_SPI_DIN   : IN  std_logic;
         i_SPI_CLK   : IN  std_logic;
         i_REQ_EXT   : IN  std_logic_vector(3 downto 0);
         i_REQ_INT   : IN  std_logic_vector(3 downto 0);
         i_POS       : IN  std_logic_vector(3 downto 0);
         o_MOTOR_DIR : OUT std_logic;
         o_MOTOR_EN  : OUT std_logic;
         i_DOOR_STAT : IN  std_logic_vector(1 downto 0);
         o_DOOR_DIR  : OUT std_logic;
         o_DOOR_EN   : OUT std_logic );
    END COMPONENT;
    
   --Inputs
   signal CLK : std_logic := '0';
   signal i_RST : std_logic := '1';
   signal i_SPI_CS : std_logic := '0';
   signal i_SPI_DIN : std_logic := '0';
   signal i_SPI_CLK, i_SPI_CLK_int : std_logic := '0';
   signal i_REQ_EXT : std_logic_vector(3 downto 0) := (others => '0');
   signal i_REQ_INT : std_logic_vector(3 downto 0) := (others => '0');
   signal i_POS : std_logic_vector(3 downto 0) := "0010";
   signal i_DOOR_STAT : std_logic_vector(1 downto 0) := "10";

 	--Outputs
   signal o_MOTOR_DIR : std_logic;
   signal o_MOTOR_EN : std_logic;
   signal o_DOOR_DIR : std_logic;
   signal o_DOOR_EN : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 1 us;
   constant i_SPI_CLK_period : time := 10 us;
 
   -- Fahrstuhltür soll automatisch nach 1,5 ms schliessen (WDT Takt = 1MHz / 32)
   signal WDT_VAL : std_logic_vector(7 downto 0) := std_logic_vector(to_unsigned(47, 8));

BEGIN
 
   uut: ELEVATOR PORT MAP (
          CLK         => CLK,
			 i_RST       => i_RST,
          i_SPI_CS    => i_SPI_CS,
          i_SPI_DIN   => i_SPI_DIN,
          i_SPI_CLK   => i_SPI_CLK,
          i_REQ_EXT   => i_REQ_EXT,
          i_REQ_INT   => i_REQ_INT,
          i_POS       => i_POS,
          o_MOTOR_DIR => o_MOTOR_DIR,
          o_MOTOR_EN  => o_MOTOR_EN,
          i_DOOR_STAT => i_DOOR_STAT,
          o_DOOR_DIR  => o_DOOR_DIR,
          o_DOOR_EN   => o_DOOR_EN );


   CLK_process :process
   begin
		CLK <= not CLK;
		wait for CLK_period/2;
   end process;
 
   i_SPI_CLK_process :process
   begin
		i_SPI_CLK_int <= not i_SPI_CLK_int;
		wait for i_SPI_CLK_period/2;
   end process;
	-- make SPI_CLK async. to CLK
	i_SPI_CLK <= transport i_SPI_CLK_int after 2 ns;

	-- startup reset
	RST_GEN: process
	begin
		wait for 10 us;
		i_RST <= '0';
		wait;
	end process RST_GEN;
	
   -- Intervall des Watchdog Timers ueber SPI prog.
   WDT_CONFIG: process
   begin		
		i_SPI_CS <= '1';
		wait for 100 us;
		for i in 7 downto 0 loop
			wait until falling_edge(i_SPI_CLK);
			i_SPI_CS  <= '0';
			i_SPI_DIN <= WDT_VAL(i);
		end loop;
		wait until falling_edge(i_SPI_CLK);
		i_SPI_CS <= '1';
		wait;
   end process WDT_CONFIG;

	
	
	-- Fahrstuhl Stim.
	ELEV: process
	begin
		-- Anfrage von OG 2
		wait for 300 us;
		i_REQ_EXT <= "1000"; 	
		wait until (i_POS="1000" and i_DOOR_STAT="01");
		i_REQ_EXT <= "0000";		-- Anfrage zurücksetzen
		
		-- Zieleingabe: OG 1, E
		wait for 3 ms;
		i_REQ_INT <= "0110";		
		wait until ((i_POS and i_REQ_INT)/="0000" and i_DOOR_STAT="01");
		i_REQ_INT <= i_REQ_INT and not(i_POS and i_REQ_INT);
		wait until ((i_POS and i_REQ_INT)/="0000" and i_DOOR_STAT="01");
		i_REQ_INT <= i_REQ_INT and not(i_POS and i_REQ_INT);
		
		-- Anfrage: OG 1, K
		wait for 3 ms;
		i_REQ_EXT <= "0101";		
		wait until ((i_POS and i_REQ_EXT)/="0000" and i_DOOR_STAT="01");
		i_REQ_EXT <= i_REQ_EXT and not(i_POS and i_REQ_EXT);
		wait until ((i_POS and i_REQ_EXT)/="0000" and i_DOOR_STAT="01");
		i_REQ_EXT <= i_REQ_EXT and not(i_POS and i_REQ_EXT);

		-- Anfrage aus demselben Stockwerk
		wait for 3 ms;
		i_REQ_EXT <= i_POS; 	
		wait until i_DOOR_STAT="01";
		i_REQ_EXT <= "0000";		-- Anfrage zurücksetzen
		wait;
	end process ELEV;
		
	MOVE: process
	begin
		-- warte auf erneute Aktivierung des Fahrstuhlmotors
		wait until o_MOTOR_EN='1';
		-- waehrend der Motor läuft --> Position veraendern
		while (o_MOTOR_EN='1') loop
			wait for 300 us;					-- Verzoegerung durch Fahrt
			if (o_MOTOR_DIR='1') then		-- Richtung: aufwaerts
				if (i_POS/="1000") then
					i_POS <= i_POS(2 downto 0) & '0';
				end if;
			else
				if (i_POS/="0001") then		-- Richtung: runter
					i_POS <= '0' & i_POS(3 downto 1);
				end if;
			end if;
			-- nach einem Stockwerkwechsel kurz warten, falls
			-- o_MOTOR_EN zurückgesetzt wird.
			wait for 50 us;
		end loop;
	end process MOVE;
				
	
	DOOR: process
	begin
		wait until rising_edge(o_DOOR_EN);
		-- Tuer ist offen und soll sclhiessen
		if (o_DOOR_DIR='1' and i_DOOR_STAT="01") then 
			i_DOOR_STAT <= "00";
			wait for 100 us;
			i_DOOR_STAT <= "10";
		-- Tuer ist geschlossen und soll oeffnen
		elsif (o_DOOR_DIR='0' and i_DOOR_STAT="10") then
			i_DOOR_STAT <= "00";
			wait for 100 us;
			i_DOOR_STAT <= "01";
		end if;		
	end process DOOR;
END;