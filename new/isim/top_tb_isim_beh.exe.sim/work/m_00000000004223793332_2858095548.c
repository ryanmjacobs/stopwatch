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
static const char *ng0 = "C:/Users/152/stopwatch/src/clkdiv.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};



static void Initial_40_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 27, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 26, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 18, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 26, 0LL);

LAB1:    return;
}

static void Always_47_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4120);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t14) = 1;

LAB13:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB21;

LAB18:    if (t20 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t14) = 1;

LAB21:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t11 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB29;

LAB26:    if (t20 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t14) = 1;

LAB29:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t11 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t14) = 1;

LAB37:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(85, ng0);

LAB42:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 27, t5, 32);
    t11 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 27, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 26, t5, 32);
    t11 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 18, t5, 32);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 26, t5, 32);
    t11 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);

LAB40:
LAB32:
LAB24:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 27, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    goto LAB8;

LAB12:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(57, ng0);

LAB17:    xsi_set_current_line(58, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 27, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 26, t5, 32);
    t11 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 18, t5, 32);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 26, t5, 32);
    t11 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    goto LAB16;

LAB20:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(64, ng0);

LAB25:    xsi_set_current_line(65, ng0);
    t30 = (t0 + 2152);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 27, t33, 32);
    t35 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 27, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 18, t5, 32);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 26, t5, 32);
    t11 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    goto LAB24;

LAB28:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(71, ng0);

LAB33:    xsi_set_current_line(72, ng0);
    t30 = (t0 + 2152);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 27, t33, 32);
    t35 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 27, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 26, t5, 32);
    t11 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 26, t5, 32);
    t11 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    goto LAB32;

LAB36:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(78, ng0);

LAB41:    xsi_set_current_line(79, ng0);
    t30 = (t0 + 2152);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 27, t33, 32);
    t35 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 27, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 26, t5, 32);
    t11 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 18, t5, 32);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    goto LAB40;

}


extern void work_m_00000000004223793332_2858095548_init()
{
	static char *pe[] = {(void *)Initial_40_0,(void *)Always_47_1};
	xsi_register_didat("work_m_00000000004223793332_2858095548", "isim/top_tb_isim_beh.exe.sim/work/m_00000000004223793332_2858095548.didat");
	xsi_register_executes(pe);
}
