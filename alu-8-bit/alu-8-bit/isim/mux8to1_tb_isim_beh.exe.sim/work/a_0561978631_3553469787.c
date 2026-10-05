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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/CSE_450_Xilinx/CSE450_M/mux8to1_tb.vhd";



static void work_a_0561978631_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    t1 = (t0 + 3624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 4200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 6644);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(24, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t10 == t11);
    if (t12 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 6665);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(27, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB12:    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 6647);
    xsi_report(t2, 18U, (unsigned char)2);
    goto LAB9;

LAB10:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t10 == t11);
    if (t12 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 6686);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(30, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

LAB14:    t2 = (t0 + 6668);
    xsi_report(t2, 18U, (unsigned char)2);
    goto LAB15;

LAB16:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t10 == t11);
    if (t12 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 6707);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(33, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t2 = (t0 + 6689);
    xsi_report(t2, 18U, (unsigned char)2);
    goto LAB21;

LAB22:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t10 == t11);
    if (t12 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 6728);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(36, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    t2 = (t0 + 6710);
    xsi_report(t2, 18U, (unsigned char)2);
    goto LAB27;

LAB28:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t10 == t11);
    if (t12 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6749);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(39, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t2 = (t0 + 6731);
    xsi_report(t2, 18U, (unsigned char)2);
    goto LAB33;

LAB34:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t10 == t11);
    if (t12 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 6770);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(42, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t2 = (t0 + 6752);
    xsi_report(t2, 18U, (unsigned char)2);
    goto LAB39;

LAB40:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t10 == t11);
    if (t12 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6791);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(45, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t2 = (t0 + 6773);
    xsi_report(t2, 18U, (unsigned char)2);
    goto LAB45;

LAB46:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t10 == t11);
    if (t12 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6812);
    xsi_report(t2, 26U, (unsigned char)0);
    xsi_set_current_line(49, ng0);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t2 = (t0 + 6794);
    xsi_report(t2, 18U, (unsigned char)2);
    goto LAB51;

LAB52:    goto LAB2;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

}


extern void work_a_0561978631_3553469787_init()
{
	static char *pe[] = {(void *)work_a_0561978631_3553469787_p_0};
	xsi_register_didat("work_a_0561978631_3553469787", "isim/mux8to1_tb_isim_beh.exe.sim/work/a_0561978631_3553469787.didat");
	xsi_register_executes(pe);
}
