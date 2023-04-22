----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:07:39 11/09/2017 
-- Design Name: 
-- Module Name:    Aufgabe1 - Behavioral 
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
USE ieee.std_logic_1164.ALL;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Aufgabe1 is
	port(	en : in std_logic;
			dutcyc : in std_logic_vector(7 downto 0);
			clk : in std_logic;
			pwm_out : out std_logic);
end Aufgabe1;
architecture Behavioral of Aufgabe1 is

constant cnt_max : std_logic_vector := "11001000";	-- CLK_Freq/PWM_Freq = 200 = 11001000
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
			pwm_out <= '0';
		--elsif(i = "11001000") then		-- wenn i = Maxwert 200 erreicht hat
			--pwm_out <= '0';
		elsif(i = 0) then					-- wenn i = 0 erreicht hat
			pwm_out <= '1';
		end if;
	else
		pwm_out <= '0';
		
	end if;
	end process frequenz;


end Behavioral;

