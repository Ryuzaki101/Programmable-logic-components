--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:52:57 10/24/2015
-- Design Name:   
-- Module Name:   C:/Users/m/Desktop/OH/PLB/LABOR/Labor1b/LATCH_MUX_TB.vhd
-- Project Name:  Labor1b
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: LATCH_MUX
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
 
ENTITY LATCH_MUX_TB IS
END LATCH_MUX_TB;
 
ARCHITECTURE behavior OF LATCH_MUX_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT LATCH_MUX
    PORT(
			  I : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           S : in  STD_LOGIC_VECTOR (1 downto 0);
           Y : out  STD_LOGIC
        );
    END COMPONENT;
    

   --Inputs
   signal I : std_logic := '0';
   signal CLK : std_logic := '0';
   signal S : std_logic_vector(1 downto 0) := (others => '0');
 	--Outputs
   signal Y : std_logic;
	signal cnt : unsigned (2 downto 0):="000";
   -- Clock period definitions
   constant CLK_period : time := 10 ns;
   
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: LATCH_MUX PORT MAP (
          I => I,
          CLK => CLK,
          S => S,
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
      -- hold reset state for 100 ns.
		wait for 10 ns ;
	
	cnt <= cnt + 1;	
		
		wait for 40 ns ;
		

     
   end process;
	I <= cnt(0);
	S <= (cnt(2)&cnt(1));
END;
