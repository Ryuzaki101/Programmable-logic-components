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
static const char *ng0 = "C:/Users/m/Desktop/OH/PLB/LABOR/WATCHDOG/WATCHDOG.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3454299738_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1527649056_3212880686_p_0(char *t0)
{
    char t14[16];
    char t19[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 3552);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB14;

LAB15:    t5 = (unsigned char)0;

LAB16:    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = (unsigned char)0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 5588U);
    t4 = (t0 + 5640);
    t7 = (t14 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t17;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t14);
    if (t2 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 3680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB20:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t1 = (t0 + 3616);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 3680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(56, ng0);
    t15 = (t0 + 1832U);
    t20 = *((char **)t15);
    t15 = (t0 + 5588U);
    t21 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t19, t20, t15, 1);
    t22 = (t19 + 12U);
    t17 = *((unsigned int *)t22);
    t23 = (1U * t17);
    t24 = (8U != t23);
    if (t24 == 1)
        goto LAB17;

LAB18:    t25 = (t0 + 3616);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t21, 8U);
    xsi_driver_first_trans_fast(t25);
    goto LAB9;

LAB11:    t1 = (t0 + 1832U);
    t6 = *((char **)t1);
    t1 = (t0 + 5588U);
    t7 = (t0 + 5632);
    t9 = (t14 + 0U);
    t15 = (t9 + 0U);
    *((int *)t15) = 0;
    t15 = (t9 + 4U);
    *((int *)t15) = 7;
    t15 = (t9 + 8U);
    *((int *)t15) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t9 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_p_1242562249_sub_3454299738_1035706684(IEEE_P_1242562249, t6, t1, t7, t14);
    t2 = t18;
    goto LAB13;

LAB14:    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)2);
    t5 = t13;
    goto LAB16;

LAB17:    xsi_size_not_matching(8U, t23, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(59, ng0);
    t8 = (t0 + 3680);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t20 = (t15 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB20;

}


extern void work_a_1527649056_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1527649056_3212880686_p_0};
	xsi_register_didat("work_a_1527649056_3212880686", "isim/WATCHDOG_TB_isim_beh.exe.sim/work/a_1527649056_3212880686.didat");
	xsi_register_executes(pe);
}
