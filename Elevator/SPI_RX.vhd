----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:14:51 11/28/2015 
-- Design Name: 
-- Module Name:    SPI_RX - Behavioral 
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

entity SPI_RX is
    Port ( SPI_CS : in  STD_LOGIC;
           SPI_DIN : in  STD_LOGIC;
           SPI_CLK : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           o_DATA : out  STD_LOGIC_VECTOR (7 downto 0);
           o_STRB : out  STD_LOGIC;
           o_ERR : out  STD_LOGIC);
end SPI_RX;

architecture Behavioral of SPI_RX is
SIGNAL SR : STD_LOGIC_VECTOR(7 downto 0) := x"00";
SIGNAL CNT , CNT_BIT : unsigned (7 downto 0) := x"00";
SIGNAL FF , FF1 : STD_LOGIC := '0';
begin
 
SPI_SIGNAL : process(CLK)
begin
 if rising_edge(CLK) then
 FF <= SPI_CLK;
 FF1 <= SPI_CS;
 end if;
end process SPI_SIGNAL;

SPI_DATA : process(CLK)
begin
	if rising_edge(CLK) then
		if (SPI_CLK = '1' and FF = '0') then 
			if(SPI_CS ='0') then
			SR <= SR(6 downto 0) & SPI_DIN;
			CNT_BIT <= CNT_BIT + 1;
			elsif(SPI_CS = '1') then
			SR <= x"00";        -- SR AUF NULL AM ENDE DER UEBERTRAGUNG.
			end if;
		elsif (SPI_CS = '1' and FF1 = '0') then 
		   CNT_BIT <= x"00"; 
		end if;
	end if;
end process SPI_DATA;

SPI_TRANSMISSION : process(CLK)
begin
	if rising_edge(CLK) then
			CNT <= CNT + 1;
			o_ERR <= '0'; 
		if(CNT = x"00") then
				o_STRB <= '0';
				o_ERR <= '0'; 
      end if;
		if(SPI_CS = '1' AND FF1 <= '0') then
			o_DATA <= SR ;
			CNT <= x"00";
			o_STRB <= '1';
		if(CNT_BIT /= x"08") then
         o_ERR <= '1'; 
			o_STRB <= '0';
		end if;
		end if;
	end if;
end process SPI_TRANSMISSION;

end Behavioral;

