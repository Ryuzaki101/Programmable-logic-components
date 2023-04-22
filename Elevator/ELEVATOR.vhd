----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:08:47 12/05/2015 
-- Design Name: 
-- Module Name:    ELEVATOR - Behavioral 
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

entity ELEVATOR is
    Port ( i_SPI_CS : in  STD_LOGIC;
           i_SPI_CLK : in  STD_LOGIC;
           i_SPI_DIN : in  STD_LOGIC;
           i_REQ_EXT : in  STD_LOGIC_VECTOR (3 downto 0);
           i_REQ_INT : in  STD_LOGIC_VECTOR (3 downto 0);
           i_POS : in  STD_LOGIC_VECTOR (3 downto 0);
           i_DOOR_STAT : in  STD_LOGIC_VECTOR (1 downto 0);
           i_RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           o_MOTOR_DIR : out  STD_LOGIC;
           o_MOTOR_EN : out  STD_LOGIC;
           o_DOOR_DIR : out  STD_LOGIC;
           o_DOOR_EN : out  STD_LOGIC);
end ELEVATOR;

architecture Behavioral of ELEVATOR is

component SPI_RX 
  Port ( SPI_CS : in  STD_LOGIC;
           SPI_DIN : in  STD_LOGIC;
           SPI_CLK : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           o_DATA : out  STD_LOGIC_VECTOR (7 downto 0);
           o_STRB : out  STD_LOGIC;
           o_ERR : out  STD_LOGIC);
end component;

component WATCHDOG 
    Port ( VALUE : in  STD_LOGIC_VECTOR (7 downto 0);
           LOAD : in  STD_LOGIC;
           CNT_CLK : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           o_RESET : out  STD_LOGIC);
end component;

SIGNAL U_LOAD,U_CNT_CLK,U_uLOAD,U_o_RESET,U_o_DOOR_DIR,U_o_MOTOR_EN, U_o_MOTOR_EN_FF: STD_LOGIC := '0';
SIGNAL U_VALUE: STD_LOGIC_VECTOR (7 downto 0);
SIGNAL REQ,REQ_POS: STD_LOGIC_VECTOR (3 downto 0):= "0000";
SIGNAL TEMP,REQ_NEU,POS_NEU : STD_LOGIC_VECTOR (3 downto 0):="0000";
SIGNAL SR : STD_LOGIC_VECTOR(15 downto 0) := x"FE01";
SIGNAL CNT ,CNT1: UNSIGNED (0 DOWNTO 0) := "0" ;

TYPE FLOOR_NUM is (KG, EG, O1, O2); 
SIGNAL FLOOR, NEXT_FL: FLOOR_NUM ;
TYPE STATE_NUM is (MOVING,OPENED, STOPED, MOVEDOOR); 
SIGNAL STATE, NEXT_ST: STATE_NUM ;

begin

	U_SPI_RX : SPI_RX
	port map(	CLK     => CLK,
					SPI_CS  => i_SPI_CS,
					SPI_CLK => i_SPI_CLK,
					SPI_DIN => i_SPI_DIN,
					o_DATA  => U_VALUE,
					o_STRB  => U_LOAD,
					o_ERR   => OPEN );
   
	U_WATCHDOG : WATCHDOG
	PORT MAP (	VALUE => U_VALUE,
					LOAD => U_uLOAD,
					CNT_CLK => U_CNT_CLK,
					CLK => CLK,
					o_RESET => U_o_RESET);

TEMP <= REQ and i_POS;
REQ <=  i_REQ_EXT or i_REQ_INT ; 

TIMER : PROCESS (CLK)
 begin  
  if rising_edge(CLK) then  
  CNT <= CNT + 1;
	if(CNT = "1") then
	SR <= SR(SR'left-1 downto 0) & SR(SR'LEFT);
	U_CNT_CLK <= SR(0);
	CNT <= "0";	
	end if;
  end if;
end process TIMER;

SP : process(CLK,i_POS,i_RST)
 begin
	if rising_edge(CLK) then  
	U_o_MOTOR_EN_FF <= 	U_o_MOTOR_EN;
	STATE <= NEXT_ST;
	elsif(i_RST = '1') then 
	FLOOR <= EG;
	STATE <=STOPED;
	end if; 
  case i_POS is
		when "0001" => FLOOR <= KG;
		when "0010" => FLOOR <= EG ; 
		when "0100" => FLOOR <= O1 ; 
		when "1000" => FLOOR <= O2 ; 
		when others => NULL;
	end case;
end process SP;

UE_ELEVATOR : process(U_o_RESET ,U_o_MOTOR_EN,U_o_MOTOR_EN_FF,STATE,TEMP,REQ,i_DOOR_STAT,U_o_DOOR_DIR,TEMP )
begin
	if (TEMP /= "0000") then              -- neu request steht 
	REQ_NEU <= '0' & REQ(3 downto 1);     -- neu position     
	POS_NEU <= '0' & i_POS(3 downto 1);                n
	end if;
	if(U_o_MOTOR_EN = '1' and 	U_o_MOTOR_EN_FF = '0') then -- steigende flanke von MOTOR 
	REQ_NEU <= REQ ;                                 		 -- neu position bzw req holen
	POS_NEU <= i_POS;
	end if; 
	
	
	  

	case STATE is
		when STOPED => if (TEMP /= "0000") then  NEXT_ST <= MOVEDOOR;
							elsif (TEMP = "0000" and REQ /= "0000") then NEXT_ST <= MOVING ;
							else NEXT_ST <= STOPED;
							end if;
		           
		when MOVING => if (TEMP /= "0000") then 
							NEXT_ST <= STOPED;
							else
							NEXT_ST <= MOVING;
							end if;
		when OPENED => if(U_o_RESET = '1') then
							NEXT_ST <= MOVEDOOR;
							else
							NEXT_ST <= OPENED;
							end if;
		when MOVEDOOR	=> 	if(i_DOOR_STAT = "10" and U_o_DOOR_DIR = '1') then --TÜR IST ZU
		               NEXT_ST <= STOPED;
							elsif(i_DOOR_STAT = "01" and U_o_DOOR_DIR = '0') then --TÜR IST AUF
							NEXT_ST <= OPENED;
							else
							NEXT_ST <= MOVEDOOR;
							end if;
		when others => NULL;
     end case;
	
		
	
end process UE_ELEVATOR;  

out_ELEVATOR : process(U_o_RESET,STATE,i_POS,REQ_NEU,i_DOOR_STAT,NEXT_ST,U_o_MOTOR_EN_FF,U_o_MOTOR_EN,POS_NEU)
begin
	 

	if(STATE = MOVING) then	
		U_o_MOTOR_EN <= '1';
		if(REQ_NEU < POS_NEU ) then			
		o_MOTOR_DIR <= '0';					-- ELEVATOR DOWN
		else
		o_MOTOR_DIR <= '1';					-- ELEVATOR up
		end if;								
	end if;			
					
	if(STATE = STOPED) then
	U_o_MOTOR_EN <= '0';				-- ELEVATOR DOWN
	o_DOOR_EN <= '0';             
	U_o_DOOR_DIR <= '0';          -- TÜR AUFMACHEN
	end if;

			 	 				
	if(STATE = OPENED) then
	U_o_DOOR_DIR <= '1';    --TÜR ZU
	o_DOOR_EN <= '0';      	-- TÜR DISEABLED
	U_uload <= '0';			--WD STARTEN
	end if;			  
	
	if(STATE = MOVEDOOR) then
	o_DOOR_EN <= '1';       -- DOOR ENABLE
	U_uload <= '1' ;       	-- WD LOAD
	end if;			  

	
	
end process out_ELEVATOR; 
o_DOOR_DIR <= U_o_DOOR_DIR;
o_MOTOR_EN <= U_o_MOTOR_EN ;
 

end Behavioral;

