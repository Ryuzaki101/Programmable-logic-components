----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:37:48 12/10/2015 
-- Design Name: 
-- Module Name:    LineBuf - Behavioral 
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

entity LineBuf is
    Port ( CLK_A : in  STD_LOGIC;
           CLK_B : in  STD_LOGIC;
           i_LVAL : in  STD_LOGIC;
           i_DATA : in  STD_LOGIC_VECTOR (7 downto 0);
           i_GAIN : in  STD_LOGIC_VECTOR (7 downto 0);
           i_RST : in  STD_LOGIC;
           o_LVAL : out  STD_LOGIC;
           o_DATA : out  STD_LOGIC_VECTOR (15 downto 0));
end LineBuf;

architecture Behavioral of LineBuf is
SIGNAL TEMP : STD_lOGIC_VECTOR (15 DOWNTO 0):= x"0000";
SIGNAL FF_CLK_READ,CLK_READ,u_almost_empty,u_full,u_wr_en,u_rd_en,temp_u_wr_en,temp_u_rd_en: STD_LOGIC ;
SIGNAL PIXEL : STD_LOGIC_VECTOR(7 DOWNTO 0):= x"00";
SIGNAL u_o_DATA : STD_LOGIC_VECTOR(15 DOWNTO 0):= x"0000";
SIGNAL NUL : STD_LOGIC_VECTOR(3 DOWNTO 0):= "0000";

signal cnt : UNSIGNED (8 DOWNTO 0) := "000000000";
COMPONENT Multiply
  PORT (
    clk : IN STD_LOGIC;
    a : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    p : OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
  );
END COMPONENT;

COMPONENT FIFO
  PORT (
    rst : IN STD_LOGIC;
    wr_clk : IN STD_LOGIC;
    rd_clk : IN STD_LOGIC;
    din : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    wr_en : IN STD_LOGIC;
    rd_en : IN STD_LOGIC;
    dout : OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
    full : OUT STD_LOGIC;
    empty : OUT STD_LOGIC;
    almost_empty : OUT STD_LOGIC;
	     wr_data_count : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    prog_full : OUT STD_LOGIC
  );
END COMPONENT;




begin

U_Multiply : Multiply
  PORT MAP (
    clk => CLK_A,
    a => i_DATA,
    b => i_GAIN,
    p => TEMP
  );
  
  
U_FIFO : FIFO
  
  PORT MAP (
    rst => i_rst,
    wr_clk => CLK_A,
    rd_clk => CLK_B,
    din => PIXEL,
    wr_en => temp_u_wr_en,
    rd_en => temp_u_rd_en,
    dout => o_DATA,
    full => open,
    empty => open,
    almost_empty => u_almost_empty,
    prog_full => u_full	,
	 wr_data_count =>OPEN

  );
  
PIXEL <= TEMP(11 DOWNTO 4) when TEMP(15 DOWNTO 12)="0000" 
	else "11111111"; 


process (CLK_B)
begin
 if rising_edge(CLK_B) then

	 
	if(i_LVAL = '1') then 
	u_wr_en <= '1';
	else
	u_wr_en <= '0';
	end if;
	
  end if;
end process;

process (CLK_A)
begin
 if rising_edge(CLK_A) then  
	temp_u_wr_en <=  u_wr_en;
		temp_u_rd_en <= u_rd_en;

	if(temp_u_rd_en = '1' ) then 
	o_LVAL <= '1'; 
	else
	o_LVAL <= '0';
	end if;
  
	if(u_full = '1' ) then 
		u_rd_en <= '1';
   elsif(u_almost_empty = '1' ) then 
		u_rd_en <= '0';
	end if;
  
 end if;
end process;

   

 
end Behavioral;

