--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: RS_LATCH_synthesis.vhd
-- /___/   /\     Timestamp: Wed Oct 24 20:24:21 2018
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm RS_LATCH -w -dir netgen/synthesis -ofmt vhdl -sim RS_LATCH.ngc RS_LATCH_synthesis.vhd 
-- Device	: xa7a100t-2I-csg324
-- Input file	: RS_LATCH.ngc
-- Output file	: C:\Users\m\Desktop\OH\SIXTH\PLB\LABOR\LABOR1.B\netgen\synthesis\RS_LATCH_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: RS_LATCH
-- Xilinx	: C:\Xilinx\14.7\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity RS_LATCH is
  port (
    R : in STD_LOGIC := 'X'; 
    S : in STD_LOGIC := 'X'; 
    CLK : in STD_LOGIC := 'X'; 
    Q : out STD_LOGIC; 
    Qbar : out STD_LOGIC 
  );
end RS_LATCH;

architecture Structure of RS_LATCH is
  signal R_IBUF_0 : STD_LOGIC; 
  signal S_IBUF_1 : STD_LOGIC; 
  signal CLK_IBUF_2 : STD_LOGIC; 
  signal Q_n0042 : STD_LOGIC; 
  signal Q_OBUF_5 : STD_LOGIC; 
  signal Qbar_OBUF_6 : STD_LOGIC; 
  signal Q_1_12 : STD_LOGIC; 
  signal Q_n0016 : STD_LOGIC_VECTOR ( 1 downto 1 ); 
begin
  Q_1 : LD
    port map (
      D => Q_n0042,
      G => Q_n0016(1),
      Q => Q_OBUF_5
    );
  Q_n00421 : LUT3
    generic map(
      INIT => X"08"
    )
    port map (
      I0 => CLK_IBUF_2,
      I1 => S_IBUF_1,
      I2 => R_IBUF_0,
      O => Q_n0042
    );
  Q_n0016_1_1 : LUT3
    generic map(
      INIT => X"A8"
    )
    port map (
      I0 => CLK_IBUF_2,
      I1 => R_IBUF_0,
      I2 => S_IBUF_1,
      O => Q_n0016(1)
    );
  R_IBUF : IBUF
    port map (
      I => R,
      O => R_IBUF_0
    );
  S_IBUF : IBUF
    port map (
      I => S,
      O => S_IBUF_1
    );
  CLK_IBUF : IBUF
    port map (
      I => CLK,
      O => CLK_IBUF_2
    );
  Q_OBUF : OBUF
    port map (
      I => Q_1_12,
      O => Q
    );
  Qbar_OBUF : OBUF
    port map (
      I => Qbar_OBUF_6,
      O => Qbar
    );
  Qbar1_INV_0 : INV
    port map (
      I => Q_OBUF_5,
      O => Qbar_OBUF_6
    );
  Q_1_10 : LD
    port map (
      D => Q_n0042,
      G => Q_n0016(1),
      Q => Q_1_12
    );

end Structure;

