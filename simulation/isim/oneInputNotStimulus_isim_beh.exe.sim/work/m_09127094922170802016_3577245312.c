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
static const char *ng0 = "A";
static const char *ng1 = "Z";
static const char *ng2 = "_A";
static const char *ng3 = "_Z";
static const char *ng4 = "check";
static const char *ng5 = "f";
static const char *ng6 = "detectFault";
static const char *ng7 = "/home/kid-116/Desktop/DDS-MiniProject/simulation/oneInputNotStimulus.v";
static const char *ng8 = "";
static const char *ng9 = "Actual I/Os";
static const char *ng10 = "A=%1d, Z=%1d";
static const char *ng11 = "Ideal I/Os";
static const char *ng12 = "_A=%1d, _Z=%1d";
static const char *ng13 = "Fault detected!";
static int ng14[] = {0, 0};
static int ng15[] = {1, 0};
static int ng16[] = {2, 0};
static const char *ng17 = "\n";
static const char *ng18 = "Z is stuck at 0 and A may also have faults or A is Sa1";
static const char *ng19 = "Z is stuck at 1 and A may also have faults or A is Sa0";
static const char *ng20 = "All OK!";

static void NetReassign_48_1(char *);
static void NetReassign_49_2(char *);
static void NetReassign_53_3(char *);


static void check_varinit(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
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

LAB0:    t1 = (t0 + 96U);
    t2 = *((char **)t1);
    t3 = (t2 + 0U);
    t4 = (t0 + 80U);
    t5 = *((char **)t4);
    xsi_vlogvar_initialize(t3, ng0, 0, 31, 0, 0, t5, 0, 1, 0);
    t6 = (t0 + 96U);
    t7 = *((char **)t6);
    t8 = (t7 + 160U);
    t9 = (t0 + 80U);
    t10 = *((char **)t9);
    xsi_vlogvar_initialize(t8, ng1, 0, 31, 0, 0, t10, 0, 1, 0);
    t11 = (t0 + 96U);
    t12 = *((char **)t11);
    t13 = (t12 + 320U);
    t14 = (t0 + 80U);
    t15 = *((char **)t14);
    xsi_vlogvar_initialize(t13, ng2, 0, 31, 0, 0, t15, 0, 1, 0);
    t16 = (t0 + 96U);
    t17 = *((char **)t16);
    t18 = (t17 + 480U);
    t19 = (t0 + 80U);
    t20 = *((char **)t19);
    xsi_vlogvar_initialize(t18, ng3, 0, 31, 0, 0, t20, 0, 1, 0);
    t21 = (t0 + 96U);
    t22 = *((char **)t21);
    t23 = (t22 + 640U);
    t24 = (t0 + 80U);
    t25 = *((char **)t24);
    xsi_vlogvar_initialize(t23, ng4, 0, 31, 0, 0, t25, 0, 1, 0);

LAB1:    return;
}

static void detectFault_varinit(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 96U);
    t2 = *((char **)t1);
    t3 = (t2 + 0U);
    t4 = (t0 + 80U);
    t5 = *((char **)t4);
    xsi_vlogvar_initialize(t3, ng5, 0, 31, 0, 0, t5, 0, 1, 0);
    t6 = (t0 + 96U);
    t7 = *((char **)t6);
    t8 = (t7 + 160U);
    t9 = (t0 + 80U);
    t10 = *((char **)t9);
    xsi_vlogvar_initialize(t8, ng6, 0, 31, 0, 0, t10, 0, 1, 0);

LAB1:    return;
}

static int sp_check(char *t1, char *t2)
{
    char t14[8];
    char t21[8];
    char t28[8];
    char t29[8];
    char t37[8];
    char t79[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;

LAB0:    t0 = 1;
    xsi_set_current_line(78, ng7);

LAB2:    xsi_set_current_line(79, ng7);
    t3 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t3);
    xsi_set_current_line(80, ng7);
    t3 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t3);
    xsi_set_current_line(81, ng7);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 0U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 96U);
    t9 = *((char **)t8);
    t10 = (t9 + 160U);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t13, (char)119, t7, 32, (char)119, t12, 32);
    xsi_set_current_line(82, ng7);
    t3 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t3);
    xsi_set_current_line(83, ng7);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 320U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 96U);
    t9 = *((char **)t8);
    t10 = (t9 + 480U);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t13, (char)119, t7, 32, (char)119, t12, 32);
    xsi_set_current_line(84, ng7);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 160U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 96U);
    t9 = *((char **)t8);
    t10 = (t9 + 480U);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    xsi_vlog_signed_not_equal(t14, 32, t7, 32, t12, 32);
    t13 = (t14 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB3;

LAB4:
LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(84, ng7);

LAB6:    xsi_set_current_line(85, ng7);
    t20 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t20);
    xsi_set_current_line(86, ng7);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 320U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng14)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 32, t7, 32, t8, 32);
    memset(t21, 0, 8);
    t9 = (t14 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t9) != 0)
        goto LAB9;

LAB10:    t11 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB11;

LAB12:    memcpy(t37, t21, 8);

LAB13:    t69 = (t37 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t37);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(90, ng7);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 320U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng15)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 32, t7, 32, t8, 32);
    memset(t21, 0, 8);
    t9 = (t14 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t9) != 0)
        goto LAB27;

LAB28:    t11 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB29;

LAB30:    memcpy(t37, t21, 8);

LAB31:    t69 = (t37 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t37);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB39;

LAB40:
LAB41:
LAB23:    goto LAB5;

LAB7:    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB9:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB10;

LAB11:    t12 = (t2 + 96U);
    t13 = *((char **)t12);
    t20 = (t13 + 160U);
    t25 = (t20 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng14)));
    memset(t28, 0, 8);
    xsi_vlog_signed_equal(t28, 32, t26, 32, t27, 32);
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t30) != 0)
        goto LAB16;

LAB17:    t38 = *((unsigned int *)t21);
    t39 = *((unsigned int *)t29);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t21 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB18;

LAB19:
LAB20:    goto LAB13;

LAB14:    *((unsigned int *)t29) = 1;
    goto LAB17;

LAB16:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB17;

LAB18:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t21 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t21);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t67 & t63);
    t68 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t68 & t64);
    goto LAB20;

LAB21:    xsi_set_current_line(86, ng7);

LAB24:    xsi_set_current_line(87, ng7);
    t75 = (t1 + 2792);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng15)));
    memset(t79, 0, 8);
    xsi_vlog_signed_add(t79, 32, t77, 32, t78, 32);
    t80 = (t1 + 2792);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 32);
    goto LAB23;

LAB25:    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB27:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB28;

LAB29:    t12 = (t2 + 96U);
    t13 = *((char **)t12);
    t20 = (t13 + 160U);
    t25 = (t20 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng15)));
    memset(t28, 0, 8);
    xsi_vlog_signed_equal(t28, 32, t26, 32, t27, 32);
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t30) != 0)
        goto LAB34;

LAB35:    t38 = *((unsigned int *)t21);
    t39 = *((unsigned int *)t29);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t21 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB31;

LAB32:    *((unsigned int *)t29) = 1;
    goto LAB35;

LAB34:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB35;

LAB36:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t21 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t21);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t67 & t63);
    t68 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t68 & t64);
    goto LAB38;

LAB39:    xsi_set_current_line(90, ng7);

LAB42:    xsi_set_current_line(91, ng7);
    t75 = (t1 + 2792);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng16)));
    memset(t79, 0, 8);
    xsi_vlog_signed_add(t79, 32, t77, 32, t78, 32);
    t80 = (t1 + 2792);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 32);
    goto LAB41;

}

static int sp_detectFault(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t0 = 1;
    xsi_set_current_line(100, ng7);

LAB2:    xsi_set_current_line(101, ng7);
    t3 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t3);
    xsi_set_current_line(103, ng7);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 0U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t7, 32, t8, 32);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(107, ng7);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 0U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng16)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t7, 32, t8, 32);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(110, ng7);

LAB11:    xsi_set_current_line(111, ng7);
    t3 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t3);

LAB9:
LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(103, ng7);

LAB6:    xsi_set_current_line(104, ng7);
    t16 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t16);
    goto LAB5;

LAB7:    xsi_set_current_line(107, ng7);

LAB10:    xsi_set_current_line(108, ng7);
    t16 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t16);
    goto LAB9;

}

static void Initial_45_0(char *t0)
{
    char t6[8];
    char t9[8];
    char t12[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng7);

LAB4:    xsi_set_current_line(48, ng7);
    t2 = (t0 + 2632);
    xsi_set_forcedflag(t2);
    t3 = (t0 + 6592);
    *((int *)t3) = 1;
    NetReassign_48_1(t0);
    xsi_set_current_line(49, ng7);
    t2 = (t0 + 6596);
    memset(t2, -1, 4);
    t4 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t4 & 1U);
    NetReassign_49_2(t0);
    xsi_set_current_line(53, ng7);
    t2 = (t0 + 2312);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 6600);
    *((int *)t3) = 1;
    NetReassign_53_3(t0);
    xsi_set_current_line(56, ng7);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng7);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng7);
    t2 = (t0 + 3512);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(59, ng7);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t6, t5, 8);
    t7 = (t0 + 1912U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 8);
    t7 = (t0 + 2472);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t12, t11, 8);
    t13 = (t0 + 2312);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t16, t15, 8);
    t17 = (t0 + 3512);
    t18 = (t0 + 848);
    t19 = xsi_create_subprogram_invocation(t17, 0, t0, t18, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t18, t19);
    t20 = (t19 + 96U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    t23 = (t19 + 96U);
    t24 = *((char **)t23);
    t25 = (t24 + 160U);
    xsi_vlogvar_assign_value(t25, t9, 0, 0, 32);
    t26 = (t19 + 96U);
    t27 = *((char **)t26);
    t28 = (t27 + 320U);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 32);
    t29 = (t19 + 96U);
    t30 = *((char **)t29);
    t31 = (t30 + 480U);
    xsi_vlogvar_assign_value(t31, t16, 0, 0, 32);

LAB8:    t32 = (t0 + 3608);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t40 = ((int  (*)(char *, char *))t39)(t0, t33);

LAB10:    if (t40 != 0)
        goto LAB11;

LAB6:    t33 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t41 = (t0 + 3608);
    t42 = *((char **)t41);
    t41 = (t0 + 848);
    t43 = (t0 + 3512);
    t44 = 0;
    xsi_delete_subprogram_invocation(t41, t42, t0, t43, t44);
    xsi_set_current_line(62, ng7);
    t2 = (t0 + 3512);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t32 = (t0 + 3704U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(63, ng7);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng7);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng7);
    t2 = (t0 + 3512);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(66, ng7);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t6, t5, 8);
    t7 = (t0 + 1912U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 8);
    t7 = (t0 + 2472);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t12, t11, 8);
    t13 = (t0 + 2312);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t16, t15, 8);
    t17 = (t0 + 3512);
    t18 = (t0 + 848);
    t19 = xsi_create_subprogram_invocation(t17, 0, t0, t18, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t18, t19);
    t20 = (t19 + 96U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    t23 = (t19 + 96U);
    t24 = *((char **)t23);
    t25 = (t24 + 160U);
    xsi_vlogvar_assign_value(t25, t9, 0, 0, 32);
    t26 = (t19 + 96U);
    t27 = *((char **)t26);
    t28 = (t27 + 320U);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 32);
    t29 = (t19 + 96U);
    t30 = *((char **)t29);
    t31 = (t30 + 480U);
    xsi_vlogvar_assign_value(t31, t16, 0, 0, 32);

LAB16:    t32 = (t0 + 3608);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t40 = ((int  (*)(char *, char *))t39)(t0, t33);

LAB18:    if (t40 != 0)
        goto LAB19;

LAB14:    t33 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB15:    t41 = (t0 + 3608);
    t42 = *((char **)t41);
    t41 = (t0 + 848);
    t43 = (t0 + 3512);
    t44 = 0;
    xsi_delete_subprogram_invocation(t41, t42, t0, t43, t44);
    xsi_set_current_line(68, ng7);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 3512);
    t8 = (t0 + 1280);
    t10 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t10);
    t11 = (t10 + 96U);
    t13 = *((char **)t11);
    t14 = (t13 + 0U);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 32);

LAB22:    t15 = (t0 + 3608);
    t17 = *((char **)t15);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t40 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB24:    if (t40 != 0)
        goto LAB25;

LAB20:    t17 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t17);

LAB21:    t24 = (t0 + 3608);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 3512);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    goto LAB1;

LAB17:;
LAB19:    t32 = (t0 + 3704U);
    *((char **)t32) = &&LAB16;
    goto LAB1;

LAB23:;
LAB25:    t15 = (t0 + 3704U);
    *((char **)t15) = &&LAB22;
    goto LAB1;

}

static void NetReassign_48_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng7);
    t3 = 0;
    t2 = ((char*)((ng15)));
    t4 = (t0 + 6592);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2632);
    xsi_vlogvar_forcevalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_49_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 4200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng7);
    t3 = 0;
    t2 = ((char*)((ng15)));
    t4 = (t0 + 6596);
    t5 = (t0 + 6596);
    memset(t6, 0, 4);
    t7 = memcmp(t5, t6, 4);
    if (t7 != 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t8 = (t0 + 4848);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 1U;
    t14 = t13;
    t15 = (t2 + 4);
    t16 = *((unsigned int *)t2);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    t21 = (t0 + 4008);
    xsi_driver_vforce_trans_indexed(t8, 0, 0, t4, t21);
    t3 = 1;
    goto LAB5;

}

static void NetReassign_53_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng7);
    t3 = 0;
    t2 = (t0 + 2472);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t7) == 0)
        goto LAB4;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 6600);
    if (*((int *)t24) > 0)
        goto LAB10;

LAB11:    if (t3 > 0)
        goto LAB12;

LAB13:    t27 = (t0 + 4768);
    *((int *)t27) = 0;

LAB14:
LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t25 = (t0 + 2312);
    xsi_vlogvar_assignassignvalue(t25, t4, 0, 0, 0, 1, ((int*)(t24)));
    t3 = 1;
    goto LAB11;

LAB12:    t26 = (t0 + 4768);
    *((int *)t26) = 1;
    goto LAB14;

}


extern void work_m_09127094922170802016_3577245312_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)NetReassign_48_1,(void *)NetReassign_49_2,(void *)NetReassign_53_3};
	static char *se[] = {(void *)sp_check,(void *)sp_detectFault};
	xsi_register_didat("work_m_09127094922170802016_3577245312", "isim/oneInputNotStimulus_isim_beh.exe.sim/work/m_09127094922170802016_3577245312.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_subprogram_init(1, (void *)check_varinit);
	xsi_register_subprogram_init(2, (void *)detectFault_varinit);
}
