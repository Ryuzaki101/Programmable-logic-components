--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:33:53 11/15/2018
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/SIXTH/PLB/LABOR/laborbra2/Labor2pwm/TB.vhd
-- Project Name:  Labor2pwm
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
USE ieee.numeric_std.ALL;
 
ENTITY TB IS
END TB;
 
ARCHITECTURE Behavioral OF TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Aufgabe1
    PORT(
         clk : in std_logic;
			en : in std_logic;
			dutcyc : in std_logic_vector(7 downto 0);
			pwm_out : out std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal en : std_logic := '0';
   signal dutcyc : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal pwm_out : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Aufgabe1 PORT MAP (
          clk => clk,
          en => en,
          dutcyc => dutcyc,
          pwm_out => pwm_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
       EN <='1';
  
--dutcyc201 <= "11001001" ;
dutcyc <= x"ff" ;
wait for CLK_period*200;

  
dutcyc <= x"01" ;
wait for CLK_period*400;

dutcyc <= x"64" ;
wait for CLK_period*200;

dutcyc <= x"05" ;
wait for CLK_period*400;
dutcyc <= x"00" ;
wait for CLK_period*400;
wait;
   end process;


END;
