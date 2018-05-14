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
static const char *ng0 = "C:/Users/152/stopwatch/src/debounce.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_9_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(9, ng0);

LAB2:    xsi_set_current_line(10, ng0);
    t1 = (t0 + 1480U);
    t2 = *((char **)t1);
    t1 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t1, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(11, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);
    xsi_set_current_line(12, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 24, 0LL);

LAB1:    return;
}

static void Always_15_1(char *t0)
{
    char t6[8];
    char t19[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3688);
    *((int *)t2) = 1;
    t3 = (t0 + 3400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t0 + 2040);
    t7 = (t0 + 2040);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t14 = (t12 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t8 = (t0 + 2040);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t20 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t19, t11, 2, t20, 32, 1);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t21);
    t13 = (!(t22));
    if (t13 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 24, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 24, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t14 = (t12 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t8 = (t0 + 2040);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t20 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t20);
    t26 = (t25 >> 1);
    t27 = (t26 & 1);
    *((unsigned int *)t11) = t27;
    memset(t28, 0, 8);
    t21 = (t6 + 4);
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t19);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB11;

LAB10:    if (t39 != 0)
        goto LAB12;

LAB13:    t43 = (t28 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t28);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(24, ng0);

LAB17:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB19;

LAB18:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB21;

LAB20:    *((unsigned int *)t6) = 1;

LAB21:    t10 = (t6 + 4);
    t12 = *((unsigned int *)t10);
    t14 = (~(t12));
    t15 = *((unsigned int *)t6);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB23;

LAB24:
LAB25:
LAB16:    goto LAB2;

LAB6:    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB7;

LAB8:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB9;

LAB11:    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB12:    t42 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(23, ng0);
    t49 = ((char*)((ng1)));
    t50 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 24, 0LL);
    goto LAB16;

LAB19:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(25, ng0);

LAB26:    xsi_set_current_line(26, ng0);
    t11 = (t0 + 2040);
    t20 = (t11 + 56U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t29 = (t19 + 4);
    t42 = (t21 + 4);
    t18 = *((unsigned int *)t21);
    t22 = (t18 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t42);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t29) = t26;
    t43 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t43, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    goto LAB25;

}


extern void work_m_00000000001177107543_1585794704_init()
{
	static char *pe[] = {(void *)Initial_9_0,(void *)Always_15_1};
	xsi_register_didat("work_m_00000000001177107543_1585794704", "isim/top_tb_isim_beh.exe.sim/work/m_00000000001177107543_1585794704.didat");
	xsi_register_executes(pe);
}
