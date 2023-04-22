--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:27:21 11/15/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/WATCHDOG/WATCHDOG_TB.vhd
-- Project Name:  WATCHDOG
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: WATCHDOG
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
 
ENTITY WATCHDOG_TB IS
END WATCHDOG_TB;
 
ARCHITECTURE behavior OF WATCHDOG_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT WATCHDOG
    PORT(
         VALUE : IN  std_logic_vector(7 downto 0);
         LOAD : IN  std_logic;
         CNT_CLK : IN  std_logic;
         CLK : IN  std_logic;
         o_RESET : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal VALUE : std_logic_vector(7 downto 0) := (others => '0');
   signal LOAD : std_logic := '0';
   signal CNT_CLK : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal o_RESET : std_logic;

   -- Clock period definitions
   constant CNT_CLK_period : time := 10 ns;
   constant CLK_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: WATCHDOG PORT MAP (
          VALUE => VALUE,
          LOAD => LOAD,
          CNT_CLK => CNT_CLK,
          CLK => CLK,
          o_RESET => o_RESET
        );

   -- Clock process definitions
   CNT_CLK_process :process
   begin
		CNT_CLK <= '0';
		wait for CNT_CLK_period/2;
		CNT_CLK <= '1';
		wait for CNT_CLK_period/2;
   end process;
 
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		LOAD <= '0';
		VALUE <= x"08";
      wait for 100 ns;	
      LOAD <= '1';
		wait for 100 ns;	
		LOAD <= '0';
		wait for CNT_CLK_period*10;
      LOAD <= '1';
		VALUE <= x"0A";
		wait for CNT_CLK_period*10;
		LOAD <= '0';
 
      -- insert stimulus here 
      wait;
   end process;

END;
