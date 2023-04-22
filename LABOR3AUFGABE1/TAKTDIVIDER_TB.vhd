--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:45:00 11/11/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/LABOR3AUFGABE1/TAKTDIVIDER_TB.vhd
-- Project Name:  LABOR3AUFGABE1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TAKTDIVIDER
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
 
ENTITY TAKTDIVIDER_TB IS
END TAKTDIVIDER_TB;
 
ARCHITECTURE behavior OF TAKTDIVIDER_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TAKTDIVIDER
    PORT(
         CLK : IN  std_logic;
         o_CLKDIV2 : OUT  std_logic;
         o_CLKDIV5 : OUT  std_logic;
         o_CLKDIV10 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';

 	--Outputs
   signal o_CLKDIV2 : std_logic;
   signal o_CLKDIV5 : std_logic;
   signal o_CLKDIV10 : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: TAKTDIVIDER PORT MAP (
          CLK => CLK,
          o_CLKDIV2 => o_CLKDIV2,
          o_CLKDIV5 => o_CLKDIV5,
          o_CLKDIV10 => o_CLKDIV10
        );

   -- Clock process definitions
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
      wait for 100 ns;	
      
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
