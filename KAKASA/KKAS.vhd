----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:03:18 12/29/2015 
-- Design Name: 
-- Module Name:    KKAS - Behavioral 
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

entity KKAS is
    Port ( RST: in  STD_LOGIC;
           I: in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           Y : out  STD_LOGIC );
end KKAS;

architecture Behavioral of KKAS is
SIGNAL B : std_logic ;
SIGNAL A : std_logic_VECTOR(2 DOWNTO 0) ;
begin
B <= A(2);
 process(RST,CLK)
variable C : std_logic ;
begin 
if(RST = '1') then
A <= (OTHERS => '0') ;
Y <= '0' ;
elsif rising_edge (CLK) then
A <= A(1 downto 0) & I ;
C := B ;
Y  <= C ; 
END IF ;
END PROCESS;


end Behavioral;


