--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:04:32 12/29/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/KAKASA/TBE.vhd
-- Project Name:  KAKASA
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: KKAS
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
-- that these types always be used for the top-level I/O of RSTdesign in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TBE IS
END TBE;
 
ARCHITECTURE behavior OF TBE IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT KKAS
    PORT(
         RST: IN  std_logic;
         I: IN  std_logic;
         CLK : IN  std_logic;
         Y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal RST: std_logic := '1';
   signal I: std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal Y : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: KKAS PORT MAP (
          RST=> RST,
          I=> I,
          CLK => CLK,
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
     wait for 12.50 ns;
      RST		<= '0';
	  wait for 12.50 ns;
     I		<= '1';
		wait for 20 ns ;
     I		<= '0';
	  wait for 27.50 ns;
      RST		<= '1';
      wait;
   end process;

END;
