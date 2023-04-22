----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:48:07 10/23/2015 
-- Design Name: 
-- Module Name:    RS_LATCH - Behavioral 
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

entity RS_LATCH is
    Port ( R : in  STD_LOGIC;
           S : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           Q : out  STD_LOGIC;
           Qbar : out  STD_LOGIC); 
end RS_LATCH;
 
architecture Behavioral of RS_LATCH is
signal state : std_logic ;
signal input : std_logic_vector (2 downto 0 ) ;
begin

input <= CLK&S&R;

with input select  
  state <= '1' when "110" ,
			  '0' when "101"  ,
			  '0' when "111" ,
          state when others  ; 
Q <= state ; 
Qbar <= not state ;   

end  Behavioral ;

