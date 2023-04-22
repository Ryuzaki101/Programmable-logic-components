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
static const char *ng0 = "C:/Users/m/Desktop/OH/PLB/LABOR/daswe/STIMULI.vhd";



static void work_a_2061948641_3671711236_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 2760);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 2760);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2061948641_3671711236_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    int t11;

LAB0:    t1 = (t0 + 3200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t7 = (15 * 1000LL);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 != (unsigned char)2);
    if (t9 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(84, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t7);

LAB15:    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 5676);
    xsi_report(t2, 7U, (unsigned char)2);
    goto LAB9;

LAB10:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 1968U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    goto LAB11;

LAB13:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t7 = (15 * 1000LL);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t7);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

LAB17:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB21;

LAB22:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 != (unsigned char)2);
    if (t9 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(94, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t7);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    t2 = (t0 + 5683);
    xsi_report(t2, 7U, (unsigned char)2);
    goto LAB22;

LAB23:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 1968U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    goto LAB24;

LAB26:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t7 = (15 * 1000LL);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t7);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

LAB30:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB34;

LAB35:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 != (unsigned char)2);
    if (t9 != 0)
        goto LAB36;

LAB38:
LAB37:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t8 = (t10 == 0);
    if (t8 != 0)
        goto LAB39;

LAB41:    xsi_set_current_line(109, ng0);
    if ((unsigned char)1 == 0)
        goto LAB44;

LAB45:
LAB40:    xsi_set_current_line(114, ng0);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB34:    t2 = (t0 + 5690);
    xsi_report(t2, 7U, (unsigned char)2);
    goto LAB35;

LAB36:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 1968U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    goto LAB37;

LAB39:    xsi_set_current_line(105, ng0);
    if ((unsigned char)0 == 0)
        goto LAB42;

LAB43:    goto LAB40;

LAB42:    t2 = (t0 + 5697);
    xsi_report(t2, 42U, (unsigned char)0);
    goto LAB43;

LAB44:    t2 = (t0 + 5739);
    xsi_report(t2, 26U, (unsigned char)2);
    goto LAB45;

LAB46:    goto LAB2;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

}


extern void work_a_2061948641_3671711236_init()
{
	static char *pe[] = {(void *)work_a_2061948641_3671711236_p_0,(void *)work_a_2061948641_3671711236_p_1};
	xsi_register_didat("work_a_2061948641_3671711236", "isim/STIMULI_isim_beh.exe.sim/work/a_2061948641_3671711236.didat");
	xsi_register_executes(pe);
}
