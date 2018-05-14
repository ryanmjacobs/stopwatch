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
static const char *ng0 = "C:/Users/152/stopwatch/src/counter.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {10, 0};
static int ng6[] = {6, 0};



static void Always_22_0(char *t0)
{
    char t14[8];
    char t22[8];
    char t34[8];
    char t43[8];
    char t51[8];
    char t92[8];
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
    int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4448);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t4 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB27;

LAB24:    if (t19 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t14) = 1;

LAB27:    memset(t22, 0, 8);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t23) != 0)
        goto LAB30;

LAB31:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB32;

LAB33:    memcpy(t51, t22, 8);

LAB34:    t82 = (t51 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t51);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB46;

LAB47:
LAB48:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(24, ng0);

LAB9:    xsi_set_current_line(25, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB8;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    xsi_set_current_line(32, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    memcpy(t14, t12, 8);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 5);
    goto LAB23;

LAB17:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memcpy(t14, t4, 8);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t14, 0, 0, 5);
    goto LAB23;

LAB19:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memcpy(t14, t4, 8);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t14, 0, 0, 5);
    goto LAB23;

LAB21:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memcpy(t14, t4, 8);
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t14, 0, 0, 5);
    goto LAB23;

LAB26:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t22) = 1;
    goto LAB31;

LAB30:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB31;

LAB32:    t35 = (t0 + 1528U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t36 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (~(t37));
    t39 = *((unsigned int *)t36);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t35) == 0)
        goto LAB35;

LAB37:    t42 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t42) = 1;

LAB38:    memset(t43, 0, 8);
    t44 = (t34 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t34);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t44) != 0)
        goto LAB41;

LAB42:    t52 = *((unsigned int *)t22);
    t53 = *((unsigned int *)t43);
    t54 = (t52 & t53);
    *((unsigned int *)t51) = t54;
    t55 = (t22 + 4);
    t56 = (t43 + 4);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB35:    *((unsigned int *)t34) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t43) = 1;
    goto LAB42;

LAB41:    t50 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB42;

LAB43:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t51) = (t63 | t64);
    t65 = (t22 + 4);
    t66 = (t43 + 4);
    t67 = *((unsigned int *)t22);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t13 = (t68 & t70);
    t75 = (t72 & t74);
    t76 = (~(t13));
    t77 = (~(t75));
    t78 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t78 & t76);
    t79 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t79 & t77);
    t80 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t80 & t76);
    t81 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t81 & t77);
    goto LAB45;

LAB46:    xsi_set_current_line(37, ng0);

LAB49:    xsi_set_current_line(38, ng0);
    t88 = (t0 + 3208);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng2)));
    memset(t92, 0, 8);
    xsi_vlog_unsigned_add(t92, 32, t90, 5, t91, 32);
    t93 = (t0 + 3208);
    xsi_vlogvar_assign_value(t93, t92, 0, 0, 5);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t23 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t23);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB53;

LAB50:    if (t19 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t14) = 1;

LAB53:    t30 = (t14 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t23 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t23);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB61;

LAB58:    if (t19 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t14) = 1;

LAB61:    t30 = (t14 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB62;

LAB63:
LAB64:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t23 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t23);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB69;

LAB66:    if (t19 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t14) = 1;

LAB69:    t30 = (t14 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB48;

LAB52:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(41, ng0);

LAB57:    xsi_set_current_line(42, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 3208);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 5);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t11, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 5);
    goto LAB56;

LAB60:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(47, ng0);

LAB65:    xsi_set_current_line(48, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 3048);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 5);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t11, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 5);
    goto LAB64;

LAB68:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(54, ng0);

LAB73:    xsi_set_current_line(55, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 2888);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 5);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t11, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 5);
    goto LAB72;

}


extern void work_m_00000000001216894168_2582214024_init()
{
	static char *pe[] = {(void *)Always_22_0};
	xsi_register_didat("work_m_00000000001216894168_2582214024", "isim/top_tb_isim_beh.exe.sim/work/m_00000000001216894168_2582214024.didat");
	xsi_register_executes(pe);
}
