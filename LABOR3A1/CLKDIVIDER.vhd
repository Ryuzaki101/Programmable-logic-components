----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:34:26 11/11/2015 
-- Design Name: 
-- Module Name:    CLKDIVIDER - Behavioral 
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

entity CLKDIVIDER is
    Port ( CLK : in  STD_LOGIC;
           o_CLKDIV2 : out  STD_LOGIC;
           o_CLKDIV5 : out  STD_LOGIC;
           o_CLKDIV10 : out  STD_LOGIC);
end CLKDIVIDER;

architecture Behavioral of CLKDIVIDER is

 
--signal FF5 : STD_LOGIC:='0';
signal FF2 : STD_LOGIC:='0';
signal FF10 : STD_LOGIC := '0';
signal SR : std_logic_vector(4 downto 0) := "00111" ;

begin 
 
process(CLK)
begin
   if rising_edge(CLK) then 
	SR <= SR(3 downto 0) & SR(SR'left) ;
   FF2 <= not FF2 ;
--	FF5 <= SR(2);
	 if (SR(4 downto 3)="01" ) then
		FF10 <= not FF10 ;
	 end if ;

	end if ;
end process;
	

 

	o_CLKDIV2 <= FF2 ;
	o_CLKDIV5 <= SR(4) ;
	o_CLKDIV10 <= FF10 ;

end Behavioral;


