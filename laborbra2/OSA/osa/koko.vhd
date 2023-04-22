----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:20:43 11/15/2018 
-- Design Name: 
-- Module Name:    koko - Behavioral 
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

entity koko is
    Port ( clk : in  STD_LOGIC;
           en : in  STD_LOGIC;
           dutcyc : in  STD_LOGIC_VECTOR (7 downto 0);
           pwmout : out  STD_LOGIC);
end koko;

architecture Behavioral of Aufgabe1 is

constant cnt_max : std_logic_vector := "11001000";	-- clk_Freq/PWM_Freq = 200 = 11001000
signal duty: std_logic_vector(7 downto 0):= "00000000";	
signal i : unsigned(7 downto 0) := "00000000";			-- zähler

begin

	counter: process(clk, i,duty)	-- Zählt solange den Zähler hoch bis 200 erreicht ist
	begin
		if rising_edge(clk) then
			if(i /= unsigned(cnt_max)) then
				i <= i + 1;
			else
				i <= "00000000";
			end if;
		end if;		
	end process counter;
	
	duty_cycle_erkennung: process(dutcyc)	
	begin
		if(dutcyc /= "00000000") then
			duty <= dutcyc;
		else 
			duty <= "00000001";
		end if;
	end process duty_cycle_erkennung;
	
	frequenz: process(clk,duty,i)
	begin
	if(en = '1') then		-- en Eingang schaltet frei
		if(i = unsigned(duty)) then	-- wenn i = Dutycyle erreicht hat
			pwmout <= '0';
		--elsif(i = "11001000") then		-- wenn i = Maxwert 200 erreicht hat
			--pwmout <= '0';
		elsif(i = 0) then					-- wenn i = 0 erreicht hat
			pwmout <= '1';
		end if;
	else
		pwmout <= '0';
		
	end if;
	end process frequenz;


end Behavioral;

