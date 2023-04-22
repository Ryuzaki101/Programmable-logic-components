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
static const char *ng0 = "C:/Users/m/Desktop/OH/PLB/LABOR/empfaenger/SPI_RX.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3454299738_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4063218242_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4768);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 4880);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 4944);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_4063218242_3212880686_p_1(char *t0)
{
    char t21[16];
    char t23[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1032U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB6;

LAB8:    t4 = (t0 + 2632U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2152U);
    t14 = *((char **)t4);
    t15 = (7 - 6);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t4 = (t14 + t17);
    t18 = (t0 + 1192U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t22 = ((IEEE_P_2592010699) + 4024);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 6;
    t25 = (t24 + 4U);
    *((int *)t25) = 0;
    t25 = (t24 + 8U);
    *((int *)t25) = -1;
    t26 = (0 - 6);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t18 = xsi_base_array_concat(t18, t21, t22, (char)97, t4, t23, (char)99, t20, (char)101);
    t27 = (7U + 1U);
    t28 = (8U != t27);
    if (t28 == 1)
        goto LAB14;

LAB15:    t25 = (t0 + 5008);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t18, 8U);
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 7736U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t21, t4, t1, 1);
    t8 = (t21 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t2 = (8U != t16);
    if (t2 == 1)
        goto LAB16;

LAB17:    t11 = (t0 + 5072);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    memcpy(t22, t5, 8U);
    xsi_driver_first_trans_fast(t11);
    goto LAB12;

LAB14:    xsi_size_not_matching(8U, t27, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(8U, t16, 0);
    goto LAB17;

}

static void work_a_4063218242_3212880686_p_2(char *t0)
{
    char t3[16];
    char *t1;
    unsigned char t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    int t19;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 7736U);
    t6 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t3, t5, t4, 1);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (8U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 5136);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t16 = (t10 == (unsigned char)3);
    if (t16 == 1)
        goto LAB10;

LAB11:    t2 = (unsigned char)0;

LAB12:    if (t2 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 7736U);
    t5 = (t0 + 7814);
    t7 = (t3 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 7;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t19 = (7 - 0);
    t8 = (t19 * 1);
    t8 = (t8 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t8;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t4, t1, t5, t3);
    if (t2 != 0)
        goto LAB19;

LAB20:
LAB8:    goto LAB3;

LAB5:    xsi_size_not_matching(8U, t9, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2152U);
    t6 = *((char **)t1);
    t1 = (t0 + 5200);
    t7 = (t1 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 7736U);
    t5 = (t0 + 7790);
    t7 = (t3 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 7;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t19 = (7 - 0);
    t8 = (t19 * 1);
    t8 = (t8 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t8;
    t2 = ieee_p_1242562249_sub_3454299738_1035706684(IEEE_P_1242562249, t4, t1, t5, t3);
    if (t2 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t17 = *((unsigned char *)t5);
    t18 = (t17 <= (unsigned char)2);
    t2 = t18;
    goto LAB12;

LAB13:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 5264);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 7798);
    t5 = (t0 + 5136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 7736U);
    t5 = (t0 + 7806);
    t7 = (t3 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 7;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t19 = (7 - 0);
    t8 = (t19 * 1);
    t8 = (t8 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t8;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t4, t1, t5, t3);
    if (t2 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(78, ng0);
    t11 = (t0 + 5264);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);
    goto LAB17;

LAB19:    xsi_set_current_line(82, ng0);
    t11 = (t0 + 5328);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 7822);
    t5 = (t0 + 5136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 7736U);
    t5 = (t0 + 7830);
    t7 = (t3 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 7;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t19 = (7 - 0);
    t8 = (t19 * 1);
    t8 = (t8 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t8;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t4, t1, t5, t3);
    if (t2 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB8;

LAB21:    xsi_set_current_line(85, ng0);
    t11 = (t0 + 5328);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);
    goto LAB22;

}


extern void work_a_4063218242_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4063218242_3212880686_p_0,(void *)work_a_4063218242_3212880686_p_1,(void *)work_a_4063218242_3212880686_p_2};
	xsi_register_didat("work_a_4063218242_3212880686", "isim/SPI_RX_TSB_isim_beh.exe.sim/work/a_4063218242_3212880686.didat");
	xsi_register_executes(pe);
}
