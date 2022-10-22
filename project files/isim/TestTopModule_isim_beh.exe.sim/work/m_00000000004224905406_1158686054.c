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
static const char *ng0 = "D:/Final_Year_Project/EC_448_Major_Project/FlagRegister.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};



static void Initial_48_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(48, ng0);

LAB2:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char t6[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t19;
    int t20;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB8;

LAB6:    t7 = (t5 + 4);
    t8 = (t4 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB8:    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 0);
    t17 = (t14 & 1);
    *((unsigned int *)t2) = t17;
    t5 = (t0 + 1768);
    t7 = (t0 + 1768);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t15, 32, 1);
    t16 = (t18 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 1);
    t17 = (t14 & 1);
    *((unsigned int *)t2) = t17;
    t5 = (t0 + 1768);
    t7 = (t0 + 1768);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t15, 32, 1);
    t16 = (t18 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 2);
    t12 = (t11 & 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 2);
    t17 = (t14 & 1);
    *((unsigned int *)t2) = t17;
    t5 = (t0 + 1768);
    t7 = (t0 + 1768);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t15, 32, 1);
    t16 = (t18 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 3);
    t17 = (t14 & 1);
    *((unsigned int *)t2) = t17;
    t5 = (t0 + 1768);
    t7 = (t0 + 1768);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t15, 32, 1);
    t16 = (t18 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 4);
    t12 = (t11 & 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 4);
    t17 = (t14 & 1);
    *((unsigned int *)t2) = t17;
    t5 = (t0 + 1768);
    t7 = (t0 + 1768);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t15, 32, 1);
    t16 = (t18 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 5);
    t12 = (t11 & 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 5);
    t17 = (t14 & 1);
    *((unsigned int *)t2) = t17;
    t5 = (t0 + 1768);
    t7 = (t0 + 1768);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t15, 32, 1);
    t16 = (t18 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB23;

LAB24:    goto LAB2;

LAB9:    xsi_set_current_line(53, ng0);

LAB12:    xsi_set_current_line(54, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 6, 0LL);
    goto LAB11;

LAB13:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB14;

LAB15:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB16;

LAB17:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB18;

LAB19:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB20;

LAB21:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB22;

LAB23:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB24;

}


extern void work_m_00000000004224905406_1158686054_init()
{
	static char *pe[] = {(void *)Initial_48_0,(void *)Always_52_1};
	xsi_register_didat("work_m_00000000004224905406_1158686054", "isim/TestTopModule_isim_beh.exe.sim/work/m_00000000004224905406_1158686054.didat");
	xsi_register_executes(pe);
}
