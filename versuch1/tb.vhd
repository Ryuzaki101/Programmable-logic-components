--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:43:28 11/07/2018
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/SIXTH/PLB/LABOR/versuch1/tb.vhd
-- Project Name:  versuch1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Aufgabe1
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
 
ENTITY tb IS
END tb;
 
ARCHITECTURE behavior OF tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Aufgabe1
    PORT(
         A : IN  std_logic;
         B : IN  std_logic;
         SEL : IN  std_logic_vector(2 downto 0);
         Y : OUT  std_logic
        );
    END COMPONENT;
    
 
   --Inputs
   signal A : std_logic := '0';
   signal B : std_logic := '0';
   signal SEL : std_logic_vector(2 downto 0) := (others => '0');
 	--Outputs
   signal Y : std_logic;
   -- No clocks detected in port list. Replace clock below with 
   -- appropriate port name 
  
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Aufgabe1 PORT MAP (
          A => A,
          B => B,
          SEL => SEL,
          Y => Y
        );



   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns; 	
		A <= '1';
		B <= '1';
		SEL <= "101";
		wait for 100 ns; 	
		A <= '1';
		B <= '0';
		SEL <= "111";

      -- insert stimulus here 

      wait;
   end process;

END;
