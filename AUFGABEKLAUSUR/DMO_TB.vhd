--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:48:22 12/29/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/AUFGABEKLAUSUR/DMO_TB.vhd
-- Project Name:  AUFGABEKLAUSUR
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: DMO
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
 
ENTITY DMO_TB IS
END DMO_TB;
 
ARCHITECTURE behavior OF DMO_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DMO
    PORT(
         A : IN  std_logic;
         CLK : IN  std_logic;
         B : IN  std_logic;
         C : IN  std_logic;
         Y : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic := '0';
   signal CLK : std_logic := '0';
   signal B : std_logic := '0';
   signal C : std_logic := '1';

 	--Outputs
   signal Y : std_logic_vector(1 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DMO PORT MAP (
          A => A,
          CLK => CLK,
          B => B,
          C => C,
          Y => Y
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
	
      wait for 15 ns;
      C   <= '0';
      A 		<= '1';
		wait for 10 ns ;
		B <= '1';


      
      wait;
   end process;

END;
