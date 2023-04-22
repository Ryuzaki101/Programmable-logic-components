library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity TEST is
port(	R,S : in std_logic ;
CLK : in std_logic ; 
Q,Qbar : out std_logic  
);
end TEST;   

-------------------------------------------------
 


 architecture behavioral of TEST is

signal input : std_logic_vector ( 2 downto 0 ) ;
signal state : std_logic  ; 
begin

input <= (CLK&S&R) ;
 

 with input select 
  state <= '1' when "100" ,
			  '0' when "101"  ,
			  '1' when "111" ,
         state when others ;
 			
Q <= state ; 
Qbar <= not state ;   
  
 
  end behavioral;