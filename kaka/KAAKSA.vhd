--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:36:04 11/12/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/kaka/KAAKSA.vhd
-- Project Name:  kaka
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: akla
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY KAAKSA IS
END KAAKSA;
 
ARCHITECTURE behavior OF KAAKSA IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT akla
    PORT(
         CLK : IN  std_logic;
         CNT_CLK : IN  std_logic;
         VALUE : IN  std_logic_vector(7 downto 0);
         LOAD : IN  std_logic;
         o_RESET : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal CNT_CLK : std_logic := '0';
   signal VALUE : std_logic_vector(7 downto 0) := (others => '0');
   signal LOAD : std_logic := '0';

 	--Outputs
   signal o_RESET : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
   constant CNT_CLK_period : time := 1 ms;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: akla PORT MAP (
          CLK => CLK,
          CNT_CLK => CNT_CLK,
          VALUE => VALUE,
          LOAD => LOAD,
          o_RESET => o_RESET
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 
   CNT_CLK_process :process
   begin
		CNT_CLK <= '0';
		wait for CNT_CLK_period/2;
		CNT_CLK <= '1';
		wait for CNT_CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
    LOAD <='1';
	VALUE <="00001111";
	wait for 5 ms;
	
	LOAD <='0';
	--VALUE <="00001110";--14
	wait for 30 ms;
	
	LOAD <= '1';
	
	wait for 20 ms;
	
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CNT_CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
