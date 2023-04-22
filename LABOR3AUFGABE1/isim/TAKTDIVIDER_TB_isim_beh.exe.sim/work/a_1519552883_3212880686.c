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
static const char *ng0 = "C:/Users/m/Desktop/OH/PLB/LABOR/LABOR3AUFGABE1/TAKTDIVIDER.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1519552883_3212880686_p_0(char *t0)
{
    char t11[16];
    char t12[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 3552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t8 = (9 - 8);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t3 + t10);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t12 + 0U);
    t13 = (t7 + 0U);
    *((int *)t13) = 8;
    t13 = (t7 + 4U);
    *((int *)t13) = 0;
    t13 = (t7 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 8);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t7 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t0 + 5604U);
    t4 = xsi_base_array_concat(t4, t11, t6, (char)97, t1, t12, (char)97, t5, t13, (char)101);
    t15 = (9U + 1U);
    t2 = (10U != t15);
    if (t2 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 3616);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 10U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t14 = (4 - 9);
    t8 = (t14 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t3 + t10);
    t2 = *((unsigned char *)t1);
    t21 = (t2 == (unsigned char)3);
    if (t21 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB5:    xsi_size_not_matching(10U, t15, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 3552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB8;

}


extern void work_a_1519552883_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1519552883_3212880686_p_0};
	xsi_register_didat("work_a_1519552883_3212880686", "isim/TAKTDIVIDER_TB_isim_beh.exe.sim/work/a_1519552883_3212880686.didat");
	xsi_register_executes(pe);
}
