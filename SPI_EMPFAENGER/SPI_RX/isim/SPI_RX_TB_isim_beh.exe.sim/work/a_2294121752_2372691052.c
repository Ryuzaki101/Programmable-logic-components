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
static const char *ng0 = "C:/Users/m/Desktop/OH/PLB/LABOR/SPI_EMPFAENGER/SPI_RX/SPI_RX_TB.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_2294121752_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 4952);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3520);
    xsi_process_wait(t2, t11);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_2294121752_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 5016);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, t11);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_2294121752_2372691052_p_2(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(72, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 5080);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);

LAB2:    t9 = (t0 + 4776);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2294121752_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int64 t11;
    int t12;
    int t13;
    unsigned char t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 8424);
    *((int *)t2) = 0;
    t3 = (t0 + 8428);
    *((int *)t3) = 2;
    t4 = 0;
    t5 = 2;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t11 = (1 * 1000000LL);
    t2 = (t0 + 4264);
    xsi_process_wait(t2, t11);

LAB32:    *((char **)t1) = &&LAB33;

LAB1:    return;
LAB5:    xsi_set_current_line(78, ng0);
    t6 = (t0 + 5144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(79, ng0);
    t11 = (1 * 1000000LL);
    t2 = (t0 + 4264);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 8424);
    t4 = *((int *)t2);
    t3 = (t0 + 8428);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB29:    t12 = (t4 + 1);
    t4 = t12;
    t6 = (t0 + 8424);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8432);
    *((int *)t2) = 7;
    t3 = (t0 + 8436);
    *((int *)t3) = 0;
    t12 = 7;
    t13 = 0;

LAB12:    if (t12 >= t13)
        goto LAB13;

LAB15:    xsi_set_current_line(87, ng0);

LAB23:    t2 = (t0 + 4808);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(82, ng0);

LAB18:    t6 = (t0 + 4792);
    *((int *)t6) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 8432);
    t12 = *((int *)t2);
    t3 = (t0 + 8436);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB15;

LAB20:    t15 = (t12 + -1);
    t12 = t15;
    t6 = (t0 + 8432);
    *((int *)t6) = t12;
    goto LAB12;

LAB16:    t8 = (t0 + 4792);
    *((int *)t8) = 0;
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 8424);
    t15 = *((int *)t2);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, *((int *)t2));
    t18 = (t17 * 8U);
    t6 = (t0 + 8432);
    t19 = *((int *)t6);
    t20 = (t19 - 7);
    t21 = (t20 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t6));
    t22 = (t18 + t21);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t7 = (t3 + t24);
    t14 = *((unsigned char *)t7);
    t8 = (t0 + 5208);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t25 = (t10 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t14;
    xsi_driver_first_trans_fast(t8);
    goto LAB14;

LAB17:    t7 = (t0 + 1312U);
    t14 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t7, 0U, 0U);
    if (t14 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB21:    t6 = (t0 + 4808);
    *((int *)t6) = 0;
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t11 = (2 * 1000000LL);
    t2 = (t0 + 4264);
    xsi_process_wait(t2, t11);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB22:    t3 = (t0 + 1312U);
    t14 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t14 == 1)
        goto LAB21;
    else
        goto LAB23;

LAB24:    goto LAB22;

LAB25:    goto LAB6;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB30:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 8440);
    *((int *)t2) = 6;
    t3 = (t0 + 8444);
    *((int *)t3) = 0;
    t4 = 6;
    t5 = 0;

LAB34:    if (t4 >= t5)
        goto LAB35;

LAB37:    xsi_set_current_line(100, ng0);

LAB45:    t2 = (t0 + 4840);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB35:    xsi_set_current_line(96, ng0);

LAB40:    t6 = (t0 + 4824);
    *((int *)t6) = 1;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB36:    t2 = (t0 + 8440);
    t4 = *((int *)t2);
    t3 = (t0 + 8444);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB37;

LAB42:    t12 = (t4 + -1);
    t4 = t12;
    t6 = (t0 + 8440);
    *((int *)t6) = t4;
    goto LAB34;

LAB38:    t8 = (t0 + 4824);
    *((int *)t8) = 0;
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t12 = (0 - 0);
    t17 = (t12 * 1);
    t18 = (t17 * 8U);
    t2 = (t0 + 8440);
    t13 = *((int *)t2);
    t15 = (t13 - 7);
    t21 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t2));
    t22 = (t18 + t21);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t6 = (t3 + t24);
    t14 = *((unsigned char *)t6);
    t7 = (t0 + 5208);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t25 = *((char **)t10);
    *((unsigned char *)t25) = t14;
    xsi_driver_first_trans_fast(t7);
    goto LAB36;

LAB39:    t7 = (t0 + 1312U);
    t14 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t7, 0U, 0U);
    if (t14 == 1)
        goto LAB38;
    else
        goto LAB40;

LAB41:    goto LAB39;

LAB43:    t6 = (t0 + 4840);
    *((int *)t6) = 0;
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 8448);
    *((int *)t2) = 7;
    t3 = (t0 + 8452);
    *((int *)t3) = 0;
    t4 = 7;
    t5 = 0;

LAB47:    if (t4 >= t5)
        goto LAB48;

LAB50:    xsi_set_current_line(109, ng0);

LAB58:    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB44:    t3 = (t0 + 1312U);
    t14 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t14 == 1)
        goto LAB43;
    else
        goto LAB45;

LAB46:    goto LAB44;

LAB48:    xsi_set_current_line(104, ng0);

LAB53:    t6 = (t0 + 4856);
    *((int *)t6) = 1;
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB49:    t2 = (t0 + 8448);
    t4 = *((int *)t2);
    t3 = (t0 + 8452);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB50;

LAB55:    t12 = (t4 + -1);
    t4 = t12;
    t6 = (t0 + 8448);
    *((int *)t6) = t4;
    goto LAB47;

LAB51:    t8 = (t0 + 4856);
    *((int *)t8) = 0;
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t12 = (0 - 0);
    t17 = (t12 * 1);
    t18 = (t17 * 8U);
    t2 = (t0 + 8448);
    t13 = *((int *)t2);
    t15 = (t13 - 7);
    t21 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t2));
    t22 = (t18 + t21);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t6 = (t3 + t24);
    t14 = *((unsigned char *)t6);
    t7 = (t0 + 5208);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t25 = *((char **)t10);
    *((unsigned char *)t25) = t14;
    xsi_driver_first_trans_fast(t7);
    goto LAB49;

LAB52:    t7 = (t0 + 1312U);
    t14 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t7, 0U, 0U);
    if (t14 == 1)
        goto LAB51;
    else
        goto LAB53;

LAB54:    goto LAB52;

LAB56:    t6 = (t0 + 4872);
    *((int *)t6) = 0;
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);
    t11 = (2 * 1000000LL);
    t2 = (t0 + 4264);
    xsi_process_wait(t2, t11);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    t3 = (t0 + 1312U);
    t14 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t14 == 1)
        goto LAB56;
    else
        goto LAB58;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(113, ng0);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    goto LAB2;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

}


extern void work_a_2294121752_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2294121752_2372691052_p_0,(void *)work_a_2294121752_2372691052_p_1,(void *)work_a_2294121752_2372691052_p_2,(void *)work_a_2294121752_2372691052_p_3};
	xsi_register_didat("work_a_2294121752_2372691052", "isim/SPI_RX_TB_isim_beh.exe.sim/work/a_2294121752_2372691052.didat");
	xsi_register_executes(pe);
}
