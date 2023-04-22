----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:10:33 10/29/2018 
-- Design Name: 
-- Module Name:    rs - Behavioral 
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

entity rs is
    Port ( R : in  STD_LOGIC;
           S : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           Q : out  STD_LOGIC;
           Qn : out  STD_LOGIC);
end rs;

architecture Behavioral of rs is

signal I : STD_LOGIC_VECTOR(2 downto 0);
signal O : STD_LOGIC; 
 
begin
	I <= CLK & R & S;
	with I select 
	O <= '0' when "110",
		  '0' when "111",
		  '1' when "101",
		   O when others;
	Q <= O;
	Qn <= not O;

end Behavioral;

