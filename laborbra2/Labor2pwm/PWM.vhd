----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:42:37 11/05/2015 
-- Design Name: 
-- Module Name:    PWM - Behavioral 
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

entity PWM is
    Port ( CLK : in  STD_LOGIC;
           EN : in  STD_LOGIC;
           DUTYCYC : in  STD_LOGIC_VECTOR (7 downto 0);
           PWM_OUT : out  STD_LOGIC);
end PWM;

architecture Behavioral of PWM is
signal cnt : unsigned (7 downto 0) := x"00";

signal output : STD_LOGIC ;
begin
pwm : process (CLK)

begin 
		if rising_edge (CLK)then
			if(cnt = x"00") then 
				output <= '1';
			end if ;
			if (EN = '1') then
				cnt <= cnt + 1 ;
				if(cnt="11001000") then 
					output <= '1';
					cnt <= x"01";
				elsif(cnt="11000111" or cnt = unsigned(DUTYCYC)) then
					output <= '0';
				elsif(cnt=x"01" and DUTYCYC = x"00") then
					output <= '0';
				end if ;
			elsif (EN = '0') then
				output <= '0';
			end if;
		end if ; 
end  process pwm;
PWM_OUT <= output;

--pwm_1 : process (CLK)
--begin
--if rising_edge(CLK) then
-- if(EN='0') then 
--  DUTYCYC_n <= DUTYCYC ;
--  if (DUTYCYC = "00") then
--  DUTYCYC_n <= x"01" ;
--  end if;
-- end if;
--end if;
--  
--end  process pwm_1;

end  Behavioral ;