----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:56:33 10/29/2018 
-- Design Name: 
-- Module Name:    D-latch - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity LatchMul is
    Port ( I : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
			  SEL : in  STD_LOGIC_VECTOR;
           Y 	: out  STD_LOGIC);
end LatchMul;

architecture Behavioral of LatchMul is

Signal sig : STD_LOGIC_VECTOR(1 downto 0);
Signal Input : STD_LOGIC_VECTOR(1 downto 0);
Signal 

begin

	Input <= I & Clk;
	Y <= '0' when I="01"
		

end Behavioral;

