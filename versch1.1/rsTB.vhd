--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:22:55 10/29/2018
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/SIXTH/PLB/LABOR/versch1.1/rsTB.vhd
-- Project Name:  versch1.1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: rs
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
 
ENTITY rsTB IS
END rsTB;
 
ARCHITECTURE behavior OF rsTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT rs
    PORT(
         R : IN  std_logic;
         S : IN  std_logic;
         Clk : IN  std_logic;
         Q : OUT  std_logic;
         Qn : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal R : std_logic := '0';
   signal S : std_logic := '0';
   signal Clk : std_logic := '0';

 	--Outputs
   signal Q : std_logic;
   signal Qn : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: rs PORT MAP (
          R => R,
          S => S,
          Clk => Clk,
          Q => Q,
          Qn => Qn
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		S <='0';
		R <='0';
		wait for 100 ns;
		S <='0';
		R <='1';
		wait for 100 ns;
		S <='1';
		R <='0';
		wait for 100 ns;
		S <='1';
		R <='1';
      wait for Clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
