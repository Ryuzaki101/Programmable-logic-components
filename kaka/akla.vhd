----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:34:24 11/12/2015 
-- Design Name: 
-- Module Name:    akla - Behavioral 
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

entity akla is
    Port ( CLK : in  STD_LOGIC;
           CNT_CLK : in  STD_LOGIC;
           VALUE : in  STD_LOGIC_VECTOR (7 downto 0);
           LOAD : in  STD_LOGIC;
           o_RESET : out  STD_LOGIC);
end akla;

architecture Behavioral of akla is

signal temp_value: unsigned(7 downto 0):="00000000";-- interne zähler
signal temp_cnt1: std_logic:='0';
signal temp_cnt2: std_logic:='0';

begin

WDT: process (clk) 

begin

	if rising_edge (clk) then

	temp_cnt1<=CNT_CLK; --CNT_CLK Vorher
	temp_cnt2<=temp_cnt1; --CNT_CLK Aktuell


		if (LOAD='1') then
			temp_value <= unsigned (VALUE);
			o_RESET <= '0';

		else
				if(temp_cnt1 ='1' and temp_cnt2='0') then
						if (temp_value /= "00000000") then
			 
						temp_value <=temp_value -1;-- dekrementieren
						end if;
				end if;
		end if;
			
			
		if (temp_value = "00000000") then
				o_RESET <= '1';
				else
				o_RESET <= '0';
		end if;
		
	end if;
	
	
	--end if;
	
	
	-- else
	-- o_RESET <= '0';

end process WDT;

end Behavioral;

