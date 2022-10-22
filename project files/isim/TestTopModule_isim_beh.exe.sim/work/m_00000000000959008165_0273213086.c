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
static const char *ng0 = "D:/Final_Year_Project/EC_448_Major_Project/Register.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Initial_45_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(45, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2336);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_49_1(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3824);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1776U);
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

LAB10:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB14;

LAB12:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB14;

LAB13:    *((unsigned int *)t6) = 1;

LAB14:    t7 = (t6 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);

LAB17:
LAB11:    goto LAB2;

LAB9:    xsi_set_current_line(51, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 16, 0LL);
    goto LAB11;

LAB15:    xsi_set_current_line(54, ng0);
    t8 = (t0 + 1936U);
    t9 = *((char **)t8);
    t8 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 16, 0LL);
    goto LAB17;

}


extern void work_m_00000000000959008165_0273213086_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Always_49_1};
	xsi_register_didat("work_m_00000000000959008165_0273213086", "isim/TestTopModule_isim_beh.exe.sim/work/m_00000000000959008165_0273213086.didat");
	xsi_register_executes(pe);
}
