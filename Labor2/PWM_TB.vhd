--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:51:18 11/06/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/LABOR2PWM/PWM_TB.vhd
-- Project Name:  LABOR2PWM
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: PWM
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
  
-- Uncomment the f ollowing library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY PWM_TB IS
END PWM_TB;
 
ARCHITECTURE behavior OF PWM_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PWM
    PORT(
         CLK : IN  std_logic;
         EN : IN  std_logic;
         DUTYCYC : IN  std_logic_vector(7 downto 0);
         PWM_OUT : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal EN : std_logic := '0';
   signal DUTYCYC : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal PWM_OUT : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN 
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PWM PORT MAP (
          CLK => CLK,
          EN => EN,
          DUTYCYC => DUTYCYC,
          PWM_OUT => PWM_OUT
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
  EN <='1';
  
--DUTYCYC201 <= "11001001" ;
DUTYCYC <= x"ff" ;
wait for CLK_period*200;

  
DUTYCYC <= x"01" ;
wait for CLK_period*400;

DUTYCYC <= x"64" ;
wait for CLK_period*200;

DUTYCYC <= x"05" ;
wait for CLK_period*400;
DUTYCYC <= x"00" ;
wait for CLK_period*400;







      -- insert stimulus here 

      wait;
   end process;

END;
