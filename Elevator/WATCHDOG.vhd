----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:15:17 11/15/2015 
-- Design Name: 
-- Module Name:    WATCHDOG - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity WATCHDOG is
    Port ( VALUE : in  STD_LOGIC_VECTOR (7 downto 0);
           LOAD : in  STD_LOGIC;
           CNT_CLK : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           o_RESET : out  STD_LOGIC);
end WATCHDOG;

architecture Behavioral of WATCHDOG is

signal tmr : UNSIGNED (7 downto 0);
signal temp : STD_LOGIC := '0';

begin

WD : process(CLK)
begin
 if rising_edge (CLK) then
 temp <= CNT_CLK ;
  if(LOAD = '1') then
  tmr <= unsigned(VALUE);
  o_RESET <= '0';
  else
   if((CNT_CLK = '1' and temp = '0' ) ) then
	if (tmr /= "00000000") then
	tmr <= tmr - 1 ;
	end if; 
	end if;
	if(tmr = "00000000") then
	o_RESET <= '1';
	else 
	o_RESET <= '0';
	end if;
  end if;
 end if;


end process WD;

end Behavioral;

