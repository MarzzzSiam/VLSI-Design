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
static const char *ng0 = "/home/ise/CSE_450_Xilinx/CSE450_M/alu_tb.vhd";



static void work_a_2598182923_3553469787_p_0(char *t0)
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
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5686);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5694);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5702);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(20, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5705);
    t10 = 1;
    if (8U == 8U)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5729);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5737);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5745);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(24, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5713);
    xsi_report(t7, 16U, (unsigned char)2);
    goto LAB9;

LAB10:    t11 = 0;

LAB13:    if (t11 < 8U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t11 = (t11 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5748);
    t10 = 1;
    if (8U == 8U)
        goto LAB22;

LAB23:    t10 = 0;

LAB24:    if (t10 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5775);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5783);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5791);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(28, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t7 = (t0 + 5756);
    xsi_report(t7, 19U, (unsigned char)2);
    goto LAB21;

LAB22:    t11 = 0;

LAB25:    if (t11 < 8U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB23;

LAB27:    t11 = (t11 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5794);
    t13 = 1;
    if (8U == 8U)
        goto LAB40;

LAB41:    t13 = 0;

LAB42:    if (t13 == 1)
        goto LAB37;

LAB38:    t12 = (unsigned char)0;

LAB39:    if (t12 == 1)
        goto LAB34;

LAB35:    t10 = (unsigned char)0;

LAB36:    if (t10 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5818);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5826);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5834);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(33, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t7 = (t0 + 5802);
    xsi_report(t7, 16U, (unsigned char)2);
    goto LAB33;

LAB34:    t7 = (t0 + 1992U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t10 = t18;
    goto LAB36;

LAB37:    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    t12 = t15;
    goto LAB39;

LAB40:    t11 = 0;

LAB43:    if (t11 < 8U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB41;

LAB45:    t11 = (t11 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5837);
    t10 = 1;
    if (8U == 8U)
        goto LAB52;

LAB53:    t10 = 0;

LAB54:    if (t10 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5860);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5868);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5876);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(37, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t7 = (t0 + 5845);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB51;

LAB52:    t11 = 0;

LAB55:    if (t11 < 8U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB53;

LAB57:    t11 = (t11 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5879);
    t12 = 1;
    if (8U == 8U)
        goto LAB67;

LAB68:    t12 = 0;

LAB69:    if (t12 == 1)
        goto LAB64;

LAB65:    t10 = (unsigned char)0;

LAB66:    if (t10 == 0)
        goto LAB62;

LAB63:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5901);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5909);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5917);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(42, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB75:    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    t7 = (t0 + 5887);
    xsi_report(t7, 14U, (unsigned char)2);
    goto LAB63;

LAB64:    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB66;

LAB67:    t11 = 0;

LAB70:    if (t11 < 8U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB68;

LAB72:    t11 = (t11 + 1);
    goto LAB70;

LAB73:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5920);
    t12 = 1;
    if (8U == 8U)
        goto LAB82;

LAB83:    t12 = 0;

LAB84:    if (t12 == 1)
        goto LAB79;

LAB80:    t10 = (unsigned char)0;

LAB81:    if (t10 == 0)
        goto LAB77;

LAB78:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5938);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(46, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB74:    goto LAB73;

LAB76:    goto LAB74;

LAB77:    t7 = (t0 + 5928);
    xsi_report(t7, 10U, (unsigned char)2);
    goto LAB78;

LAB79:    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB81;

LAB82:    t11 = 0;

LAB85:    if (t11 < 8U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB83;

LAB87:    t11 = (t11 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5941);
    t10 = 1;
    if (8U == 8U)
        goto LAB94;

LAB95:    t10 = 0;

LAB96:    if (t10 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5958);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(50, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t7 = (t0 + 5949);
    xsi_report(t7, 9U, (unsigned char)2);
    goto LAB93;

LAB94:    t11 = 0;

LAB97:    if (t11 < 8U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB95;

LAB99:    t11 = (t11 + 1);
    goto LAB97;

LAB100:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5961);
    t10 = 1;
    if (8U == 8U)
        goto LAB106;

LAB107:    t10 = 0;

LAB108:    if (t10 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5979);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(54, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    t7 = (t0 + 5969);
    xsi_report(t7, 10U, (unsigned char)2);
    goto LAB105;

LAB106:    t11 = 0;

LAB109:    if (t11 < 8U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB107;

LAB111:    t11 = (t11 + 1);
    goto LAB109;

LAB112:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5982);
    t10 = 1;
    if (8U == 8U)
        goto LAB118;

LAB119:    t10 = 0;

LAB120:    if (t10 == 0)
        goto LAB116;

LAB117:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6000);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(58, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB126:    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    t7 = (t0 + 5990);
    xsi_report(t7, 10U, (unsigned char)2);
    goto LAB117;

LAB118:    t11 = 0;

LAB121:    if (t11 < 8U)
        goto LAB122;
    else
        goto LAB120;

LAB122:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB119;

LAB123:    t11 = (t11 + 1);
    goto LAB121;

LAB124:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6003);
    t12 = 1;
    if (8U == 8U)
        goto LAB133;

LAB134:    t12 = 0;

LAB135:    if (t12 == 1)
        goto LAB130;

LAB131:    t10 = (unsigned char)0;

LAB132:    if (t10 == 0)
        goto LAB128;

LAB129:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 6027);
    xsi_report(t2, 22U, (unsigned char)0);
    xsi_set_current_line(62, ng0);

LAB141:    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB125:    goto LAB124;

LAB127:    goto LAB125;

LAB128:    t7 = (t0 + 6011);
    xsi_report(t7, 16U, (unsigned char)2);
    goto LAB129;

LAB130:    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB132;

LAB133:    t11 = 0;

LAB136:    if (t11 < 8U)
        goto LAB137;
    else
        goto LAB135;

LAB137:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB134;

LAB138:    t11 = (t11 + 1);
    goto LAB136;

LAB139:    goto LAB2;

LAB140:    goto LAB139;

LAB142:    goto LAB140;

}


extern void work_a_2598182923_3553469787_init()
{
	static char *pe[] = {(void *)work_a_2598182923_3553469787_p_0};
	xsi_register_didat("work_a_2598182923_3553469787", "isim/alu_tb_isim_beh.exe.sim/work/a_2598182923_3553469787.didat");
	xsi_register_executes(pe);
}
