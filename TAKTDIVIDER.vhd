----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:56:55 11/11/2015 
-- Design Name: 
-- Module Name:    TAKTDIVIDER - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity TAKTDIVIDER is
    Port ( CLK : in  STD_LOGIC;
           o_CLKDIV2 : out  STD_LOGIC;
           o_CLKDIV5 : out  STD_LOGIC;
           o_CLKDIV10 : out  STD_LOGIC);
end TAKTDIVIDER;

architecture Behavioral of TAKTDIVIDER is
signal cnt : STD_LOGIC_VECTOR (2 downto 0);
signal cnt_1 : STD_LOGIC_VECTOR (0 downto 0):= "1";
signal SR : std_logic_vector(9 downto 0) := "0000000000";
begin
process(CLK)
begin
if rising_edge (CLK) then 
    o_CLKDIV2 <= '1';
	SR <= SR(8 downto 0) & cnt_1 ;
  if(SR(4)='1') then
   o_CLKDIV2 <= '0';
   end if ;
end if ;
end process;

end Behavioral;

