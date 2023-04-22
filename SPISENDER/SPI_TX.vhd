----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:47:44 11/25/2015 
-- Design Name: 
-- Module Name:    ONE - Behavioral 
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

entity ONE is
    Port ( i_DATA : in  STD_LOGIC_VECTOR (8 downto 0);
           i_STRB : in  STD_LOGIC;
           i_ADDR : in  STD_LOGIC_VECTOR (2 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           o_SPI_CS : out  STD_LOGIC_VECTOR (4 downto 0);
           o_SPI_DOUT : out  STD_LOGIC;
           o_SPI_CLK : out  STD_LOGIC;
           o_BUSY : out  STD_LOGIC);
end ONE;

architecture Behavioral of ONE is

begin


end Behavioral;

