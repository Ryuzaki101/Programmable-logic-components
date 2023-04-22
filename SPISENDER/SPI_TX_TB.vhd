----------------------------------------------------------------------------------
-- Hochschule Mannheim - Informationstechnik
-- Prof. Dr. Kurt Ackermann
-- PLB
-- Labor 4b, Aufgabe 1 (SPI_TX Master)
--
-- Simulationszeit: ~1,5 ms
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity SPI_TX_TB is
end SPI_TX_TB;

architecture Behavioral of SPI_TX_TB is

    component SPI_TX
        port ( CLK 		  : in  STD_LOGIC;
               RST		  : in  STD_LOGIC;
               i_DATA 	  : in  STD_LOGIC_VECTOR (7 downto 0);
               i_STRB 	  : in  STD_LOGIC;
               i_ADDR 	  : in  STD_LOGIC_VECTOR (1 downto 0);
               o_SPI_CS   : out STD_LOGIC_VECTOR (3 downto 0);
               o_SPI_DOUT : out STD_LOGIC;
               o_SPI_CLK  : out STD_LOGIC;
               o_BUSY     : out STD_LOGIC );
    end component;
    
    signal CLK, RST	  : STD_LOGIC := '1';
    signal i_DATA 	  : STD_LOGIC_VECTOR (7 downto 0) := x"A3";
    signal i_STRB 	  : STD_LOGIC := '0';
    signal i_ADDR 	  : STD_LOGIC_VECTOR (1 downto 0) := "00";
    signal o_SPI_CS   : STD_LOGIC_VECTOR (3 downto 0);
    signal o_SPI_DOUT, o_SPI_CLK, o_BUSY : STD_LOGIC;

begin

    UUT : SPI_TX
        port map( CLK, RST, i_DATA, i_STRB, i_ADDR, o_SPI_CS, o_SPI_DOUT, o_SPI_CLK, o_BUSY );

    clk_gen : process
    begin
        clk <= not clk;
        wait for 500 ns;
    end process clk_gen;
    
    ctrl : process
    begin
        wait for 20 us;
        rst <= '0';
        wait for 20 us;
        wait until rising_edge(clk);
        i_strb <= '1';
        wait until rising_edge(clk);
        i_strb <= '0';
        
        wait until falling_edge(o_busy);
        wait for 200 us;
        i_DATA <= x"9C";
        i_ADDR <= "01"; 
        wait until rising_edge(clk);
        i_strb <= '1';
        wait until rising_edge(clk);
        i_strb <= '0';
        wait for 200 us;
        i_DATA <= x"FF";
        i_ADDR <= "10";
        wait until rising_edge(clk);
        i_strb <= '1';
        wait until rising_edge(clk);
        i_strb <= '0';
        
        wait;
    end process ctrl;

end Behavioral;
