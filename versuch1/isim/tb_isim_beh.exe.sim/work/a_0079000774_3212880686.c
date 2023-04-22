/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/m/Desktop/OH/SIXTH/PLB/LABOR/versuch1/Aufgabe1.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_2115884226_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_313326228_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_853553178_503743352(char *, unsigned char , unsigned char );


static void work_a_0079000774_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5418);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB13:    t6 = (t0 + 5421);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB14:    t9 = (t0 + 5424);
    t11 = xsi_mem_cmp(t9, t3, 3U);
    if (t11 == 1)
        goto LAB7;

LAB15:    t12 = (t0 + 5427);
    t14 = xsi_mem_cmp(t12, t3, 3U);
    if (t14 == 1)
        goto LAB8;

LAB16:    t15 = (t0 + 5430);
    t17 = xsi_mem_cmp(t15, t3, 3U);
    if (t17 == 1)
        goto LAB9;

LAB17:    t18 = (t0 + 5433);
    t20 = xsi_mem_cmp(t18, t3, 3U);
    if (t20 == 1)
        goto LAB10;

LAB18:    t21 = (t0 + 5436);
    t23 = xsi_mem_cmp(t21, t3, 3U);
    if (t23 == 1)
        goto LAB11;

LAB19:
LAB12:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(45, ng0);

LAB23:    t2 = (t0 + 3400);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;

LAB1:    return;
LAB5:    xsi_set_current_line(47, ng0);
    t24 = (t0 + 1032U);
    t25 = *((char **)t24);
    t26 = *((unsigned char *)t25);
    t24 = (t0 + 1192U);
    t27 = *((char **)t24);
    t28 = *((unsigned char *)t27);
    t29 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t26, t28);
    t24 = (t0 + 3496);
    t30 = (t24 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = t29;
    xsi_driver_first_trans_fast(t24);
    goto LAB4;

LAB6:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t26 = *((unsigned char *)t3);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t28 = *((unsigned char *)t4);
    t29 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t26, t28);
    t2 = (t0 + 3496);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t29;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t26 = *((unsigned char *)t3);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t28 = *((unsigned char *)t4);
    t29 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t26, t28);
    t2 = (t0 + 3496);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t29;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t26 = *((unsigned char *)t3);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t28 = *((unsigned char *)t4);
    t29 = ieee_p_2592010699_sub_313326228_503743352(IEEE_P_2592010699, t26, t28);
    t2 = (t0 + 3496);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t29;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB9:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t26 = *((unsigned char *)t3);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t28 = *((unsigned char *)t4);
    t29 = ieee_p_2592010699_sub_2115884226_503743352(IEEE_P_2592010699, t26, t28);
    t2 = (t0 + 3496);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t29;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB10:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t26 = *((unsigned char *)t3);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t28 = *((unsigned char *)t4);
    t29 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t26, t28);
    t2 = (t0 + 3496);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t29;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB20:;
LAB21:    t3 = (t0 + 3400);
    *((int *)t3) = 0;
    goto LAB2;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

}

static void work_a_0079000774_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3560);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3416);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0079000774_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0079000774_3212880686_p_0,(void *)work_a_0079000774_3212880686_p_1};
	xsi_register_didat("work_a_0079000774_3212880686", "isim/tb_isim_beh.exe.sim/work/a_0079000774_3212880686.didat");
	xsi_register_executes(pe);
}
