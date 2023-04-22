--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:04:35 10/21/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/daswe/STIMULI.vhd
-- Project Name:  daswe
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TEST
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
 
ENTITY STIMULI IS
END STIMULI;
 
architecture TB of STIMULI is

    signal R,S: 	std_logic;
    signal CLK:	std_logic := '1' ;
    
    signal Q,Qbar:	std_logic;
	
    component RS_LATCH  
    port (	R,S : in std_logic ;
CLK : in std_logic ; 
Q,Qbar : out std_logic  
    );
    end component;
		 
begin

    UUT: RS_LATCH port map (R=>R, S=>S, CLK=>CLK, Q=>Q, Qbar=>Qbar);

    -- concurrent process to offer clock signal	
    clock_ :process
    begin
	
  CLK <= NOT CLK ;
	wait for 10 ns;
	
    end process clock_;
	 
   K : process


    begin
		
   

	-- case 1
	R <= '0';
	
	wait for 15 ns;
	

	-- case 2
	wait for 5 ns;
	R <= '1';
	
	wait for 15 ns;
	

	-- case 3
	wait for 5 ns;
	R <= '1';
	
	wait for 15 ns;
	

 	wait;

    end process K;
SAT: process 
begin 
	S <= '1';
	wait for 15 ns;
	wait for 5 ns;
	S <= '0';
	wait for 15 ns;
	wait for 5 ns;
	S <= '1';
	wait for 15 ns;
	wait;

end process SAT ; 
	
end TB;
