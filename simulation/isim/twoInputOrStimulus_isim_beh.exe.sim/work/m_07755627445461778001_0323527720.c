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
static const char *ng1 = "B";
static const char *ng2 = "Z";
static const char *ng3 = "_A";
static const char *ng4 = "_B";
static const char *ng5 = "_Z";
static const char *ng6 = "check";
static const char *ng7 = "f";
static const char *ng8 = "detectFault";
static const char *ng9 = "/home/kid-116/Desktop/DDS-MiniProject/simulation/twoInputOrStimulus.v";
static const char *ng10 = "";
static const char *ng11 = "Actual I/Os";
static const char *ng12 = "A=%1d, B=%1d, Z=%1d";
static const char *ng13 = "Ideal I/Os";
static const char *ng14 = "_A=%1d, _B=%1d, _Z=%1d";
static const char *ng15 = "Fault detected!";
static int ng16[] = {0, 0};
static int ng17[] = {1, 0};
static int ng18[] = {2, 0};
static int ng19[] = {3, 0};
static int ng20[] = {4, 0};
static const char *ng21 = "\n";
static const char *ng22 = "Atleast one of the lines is Sa1 and Z can't be Sa0";
static const char *ng23 = "B is having Sa0 fault";
static const char *ng24 = "A is Sa0";
static const char *ng25 = "Both A and B are Sa0 or atleast Z is Sa0";
static const char *ng26 = "All OK!";

static void NetReassign_54_1(char *);
static void NetReassign_55_2(char *);
static void NetReassign_58_3(char *);


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
    t26 = (t0 + 96U);
    t27 = *((char **)t26);
    t28 = (t27 + 800U);
    t29 = (t0 + 80U);
    t30 = *((char **)t29);
    xsi_vlogvar_initialize(t28, ng5, 0, 31, 0, 0, t30, 0, 1, 0);
    t31 = (t0 + 96U);
    t32 = *((char **)t31);
    t33 = (t32 + 960U);
    t34 = (t0 + 80U);
    t35 = *((char **)t34);
    xsi_vlogvar_initialize(t33, ng6, 0, 31, 0, 0, t35, 0, 1, 0);

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
    xsi_vlogvar_initialize(t3, ng7, 0, 31, 0, 0, t5, 0, 1, 0);
    t6 = (t0 + 96U);
    t7 = *((char **)t6);
    t8 = (t7 + 160U);
    t9 = (t0 + 80U);
    t10 = *((char **)t9);
    xsi_vlogvar_initialize(t8, ng8, 0, 31, 0, 0, t10, 0, 1, 0);

LAB1:    return;
}

static int sp_check(char *t1, char *t2)
{
    char t19[8];
    char t25[8];
    char t29[8];
    char t30[8];
    char t37[8];
    char t69[8];
    char t87[8];
    char t88[8];
    char t96[8];
    char t138[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
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
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t139;

LAB0:    t0 = 1;
    xsi_set_current_line(105, ng9);

LAB2:    xsi_set_current_line(106, ng9);
    t3 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t3);
    xsi_set_current_line(107, ng9);
    t3 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t3);
    xsi_set_current_line(108, ng9);
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
    t13 = (t2 + 96U);
    t14 = *((char **)t13);
    t15 = (t14 + 320U);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng12, 4, t18, (char)119, t7, 32, (char)119, t12, 32, (char)119, t17, 32);
    xsi_set_current_line(109, ng9);
    t3 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t3);
    xsi_set_current_line(110, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 480U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 96U);
    t9 = *((char **)t8);
    t10 = (t9 + 640U);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 96U);
    t14 = *((char **)t13);
    t15 = (t14 + 800U);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng14, 4, t18, (char)119, t7, 32, (char)119, t12, 32, (char)119, t17, 32);
    xsi_set_current_line(111, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 320U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 96U);
    t9 = *((char **)t8);
    t10 = (t9 + 800U);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    xsi_vlog_signed_not_equal(t19, 32, t7, 32, t12, 32);
    t13 = (t19 + 4);
    t20 = *((unsigned int *)t13);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB3;

LAB4:
LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(111, ng9);

LAB6:    xsi_set_current_line(112, ng9);
    t14 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t14);
    xsi_set_current_line(113, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 480U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng16)));
    memset(t19, 0, 8);
    xsi_vlog_signed_equal(t19, 32, t7, 32, t8, 32);
    memset(t25, 0, 8);
    t9 = (t19 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t9) != 0)
        goto LAB9;

LAB10:    t11 = (t25 + 4);
    t26 = *((unsigned int *)t25);
    t27 = *((unsigned int *)t11);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB11;

LAB12:    memcpy(t37, t25, 8);

LAB13:    memset(t69, 0, 8);
    t70 = (t37 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t37);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t70) != 0)
        goto LAB23;

LAB24:    t77 = (t69 + 4);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB25;

LAB26:    memcpy(t96, t69, 8);

LAB27:    t128 = (t96 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t96);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(117, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 480U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng16)));
    memset(t19, 0, 8);
    xsi_vlog_signed_equal(t19, 32, t7, 32, t8, 32);
    memset(t25, 0, 8);
    t9 = (t19 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t9) != 0)
        goto LAB41;

LAB42:    t11 = (t25 + 4);
    t26 = *((unsigned int *)t25);
    t27 = *((unsigned int *)t11);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB43;

LAB44:    memcpy(t37, t25, 8);

LAB45:    memset(t69, 0, 8);
    t70 = (t37 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t37);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t70) != 0)
        goto LAB55;

LAB56:    t77 = (t69 + 4);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB57;

LAB58:    memcpy(t96, t69, 8);

LAB59:    t128 = (t96 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t96);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(121, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 480U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng17)));
    memset(t19, 0, 8);
    xsi_vlog_signed_equal(t19, 32, t7, 32, t8, 32);
    memset(t25, 0, 8);
    t9 = (t19 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t9) != 0)
        goto LAB73;

LAB74:    t11 = (t25 + 4);
    t26 = *((unsigned int *)t25);
    t27 = *((unsigned int *)t11);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB75;

LAB76:    memcpy(t37, t25, 8);

LAB77:    memset(t69, 0, 8);
    t70 = (t37 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t37);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t70) != 0)
        goto LAB87;

LAB88:    t77 = (t69 + 4);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB89;

LAB90:    memcpy(t96, t69, 8);

LAB91:    t128 = (t96 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t96);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(125, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 480U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng17)));
    memset(t19, 0, 8);
    xsi_vlog_signed_equal(t19, 32, t7, 32, t8, 32);
    memset(t25, 0, 8);
    t9 = (t19 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t9) != 0)
        goto LAB105;

LAB106:    t11 = (t25 + 4);
    t26 = *((unsigned int *)t25);
    t27 = *((unsigned int *)t11);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB107;

LAB108:    memcpy(t37, t25, 8);

LAB109:    memset(t69, 0, 8);
    t70 = (t37 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t37);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t70) != 0)
        goto LAB119;

LAB120:    t77 = (t69 + 4);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB121;

LAB122:    memcpy(t96, t69, 8);

LAB123:    t128 = (t96 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t96);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB131;

LAB132:
LAB133:
LAB101:
LAB69:
LAB37:    goto LAB5;

LAB7:    *((unsigned int *)t25) = 1;
    goto LAB10;

LAB9:    t10 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB10;

LAB11:    t12 = (t2 + 96U);
    t13 = *((char **)t12);
    t14 = (t13 + 640U);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng16)));
    memset(t29, 0, 8);
    xsi_vlog_signed_equal(t29, 32, t16, 32, t17, 32);
    memset(t30, 0, 8);
    t18 = (t29 + 4);
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t18) != 0)
        goto LAB16;

LAB17:    t38 = *((unsigned int *)t25);
    t39 = *((unsigned int *)t30);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t25 + 4);
    t42 = (t30 + 4);
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

LAB14:    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB16:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB17;

LAB18:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t25 + 4);
    t52 = (t30 + 4);
    t53 = *((unsigned int *)t25);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t30);
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

LAB21:    *((unsigned int *)t69) = 1;
    goto LAB24;

LAB23:    t76 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB24;

LAB25:    t81 = (t2 + 96U);
    t82 = *((char **)t81);
    t83 = (t82 + 320U);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng17)));
    memset(t87, 0, 8);
    xsi_vlog_signed_equal(t87, 32, t85, 32, t86, 32);
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t87);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t89) != 0)
        goto LAB30;

LAB31:    t97 = *((unsigned int *)t69);
    t98 = *((unsigned int *)t88);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t100 = (t69 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB27;

LAB28:    *((unsigned int *)t88) = 1;
    goto LAB31;

LAB30:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB31;

LAB32:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t69 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t69);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (~(t114));
    t116 = *((unsigned int *)t88);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t122);
    t125 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB34;

LAB35:    xsi_set_current_line(113, ng9);

LAB38:    xsi_set_current_line(114, ng9);
    t134 = (t1 + 3112);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = ((char*)((ng17)));
    memset(t138, 0, 8);
    xsi_vlog_signed_add(t138, 32, t136, 32, t137, 32);
    t139 = (t1 + 3112);
    xsi_vlogvar_assign_value(t139, t138, 0, 0, 32);
    goto LAB37;

LAB39:    *((unsigned int *)t25) = 1;
    goto LAB42;

LAB41:    t10 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB42;

LAB43:    t12 = (t2 + 96U);
    t13 = *((char **)t12);
    t14 = (t13 + 640U);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng17)));
    memset(t29, 0, 8);
    xsi_vlog_signed_equal(t29, 32, t16, 32, t17, 32);
    memset(t30, 0, 8);
    t18 = (t29 + 4);
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t18) != 0)
        goto LAB48;

LAB49:    t38 = *((unsigned int *)t25);
    t39 = *((unsigned int *)t30);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t25 + 4);
    t42 = (t30 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB45;

LAB46:    *((unsigned int *)t30) = 1;
    goto LAB49;

LAB48:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB49;

LAB50:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t25 + 4);
    t52 = (t30 + 4);
    t53 = *((unsigned int *)t25);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t30);
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
    goto LAB52;

LAB53:    *((unsigned int *)t69) = 1;
    goto LAB56;

LAB55:    t76 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB56;

LAB57:    t81 = (t2 + 96U);
    t82 = *((char **)t81);
    t83 = (t82 + 320U);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng16)));
    memset(t87, 0, 8);
    xsi_vlog_signed_equal(t87, 32, t85, 32, t86, 32);
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t87);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t89) != 0)
        goto LAB62;

LAB63:    t97 = *((unsigned int *)t69);
    t98 = *((unsigned int *)t88);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t100 = (t69 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB59;

LAB60:    *((unsigned int *)t88) = 1;
    goto LAB63;

LAB62:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB63;

LAB64:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t69 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t69);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (~(t114));
    t116 = *((unsigned int *)t88);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t122);
    t125 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB66;

LAB67:    xsi_set_current_line(117, ng9);

LAB70:    xsi_set_current_line(118, ng9);
    t134 = (t1 + 3112);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = ((char*)((ng18)));
    memset(t138, 0, 8);
    xsi_vlog_signed_add(t138, 32, t136, 32, t137, 32);
    t139 = (t1 + 3112);
    xsi_vlogvar_assign_value(t139, t138, 0, 0, 32);
    goto LAB69;

LAB71:    *((unsigned int *)t25) = 1;
    goto LAB74;

LAB73:    t10 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB74;

LAB75:    t12 = (t2 + 96U);
    t13 = *((char **)t12);
    t14 = (t13 + 640U);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng16)));
    memset(t29, 0, 8);
    xsi_vlog_signed_equal(t29, 32, t16, 32, t17, 32);
    memset(t30, 0, 8);
    t18 = (t29 + 4);
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t18) != 0)
        goto LAB80;

LAB81:    t38 = *((unsigned int *)t25);
    t39 = *((unsigned int *)t30);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t25 + 4);
    t42 = (t30 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB77;

LAB78:    *((unsigned int *)t30) = 1;
    goto LAB81;

LAB80:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB81;

LAB82:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t25 + 4);
    t52 = (t30 + 4);
    t53 = *((unsigned int *)t25);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t30);
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
    goto LAB84;

LAB85:    *((unsigned int *)t69) = 1;
    goto LAB88;

LAB87:    t76 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB88;

LAB89:    t81 = (t2 + 96U);
    t82 = *((char **)t81);
    t83 = (t82 + 320U);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng16)));
    memset(t87, 0, 8);
    xsi_vlog_signed_equal(t87, 32, t85, 32, t86, 32);
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t87);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t89) != 0)
        goto LAB94;

LAB95:    t97 = *((unsigned int *)t69);
    t98 = *((unsigned int *)t88);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t100 = (t69 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB91;

LAB92:    *((unsigned int *)t88) = 1;
    goto LAB95;

LAB94:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB95;

LAB96:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t69 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t69);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (~(t114));
    t116 = *((unsigned int *)t88);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t122);
    t125 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB98;

LAB99:    xsi_set_current_line(121, ng9);

LAB102:    xsi_set_current_line(122, ng9);
    t134 = (t1 + 3112);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = ((char*)((ng19)));
    memset(t138, 0, 8);
    xsi_vlog_signed_add(t138, 32, t136, 32, t137, 32);
    t139 = (t1 + 3112);
    xsi_vlogvar_assign_value(t139, t138, 0, 0, 32);
    goto LAB101;

LAB103:    *((unsigned int *)t25) = 1;
    goto LAB106;

LAB105:    t10 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB106;

LAB107:    t12 = (t2 + 96U);
    t13 = *((char **)t12);
    t14 = (t13 + 640U);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng17)));
    memset(t29, 0, 8);
    xsi_vlog_signed_equal(t29, 32, t16, 32, t17, 32);
    memset(t30, 0, 8);
    t18 = (t29 + 4);
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t18) != 0)
        goto LAB112;

LAB113:    t38 = *((unsigned int *)t25);
    t39 = *((unsigned int *)t30);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t25 + 4);
    t42 = (t30 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB109;

LAB110:    *((unsigned int *)t30) = 1;
    goto LAB113;

LAB112:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB113;

LAB114:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t25 + 4);
    t52 = (t30 + 4);
    t53 = *((unsigned int *)t25);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t30);
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
    goto LAB116;

LAB117:    *((unsigned int *)t69) = 1;
    goto LAB120;

LAB119:    t76 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB120;

LAB121:    t81 = (t2 + 96U);
    t82 = *((char **)t81);
    t83 = (t82 + 320U);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng16)));
    memset(t87, 0, 8);
    xsi_vlog_signed_equal(t87, 32, t85, 32, t86, 32);
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t87);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t89) != 0)
        goto LAB126;

LAB127:    t97 = *((unsigned int *)t69);
    t98 = *((unsigned int *)t88);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t100 = (t69 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB128;

LAB129:
LAB130:    goto LAB123;

LAB124:    *((unsigned int *)t88) = 1;
    goto LAB127;

LAB126:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB127;

LAB128:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t69 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t69);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (~(t114));
    t116 = *((unsigned int *)t88);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t122);
    t125 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB130;

LAB131:    xsi_set_current_line(125, ng9);

LAB134:    xsi_set_current_line(126, ng9);
    t134 = (t1 + 3112);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = ((char*)((ng20)));
    memset(t138, 0, 8);
    xsi_vlog_signed_add(t138, 32, t136, 32, t137, 32);
    t139 = (t1 + 3112);
    xsi_vlogvar_assign_value(t139, t138, 0, 0, 32);
    goto LAB133;

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
    xsi_set_current_line(135, ng9);

LAB2:    xsi_set_current_line(136, ng9);
    t3 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t3);
    xsi_set_current_line(138, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 0U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng17)));
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

LAB4:    xsi_set_current_line(142, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 0U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng18)));
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

LAB8:    xsi_set_current_line(146, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 0U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng19)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t7, 32, t8, 32);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(150, ng9);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 0U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng16)));
    memset(t9, 0, 8);
    xsi_vlog_signed_not_equal(t9, 32, t7, 32, t8, 32);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(153, ng9);

LAB19:    xsi_set_current_line(154, ng9);
    t3 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t3);

LAB17:
LAB13:
LAB9:
LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(138, ng9);

LAB6:    xsi_set_current_line(139, ng9);
    t16 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t16);
    goto LAB5;

LAB7:    xsi_set_current_line(142, ng9);

LAB10:    xsi_set_current_line(143, ng9);
    t16 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t16);
    goto LAB9;

LAB11:    xsi_set_current_line(146, ng9);

LAB14:    xsi_set_current_line(147, ng9);
    t16 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t16);
    goto LAB13;

LAB15:    xsi_set_current_line(150, ng9);

LAB18:    xsi_set_current_line(151, ng9);
    t16 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t16);
    goto LAB17;

}

static void Initial_48_0(char *t0)
{
    char t5[8];
    char t9[8];
    char t12[8];
    char t15[8];
    char t19[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
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
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng9);

LAB4:    xsi_set_current_line(54, ng9);
    t2 = (t0 + 2792);
    xsi_set_forcedflag(t2);
    t3 = (t0 + 6952);
    *((int *)t3) = 1;
    NetReassign_54_1(t0);
    xsi_set_current_line(55, ng9);
    t2 = (t0 + 2952);
    xsi_set_forcedflag(t2);
    t3 = (t0 + 6956);
    *((int *)t3) = 1;
    NetReassign_55_2(t0);
    xsi_set_current_line(58, ng9);
    t2 = (t0 + 2312);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 6960);
    *((int *)t3) = 1;
    NetReassign_58_3(t0);
    xsi_set_current_line(61, ng9);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng9);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng9);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng9);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng9);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(66, ng9);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = (t0 + 2952);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 8);
    t10 = (t0 + 1912U);
    t11 = *((char **)t10);
    memcpy(t12, t11, 8);
    t10 = (t0 + 2472);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t15, t14, 8);
    t16 = (t0 + 2632);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 2312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 3832);
    t25 = (t0 + 848);
    t26 = xsi_create_subprogram_invocation(t24, 0, t0, t25, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t25, t26);
    t27 = (t26 + 96U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    xsi_vlogvar_assign_value(t29, t5, 0, 0, 32);
    t30 = (t26 + 96U);
    t31 = *((char **)t30);
    t32 = (t31 + 160U);
    xsi_vlogvar_assign_value(t32, t9, 0, 0, 32);
    t33 = (t26 + 96U);
    t34 = *((char **)t33);
    t35 = (t34 + 320U);
    xsi_vlogvar_assign_value(t35, t12, 0, 0, 32);
    t36 = (t26 + 96U);
    t37 = *((char **)t36);
    t38 = (t37 + 480U);
    xsi_vlogvar_assign_value(t38, t15, 0, 0, 32);
    t39 = (t26 + 96U);
    t40 = *((char **)t39);
    t41 = (t40 + 640U);
    xsi_vlogvar_assign_value(t41, t19, 0, 0, 32);
    t42 = (t26 + 96U);
    t43 = *((char **)t42);
    t44 = (t43 + 800U);
    xsi_vlogvar_assign_value(t44, t23, 0, 0, 32);

LAB8:    t45 = (t0 + 3928);
    t46 = *((char **)t45);
    t47 = (t46 + 80U);
    t48 = *((char **)t47);
    t49 = (t48 + 272U);
    t50 = *((char **)t49);
    t51 = (t50 + 0U);
    t52 = *((char **)t51);
    t53 = ((int  (*)(char *, char *))t52)(t0, t46);

LAB10:    if (t53 != 0)
        goto LAB11;

LAB6:    t46 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t46);

LAB7:    t54 = (t0 + 3928);
    t55 = *((char **)t54);
    t54 = (t0 + 848);
    t56 = (t0 + 3832);
    t57 = 0;
    xsi_delete_subprogram_invocation(t54, t55, t0, t56, t57);
    xsi_set_current_line(69, ng9);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t45 = (t0 + 4024U);
    *((char **)t45) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(70, ng9);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng9);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng9);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng9);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng9);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(75, ng9);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = (t0 + 2952);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 8);
    t10 = (t0 + 1912U);
    t11 = *((char **)t10);
    memcpy(t12, t11, 8);
    t10 = (t0 + 2472);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t15, t14, 8);
    t16 = (t0 + 2632);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 2312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 3832);
    t25 = (t0 + 848);
    t26 = xsi_create_subprogram_invocation(t24, 0, t0, t25, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t25, t26);
    t27 = (t26 + 96U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    xsi_vlogvar_assign_value(t29, t5, 0, 0, 32);
    t30 = (t26 + 96U);
    t31 = *((char **)t30);
    t32 = (t31 + 160U);
    xsi_vlogvar_assign_value(t32, t9, 0, 0, 32);
    t33 = (t26 + 96U);
    t34 = *((char **)t33);
    t35 = (t34 + 320U);
    xsi_vlogvar_assign_value(t35, t12, 0, 0, 32);
    t36 = (t26 + 96U);
    t37 = *((char **)t36);
    t38 = (t37 + 480U);
    xsi_vlogvar_assign_value(t38, t15, 0, 0, 32);
    t39 = (t26 + 96U);
    t40 = *((char **)t39);
    t41 = (t40 + 640U);
    xsi_vlogvar_assign_value(t41, t19, 0, 0, 32);
    t42 = (t26 + 96U);
    t43 = *((char **)t42);
    t44 = (t43 + 800U);
    xsi_vlogvar_assign_value(t44, t23, 0, 0, 32);

LAB16:    t45 = (t0 + 3928);
    t46 = *((char **)t45);
    t47 = (t46 + 80U);
    t48 = *((char **)t47);
    t49 = (t48 + 272U);
    t50 = *((char **)t49);
    t51 = (t50 + 0U);
    t52 = *((char **)t51);
    t53 = ((int  (*)(char *, char *))t52)(t0, t46);

LAB18:    if (t53 != 0)
        goto LAB19;

LAB14:    t46 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t46);

LAB15:    t54 = (t0 + 3928);
    t55 = *((char **)t54);
    t54 = (t0 + 848);
    t56 = (t0 + 3832);
    t57 = 0;
    xsi_delete_subprogram_invocation(t54, t55, t0, t56, t57);
    xsi_set_current_line(77, ng9);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB17:;
LAB19:    t45 = (t0 + 4024U);
    *((char **)t45) = &&LAB16;
    goto LAB1;

LAB20:    xsi_set_current_line(78, ng9);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng9);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng9);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng9);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng9);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(83, ng9);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = (t0 + 2952);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 8);
    t10 = (t0 + 1912U);
    t11 = *((char **)t10);
    memcpy(t12, t11, 8);
    t10 = (t0 + 2472);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t15, t14, 8);
    t16 = (t0 + 2632);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 2312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 3832);
    t25 = (t0 + 848);
    t26 = xsi_create_subprogram_invocation(t24, 0, t0, t25, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t25, t26);
    t27 = (t26 + 96U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    xsi_vlogvar_assign_value(t29, t5, 0, 0, 32);
    t30 = (t26 + 96U);
    t31 = *((char **)t30);
    t32 = (t31 + 160U);
    xsi_vlogvar_assign_value(t32, t9, 0, 0, 32);
    t33 = (t26 + 96U);
    t34 = *((char **)t33);
    t35 = (t34 + 320U);
    xsi_vlogvar_assign_value(t35, t12, 0, 0, 32);
    t36 = (t26 + 96U);
    t37 = *((char **)t36);
    t38 = (t37 + 480U);
    xsi_vlogvar_assign_value(t38, t15, 0, 0, 32);
    t39 = (t26 + 96U);
    t40 = *((char **)t39);
    t41 = (t40 + 640U);
    xsi_vlogvar_assign_value(t41, t19, 0, 0, 32);
    t42 = (t26 + 96U);
    t43 = *((char **)t42);
    t44 = (t43 + 800U);
    xsi_vlogvar_assign_value(t44, t23, 0, 0, 32);

LAB24:    t45 = (t0 + 3928);
    t46 = *((char **)t45);
    t47 = (t46 + 80U);
    t48 = *((char **)t47);
    t49 = (t48 + 272U);
    t50 = *((char **)t49);
    t51 = (t50 + 0U);
    t52 = *((char **)t51);
    t53 = ((int  (*)(char *, char *))t52)(t0, t46);

LAB26:    if (t53 != 0)
        goto LAB27;

LAB22:    t46 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t46);

LAB23:    t54 = (t0 + 3928);
    t55 = *((char **)t54);
    t54 = (t0 + 848);
    t56 = (t0 + 3832);
    t57 = 0;
    xsi_delete_subprogram_invocation(t54, t55, t0, t56, t57);
    xsi_set_current_line(85, ng9);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB25:;
LAB27:    t45 = (t0 + 4024U);
    *((char **)t45) = &&LAB24;
    goto LAB1;

LAB28:    xsi_set_current_line(86, ng9);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng9);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng9);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng9);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng9);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(91, ng9);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = (t0 + 2952);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 8);
    t10 = (t0 + 1912U);
    t11 = *((char **)t10);
    memcpy(t12, t11, 8);
    t10 = (t0 + 2472);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t15, t14, 8);
    t16 = (t0 + 2632);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 2312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 3832);
    t25 = (t0 + 848);
    t26 = xsi_create_subprogram_invocation(t24, 0, t0, t25, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t25, t26);
    t27 = (t26 + 96U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    xsi_vlogvar_assign_value(t29, t5, 0, 0, 32);
    t30 = (t26 + 96U);
    t31 = *((char **)t30);
    t32 = (t31 + 160U);
    xsi_vlogvar_assign_value(t32, t9, 0, 0, 32);
    t33 = (t26 + 96U);
    t34 = *((char **)t33);
    t35 = (t34 + 320U);
    xsi_vlogvar_assign_value(t35, t12, 0, 0, 32);
    t36 = (t26 + 96U);
    t37 = *((char **)t36);
    t38 = (t37 + 480U);
    xsi_vlogvar_assign_value(t38, t15, 0, 0, 32);
    t39 = (t26 + 96U);
    t40 = *((char **)t39);
    t41 = (t40 + 640U);
    xsi_vlogvar_assign_value(t41, t19, 0, 0, 32);
    t42 = (t26 + 96U);
    t43 = *((char **)t42);
    t44 = (t43 + 800U);
    xsi_vlogvar_assign_value(t44, t23, 0, 0, 32);

LAB32:    t45 = (t0 + 3928);
    t46 = *((char **)t45);
    t47 = (t46 + 80U);
    t48 = *((char **)t47);
    t49 = (t48 + 272U);
    t50 = *((char **)t49);
    t51 = (t50 + 0U);
    t52 = *((char **)t51);
    t53 = ((int  (*)(char *, char *))t52)(t0, t46);

LAB34:    if (t53 != 0)
        goto LAB35;

LAB30:    t46 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t46);

LAB31:    t54 = (t0 + 3928);
    t55 = *((char **)t54);
    t54 = (t0 + 848);
    t56 = (t0 + 3832);
    t57 = 0;
    xsi_delete_subprogram_invocation(t54, t55, t0, t56, t57);
    xsi_set_current_line(93, ng9);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3832);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t10 = (t8 + 96U);
    t11 = *((char **)t10);
    t13 = (t11 + 0U);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB38:    t14 = (t0 + 3928);
    t16 = *((char **)t14);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t20 = (t18 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t24 = *((char **)t22);
    t53 = ((int  (*)(char *, char *))t24)(t0, t16);

LAB40:    if (t53 != 0)
        goto LAB41;

LAB36:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB37:    t25 = (t0 + 3928);
    t26 = *((char **)t25);
    t25 = (t0 + 1280);
    t27 = (t0 + 3832);
    t28 = 0;
    xsi_delete_subprogram_invocation(t25, t26, t0, t27, t28);
    goto LAB1;

LAB33:;
LAB35:    t45 = (t0 + 4024U);
    *((char **)t45) = &&LAB32;
    goto LAB1;

LAB39:;
LAB41:    t14 = (t0 + 4024U);
    *((char **)t14) = &&LAB38;
    goto LAB1;

}

static void NetReassign_54_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng9);
    t3 = 0;
    t2 = ((char*)((ng16)));
    t4 = (t0 + 6952);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2792);
    xsi_vlogvar_forcevalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_55_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng9);
    t3 = 0;
    t2 = ((char*)((ng16)));
    t4 = (t0 + 6956);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2952);
    xsi_vlogvar_forcevalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_58_3(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng9);
    t3 = 0;
    t2 = (t0 + 2472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2632);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 1, t5, 1, t8, 1);
    t10 = (t0 + 6960);
    if (*((int *)t10) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t13 = (t0 + 5088);
    *((int *)t13) = 0;

LAB8:
LAB1:    return;
LAB4:    t11 = (t0 + 2312);
    xsi_vlogvar_assignassignvalue(t11, t9, 0, 0, 0, 1, ((int*)(t10)));
    t3 = 1;
    goto LAB5;

LAB6:    t12 = (t0 + 5088);
    *((int *)t12) = 1;
    goto LAB8;

}


extern void work_m_07755627445461778001_0323527720_init()
{
	static char *pe[] = {(void *)Initial_48_0,(void *)NetReassign_54_1,(void *)NetReassign_55_2,(void *)NetReassign_58_3};
	static char *se[] = {(void *)sp_check,(void *)sp_detectFault};
	xsi_register_didat("work_m_07755627445461778001_0323527720", "isim/twoInputOrStimulus_isim_beh.exe.sim/work/m_07755627445461778001_0323527720.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_subprogram_init(1, (void *)check_varinit);
	xsi_register_subprogram_init(2, (void *)detectFault_varinit);
}
