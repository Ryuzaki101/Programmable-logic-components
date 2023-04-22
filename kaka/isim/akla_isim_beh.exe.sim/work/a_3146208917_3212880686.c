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
static const char *ng0 = "C:/Users/m/Desktop/OH/PLB/LABOR/kaka/akla.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3454299738_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3146208917_3212880686_p_0(char *t0)
{
    char t13[16];
    char t18[16];
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
    char *t14;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 3712);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3776);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t10 = (t5 == (unsigned char)3);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = (unsigned char)0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 5804U);
    t4 = (t0 + 5857);
    t7 = (t13 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t16;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3904);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB20:    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = (t0 + 3840);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3904);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1832U);
    t6 = *((char **)t1);
    t1 = (t0 + 5804U);
    t7 = (t0 + 5849);
    t9 = (t13 + 0U);
    t14 = (t9 + 0U);
    *((int *)t14) = 0;
    t14 = (t9 + 4U);
    *((int *)t14) = 7;
    t14 = (t9 + 8U);
    *((int *)t14) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t9 + 12U);
    *((unsigned int *)t14) = t16;
    t17 = ieee_p_1242562249_sub_3454299738_1035706684(IEEE_P_1242562249, t6, t1, t7, t13);
    if (t17 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB9;

LAB11:    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t2 = t12;
    goto LAB13;

LAB14:    xsi_set_current_line(66, ng0);
    t14 = (t0 + 1832U);
    t19 = *((char **)t14);
    t14 = (t0 + 5804U);
    t20 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t18, t19, t14, 1);
    t21 = (t18 + 12U);
    t16 = *((unsigned int *)t21);
    t22 = (1U * t16);
    t23 = (8U != t22);
    if (t23 == 1)
        goto LAB17;

LAB18:    t24 = (t0 + 3840);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t20, 8U);
    xsi_driver_first_trans_fast(t24);
    goto LAB15;

LAB17:    xsi_size_not_matching(8U, t22, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(73, ng0);
    t8 = (t0 + 3904);
    t9 = (t8 + 56U);
    t14 = *((char **)t9);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB20;

}


extern void work_a_3146208917_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3146208917_3212880686_p_0};
	xsi_register_didat("work_a_3146208917_3212880686", "isim/akla_isim_beh.exe.sim/work/a_3146208917_3212880686.didat");
	xsi_register_executes(pe);
}
