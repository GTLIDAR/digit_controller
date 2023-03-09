/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_hip_flexion_right_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t92;
  double t131;
  double t337;
  double t356;
  double t863;
  double t983;
  double t1709;
  double t1705;
  double t1835;
  double t1866;
  double t1881;
  double t1982;
  double t1986;
  double t1993;
  double t1107;
  double t1124;
  double t1128;
  double t1255;
  double t1268;
  double t1293;
  double t1707;
  double t1757;
  double t1758;
  double t1304;
  double t1307;
  double t1330;
  double t2171;
  double t2179;
  double t2188;
  double t2195;
  double t2256;
  double t2259;
  double t2275;
  double t2374;
  double t2403;
  double t1770;
  double t1778;
  double t1788;
  double t2181;
  double t2406;
  double t2427;
  double t2439;
  double t2463;
  double t2466;
  double t2470;
  double t975;
  double t991;
  double t1063;
  double t2657;
  double t1935;
  double t2133;
  double t2933;
  double t2937;
  double t2957;
  double t2984;
  double t2996;
  double t2998;
  double t3012;
  double t3025;
  double t3027;
  double t2962;
  double t2515;
  double t2537;
  double t2562;
  double t3028;
  double t3030;
  double t3039;
  double t2073;
  double t2088;
  double t2092;
  double t3364;
  double t3384;
  double t3388;
  double t3327;
  double t3328;
  double t3329;
  double t3152;
  double t3164;
  double t3554;
  double t3555;
  double t3557;
  double t3609;
  double t3616;
  double t3623;
  double t3131;
  double t3133;
  double t3134;
  double t3268;
  double t3269;
  double t3289;
  double t2676;
  double t2688;
  double t3090;
  double t2965;
  double t2978;
  double t2887;
  double t2895;
  double t3810;
  double t3811;
  double t3818;
  double t2816;
  double t2821;
  double t2840;
  double t3799;
  double t3804;
  double t3805;
  double t3821;
  double t3827;
  double t3828;
  double t3840;
  double t3844;
  double t3845;
  double t3855;
  double t3218;
  double t3220;
  double t3236;
  double t4016;
  double t4017;
  double t4024;
  double t3992;
  double t3994;
  double t3997;
  double t3561;
  double t3565;
  double t3570;
  double t3647;
  double t3658;
  double t3660;
  double t3468;
  double t3471;
  double t3476;
  double t3576;
  double t3583;
  double t3594;
  double t4124;
  double t4133;
  double t4136;
  double t3494;
  double t3524;
  double t3533;
  double t3674;
  double t3690;
  double t3693;
  double t4183;
  double t4188;
  double t4192;
  double t2123;
  double t2138;
  double t4257;
  double t4259;
  double t4266;
  double t2159;
  double t2166;
  double t2169;
  double t4395;
  double t4407;
  double t4409;
  double t4420;
  double t4426;
  double t4433;
  double t4435;
  double t4437;
  double t4441;
  double t4443;
  double t4457;
  double t4541;
  double t4547;
  double t4551;
  double t4583;
  double t4592;
  double t4594;
  double t4767;
  double t4768;
  double t4771;
  double t4695;
  double t4697;
  double t4706;
  double t4823;
  double t4890;
  double t4897;
  double t4900;
  double t3775;
  double t3783;
  double t3785;
  double t5206;
  double t5210;
  double t5213;
  double t5186;
  double t5193;
  double t5195;
  double t5227;
  double t5228;
  double t5247;
  double t5250;
  double t5256;
  double t5258;
  double t5319;
  double t5388;
  double t5552;
  double t5553;
  double t5575;
  double t5595;
  double t5203;
  double t5220;
  double t5231;
  double t5232;
  double t5617;
  double t5626;
  double t5629;
  double t5633;
  double t5660;
  double t5662;
  double t5664;
  double t5670;
  double t5710;
  double t5712;
  double t5720;
  double t5730;
  double t5637;
  double t5691;
  double t5731;
  double t5752;
  double t5252;
  double t5264;
  double t5270;
  double t5287;
  double t5806;
  double t5808;
  double t5810;
  double t5814;
  double t5767;
  double t6005;
  double t6014;
  double t6017;
  double t6023;
  double t6027;
  double t6037;
  double t5993;
  double t6061;
  double t6062;
  double t6063;
  double t6064;
  double t6039;
  double t6040;
  double t6042;
  double t6047;
  double t6286;
  double t6287;
  double t6298;
  double t6303;
  double t6315;
  double t6318;
  double t6117;
  double t6123;
  double t6125;
  double t5543;
  double t5546;
  double t6520;
  double t6521;
  double t6533;
  double t6535;
  double t6548;
  double t6549;
  double t6554;
  double t6563;
  double t6852;
  double t6861;
  double t6867;
  double t6872;
  double t6874;
  double t6880;
  double t6894;
  double t6898;
  double t6909;
  double t6871;
  double t6886;
  double t6914;
  double t6932;
  double t6945;
  double t6950;
  double t6953;
  double t6959;
  double t5761;
  double t5771;
  double t5778;
  double t5866;
  double t5867;
  double t5871;
  double t5876;
  double t5997;
  double t6000;
  double t6098;
  double t6099;
  double t6114;
  double t5941;
  double t5942;
  double t6056;
  double t6060;
  double t7130;
  double t7133;
  double t7134;
  double t7135;
  double t5956;
  double t5958;
  double t5960;
  double t7142;
  double t7147;
  double t7150;
  double t7158;
  double t7160;
  double t7162;
  double t6131;
  double t6132;
  double t6140;
  double t7165;
  double t7174;
  double t7178;
  double t7182;
  double t6254;
  double t6265;
  double t6267;
  double t6347;
  double t6350;
  double t6360;
  double t6209;
  double t6210;
  double t6211;
  double t6323;
  double t6325;
  double t6329;
  double t6223;
  double t6226;
  double t6228;
  double t7272;
  double t7273;
  double t7277;
  double t7279;
  double t7280;
  double t7281;
  double t6373;
  double t6379;
  double t6485;
  double t6492;
  double t6503;
  double t6518;
  double t6609;
  double t6619;
  double t6620;
  double t6621;
  double t6420;
  double t6430;
  double t6431;
  double t6436;
  double t6569;
  double t6574;
  double t6580;
  double t6583;
  double t6448;
  double t6451;
  double t6454;
  double t6455;
  double t7355;
  double t7375;
  double t7378;
  double t7382;
  double t7386;
  double t7393;
  double t7397;
  double t7399;
  double t6640;
  double t6641;
  double t6680;
  double t6697;
  double t6961;
  double t6968;
  double t6970;
  double t6974;
  double t7031;
  double t7034;
  double t7039;
  double t7040;
  double t6935;
  double t6938;
  double t6940;
  double t6942;
  double t6804;
  double t6807;
  double t6808;
  double t6813;
  double t7479;
  double t7481;
  double t7482;
  double t7484;
  double t6998;
  double t7000;
  double t7020;
  double t7023;
  double t7497;
  double t7507;
  double t7508;
  double t7509;
  double t6827;
  double t6839;
  double t6841;
  double t6848;
  double t5451;
  double t5460;
  double t5471;
  double t5496;
  double t5514;
  double t5528;
  double t7615;
  double t7622;
  double t7624;
  double t7724;
  double t7727;
  double t7729;
  double t7730;
  double t7733;
  double t7737;
  double t7747;
  double t7748;
  double t7750;
  double t7757;
  double t7760;
  double t7764;
  double t7765;
  double t7837;
  double t7840;
  double t7842;
  double t7846;
  double t7847;
  double t7849;
  double t7914;
  double t7916;
  double t7918;
  double t7926;
  double t7928;
  double t7932;
  double t7962;
  double t7973;
  double t7974;
  double t7991;
  double t8039;
  double t8049;
  double t8054;
  double t8056;
  double t8063;
  double t8064;
  double t8068;
  double t8069;
  double t7107;
  double t7109;
  double t7111;
  t92 = Cos(var1[3]);
  t131 = Sin(var1[3]);
  t337 = Cos(var1[4]);
  t356 = Sin(var1[4]);
  t863 = Cos(var1[5]);
  t983 = Sin(var1[5]);
  t1709 = Cos(var1[17]);
  t1705 = Sin(var1[17]);
  t1835 = t863*t131*t356;
  t1866 = -1.*t92*t983;
  t1881 = t1835 + t1866;
  t1982 = t92*t863;
  t1986 = t131*t356*t983;
  t1993 = t1982 + t1986;
  t1107 = -1.*t863*t131*t356;
  t1124 = t92*t983;
  t1128 = t1107 + t1124;
  t1255 = -1.*t92*t863;
  t1268 = -1.*t131*t356*t983;
  t1293 = t1255 + t1268;
  t1707 = -1.*t337*t863*t1705;
  t1757 = t1709*t337*t983;
  t1758 = t1707 + t1757;
  t1304 = t92*t863*t356;
  t1307 = t131*t983;
  t1330 = t1304 + t1307;
  t2171 = -0.091*t1705;
  t2179 = 0. + t2171;
  t2188 = -1.*t1709;
  t2195 = 1. + t2188;
  t2256 = -0.091*t2195;
  t2259 = 0. + t2256;
  t2275 = -1.*t863*t131;
  t2374 = t92*t356*t983;
  t2403 = t2275 + t2374;
  t1770 = t1709*t337*t863;
  t1778 = t337*t1705*t983;
  t1788 = t1770 + t1778;
  t2181 = t2179*t1330;
  t2406 = t2259*t2403;
  t2427 = t2181 + t2406;
  t2439 = -1.*var1[2];
  t2463 = -1.*t337*t863*t2179;
  t2466 = -1.*t2259*t337*t983;
  t2470 = 0. + t2439 + t2463 + t2466;
  t975 = t863*t131;
  t991 = -1.*t92*t356*t983;
  t1063 = t975 + t991;
  t2657 = t1709*t1330;
  t1935 = t1705*t1881;
  t2133 = t1709*t1293;
  t2933 = t2259*t1881;
  t2937 = t2179*t1293;
  t2957 = t2933 + t2937;
  t2984 = t2179*t1881;
  t2996 = t2259*t1993;
  t2998 = 0. + var1[1] + t2984 + t2996;
  t3012 = -1.*t2259*t337*t863;
  t3025 = t337*t2179*t983;
  t3027 = t3012 + t3025;
  t2962 = t1709*t1881;
  t2515 = -1.*t1705*t1330;
  t2537 = t1709*t2403;
  t2562 = t2515 + t2537;
  t3028 = -1.*t1705*t1881;
  t3030 = t1709*t1993;
  t3039 = t3028 + t3030;
  t2073 = -1.*t1709*t1881;
  t2088 = -1.*t1705*t1993;
  t2092 = t2073 + t2088;
  t3364 = -0.091*t1709*t1881;
  t3384 = -0.091*t1705*t1993;
  t3388 = t3364 + t3384;
  t3327 = 0.091*t1709*t337*t863;
  t3328 = 0.091*t337*t1705*t983;
  t3329 = t3327 + t3328;
  t3152 = t1705*t1993;
  t3164 = t2962 + t3152;
  t3554 = t337*t863*t2179*t131;
  t3555 = t2259*t337*t131*t983;
  t3557 = t3554 + t3555;
  t3609 = t863*t2179*t356;
  t3616 = t2259*t356*t983;
  t3623 = t3609 + t3616;
  t3131 = t337*t863*t1705;
  t3133 = -1.*t1709*t337*t983;
  t3134 = t3131 + t3133;
  t3268 = -1.*t1709*t337*t863;
  t3269 = -1.*t337*t1705*t983;
  t3289 = t3268 + t3269;
  t2676 = t1705*t2403;
  t2688 = t2657 + t2676;
  t3090 = t1935 + t2133;
  t2965 = -1.*t1705*t1293;
  t2978 = t2962 + t2965;
  t2887 = -1.*t1705*t1063;
  t2895 = t2657 + t2887;
  t3810 = t337*t863*t2179;
  t3811 = t2259*t337*t983;
  t3818 = 0. + var1[2] + t3810 + t3811;
  t2816 = t1705*t1330;
  t2821 = t1709*t1063;
  t2840 = t2816 + t2821;
  t3799 = -1.*t2259*t1330;
  t3804 = -1.*t2179*t1063;
  t3805 = t3799 + t3804;
  t3821 = -1.*var1[0];
  t3827 = -1.*t2179*t1330;
  t3828 = -1.*t2259*t2403;
  t3840 = 0. + t3821 + t3827 + t3828;
  t3844 = t2259*t337*t863;
  t3845 = -1.*t337*t2179*t983;
  t3855 = t3844 + t3845;
  t3218 = -1.*t1709*t1330;
  t3220 = -1.*t1705*t2403;
  t3236 = t3218 + t3220;
  t4016 = 0.091*t1709*t1330;
  t4017 = 0.091*t1705*t2403;
  t4024 = t4016 + t4017;
  t3992 = -0.091*t1709*t337*t863;
  t3994 = -0.091*t337*t1705*t983;
  t3997 = t3992 + t3994;
  t3561 = -1.*t337*t863*t1705*t131;
  t3565 = t1709*t337*t131*t983;
  t3570 = t3561 + t3565;
  t3647 = t1709*t337*t863*t131;
  t3658 = t337*t1705*t131*t983;
  t3660 = t3647 + t3658;
  t3468 = -1.*t92*t337*t863*t1705;
  t3471 = t1709*t92*t337*t983;
  t3476 = t3468 + t3471;
  t3576 = t863*t1705*t356;
  t3583 = -1.*t1709*t356*t983;
  t3594 = t3576 + t3583;
  t4124 = -1.*t92*t337*t863*t2179;
  t4133 = -1.*t2259*t92*t337*t983;
  t4136 = t4124 + t4133;
  t3494 = t1709*t92*t337*t863;
  t3524 = t92*t337*t1705*t983;
  t3533 = t3494 + t3524;
  t3674 = -1.*t1709*t863*t356;
  t3690 = -1.*t1705*t356*t983;
  t3693 = t3674 + t3690;
  t4183 = -1.*t863*t2179*t356;
  t4188 = -1.*t2259*t356*t983;
  t4192 = t4183 + t4188;
  t2123 = -1.*t1705*t1128;
  t2138 = t2123 + t2133;
  t4257 = -1.*t2179*t1128;
  t4259 = -1.*t2259*t1293;
  t4266 = t4257 + t4259;
  t2159 = t1709*t1128;
  t2166 = t1705*t1293;
  t2169 = t2159 + t2166;
  t4395 = 0. + var1[0] + t2181 + t2406;
  t4407 = -1.*t337*t863*t2179*t131;
  t4409 = -1.*t2259*t337*t131*t983;
  t4420 = t4407 + t4409;
  t4426 = -1.*var1[1];
  t4433 = -1.*t2179*t1881;
  t4435 = -1.*t2259*t1993;
  t4437 = 0. + t4426 + t4433 + t4435;
  t4441 = t92*t337*t863*t2179;
  t4443 = t2259*t92*t337*t983;
  t4457 = t4441 + t4443;
  t4541 = -1.*t2259*t1881;
  t4547 = -1.*t2179*t1293;
  t4551 = t4541 + t4547;
  t4583 = t2259*t1330;
  t4592 = t2179*t1063;
  t4594 = t4583 + t4592;
  t4767 = 0.091*t1709*t1881;
  t4768 = 0.091*t1705*t1993;
  t4771 = t4767 + t4768;
  t4695 = -0.091*t1709*t1330;
  t4697 = -0.091*t1705*t2403;
  t4706 = t4695 + t4697;
  t4823 = t3827 + t3828;
  t4890 = t2179*t1128;
  t4897 = t2259*t1293;
  t4900 = t4890 + t4897;
  t3775 = -0.366501*t2562;
  t3783 = -0.930418*t2688;
  t3785 = t3775 + t3783;
  t5206 = Cos(var1[18]);
  t5210 = -1.*t5206;
  t5213 = 1. + t5210;
  t5186 = Sin(var1[18]);
  t5193 = -0.366501*t5186;
  t5195 = 0. + t5193;
  t5227 = -0.134322983001*t5213;
  t5228 = 1. + t5227;
  t5247 = 0.930418*t5186;
  t5250 = 0. + t5247;
  t5256 = -0.8656776547239999*t5213;
  t5258 = 1. + t5256;
  t5319 = -1.*t337*t5195*t131;
  t5388 = -1.*t337*t5250*t131;
  t5552 = -0.930418*t5186;
  t5553 = 0. + t5552;
  t5575 = 0.366501*t5186;
  t5595 = 0. + t5575;
  t5203 = -1.*t5195*t356;
  t5220 = 0.340999127418*t5213*t1758;
  t5231 = t5228*t1788;
  t5232 = t5203 + t5220 + t5231;
  t5617 = -0.04500040093286238*t5213;
  t5626 = -0.07877663122399998*t5553;
  t5629 = 0.031030906668*t5595;
  t5633 = 0. + t5617 + t5626 + t5629;
  t5660 = 1.296332362046933e-7*var1[18];
  t5662 = -0.07877668146182712*t5213;
  t5664 = -0.045000372235*t5250;
  t5670 = t5660 + t5662 + t5664;
  t5710 = 3.2909349868922137e-7*var1[18];
  t5712 = 0.03103092645718495*t5213;
  t5720 = -0.045000372235*t5195;
  t5730 = t5710 + t5712 + t5720;
  t5637 = t5633*t356;
  t5691 = -1.*t5670*t1758;
  t5731 = -1.*t5730*t1788;
  t5752 = 0. + t2439 + t2463 + t5637 + t2466 + t5691 + t5731;
  t5252 = -1.*t5250*t356;
  t5264 = t5258*t1758;
  t5270 = 0.340999127418*t5213*t1788;
  t5287 = t5252 + t5264 + t5270;
  t5806 = t92*t337*t5633;
  t5808 = t5670*t2562;
  t5810 = t5730*t2688;
  t5814 = t5806 + t2181 + t2406 + t5808 + t5810;
  t5767 = 0.340999127418*t5213*t2562;
  t6005 = t5730*t3039;
  t6014 = t5670*t2092;
  t6017 = t3364 + t3384 + t6005 + t6014;
  t6023 = -1.*t5730*t1758;
  t6027 = -1.*t5670*t3289;
  t6037 = t3327 + t3328 + t6023 + t6027;
  t5993 = 0.340999127418*t5213*t3039;
  t6061 = t337*t5633*t131;
  t6062 = t5670*t3039;
  t6063 = t5730*t3164;
  t6064 = 0. + var1[1] + t6061 + t2984 + t2996 + t6062 + t6063;
  t6039 = t337*t5250*t131;
  t6040 = t5258*t3039;
  t6042 = 0.340999127418*t5213*t3164;
  t6047 = t6039 + t6040 + t6042;
  t6286 = t5730*t3090;
  t6287 = t5670*t2978;
  t6298 = t2933 + t2937 + t6286 + t6287;
  t6303 = -1.*t5730*t3134;
  t6315 = -1.*t5670*t1788;
  t6318 = t3012 + t3025 + t6303 + t6315;
  t6117 = t337*t5195*t131;
  t6123 = t5228*t3164;
  t6125 = t6117 + t5993 + t6123;
  t5543 = -1.000000637725*t5213;
  t5546 = 1. + t5543;
  t6520 = -1.*t5633*t131*t356;
  t6521 = t5670*t3570;
  t6533 = t5730*t3660;
  t6535 = t3554 + t6520 + t3555 + t6521 + t6533;
  t6548 = t337*t5633;
  t6549 = -1.*t5670*t3594;
  t6554 = -1.*t5730*t3693;
  t6563 = t6548 + t3609 + t3616 + t6549 + t6554;
  t6852 = 0.0846680539949003*t5206;
  t6861 = -0.04500040093286238*t5186;
  t6867 = t6852 + t6861;
  t6872 = -0.04186915633414423*t5206;
  t6874 = -0.07877668146182712*t5186;
  t6880 = 1.296332362046933e-7 + t6872 + t6874;
  t6894 = 0.016492681424499736*t5206;
  t6898 = 0.03103092645718495*t5186;
  t6909 = 3.2909349868922137e-7 + t6894 + t6898;
  t6871 = t6867*t356;
  t6886 = -1.*t6880*t1758;
  t6914 = -1.*t6909*t1788;
  t6932 = t6871 + t6886 + t6914;
  t6945 = t337*t6867*t131;
  t6950 = t6880*t3039;
  t6953 = t6909*t3164;
  t6959 = t6945 + t6950 + t6953;
  t5761 = t92*t337*t5195;
  t5771 = t5228*t2688;
  t5778 = t5761 + t5767 + t5771;
  t5866 = t92*t337*t5250;
  t5867 = t5258*t2562;
  t5871 = 0.340999127418*t5213*t2688;
  t5876 = t5866 + t5867 + t5871;
  t5997 = t5258*t2092;
  t6000 = t5993 + t5997;
  t6098 = t5228*t3039;
  t6099 = 0.340999127418*t5213*t2092;
  t6114 = t6098 + t6099;
  t5941 = t5258*t3236;
  t5942 = t5767 + t5941;
  t6056 = t5258*t3289;
  t6060 = t5220 + t6056;
  t7130 = -1.*t5633*t356;
  t7133 = t5670*t1758;
  t7134 = t5730*t1788;
  t7135 = 0. + var1[2] + t3810 + t7130 + t3811 + t7133 + t7134;
  t5956 = t5228*t2562;
  t5958 = 0.340999127418*t5213*t3236;
  t5960 = t5956 + t5958;
  t7142 = -1.*t5730*t2562;
  t7147 = -1.*t5670*t3236;
  t7150 = t4016 + t4017 + t7142 + t7147;
  t7158 = t5730*t1758;
  t7160 = t5670*t3289;
  t7162 = t3992 + t3994 + t7158 + t7160;
  t6131 = t5228*t1758;
  t6132 = 0.340999127418*t5213*t3289;
  t6140 = t6131 + t6132;
  t7165 = -1.*t92*t337*t5633;
  t7174 = -1.*t5670*t2562;
  t7178 = -1.*t5730*t2688;
  t7182 = 0. + t3821 + t7165 + t3827 + t3828 + t7174 + t7178;
  t6254 = 0.340999127418*t5213*t3090;
  t6265 = t5258*t2978;
  t6267 = t6254 + t6265;
  t6347 = t5228*t3090;
  t6350 = 0.340999127418*t5213*t2978;
  t6360 = t6347 + t6350;
  t6209 = 0.340999127418*t5213*t2840;
  t6210 = t5258*t2895;
  t6211 = t6209 + t6210;
  t6323 = 0.340999127418*t5213*t3134;
  t6325 = t5258*t1788;
  t6329 = t6323 + t6325;
  t6223 = t5228*t2840;
  t6226 = 0.340999127418*t5213*t2895;
  t6228 = t6223 + t6226;
  t7272 = -1.*t5730*t2840;
  t7273 = -1.*t5670*t2895;
  t7277 = t3799 + t3804 + t7272 + t7273;
  t7279 = t5730*t3134;
  t7280 = t5670*t1788;
  t7281 = t3844 + t3845 + t7279 + t7280;
  t6373 = t5228*t3134;
  t6379 = t6373 + t5270;
  t6485 = -1.*t5195*t131*t356;
  t6492 = 0.340999127418*t5213*t3570;
  t6503 = t5228*t3660;
  t6518 = t6485 + t6492 + t6503;
  t6609 = -1.*t5250*t131*t356;
  t6619 = t5258*t3570;
  t6620 = 0.340999127418*t5213*t3660;
  t6621 = t6609 + t6619 + t6620;
  t6420 = -1.*t92*t5195*t356;
  t6430 = 0.340999127418*t5213*t3476;
  t6431 = t5228*t3533;
  t6436 = t6420 + t6430 + t6431;
  t6569 = -1.*t337*t5195;
  t6574 = 0.340999127418*t5213*t3594;
  t6580 = t5228*t3693;
  t6583 = t6569 + t6574 + t6580;
  t6448 = -1.*t92*t5250*t356;
  t6451 = t5258*t3476;
  t6454 = 0.340999127418*t5213*t3533;
  t6455 = t6448 + t6451 + t6454;
  t7355 = t92*t5633*t356;
  t7375 = -1.*t5670*t3476;
  t7378 = -1.*t5730*t3533;
  t7382 = t4124 + t7355 + t4133 + t7375 + t7378;
  t7386 = -1.*t337*t5633;
  t7393 = t5670*t3594;
  t7397 = t5730*t3693;
  t7399 = t7386 + t4183 + t4188 + t7393 + t7397;
  t6640 = -1.*t337*t5250;
  t6641 = t5258*t3594;
  t6680 = 0.340999127418*t5213*t3693;
  t6697 = t6640 + t6641 + t6680;
  t6961 = -0.366501*t5206*t337*t131;
  t6968 = 0.340999127418*t5186*t3039;
  t6970 = -0.134322983001*t5186*t3164;
  t6974 = t6961 + t6968 + t6970;
  t7031 = 0.930418*t5206*t337*t131;
  t7034 = -0.8656776547239999*t5186*t3039;
  t7039 = 0.340999127418*t5186*t3164;
  t7040 = t7031 + t7034 + t7039;
  t6935 = 0.366501*t5206*t356;
  t6938 = 0.340999127418*t5186*t1758;
  t6940 = -0.134322983001*t5186*t1788;
  t6942 = t6935 + t6938 + t6940;
  t6804 = -0.366501*t5206*t92*t337;
  t6807 = 0.340999127418*t5186*t2562;
  t6808 = -0.134322983001*t5186*t2688;
  t6813 = t6804 + t6807 + t6808;
  t7479 = -1.*t6867*t356;
  t7481 = t6880*t1758;
  t7482 = t6909*t1788;
  t7484 = t7479 + t7481 + t7482;
  t6998 = -0.930418*t5206*t356;
  t7000 = -0.8656776547239999*t5186*t1758;
  t7020 = 0.340999127418*t5186*t1788;
  t7023 = t6998 + t7000 + t7020;
  t7497 = -1.*t92*t337*t6867;
  t7507 = -1.*t6880*t2562;
  t7508 = -1.*t6909*t2688;
  t7509 = t7497 + t7507 + t7508;
  t6827 = 0.930418*t5206*t92*t337;
  t6839 = -0.8656776547239999*t5186*t2562;
  t6841 = 0.340999127418*t5186*t2688;
  t6848 = t6827 + t6839 + t6841;
  t5451 = 0.340999127418*t5213*t2138;
  t5460 = t5228*t2169;
  t5471 = t5319 + t5451 + t5460;
  t5496 = t5258*t2138;
  t5514 = 0.340999127418*t5213*t2169;
  t5528 = t5388 + t5496 + t5514;
  t7615 = -1.*t5670*t2138;
  t7622 = -1.*t5730*t2169;
  t7624 = t6061 + t4257 + t4259 + t7615 + t7622;
  t7724 = t5633*t131*t356;
  t7727 = -1.*t5670*t3570;
  t7729 = -1.*t5730*t3660;
  t7730 = t4407 + t7724 + t4409 + t7727 + t7729;
  t7733 = 0. + var1[0] + t5806 + t2181 + t2406 + t5808 + t5810;
  t7737 = -1.*t92*t5633*t356;
  t7747 = t5670*t3476;
  t7748 = t5730*t3533;
  t7750 = t4441 + t7737 + t4443 + t7747 + t7748;
  t7757 = -1.*t337*t5633*t131;
  t7760 = -1.*t5670*t3039;
  t7764 = -1.*t5730*t3164;
  t7765 = 0. + t4426 + t7757 + t4433 + t4435 + t7760 + t7764;
  t7837 = -1.*t5730*t3090;
  t7840 = -1.*t5670*t2978;
  t7842 = t4541 + t4547 + t7837 + t7840;
  t7846 = t5730*t2840;
  t7847 = t5670*t2895;
  t7849 = t4583 + t4592 + t7846 + t7847;
  t7914 = -1.*t5730*t3039;
  t7916 = -1.*t5670*t2092;
  t7918 = t4767 + t4768 + t7914 + t7916;
  t7926 = t5730*t2562;
  t7928 = t5670*t3236;
  t7932 = t4695 + t4697 + t7926 + t7928;
  t7962 = t7165 + t3827 + t3828 + t7174 + t7178;
  t7973 = t5670*t2138;
  t7974 = t5730*t2169;
  t7991 = t7757 + t4890 + t4897 + t7973 + t7974;
  t8039 = t92*t337*t6867;
  t8049 = t6880*t2562;
  t8054 = t6909*t2688;
  t8056 = t8039 + t8049 + t8054;
  t8063 = -1.*t337*t6867*t131;
  t8064 = -1.*t6880*t3039;
  t8068 = -1.*t6909*t3164;
  t8069 = t8063 + t8064 + t8068;
  t7107 = 0.366501*t5778;
  t7109 = -0.930418*t5876;
  t7111 = t7107 + t7109;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t92*var2[2] + t131*var1[2]*var2[3];
  p_output1[25]=-1.*t131*var2[2] - 1.*t92*var1[2]*var2[3];
  p_output1[26]=t92*var2[0] + t131*var2[1] + (-1.*t131*var1[0] + t92*var1[1])*var2[3];
  p_output1[27]=-1.*t92*var2[3];
  p_output1[28]=-1.*t131*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t356*var2[1] - 1.*t131*t337*var2[2] - 1.*t337*t92*var1[2]*var2[3] + (-1.*t337*var1[1] + t131*t356*var1[2])*var2[4];
  p_output1[31]=t356*var2[0] + t337*t92*var2[2] - 1.*t131*t337*var1[2]*var2[3] + (t337*var1[0] - 1.*t356*t92*var1[2])*var2[4];
  p_output1[32]=t131*t337*var2[0] - 1.*t337*t92*var2[1] + (t337*t92*var1[0] + t131*t337*var1[1])*var2[3] + (-1.*t131*t356*var1[0] + t356*t92*var1[1])*var2[4];
  p_output1[33]=-1.*t131*t337*var2[3] - 1.*t356*t92*var2[4];
  p_output1[34]=t337*t92*var2[3] - 1.*t131*t356*var2[4];
  p_output1[35]=-1.*t337*var2[4];
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=t356*var2[1] + t131*t337*var2[2] + (-0.091*t1128 + t337*t92*var1[2])*var2[3] + (-0.091*t337*t863*t92 + t337*var1[1] - 1.*t131*t356*var1[2])*var2[4] - 0.091*t1063*var2[5];
  p_output1[103]=-1.*t356*var2[0] - 1.*t337*t92*var2[2] + (-0.091*t1330 + t131*t337*var1[2])*var2[3] + (-0.091*t131*t337*t863 - 1.*t337*var1[0] + t356*t92*var1[2])*var2[4] - 0.091*t1293*var2[5];
  p_output1[104]=-1.*t131*t337*var2[0] + t337*t92*var2[1] + (-1.*t337*t92*var1[0] - 1.*t131*t337*var1[1])*var2[3] + (0.091*t356*t863 + t131*t356*var1[0] - 1.*t356*t92*var1[1])*var2[4] + 0.091*t337*t983*var2[5];
  p_output1[105]=t131*t337*var2[3] + t356*t92*var2[4];
  p_output1[106]=-1.*t337*t92*var2[3] + t131*t356*var2[4];
  p_output1[107]=t337*var2[4];
  p_output1[108]=(-0.366501*t1758 - 0.930418*t1788)*var2[1] + (-0.366501*(t1935 - 1.*t1709*t1993) - 0.930418*t2092)*var2[2] + (-0.041869*t2138 + 0.016493*t2169 - 0.366501*(t1758*t2427 + t2470*t2562) - 0.930418*(t1788*t2427 + t2470*t2688) - 0.084668*t131*t337)*var2[3] + (-0.041869*t3476 + 0.016493*t3533 - 0.366501*(t1758*t3557 + t2470*t3570 + t2998*t3594 + t3039*t3623) - 0.930418*(t1788*t3557 + t3164*t3623 + t2470*t3660 + t2998*t3693) - 0.084668*t356*t92)*var2[4] + (0.016493*t2840 - 0.041869*t2895 - 0.366501*(t1758*t2957 + t2470*t2978 + t1788*t2998 + t3027*t3039) - 0.930418*(t1788*t2957 + t2470*t3090 + t2998*t3134 + t3027*t3164))*var2[5] + (0.016493*t2562 - 0.041869*t3236 - 0.366501*(t2092*t2470 + t2998*t3289 + t3039*t3329 + t1758*t3388) - 0.930418*(t1758*t2998 + t2470*t3039 + t3164*t3329 + t1788*t3388))*var2[17];
  p_output1[109]=(-0.366501*t3134 - 0.930418*t3289)*var2[0] + t3785*var2[2] + (-0.041869*t2562 + 0.016493*t2688 - 0.366501*(t2138*t3818 + t1758*t4266) - 0.930418*(t2169*t3818 + t1788*t4266) + 0.084668*t337*t92)*var2[3] + (-0.084668*t131*t356 - 0.041869*t3570 + 0.016493*t3660 - 0.366501*(t3476*t3818 + t3594*t3840 + t1758*t4136 + t2562*t4192) - 0.930418*(t3533*t3818 + t3693*t3840 + t1788*t4136 + t2688*t4192))*var2[4] + (-0.041869*t2978 + 0.016493*t3090 - 0.366501*(t1758*t3805 + t2895*t3818 + t1788*t3840 + t2562*t3855) - 0.930418*(t1788*t3805 + t2840*t3818 + t3134*t3840 + t2688*t3855))*var2[5] + (-0.041869*t2092 + 0.016493*t3039 - 0.366501*(t3236*t3818 + t3289*t3840 + t2562*t3997 + t1758*t4024) - 0.930418*(t2562*t3818 + t1758*t3840 + t2688*t3997 + t1788*t4024))*var2[17];
  p_output1[110]=(-0.366501*t3039 - 0.930418*t3164)*var2[0] + (-0.366501*(-1.*t1709*t2403 + t2816) - 0.930418*t3236)*var2[1] + (-0.366501*(t2562*t4395 + t2138*t4437 + t2562*t4823 + t3039*t4900) - 0.930418*(t2688*t4395 + t2169*t4437 + t2688*t4823 + t3164*t4900))*var2[3] + (-0.084668*t337 - 0.041869*t3594 + 0.016493*t3693 - 0.366501*(t3570*t4395 + t2562*t4420 + t3476*t4437 + t3039*t4457) - 0.930418*(t3660*t4395 + t2688*t4420 + t3533*t4437 + t3164*t4457))*var2[4] + (-0.041869*t1788 + 0.016493*t3134 - 0.366501*(t2978*t4395 + t2895*t4437 + t2562*t4551 + t3039*t4594) - 0.930418*(t3090*t4395 + t2840*t4437 + t2688*t4551 + t3164*t4594))*var2[5] + (0.016493*t1758 - 0.041869*t3289 - 0.366501*(t2092*t4395 + t3236*t4437 + t3039*t4706 + t2562*t4771) - 0.930418*(t3039*t4395 + t2562*t4437 + t3164*t4706 + t2688*t4771))*var2[17];
  p_output1[111]=(-0.366501*t2138 - 0.930418*t2169)*var2[3] + (-0.366501*t3476 - 0.930418*t3533)*var2[4] + (-0.930418*t2840 - 0.366501*t2895)*var2[5] + (-0.930418*t2562 - 0.366501*t3236)*var2[17];
  p_output1[112]=t3785*var2[3] + (-0.366501*t3570 - 0.930418*t3660)*var2[4] + (-0.366501*t2978 - 0.930418*t3090)*var2[5] + (-0.366501*t2092 - 0.930418*t3039)*var2[17];
  p_output1[113]=(-0.366501*t3594 - 0.930418*t3693)*var2[4] + (-0.366501*t1788 - 0.930418*t3134)*var2[5] + (-0.930418*t1758 - 0.366501*t3289)*var2[17];
  p_output1[114]=(0.366501*t5232 - 0.930418*t5287)*var2[1] + (0.366501*(-0.340999127418*t3039*t5213 - 1.*t3164*t5228 + t5319) - 0.930418*(-0.340999127418*t3164*t5213 - 1.*t3039*t5258 + t5388))*var2[2] + (0.041869*t5471 + 0.016493*t5528 - 0.151852*(-1.*t131*t337*t5546 + t2138*t5553 + t2169*t5595) + 0.366501*(t5752*t5778 + t5232*t5814) - 0.930418*(t5287*t5814 + t5752*t5876))*var2[3] + (0.041869*t6436 + 0.016493*t6455 + 0.366501*(t5752*t6518 + t5232*t6535 + t6125*t6563 + t6064*t6583) - 0.930418*(t5287*t6535 + t6047*t6563 + t5752*t6621 + t6064*t6697) - 0.151852*(t3476*t5553 + t3533*t5595 - 1.*t356*t5546*t92))*var2[4] + (-0.151852*(t2895*t5553 + t2840*t5595) + 0.016493*t6211 + 0.041869*t6228 - 0.930418*(t5752*t6267 + t5287*t6298 + t6047*t6318 + t6064*t6329) + 0.366501*(t5232*t6298 + t6125*t6318 + t5752*t6360 + t6064*t6379))*var2[5] + (-0.151852*(t3236*t5553 + t2562*t5595) + 0.016493*t5942 + 0.041869*t5960 - 0.930418*(t5752*t6000 + t5287*t6017 + t6037*t6047 + t6060*t6064) + 0.366501*(t5232*t6017 + t5752*t6114 + t6037*t6125 + t6064*t6140))*var2[17] + (0.041869*t6813 + 0.016493*t6848 + 0.366501*(t6125*t6932 + t6064*t6942 + t5232*t6959 + t5752*t6974) - 0.930418*(t6047*t6932 + t5287*t6959 + t6064*t7023 + t5752*t7040) - 0.151852*(-0.930418*t2562*t5206 + 0.366501*t2688*t5206 - 1.000000637725*t337*t5186*t92))*var2[18];
  p_output1[115]=(0.366501*(t356*t5195 - 0.340999127418*t1758*t5213 - 1.*t1788*t5228) - 0.930418*(-0.340999127418*t1788*t5213 + t356*t5250 - 1.*t1758*t5258))*var2[0] + t7111*var2[2] + (0.041869*t5778 + 0.016493*t5876 + 0.366501*(t5471*t7135 + t5232*t7624) - 0.930418*(t5528*t7135 + t5287*t7624) - 0.151852*(t2562*t5553 + t2688*t5595 + t337*t5546*t92))*var2[3] + (-0.151852*(-1.*t131*t356*t5546 + t3570*t5553 + t3660*t5595) + 0.041869*t6518 + 0.016493*t6621 + 0.366501*(t6436*t7135 + t6583*t7182 + t5232*t7382 + t5778*t7399) - 0.930418*(t6455*t7135 + t6697*t7182 + t5287*t7382 + t5876*t7399))*var2[4] + (-0.151852*(t2978*t5553 + t3090*t5595) + 0.016493*t6267 + 0.041869*t6360 + 0.366501*(t6228*t7135 + t6379*t7182 + t5232*t7277 + t5778*t7281) - 0.930418*(t6211*t7135 + t6329*t7182 + t5287*t7277 + t5876*t7281))*var2[5] + (-0.151852*(t2092*t5553 + t3039*t5595) + 0.016493*t6000 + 0.041869*t6114 - 0.930418*(t5942*t7135 + t5287*t7150 + t5876*t7162 + t6060*t7182) + 0.366501*(t5960*t7135 + t5232*t7150 + t5778*t7162 + t6140*t7182))*var2[17] + (-0.151852*(-1.000000637725*t131*t337*t5186 - 0.930418*t3039*t5206 + 0.366501*t3164*t5206) + 0.041869*t6974 + 0.016493*t7040 + 0.366501*(t6813*t7135 + t6942*t7182 + t5778*t7484 + t5232*t7509) - 0.930418*(t6848*t7135 + t7023*t7182 + t5876*t7484 + t5287*t7509))*var2[18];
  p_output1[116]=(-0.930418*t6047 + 0.366501*t6125)*var2[0] + (0.366501*(-0.340999127418*t2562*t5213 - 1.*t2688*t5228 - 1.*t337*t5195*t92) - 0.930418*(-0.340999127418*t2688*t5213 - 1.*t2562*t5258 - 1.*t337*t5250*t92))*var2[1] + (-0.930418*(t5876*t7733 + t5528*t7765 + t5876*t7962 + t6047*t7991) + 0.366501*(t5778*t7733 + t5471*t7765 + t5778*t7962 + t6125*t7991))*var2[3] + (-0.151852*(-1.*t337*t5546 + t3594*t5553 + t3693*t5595) + 0.041869*t6583 + 0.016493*t6697 + 0.366501*(t5778*t7730 + t6518*t7733 + t6125*t7750 + t6436*t7765) - 0.930418*(t5876*t7730 + t6621*t7733 + t6047*t7750 + t6455*t7765))*var2[4] + (-0.151852*(t1788*t5553 + t3134*t5595) + 0.016493*t6329 + 0.041869*t6379 - 0.930418*(t6267*t7733 + t6211*t7765 + t5876*t7842 + t6047*t7849) + 0.366501*(t6360*t7733 + t6228*t7765 + t5778*t7842 + t6125*t7849))*var2[5] + (-0.151852*(t3289*t5553 + t1758*t5595) + 0.016493*t6060 + 0.041869*t6140 - 0.930418*(t6000*t7733 + t5942*t7765 + t5876*t7918 + t6047*t7932) + 0.366501*(t6114*t7733 + t5960*t7765 + t5778*t7918 + t6125*t7932))*var2[17] + (-0.151852*(1.000000637725*t356*t5186 - 0.930418*t1758*t5206 + 0.366501*t1788*t5206) + 0.041869*t6942 + 0.016493*t7023 + 0.366501*(t6974*t7733 + t6813*t7765 + t6125*t8056 + t5778*t8069) - 0.930418*(t7040*t7733 + t6848*t7765 + t6047*t8056 + t5876*t8069))*var2[18];
  p_output1[117]=(0.366501*t5471 - 0.930418*t5528)*var2[3] + (0.366501*t6436 - 0.930418*t6455)*var2[4] + (-0.930418*t6211 + 0.366501*t6228)*var2[5] + (-0.930418*t5942 + 0.366501*t5960)*var2[17] + (0.366501*t6813 - 0.930418*t6848)*var2[18];
  p_output1[118]=t7111*var2[3] + (0.366501*t6518 - 0.930418*t6621)*var2[4] + (-0.930418*t6267 + 0.366501*t6360)*var2[5] + (-0.930418*t6000 + 0.366501*t6114)*var2[17] + (0.366501*t6974 - 0.930418*t7040)*var2[18];
  p_output1[119]=(0.366501*t6583 - 0.930418*t6697)*var2[4] + (-0.930418*t6329 + 0.366501*t6379)*var2[5] + (-0.930418*t6060 + 0.366501*t6140)*var2[17] + (0.366501*t6942 - 0.930418*t7023)*var2[18];
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void dJs_hip_flexion_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}