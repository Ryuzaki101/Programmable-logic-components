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
static const char *ng0 = "C:/Users/m/Desktop/OH/PLB/LABOR/Elevator/ELEVATOR_TB.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_1570459706_2372691052_p_0(char *t0)
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

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 6968);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 4480);
    xsi_process_wait(t2, t11);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_1570459706_2372691052_p_1(char *t0)
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

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 7032);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3688U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 4728);
    xsi_process_wait(t2, t11);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_1570459706_2372691052_p_2(char *t0)
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

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 7096);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);

LAB2:    t9 = (t0 + 6728);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1570459706_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t3 = (10 * 1000000LL);
    t2 = (t0 + 5224);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 7160);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1570459706_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int t8;
    int t9;
    unsigned char t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 7224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t7 = (100 * 1000000LL);
    t2 = (t0 + 5472);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 11176);
    *((int *)t2) = 7;
    t3 = (t0 + 11180);
    *((int *)t3) = 0;
    t8 = 7;
    t9 = 0;

LAB8:    if (t8 >= t9)
        goto LAB9;

LAB11:    xsi_set_current_line(109, ng0);

LAB19:    t2 = (t0 + 6760);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(105, ng0);

LAB14:    t4 = (t0 + 6744);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 11176);
    t8 = *((int *)t2);
    t3 = (t0 + 11180);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB16:    t11 = (t8 + -1);
    t8 = t11;
    t4 = (t0 + 11176);
    *((int *)t4) = t8;
    goto LAB8;

LAB12:    t6 = (t0 + 6744);
    *((int *)t6) = 0;
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 11176);
    t11 = *((int *)t2);
    t12 = (t11 - 7);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t2));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t3 + t15);
    t10 = *((unsigned char *)t4);
    t5 = (t0 + 7288);
    t6 = (t5 + 56U);
    t16 = *((char **)t6);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t10;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB13:    t5 = (t0 + 1632U);
    t10 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t10 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB17:    t4 = (t0 + 6760);
    *((int *)t4) = 0;
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB18:    t3 = (t0 + 1632U);
    t10 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB17;
    else
        goto LAB19;

LAB20:    goto LAB18;

LAB21:    goto LAB2;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

}

static void work_a_1570459706_2372691052_p_5(char *t0)
{
    char t20[16];
    char t28[16];
    char t29[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t3 = (300 * 1000000LL);
    t2 = (t0 + 5720);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 11184);
    t5 = (t0 + 7352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(122, ng0);

LAB10:    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t19 = (t0 + 6776);
    *((int *)t19) = 0;
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 11194);
    t5 = (t0 + 7352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(126, ng0);
    t3 = (3 * 1000000000LL);
    t2 = (t0 + 5720);
    xsi_process_wait(t2, t3);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB9:    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 11188);
    t11 = 1;
    if (4U == 4U)
        goto LAB15;

LAB16:    t11 = 0;

LAB17:    if (t11 == 1)
        goto LAB12;

LAB13:    t10 = (unsigned char)0;

LAB14:    if (t10 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t9 = (t0 + 2472U);
    t13 = *((char **)t9);
    t9 = (t0 + 11192);
    t15 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t15 = 0;

LAB23:    t10 = t15;
    goto LAB14;

LAB15:    t12 = 0;

LAB18:    if (t12 < 4U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t7 = (t5 + t12);
    t8 = (t4 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB16;

LAB20:    t12 = (t12 + 1);
    goto LAB18;

LAB21:    t16 = 0;

LAB24:    if (t16 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t17 = (t13 + t16);
    t18 = (t9 + t16);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB22;

LAB26:    t16 = (t16 + 1);
    goto LAB24;

LAB27:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 11198);
    t5 = (t0 + 7416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(128, ng0);

LAB33:    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB31:    t27 = (t0 + 6792);
    *((int *)t27) = 0;
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 11056U);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t5 = (t0 + 11072U);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t7 = (t0 + 11056U);
    t9 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t29, t6, t5, t8, t7);
    t13 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t28, t9, t29);
    t14 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t4, t2, t13, t28);
    t17 = (t20 + 12U);
    t12 = *((unsigned int *)t17);
    t16 = (1U * t12);
    t10 = (4U != t16);
    if (t10 == 1)
        goto LAB50;

LAB51:    t18 = (t0 + 7416);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t14, 4U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(130, ng0);

LAB54:    t2 = (t0 + 6808);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB32:    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 11072U);
    t6 = (t0 + 2152U);
    t7 = *((char **)t6);
    t6 = (t0 + 11056U);
    t8 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t5, t4, t7, t6);
    t9 = (t20 + 12U);
    t12 = *((unsigned int *)t9);
    t16 = (1U * t12);
    t13 = (t0 + 11202);
    t11 = 1;
    if (t16 == 4U)
        goto LAB38;

LAB39:    t11 = 0;

LAB40:    if ((!(t11)) == 1)
        goto LAB35;

LAB36:    t10 = (unsigned char)0;

LAB37:    if (t10 == 1)
        goto LAB31;
    else
        goto LAB33;

LAB34:    goto LAB32;

LAB35:    t19 = (t0 + 2472U);
    t22 = *((char **)t19);
    t19 = (t0 + 11206);
    t15 = 1;
    if (2U == 2U)
        goto LAB44;

LAB45:    t15 = 0;

LAB46:    t10 = t15;
    goto LAB37;

LAB38:    t21 = 0;

LAB41:    if (t21 < t16)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t17 = (t8 + t21);
    t18 = (t13 + t21);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB39;

LAB43:    t21 = (t21 + 1);
    goto LAB41;

LAB44:    t24 = 0;

LAB47:    if (t24 < 2U)
        goto LAB48;
    else
        goto LAB46;

LAB48:    t25 = (t22 + t24);
    t26 = (t19 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB45;

LAB49:    t24 = (t24 + 1);
    goto LAB47;

LAB50:    xsi_size_not_matching(4U, t16, 0);
    goto LAB51;

LAB52:    t27 = (t0 + 6808);
    *((int *)t27) = 0;
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 11056U);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t5 = (t0 + 11072U);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t7 = (t0 + 11056U);
    t9 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t29, t6, t5, t8, t7);
    t13 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t28, t9, t29);
    t14 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t4, t2, t13, t28);
    t17 = (t20 + 12U);
    t12 = *((unsigned int *)t17);
    t16 = (1U * t12);
    t10 = (4U != t16);
    if (t10 == 1)
        goto LAB71;

LAB72:    t18 = (t0 + 7416);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t14, 4U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(134, ng0);
    t3 = (3 * 1000000000LL);
    t2 = (t0 + 5720);
    xsi_process_wait(t2, t3);

LAB75:    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB53:    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 11072U);
    t6 = (t0 + 2152U);
    t7 = *((char **)t6);
    t6 = (t0 + 11056U);
    t8 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t5, t4, t7, t6);
    t9 = (t20 + 12U);
    t12 = *((unsigned int *)t9);
    t16 = (1U * t12);
    t13 = (t0 + 11208);
    t11 = 1;
    if (t16 == 4U)
        goto LAB59;

LAB60:    t11 = 0;

LAB61:    if ((!(t11)) == 1)
        goto LAB56;

LAB57:    t10 = (unsigned char)0;

LAB58:    if (t10 == 1)
        goto LAB52;
    else
        goto LAB54;

LAB55:    goto LAB53;

LAB56:    t19 = (t0 + 2472U);
    t22 = *((char **)t19);
    t19 = (t0 + 11212);
    t15 = 1;
    if (2U == 2U)
        goto LAB65;

LAB66:    t15 = 0;

LAB67:    t10 = t15;
    goto LAB58;

LAB59:    t21 = 0;

LAB62:    if (t21 < t16)
        goto LAB63;
    else
        goto LAB61;

LAB63:    t17 = (t8 + t21);
    t18 = (t13 + t21);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB60;

LAB64:    t21 = (t21 + 1);
    goto LAB62;

LAB65:    t24 = 0;

LAB68:    if (t24 < 2U)
        goto LAB69;
    else
        goto LAB67;

LAB69:    t25 = (t22 + t24);
    t26 = (t19 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB66;

LAB70:    t24 = (t24 + 1);
    goto LAB68;

LAB71:    xsi_size_not_matching(4U, t16, 0);
    goto LAB72;

LAB73:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 11214);
    t5 = (t0 + 7352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(136, ng0);

LAB79:    t2 = (t0 + 6824);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB74:    goto LAB73;

LAB76:    goto LAB74;

LAB77:    t27 = (t0 + 6824);
    *((int *)t27) = 0;
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 11040U);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t5 = (t0 + 11072U);
    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t7 = (t0 + 11040U);
    t9 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t29, t6, t5, t8, t7);
    t13 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t28, t9, t29);
    t14 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t4, t2, t13, t28);
    t17 = (t20 + 12U);
    t12 = *((unsigned int *)t17);
    t16 = (1U * t12);
    t10 = (4U != t16);
    if (t10 == 1)
        goto LAB96;

LAB97:    t18 = (t0 + 7352);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t14, 4U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(138, ng0);

LAB100:    t2 = (t0 + 6840);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB78:    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 11072U);
    t6 = (t0 + 1992U);
    t7 = *((char **)t6);
    t6 = (t0 + 11040U);
    t8 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t5, t4, t7, t6);
    t9 = (t20 + 12U);
    t12 = *((unsigned int *)t9);
    t16 = (1U * t12);
    t13 = (t0 + 11218);
    t11 = 1;
    if (t16 == 4U)
        goto LAB84;

LAB85:    t11 = 0;

LAB86:    if ((!(t11)) == 1)
        goto LAB81;

LAB82:    t10 = (unsigned char)0;

LAB83:    if (t10 == 1)
        goto LAB77;
    else
        goto LAB79;

LAB80:    goto LAB78;

LAB81:    t19 = (t0 + 2472U);
    t22 = *((char **)t19);
    t19 = (t0 + 11222);
    t15 = 1;
    if (2U == 2U)
        goto LAB90;

LAB91:    t15 = 0;

LAB92:    t10 = t15;
    goto LAB83;

LAB84:    t21 = 0;

LAB87:    if (t21 < t16)
        goto LAB88;
    else
        goto LAB86;

LAB88:    t17 = (t8 + t21);
    t18 = (t13 + t21);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB85;

LAB89:    t21 = (t21 + 1);
    goto LAB87;

LAB90:    t24 = 0;

LAB93:    if (t24 < 2U)
        goto LAB94;
    else
        goto LAB92;

LAB94:    t25 = (t22 + t24);
    t26 = (t19 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB91;

LAB95:    t24 = (t24 + 1);
    goto LAB93;

LAB96:    xsi_size_not_matching(4U, t16, 0);
    goto LAB97;

LAB98:    t27 = (t0 + 6840);
    *((int *)t27) = 0;
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 11040U);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t5 = (t0 + 11072U);
    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t7 = (t0 + 11040U);
    t9 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t29, t6, t5, t8, t7);
    t13 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t28, t9, t29);
    t14 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t4, t2, t13, t28);
    t17 = (t20 + 12U);
    t12 = *((unsigned int *)t17);
    t16 = (1U * t12);
    t10 = (4U != t16);
    if (t10 == 1)
        goto LAB117;

LAB118:    t18 = (t0 + 7352);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t14, 4U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(142, ng0);
    t3 = (3 * 1000000000LL);
    t2 = (t0 + 5720);
    xsi_process_wait(t2, t3);

LAB121:    *((char **)t1) = &&LAB122;
    goto LAB1;

LAB99:    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 11072U);
    t6 = (t0 + 1992U);
    t7 = *((char **)t6);
    t6 = (t0 + 11040U);
    t8 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t5, t4, t7, t6);
    t9 = (t20 + 12U);
    t12 = *((unsigned int *)t9);
    t16 = (1U * t12);
    t13 = (t0 + 11224);
    t11 = 1;
    if (t16 == 4U)
        goto LAB105;

LAB106:    t11 = 0;

LAB107:    if ((!(t11)) == 1)
        goto LAB102;

LAB103:    t10 = (unsigned char)0;

LAB104:    if (t10 == 1)
        goto LAB98;
    else
        goto LAB100;

LAB101:    goto LAB99;

LAB102:    t19 = (t0 + 2472U);
    t22 = *((char **)t19);
    t19 = (t0 + 11228);
    t15 = 1;
    if (2U == 2U)
        goto LAB111;

LAB112:    t15 = 0;

LAB113:    t10 = t15;
    goto LAB104;

LAB105:    t21 = 0;

LAB108:    if (t21 < t16)
        goto LAB109;
    else
        goto LAB107;

LAB109:    t17 = (t8 + t21);
    t18 = (t13 + t21);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB106;

LAB110:    t21 = (t21 + 1);
    goto LAB108;

LAB111:    t24 = 0;

LAB114:    if (t24 < 2U)
        goto LAB115;
    else
        goto LAB113;

LAB115:    t25 = (t22 + t24);
    t26 = (t19 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB112;

LAB116:    t24 = (t24 + 1);
    goto LAB114;

LAB117:    xsi_size_not_matching(4U, t16, 0);
    goto LAB118;

LAB119:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 7352);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);

LAB125:    t2 = (t0 + 6856);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB126;
    goto LAB1;

LAB120:    goto LAB119;

LAB122:    goto LAB120;

LAB123:    t9 = (t0 + 6856);
    *((int *)t9) = 0;
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 11232);
    t5 = (t0 + 7352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);

LAB135:    *((char **)t1) = &&LAB136;
    goto LAB1;

LAB124:    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t4 = (t0 + 11230);
    t10 = 1;
    if (2U == 2U)
        goto LAB127;

LAB128:    t10 = 0;

LAB129:    if (t10 == 1)
        goto LAB123;
    else
        goto LAB125;

LAB126:    goto LAB124;

LAB127:    t12 = 0;

LAB130:    if (t12 < 2U)
        goto LAB131;
    else
        goto LAB129;

LAB131:    t7 = (t5 + t12);
    t8 = (t4 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB128;

LAB132:    t12 = (t12 + 1);
    goto LAB130;

LAB133:    goto LAB2;

LAB134:    goto LAB133;

LAB136:    goto LAB134;

}

static void work_a_1570459706_2372691052_p_6(char *t0)
{
    char t19[16];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    int64 t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);

LAB6:    t2 = (t0 + 6872);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 6872);
    *((int *)t3) = 0;
    xsi_set_current_line(154, ng0);

LAB8:    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB9;

LAB11:    goto LAB2;

LAB5:    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(155, ng0);
    t7 = (300 * 1000000LL);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:;
LAB12:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 11240);
    t5 = 1;
    if (4U == 4U)
        goto LAB33;

LAB34:    t5 = 0;

LAB35:    if ((!(t5)) != 0)
        goto LAB30;

LAB32:
LAB31:
LAB17:    xsi_set_current_line(167, ng0);
    t7 = (50 * 1000000LL);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, t7);

LAB43:    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 11236);
    t9 = 1;
    if (4U == 4U)
        goto LAB22;

LAB23:    t9 = 0;

LAB24:    if ((!(t9)) != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(158, ng0);
    t13 = (t0 + 2312U);
    t14 = *((char **)t13);
    t15 = (3 - 2);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t20 = ((IEEE_P_2592010699) + 4024);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 2;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - 2);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)97, t13, t21, (char)99, (unsigned char)2, (char)101);
    t25 = (3U + 1U);
    t26 = (4U != t25);
    if (t26 == 1)
        goto LAB28;

LAB29:    t23 = (t0 + 7480);
    t27 = (t23 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t18, 4U);
    xsi_driver_first_trans_fast(t23);
    goto LAB20;

LAB22:    t10 = 0;

LAB25:    if (t10 < 4U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t11 = (t4 + t10);
    t12 = (t2 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB23;

LAB27:    t10 = (t10 + 1);
    goto LAB25;

LAB28:    xsi_size_not_matching(4U, t25, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(162, ng0);
    t12 = (t0 + 2312U);
    t13 = *((char **)t12);
    t15 = (3 - 3);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t12 = (t13 + t17);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t21 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = 3;
    t22 = (t20 + 4U);
    *((int *)t22) = 1;
    t22 = (t20 + 8U);
    *((int *)t22) = -1;
    t24 = (1 - 3);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t25;
    t14 = xsi_base_array_concat(t14, t19, t18, (char)99, (unsigned char)2, (char)97, t12, t21, (char)101);
    t25 = (1U + 3U);
    t6 = (4U != t25);
    if (t6 == 1)
        goto LAB39;

LAB40:    t22 = (t0 + 7480);
    t23 = (t22 + 56U);
    t27 = *((char **)t23);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t14, 4U);
    xsi_driver_first_trans_fast(t22);
    goto LAB31;

LAB33:    t10 = 0;

LAB36:    if (t10 < 4U)
        goto LAB37;
    else
        goto LAB35;

LAB37:    t8 = (t3 + t10);
    t11 = (t2 + t10);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB34;

LAB38:    t10 = (t10 + 1);
    goto LAB36;

LAB39:    xsi_size_not_matching(4U, t25, 0);
    goto LAB40;

LAB41:    goto LAB8;

LAB42:    goto LAB41;

LAB44:    goto LAB42;

}

static void work_a_1570459706_2372691052_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int64 t20;

LAB0:    t1 = (t0 + 6408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(174, ng0);

LAB6:    t2 = (t0 + 6888);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 6888);
    *((int *)t5) = 0;
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 != 0)
        goto LAB24;

LAB25:
LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 3072U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(177, ng0);
    t13 = (t0 + 11246);
    t15 = (t0 + 7544);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t13, 2U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(178, ng0);
    t20 = (100 * 1000000LL);
    t2 = (t0 + 6216);
    xsi_process_wait(t2, t20);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB11:    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t2 = (t0 + 11244);
    t9 = 1;
    if (2U == 2U)
        goto LAB14;

LAB15:    t9 = 0;

LAB16:    t4 = t9;
    goto LAB13;

LAB14:    t10 = 0;

LAB17:    if (t10 < 2U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t11 = (t5 + t10);
    t12 = (t2 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB15;

LAB19:    t10 = (t10 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 11248);
    t5 = (t0 + 7544);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(182, ng0);
    t13 = (t0 + 11252);
    t15 = (t0 + 7544);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t13, 2U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(183, ng0);
    t20 = (100 * 1000000LL);
    t2 = (t0 + 6216);
    xsi_process_wait(t2, t20);

LAB37:    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB26:    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t2 = (t0 + 11250);
    t9 = 1;
    if (2U == 2U)
        goto LAB29;

LAB30:    t9 = 0;

LAB31:    t4 = t9;
    goto LAB28;

LAB29:    t10 = 0;

LAB32:    if (t10 < 2U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t11 = (t5 + t10);
    t12 = (t2 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB30;

LAB34:    t10 = (t10 + 1);
    goto LAB32;

LAB35:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 11254);
    t5 = (t0 + 7544);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB36:    goto LAB35;

LAB38:    goto LAB36;

}


extern void work_a_1570459706_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1570459706_2372691052_p_0,(void *)work_a_1570459706_2372691052_p_1,(void *)work_a_1570459706_2372691052_p_2,(void *)work_a_1570459706_2372691052_p_3,(void *)work_a_1570459706_2372691052_p_4,(void *)work_a_1570459706_2372691052_p_5,(void *)work_a_1570459706_2372691052_p_6,(void *)work_a_1570459706_2372691052_p_7};
	xsi_register_didat("work_a_1570459706_2372691052", "isim/ELEVATOR_TB_isim_beh.exe.sim/work/a_1570459706_2372691052.didat");
	xsi_register_executes(pe);
}
