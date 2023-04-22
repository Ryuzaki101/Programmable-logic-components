----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:23:53 11/07/2018 
-- Design Name: 
-- Module Name:    Aufgabe1 - Behavioral 
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

entity Aufgabe1 is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           SEL : in  STD_LOGIC_VECTOR (2 downto 0);
           Y : out  STD_LOGIC);
end Aufgabe1;

architecture Behavioral of Aufgabe1 is

Signal output : STD_LOGIC;

begin

with SEL select

	output <= (A and B) when "000",
				(A or B) when "001",
				(A xor B) when "010",
				(A nand B) when "011",
				(A nor B)  when "100",
				(A xnor B) when "101",
				'1'  when "110",
				'0' when others;
Y<= output;

end Behavioral;

