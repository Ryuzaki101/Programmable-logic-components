----------------------------------------------------------------------------------
-- Hochschule Mannheim - Informationstechnik
-- Prof. Dr. Kurt Ackermann
-- PLB
-- Labor 4, Aufgabe 1 Testbench (SPI_RX Slave)
-- Simulationszeit: ~15 us
----------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
  
ENTITY SPI_RX_TSB IS
END SPI_RX_TSB;
 
ARCHITECTURE behavior OF SPI_RX_TSB IS 
 
    COMPONENT SPI_RX
    PORT(
         CLK     : IN  std_logic;
         SPI_CS  : IN  std_logic;
         SPI_CLK : IN  std_logic;
         SPI_DIN : IN  std_logic;
         o_DATA  : OUT std_logic_vector(7 downto 0);
         o_STRB  : OUT std_logic;
         o_ERR   : OUT std_logic );
    END COMPONENT;

   --Inputs
   signal CLK : std_logic := '0';
   signal SPI_CS : std_logic := '1';
   signal SPI_CLK, SPI_CLK_INT : std_logic := '0';
   signal SPI_DIN : std_logic := '0';

 	--Outputs
   signal o_DATA : std_logic_vector(7 downto 0);
   signal o_STRB : std_logic;
   signal o_ERR : std_logic;
	
	type data_block is array (0 to 2, 7 downto 0) of std_logic;
	signal data : data_block := (x"A5", x"3C", x"55");

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
   constant SPI_CLK_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SPI_RX PORT MAP (
          CLK     => CLK,
          SPI_CS  => SPI_CS,
          SPI_CLK => SPI_CLK,
          SPI_DIN => SPI_DIN,
          o_DATA  => o_DATA,
          o_STRB  => o_STRB,
          o_ERR   => o_ERR );

  
  -- Clock process definitions
   CLK_process :process
   begin
		CLK <= not CLK;
		wait for CLK_period/2;
   end process;
 
   SPI_CLK_process :process
   begin
		SPI_CLK_INT <= not SPI_CLK_INT;
		wait for SPI_CLK_period/2;
   end process;
	-- make SPI_CLK async. to CLK
	SPI_CLK <= transport SPI_CLK_INT after 2 ns;

   -- Stimulus process
   stim_proc: process
   begin		
		for n in 0 to 2 loop 			-- 3 Datenworte werden übertragen
			SPI_CS <= '1';
			wait for 1 us;
			
			for i in 7 downto 0 loop 		-- 8-Bit pro Datenwort
				wait until falling_edge(SPI_CLK);
				SPI_CS  <= '0';
				SPI_DIN <= data(n, i);
			end loop;

			wait until falling_edge(SPI_CLK);
			SPI_CS <= '1';
			wait for 2 us;
		end loop;
		
		-- Fehlerfall erzeugen
		SPI_CS <= '1';
		wait for 1 us;
		for i in 6 downto 0 loop 			-- 7-Bit Datenwort
			wait until falling_edge(SPI_CLK);
			SPI_CS  <= '0';
			SPI_DIN <= data(0, i);
		end loop;
		wait until falling_edge(SPI_CLK);
		SPI_CS <= '1';
		wait;
   end process;

END;