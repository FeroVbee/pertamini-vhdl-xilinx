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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Febby Ronaldo/Documents/Rangkaian Logika 2/VHDL data/Postest2/percobaan.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_3620187407_sub_2599119909_3965413181(char *, int , char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3443372708_3212880686_p_0(char *t0)
{
    char t23[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14};

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 752U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2620);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2664);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(14U);
    memset(t1, 0, 14U);
    t2 = t1;
    memset(t2, (unsigned char)2, 14U);
    t5 = (t0 + 2700);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 14U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1144U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t12);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 592U);
    t8 = *((char **)t7);
    t14 = (0 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t7 = (t8 + t17);
    t18 = *((unsigned char *)t7);
    t19 = (t18 == (unsigned char)3);
    if (t19 == 1)
        goto LAB18;

LAB19:    t13 = (unsigned char)0;

LAB20:    if (t13 != 0)
        goto LAB15;

LAB17:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t14 = (1 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t4 = *((unsigned char *)t1);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB25;

LAB26:    t3 = (unsigned char)0;

LAB27:    if (t3 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB32;

LAB33:    t3 = (unsigned char)0;

LAB34:    if (t3 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2664);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB16:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t14 = (0 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 592U);
    t6 = *((char **)t5);
    t35 = (1 - 1);
    t27 = (t35 * -1);
    t28 = (1U * t27);
    t36 = (0 + t28);
    t5 = (t6 + t36);
    t4 = *((unsigned char *)t5);
    t10 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t4);
    t7 = (t0 + 868U);
    t8 = *((char **)t7);
    t11 = *((unsigned char *)t8);
    t12 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t11);
    t7 = (t0 + 2808);
    t9 = (t7 + 32U);
    t20 = *((char **)t9);
    t24 = (t20 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t12;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 2736);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 14U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB10;

LAB12:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 5520U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t14 > 255);
    if (t3 != 0)
        goto LAB35;

LAB37:
LAB36:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2664);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t1 = (t0 + 5520U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t5 = (t0 + 1236U);
    t6 = *((char **)t5);
    t5 = (t0 + 5520U);
    t3 = ieee_p_3620187407_sub_2599119909_3965413181(IEEE_P_3620187407, t14, t6, t5);
    if (t3 != 0)
        goto LAB38;

LAB40:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB41;

LAB42:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2664);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB39:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t1 = (t0 + 2736);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 14U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB10;

LAB14:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2772);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 5536U);
    t5 = (t0 + 1868U);
    t6 = *((char **)t5);
    t5 = (t0 + 5552U);
    t3 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2664);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 5536U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t2, t1, 1);
    t6 = (t23 + 12U);
    t15 = *((unsigned int *)t6);
    t16 = (1U * t15);
    t3 = (5U != t16);
    if (t3 == 1)
        goto LAB48;

LAB49:    t7 = (t0 + 2916);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t20 = (t9 + 40U);
    t24 = *((char **)t20);
    memcpy(t24, t5, 5U);
    xsi_driver_first_trans_fast(t7);

LAB46:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2952);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(34, ng0);
    t9 = (t0 + 1236U);
    t24 = *((char **)t9);
    t9 = (t0 + 5520U);
    t25 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t24, t9, 1);
    t26 = (t23 + 12U);
    t27 = *((unsigned int *)t26);
    t28 = (1U * t27);
    t29 = (14U != t28);
    if (t29 == 1)
        goto LAB21;

LAB22:    t30 = (t0 + 2700);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    memcpy(t34, t25, 14U);
    xsi_driver_first_trans_fast(t30);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 2736);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 14U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2664);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB18:    t9 = (t0 + 1420U);
    t20 = *((char **)t9);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)2);
    t13 = t22;
    goto LAB20;

LAB21:    xsi_size_not_matching(14U, t28, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 1236U);
    t7 = *((char **)t5);
    t5 = (t0 + 5520U);
    t8 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t7, t5, 10);
    t9 = (t23 + 12U);
    t27 = *((unsigned int *)t9);
    t28 = (1U * t27);
    t13 = (14U != t28);
    if (t13 == 1)
        goto LAB28;

LAB29:    t20 = (t0 + 2700);
    t24 = (t20 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t30 = *((char **)t26);
    memcpy(t30, t8, 14U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 2736);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 14U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 2772);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2664);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB25:    t5 = (t0 + 1420U);
    t6 = *((char **)t5);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB27;

LAB28:    xsi_size_not_matching(14U, t28, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1236U);
    t6 = *((char **)t1);
    t1 = (t0 + 2736);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t20 = *((char **)t9);
    memcpy(t20, t6, 14U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2664);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB32:    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB34;

LAB35:    xsi_set_current_line(44, ng0);
    t5 = xsi_get_transient_memory(14U);
    memset(t5, 0, 14U);
    t6 = t5;
    memset(t6, (unsigned char)2, 14U);
    t7 = (t0 + 2700);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t20 = (t9 + 40U);
    t24 = *((char **)t20);
    memcpy(t24, t5, 14U);
    xsi_driver_first_trans_fast(t7);
    goto LAB36;

LAB38:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 1236U);
    t8 = *((char **)t7);
    t7 = (t0 + 2844);
    t9 = (t7 + 32U);
    t20 = *((char **)t9);
    t24 = (t20 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t8, 14U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2664);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB41:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1328U);
    t5 = *((char **)t1);
    t1 = (t0 + 5520U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t5, t1, 1);
    t7 = (t23 + 12U);
    t15 = *((unsigned int *)t7);
    t16 = (1U * t15);
    t10 = (14U != t16);
    if (t10 == 1)
        goto LAB43;

LAB44:    t8 = (t0 + 2844);
    t9 = (t8 + 32U);
    t20 = *((char **)t9);
    t24 = (t20 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t6, 14U);
    xsi_driver_first_trans_fast(t8);
    goto LAB39;

LAB43:    xsi_size_not_matching(14U, t16, 0);
    goto LAB44;

LAB45:    xsi_set_current_line(58, ng0);
    t7 = (t0 + 1604U);
    t8 = *((char **)t7);
    t4 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t7 = (t0 + 2880);
    t9 = (t7 + 32U);
    t20 = *((char **)t9);
    t24 = (t20 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t10;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 2916);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB46;

LAB48:    xsi_size_not_matching(5U, t16, 0);
    goto LAB49;

}


extern void work_a_3443372708_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3443372708_3212880686_p_0};
	xsi_register_didat("work_a_3443372708_3212880686", "isim/pertamini_TB_isim_beh.exe.sim/work/a_3443372708_3212880686.didat");
	xsi_register_executes(pe);
}
