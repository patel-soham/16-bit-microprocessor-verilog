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
static const char *ng0 = "D:/Final_Year_Project/EC_448_Major_Project/Memory.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static const char *ng4 = "code.txt";
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {0U, 65535U};
static const char *ng7 = "";
static const char *ng8 = "data_out = %h mem[addr] = %h addr = %h ";
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};
static const char *ng11 = "data_in = %h mem[addr] = %h addr = %h ";



static void Initial_53_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(53, ng0);

LAB2:    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2952);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2632);
    xsi_vlogfile_readmemh(ng4, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2792);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2632);
    t16 = (t0 + 2632);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2632);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2952);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2952);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 2952);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Cont_62_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t9[8];
    char t23[8];
    char t26[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1752U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t2))
        goto LAB6;

LAB4:    t7 = (t5 + 4);
    t8 = (t2 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB6:    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t10) != 0)
        goto LAB9;

LAB10:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB11;

LAB12:    memcpy(t34, t9, 8);

LAB13:    memset(t4, 0, 8);
    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t66) != 0)
        goto LAB26;

LAB27:    t73 = (t4 + 4);
    t74 = *((unsigned int *)t4);
    t75 = *((unsigned int *)t73);
    t76 = (t74 || t75);
    if (t76 > 0)
        goto LAB28;

LAB29:    t80 = *((unsigned int *)t4);
    t81 = (~(t80));
    t82 = *((unsigned int *)t73);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t73) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t4) > 0)
        goto LAB34;

LAB35:    memcpy(t3, t84, 8);

LAB36:    t85 = (t0 + 4784);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memset(t89, 0, 8);
    t90 = 65535U;
    t91 = t90;
    t92 = (t3 + 4);
    t93 = *((unsigned int *)t3);
    t90 = (t90 & t93);
    t94 = *((unsigned int *)t92);
    t91 = (t91 & t94);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t96 | t90);
    t97 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t97 | t91);
    xsi_driver_vfirst_trans(t85, 0, 15);
    t98 = (t0 + 4688);
    *((int *)t98) = 1;

LAB1:    return;
LAB7:    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB10;

LAB11:    t21 = (t0 + 1912U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng2)));
    memset(t23, 0, 8);
    if (*((unsigned int *)t22) != *((unsigned int *)t21))
        goto LAB16;

LAB14:    t24 = (t22 + 4);
    t25 = (t21 + 4);
    if (*((unsigned int *)t24) != *((unsigned int *)t25))
        goto LAB16;

LAB15:    *((unsigned int *)t23) = 1;

LAB16:    memset(t26, 0, 8);
    t27 = (t23 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB20:    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t9 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t9 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t9);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB23;

LAB24:    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB26:    t72 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB27;

LAB28:    t77 = (t0 + 2792);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    goto LAB29;

LAB30:    t84 = ((char*)((ng6)));
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t3, 16, t79, 16, t84, 16);
    goto LAB36;

LAB34:    memcpy(t3, t79, 8);
    goto LAB36;

}

static void Always_64_2(char *t0)
{
    char t4[8];
    char t11[8];
    char t19[8];
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4704);
    *((int *)t2) = 1;
    t3 = (t0 + 4400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    t5 = (t0 + 1912U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);

LAB16:    xsi_set_current_line(67, ng0);
    t9 = ((char*)((ng6)));
    t10 = (t0 + 2792);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB15;

LAB9:    xsi_set_current_line(69, ng0);

LAB17:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t11, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t3))
        goto LAB19;

LAB18:    t6 = (t5 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB19;

LAB20:    t9 = (t11 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB23:    xsi_set_current_line(74, ng0);
    t2 = xsi_vlog_time(t28, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng7, 2, t0, (char)118, t28, 64);
    t3 = (t0 + 2792);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2632);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t17 = (t0 + 2632);
    t18 = (t17 + 72U);
    t20 = *((char **)t18);
    t21 = (t0 + 2632);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2072U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t11, 16, t10, t20, t23, 2, 1, t25, 16, 2);
    t24 = (t0 + 2072U);
    t26 = *((char **)t24);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)118, t6, 16, (char)118, t11, 16, (char)118, t26, 16);
    goto LAB15;

LAB11:    xsi_set_current_line(76, ng0);

LAB24:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB15;

LAB13:    xsi_set_current_line(79, ng0);

LAB25:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2232U);
    t5 = *((char **)t3);
    t3 = (t0 + 2632);
    t6 = (t0 + 2632);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = (t0 + 2632);
    t17 = (t10 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 2072U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t11, t19, t9, t18, 2, 1, t21, 16, 2);
    t20 = (t11 + 4);
    t12 = *((unsigned int *)t20);
    t29 = (!(t12));
    t22 = (t19 + 4);
    t13 = *((unsigned int *)t22);
    t30 = (!(t13));
    t31 = (t29 && t30);
    if (t31 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(81, ng0);
    t2 = xsi_vlog_time(t28, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng7, 2, t0, (char)118, t28, 64);
    t3 = (t0 + 2232U);
    t5 = *((char **)t3);
    t3 = (t0 + 2632);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 2632);
    t10 = (t9 + 72U);
    t17 = *((char **)t10);
    t18 = (t0 + 2632);
    t20 = (t18 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2072U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_array_select_value(t11, 16, t7, t17, t21, 2, 1, t23, 16, 2);
    t22 = (t0 + 2072U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng11, 4, t0, (char)118, t5, 16, (char)118, t11, 16, (char)118, t24, 16);
    goto LAB15;

LAB19:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(71, ng0);
    t10 = (t0 + 2632);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 2632);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2632);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2072U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t19, 16, t18, t22, t25, 2, 1, t27, 16, 2);
    t26 = (t0 + 2792);
    xsi_vlogvar_assign_value(t26, t19, 0, 0, 16);
    goto LAB23;

LAB26:    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t19);
    t32 = (t14 - t15);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t3, t5, 0, *((unsigned int *)t19), t33);
    goto LAB27;

}


extern void work_m_00000000002638181342_2321183677_init()
{
	static char *pe[] = {(void *)Initial_53_0,(void *)Cont_62_1,(void *)Always_64_2};
	xsi_register_didat("work_m_00000000002638181342_2321183677", "isim/TestTopModule_isim_beh.exe.sim/work/m_00000000002638181342_2321183677.didat");
	xsi_register_executes(pe);
}
