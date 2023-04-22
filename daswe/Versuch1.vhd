----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:32:12 10/21/2015 
-- Design Name: 
-- Module Name:    Versuch1 - Behavioral 
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

entity Versuch1 is
	port ( 	A : in std_logic ;
			   B : in std_logic ;
			   C : out std_logic );
end Versuch1;

architecture Behavioral of Versuch1 is
begin
	
	process (A,B)
begin
 if((A = '1') and (B='1')) then 
	C <= '1'; 
	else 
	C <= '0';
	end if ;
	
	end process ;


end Behavioral;
architecture bhv2 of Versuch1 is 
begin 
	C <= A and B;
end bhv2;
