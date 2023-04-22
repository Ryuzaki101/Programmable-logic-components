----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:44:55 12/29/2015 
-- Design Name: 
-- Module Name:    DMO - Behavioral 
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

entity DMO is
    Port ( A : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           Y : out  STD_LOGIC_VECTOR (1 downto 0));
end DMO;

architecture Behavioral of DMO is
SIGNAL D : std_logic := '0';

begin
 process(A,B,CLK)
variable E : std_logic := '1';
begin 
if(B='0') then
Y <= A & '0' ;
elsif falling_edge (CLK) then
E := B nand C ;
Y(1) <= E ;
Y(0) <= D ; 
END IF ;
END PROCESS;
D <= C when A = '0' else '1';

end Behavioral;

