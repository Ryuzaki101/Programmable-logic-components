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
static const char *ng0 = "C:/Users/m/Desktop/OH/PLB/LABOR/probe/pwmpro.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_1186738879_3665547200_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    t6 = (4U / 4U);
    xsi_mem_set_int(t5, 0, t6);
    t7 = (t0 + 4472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(32, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t5 = (t0 + 4536);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(33, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t5 = (t0 + 4600);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t14 = *((unsigned char *)t7);
    t15 = (t14 == (unsigned char)3);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(38, ng0);
    t16 = (1 - 1);
    t1 = (t0 + 7992);
    *((int *)t1) = 0;
    t2 = (t0 + 7996);
    *((int *)t2) = t16;
    t17 = 0;
    t18 = t16;

LAB13:    if (t17 <= t18)
        goto LAB14;

LAB16:    xsi_set_current_line(46, ng0);
    t16 = (1 - 1);
    t1 = (t0 + 8000);
    *((int *)t1) = 0;
    t2 = (t0 + 8004);
    *((int *)t2) = t16;
    t17 = 0;
    t18 = t16;

LAB21:    if (t17 <= t18)
        goto LAB22;

LAB24:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1512U);
    t8 = *((char **)t2);
    t2 = (t0 + 7812U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t8, t2);
    t9 = (t0 + 3088U);
    t10 = *((char **)t9);
    t17 = *((int *)t10);
    t18 = (t16 * t17);
    t19 = xsi_vhdl_pow(2, 8);
    t20 = (t18 / t19);
    t21 = (t20 / 2);
    t9 = (t0 + 4664);
    t11 = (t9 + 56U);
    t22 = *((char **)t11);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = t21;
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB14:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1992U);
    t7 = *((char **)t5);
    t19 = (0 - 0);
    t6 = (t19 * 1);
    t25 = (4U * t6);
    t26 = (0 + t25);
    t5 = (t7 + t26);
    t20 = *((int *)t5);
    t8 = (t0 + 3088U);
    t9 = *((char **)t8);
    t21 = *((int *)t9);
    t27 = (t21 - 1);
    t8 = (t0 + 7992);
    t10 = (t0 + 3088U);
    t11 = *((char **)t10);
    t28 = *((int *)t11);
    t29 = *((int *)t8);
    t30 = (t29 * t28);
    t31 = (t30 / 1);
    t32 = (t27 - t31);
    t3 = (t20 == t32);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7992);
    t16 = *((int *)t1);
    t19 = (t16 - 0);
    t6 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t1));
    t25 = (4U * t6);
    t26 = (0 + t25);
    t5 = (t2 + t26);
    t20 = *((int *)t5);
    t21 = (t20 + 1);
    t7 = (t0 + 7992);
    t27 = *((int *)t7);
    t28 = (t27 - 0);
    t35 = (t28 * 1);
    t36 = (1 * t35);
    t37 = (0U + t36);
    t8 = (t0 + 4472);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t22 = *((char **)t11);
    *((int *)t22) = t21;
    xsi_driver_first_trans_delta(t8, t37, 1, 0LL);

LAB18:
LAB15:    t1 = (t0 + 7992);
    t17 = *((int *)t1);
    t2 = (t0 + 7996);
    t18 = *((int *)t2);
    if (t17 == t18)
        goto LAB16;

LAB20:    t16 = (t17 + 1);
    t17 = t16;
    t5 = (t0 + 7992);
    *((int *)t5) = t17;
    goto LAB13;

LAB17:    xsi_set_current_line(40, ng0);
    t10 = (t0 + 7992);
    t33 = *((int *)t10);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    t36 = (1 * t35);
    t37 = (0U + t36);
    t22 = (t0 + 4472);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t38 = (t24 + 56U);
    t39 = *((char **)t38);
    *((int *)t39) = 0;
    xsi_driver_first_trans_delta(t22, t37, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t1 = (t0 + 7992);
    t19 = *((int *)t1);
    t20 = (t19 - 0);
    t6 = (t20 * 1);
    t25 = (1 * t6);
    t26 = (0U + t25);
    t5 = (t0 + 4728);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t16;
    xsi_driver_first_trans_delta(t5, t26, 1, 0LL);
    goto LAB18;

LAB22:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 1992U);
    t7 = *((char **)t5);
    t5 = (t0 + 8000);
    t19 = *((int *)t5);
    t20 = (t19 - 0);
    t6 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t5));
    t25 = (4U * t6);
    t26 = (0 + t25);
    t8 = (t7 + t26);
    t21 = *((int *)t8);
    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t9 = (t0 + 8000);
    t27 = *((int *)t9);
    t28 = (t27 - 0);
    t35 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t9));
    t36 = (4U * t35);
    t37 = (0 + t36);
    t11 = (t10 + t37);
    t29 = *((int *)t11);
    t3 = (t21 == t29);
    if (t3 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 8000);
    t16 = *((int *)t1);
    t19 = (t16 - 0);
    t6 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t1));
    t25 = (4U * t6);
    t26 = (0 + t25);
    t5 = (t2 + t26);
    t20 = *((int *)t5);
    t7 = (t0 + 3088U);
    t8 = *((char **)t7);
    t21 = *((int *)t8);
    t7 = (t0 + 2312U);
    t9 = *((char **)t7);
    t7 = (t0 + 8000);
    t27 = *((int *)t7);
    t28 = (t27 - 0);
    t35 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t7));
    t36 = (4U * t35);
    t37 = (0 + t36);
    t10 = (t9 + t37);
    t29 = *((int *)t10);
    t30 = (t21 - t29);
    t3 = (t20 == t30);
    if (t3 != 0)
        goto LAB28;

LAB29:
LAB26:
LAB23:    t1 = (t0 + 8000);
    t17 = *((int *)t1);
    t2 = (t0 + 8004);
    t18 = *((int *)t2);
    if (t17 == t18)
        goto LAB24;

LAB30:    t16 = (t17 + 1);
    t17 = t16;
    t5 = (t0 + 8000);
    *((int *)t5) = t17;
    goto LAB21;

LAB25:    xsi_set_current_line(48, ng0);
    t22 = (t0 + 8000);
    t30 = *((int *)t22);
    t31 = (t30 - 0);
    t40 = (t31 * -1);
    t41 = (1 * t40);
    t42 = (0U + t41);
    t23 = (t0 + 4536);
    t24 = (t23 + 56U);
    t38 = *((char **)t24);
    t39 = (t38 + 56U);
    t43 = *((char **)t39);
    *((unsigned char *)t43) = (unsigned char)2;
    xsi_driver_first_trans_delta(t23, t42, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 8000);
    t16 = *((int *)t1);
    t19 = (t16 - 0);
    t6 = (t19 * -1);
    t25 = (1 * t6);
    t26 = (0U + t25);
    t2 = (t0 + 4600);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, t26, 1, 0LL);
    goto LAB26;

LAB28:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 8000);
    t31 = *((int *)t11);
    t32 = (t31 - 0);
    t40 = (t32 * -1);
    t41 = (1 * t40);
    t42 = (0U + t41);
    t22 = (t0 + 4536);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t38 = (t24 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = (unsigned char)3;
    xsi_driver_first_trans_delta(t22, t42, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8000);
    t16 = *((int *)t1);
    t19 = (t16 - 0);
    t6 = (t19 * -1);
    t25 = (1 * t6);
    t26 = (0U + t25);
    t2 = (t0 + 4600);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, t26, 1, 0LL);
    goto LAB26;

}


extern void work_a_1186738879_3665547200_init()
{
	static char *pe[] = {(void *)work_a_1186738879_3665547200_p_0};
	xsi_register_didat("work_a_1186738879_3665547200", "isim/pwm_tb_isim_beh.exe.sim/work/a_1186738879_3665547200.didat");
	xsi_register_executes(pe);
}
