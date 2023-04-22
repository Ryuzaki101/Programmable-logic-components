--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:48:37 10/23/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/LABOR1.B/RS_TB.vhd
-- Project Name:  LABOR1.B
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RS_LATCH
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
 
ENTITY RS_TB IS
END RS_TB;
 
ARCHITECTURE behavior OF RS_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RS_LATCH
    PORT(
         R : IN  std_logic;
         S : IN  std_logic;
         CLK : IN  std_logic;
         Q : OUT  std_logic;
         Qbar : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal R : std_logic := '0';
   signal S : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal Q : std_logic;
   signal Qbar : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RS_LATCH PORT MAP (
          R => R,
          S => S,
          CLK => CLK,
          Q => Q,
          Qbar => Qbar
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process CLK_process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 10 ns;	
		R <= '1' ;
		S <= '0';

      wait for CLK_period*5;

      -- insert stimulus here 
      S <= '1' ;
      R <= '1' ;	
		wait for 50 ns;	
		S <= '0' ;
      R <= '0' ;
      	
		
      wait for 50 ns;	
		S <= '1' ;
      R <= '0' ;
      	
		
      wait;
   end process stim_proc;

END;
