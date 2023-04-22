----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:01:00 11/13/2018 
-- Design Name: 
-- Module Name:    aufgabe1 - Behavioral 
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

entity aufgabe1 is
    Port ( CLK : in  STD_LOGIC;
           EN : in  STD_LOGIC;
           DUTCYC : in  STD_LOGIC_VECTOR (7 downto 0);
           PWM_OUT : out  STD_LOGIC);
end aufgabe1;

architecture Behavioral of aufgabe1 is

begin


end Behavioral;

