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
static const char *ng0 = "D:/Final_Year_Project/EC_448_Major_Project/ProgramCounter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 65535U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Initial_51_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(51, ng0);

LAB2:    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2816);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2976);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_57_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1936U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t2))
        goto LAB6;

LAB4:    t7 = (t5 + 4);
    t8 = (t2 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB6:    memset(t4, 0, 8);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t9) != 0)
        goto LAB9;

LAB10:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB11;

LAB12:    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t16) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t27, 8);

LAB19:    t28 = (t0 + 4808);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t32, 0, 8);
    t33 = 65535U;
    t34 = t33;
    t35 = (t3 + 4);
    t36 = *((unsigned int *)t3);
    t33 = (t33 & t36);
    t37 = *((unsigned int *)t35);
    t34 = (t34 & t37);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 | t33);
    t40 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t40 | t34);
    xsi_driver_vfirst_trans(t28, 0, 15);
    t41 = (t0 + 4712);
    *((int *)t41) = 1;

LAB1:    return;
LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB10;

LAB11:    t20 = (t0 + 2816);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    goto LAB12;

LAB13:    t27 = ((char*)((ng3)));
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 16, t22, 16, t27, 16);
    goto LAB19;

LAB17:    memcpy(t3, t22, 8);
    goto LAB19;

}

static void Always_59_2(char *t0)
{
    char t4[8];
    char t14[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4728);
    *((int *)t2) = 1;
    t3 = (t0 + 4424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 1616U);
    t6 = *((char **)t5);
    t5 = (t0 + 2096U);
    t7 = *((char **)t5);
    t5 = (t0 + 1776U);
    t8 = *((char **)t5);
    xsi_vlogtype_concat(t4, 3, 3, 3U, t8, 1, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);

LAB24:    xsi_set_current_line(62, ng0);
    t10 = (t0 + 2816);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 2816);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 16);
    goto LAB23;

LAB9:    xsi_set_current_line(64, ng0);

LAB25:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2816);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t6, 16, t7, 32);
    t8 = (t0 + 2816);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 16);
    goto LAB23;

LAB11:    xsi_set_current_line(67, ng0);

LAB26:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2256U);
    t5 = *((char **)t3);
    t3 = (t0 + 2816);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 16);
    goto LAB23;

LAB13:    xsi_set_current_line(70, ng0);

LAB27:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 2416U);
    t5 = *((char **)t3);
    t3 = (t0 + 2256U);
    t6 = *((char **)t3);
    memset(t14, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB30;

LAB28:    t3 = (t5 + 4);
    t7 = (t6 + 4);
    if (*((unsigned int *)t3) != *((unsigned int *)t7))
        goto LAB30;

LAB29:    *((unsigned int *)t14) = 1;

LAB30:    t8 = (t14 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = (t0 + 2816);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);

LAB33:    goto LAB23;

LAB15:    xsi_set_current_line(77, ng0);

LAB34:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2816);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB23;

LAB17:    xsi_set_current_line(80, ng0);

LAB35:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2816);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB23;

LAB19:    xsi_set_current_line(83, ng0);

LAB36:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2816);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB23;

LAB21:    xsi_set_current_line(86, ng0);

LAB37:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2816);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB23;

LAB31:    xsi_set_current_line(72, ng0);
    t10 = (t0 + 2816);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t12, 16, t13, 32);
    t21 = (t0 + 2816);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 16);
    goto LAB33;

}


extern void work_m_00000000004170635664_1957175458_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Cont_57_1,(void *)Always_59_2};
	xsi_register_didat("work_m_00000000004170635664_1957175458", "isim/TestTopModule_isim_beh.exe.sim/work/m_00000000004170635664_1957175458.didat");
	xsi_register_executes(pe);
}
