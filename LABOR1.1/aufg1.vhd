--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:49:50 11/07/2018
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/SIXTH/PLB/LABOR/LABOR1.1/aufg1.vhd
-- Project Name:  LABOR1.1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: aufgabe1
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
USE ieee.numeric_std.ALL;
 
ENTITY aufg1 IS
END aufg1;
 
ARCHITECTURE behavior OF aufg1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT aufgabe1
    PORT(
         SEL : IN  std_logic_vector(2 downto 0);
         A : IN  std_logic;
         B : IN  std_logic;
         Y : OUT  std_logic);
    END COMPONENT;
    

   --Inputs
   signal SEL : std_logic_vector(2 downto 0) := (others => '0');
   signal A : std_logic := '0';
   signal B : std_logic := '0';

 	--Outputs
   signal Y : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant <clock>period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: aufgabe1 PORT MAP (
          SEL => SEL,
          A => A,
          B => B, 
          Y => Y
        );

   -- Clock process definitions
   <clock>_process :process
   begin
		<clock> <= '0';
		wait for <clock>period/2;
		<clock> <= '1';
		wait for <clock>period/2;
   end process;
 
 
   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for <clock>period*10;

      -- insert stimulus here 

      wait for 10 ns;
   end process;

END;
