----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:06:47 10/24/2015 
-- Design Name: 
-- Module Name:    LATCH_MUX - Behavioral 
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
 
entity LATCH_MUX is
    Port ( I : in  STD_LOGIC;
           CLK : in  STD_LOGIC; 
           S : in  STD_LOGIC_VECTOR (1 downto 0);
           Y : out  STD_LOGIC
				);
end LATCH_MUX;

architecture Behavioral of LATCH_MUX is
signal input1 : std_logic_vector (1 downto 0) ;
signal state1 : std_logic ;
signal state2 : std_logic ;
begin
input1 <= (CLK & I);


with input1 select 
state1 <= '1' when "01" ,
         '0' when "00" ,
			state1 when others ;
-- kann durch state1 <= I when CLK = '0' auch re;

	 p:process (S,I,CLK,state1) is 
begin 

if (CLK = '0') then 
	state2 <= state2 ;  
	elsif (CLK = '1') then  

	 case S is
		when "00" => state2 <= NOT I ; 
		when "01" => state2 <= I ;
		when "10" => state2 <= state1 ;
		when others => state2 <= '0' ;
	 end case ;

 end if ;
   
	end process p;

Y <= state2 ; 			
	
end Behavioral;

