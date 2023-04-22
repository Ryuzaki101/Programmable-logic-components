--------------------------------------------------------------------------------------
-- Hochschule Mannheim - Informationstechnik
-- Prof. Dr. Kurt Ackermann
-- PLB
-- Labor 6, Aufgabe 1 (Dig.Gain, Zeilenpuffer) Testbench
--
-- Anmerkung: Simulationszeit: 40 us
--------------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY LineBuf_TB IS
END LineBuf_TB;
 
ARCHITECTURE behavior OF LineBuf_TB IS 
 
    COMPONENT LineBuf
    PORT(
         i_RST  : IN  std_logic; 
         i_GAIN : IN  std_logic_vector(7 downto 0);
         CLK_A  : IN  std_logic;
         i_LVAL : IN  std_logic;
         i_DATA : IN  std_logic_vector(7 downto 0);
         CLK_B  : IN  std_logic;
         o_LVAL : OUT  std_logic;
         o_DATA : OUT  std_logic_vector(15 downto 0));
    END COMPONENT;

   signal i_RST  : std_logic := '1';
	-- 8-Bit Festkommazahl (xxxx.xxxx)
   signal i_GAIN : std_logic_vector(7 downto 0) := x"10";
   signal CLK_A  : std_logic := '0';
   signal i_LVAL : std_logic := '0';
   signal i_DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal CLK_B  : std_logic := '0';
   signal o_LVAL : std_logic;
   signal o_DATA : std_logic_vector(15 downto 0);
	signal CLK_B_INT : std_logic := '0'; 
	signal cnt    : unsigned(9 downto 0);
	signal cnt2   : unsigned(7 downto 0);
	-- RST_DELAY soll vermeiden, dass Daten kurz nach dem Reset
	-- in den FIFO geschrieben werden (--> Datenverluste)
	signal RST_DELAY : std_logic := '1';
	
   constant CLK_A_period : time := 20 ns;
   constant CLK_B_period : time := 10 ns;
	
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: LineBuf PORT MAP (
          i_RST  => i_RST,
          i_GAIN => i_GAIN,
          CLK_A  => CLK_A,
          i_LVAL => i_LVAL,
          i_DATA => i_DATA,
          CLK_B  => CLK_B,
          o_LVAL => o_LVAL,
          o_DATA => o_DATA );

   -- Clock process definitions
   CLK_A_process :process
   begin
		CLK_A <= not CLK_A;
		wait for CLK_A_period/2;
   end process;
 
   CLK_B_process :process
   begin
		CLK_B_INT <= not CLK_B_INT;
		wait for CLK_B_period/2;
   end process;
	CLK_B <= transport CLK_B_INT after 3 ns;
 
   rst_proc: process
   begin		
      wait for 100 ns;	
		i_RST <= '0';
		wait for 1 us;
		RST_DELAY <= '0';
		wait for 17 us;
		i_GAIN <= x"28"; -- Faktor 2.5
      wait;
   end process rst_proc;

	data_proc: process(CLK_A)
	begin
		if rising_edge(CLK_A) then
			if( RST_DELAY='1' ) then cnt <= (others => '0');
			else							 cnt <= cnt + 1;
			end if;
			if   ( cnt=1 )   then i_LVAL <= '1';
			elsif( cnt=641 ) then i_LVAL <= '0';
			end if;
			if ( i_LVAL='0' ) then cnt2 <= (others => '0');
			else                   cnt2 <= cnt2 + 1;
			end if;
		end if;
	end process data_proc;
	i_DATA <= std_logic_vector(cnt2);			
	
END;
