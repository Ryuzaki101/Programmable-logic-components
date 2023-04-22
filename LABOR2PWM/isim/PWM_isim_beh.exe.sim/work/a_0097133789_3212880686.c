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
static const char *ng0 = "C:/Users/m/Desktop/OH/SIXTH/PLB/LABOR/LABOR2PWM/PWM.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0097133789_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t3 = (t0 + 5712U);
    t5 = (t0 + 5755);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t4, t3, t5, t7);
    if (t12 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t12 = (t2 == (unsigned char)3);
    if (t12 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t12 = (t2 == (unsigned char)2);
    if (t12 != 0)
        goto LAB32;

LAB33:
LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t9 = (t0 + 3656);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB6;

LAB8:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 5712U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t7, t4, t1, 1);
    t6 = (t7 + 12U);
    t11 = *((unsigned int *)t6);
    t17 = (1U * t11);
    t18 = (8U != t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    t8 = (t0 + 3720);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5712U);
    t4 = (t0 + 5763);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 7;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t7);
    if (t2 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5712U);
    t4 = (t0 + 5779);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 7;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t12 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t7);
    if (t12 == 1)
        goto LAB18;

LAB19:    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t8 = (t0 + 5712U);
    t13 = (t0 + 1352U);
    t14 = *((char **)t13);
    t13 = (t0 + 5696U);
    t18 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t9, t8, t14, t13);
    t2 = t18;

LAB20:    if (t2 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5712U);
    t4 = (t0 + 5787);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 7;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t12 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t7);
    if (t12 == 1)
        goto LAB23;

LAB24:    t2 = (unsigned char)0;

LAB25:    if (t2 != 0)
        goto LAB21;

LAB22:
LAB14:    goto LAB9;

LAB11:    xsi_size_not_matching(8U, t17, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(54, ng0);
    t8 = (t0 + 3656);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 5771);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB16:    xsi_set_current_line(57, ng0);
    t15 = (t0 + 3656);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);
    goto LAB14;

LAB18:    t2 = (unsigned char)1;
    goto LAB20;

LAB21:    xsi_set_current_line(59, ng0);
    t16 = (t0 + 3656);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t16);
    goto LAB14;

LAB23:    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t8 = (t0 + 5795);
    t18 = 1;
    if (8U == 8U)
        goto LAB26;

LAB27:    t18 = 0;

LAB28:    t2 = t18;
    goto LAB25;

LAB26:    t11 = 0;

LAB29:    if (t11 < 8U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t14 = (t9 + t11);
    t15 = (t8 + t11);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB27;

LAB31:    t11 = (t11 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3656);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

}

static void work_a_0097133789_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3784);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3576);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0097133789_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0097133789_3212880686_p_0,(void *)work_a_0097133789_3212880686_p_1};
	xsi_register_didat("work_a_0097133789_3212880686", "isim/PWM_isim_beh.exe.sim/work/a_0097133789_3212880686.didat");
	xsi_register_executes(pe);
}
