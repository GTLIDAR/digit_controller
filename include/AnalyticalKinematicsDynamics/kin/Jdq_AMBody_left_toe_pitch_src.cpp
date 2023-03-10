/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:59:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_toe_pitch_src.h"

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
  double t1321;
  double t1389;
  double t1390;
  double t1571;
  double t1226;
  double t1231;
  double t1286;
  double t1132;
  double t1199;
  double t1207;
  double t1404;
  double t1414;
  double t1552;
  double t1559;
  double t1587;
  double t1689;
  double t1695;
  double t1696;
  double t1775;
  double t1929;
  double t1953;
  double t1962;
  double t1968;
  double t1979;
  double t1995;
  double t2014;
  double t2022;
  double t2097;
  double t2104;
  double t2196;
  double t2212;
  double t2241;
  double t2244;
  double t2251;
  double t2272;
  double t2325;
  double t2332;
  double t1084;
  double t1094;
  double t1095;
  double t1735;
  double t1824;
  double t1890;
  double t2105;
  double t2127;
  double t2131;
  double t2415;
  double t2424;
  double t2476;
  double t2497;
  double t2507;
  double t2566;
  double t2603;
  double t2613;
  double t2619;
  double t2632;
  double t2650;
  double t2665;
  double t2668;
  double t2669;
  double t2671;
  double t2672;
  double t2753;
  double t2860;
  double t2889;
  double t2892;
  double t2908;
  double t607;
  double t677;
  double t958;
  double t2440;
  double t2441;
  double t2465;
  double t2639;
  double t2655;
  double t2661;
  double t2913;
  double t2916;
  double t3028;
  double t3029;
  double t3040;
  double t3042;
  double t3048;
  double t3086;
  double t3177;
  double t3179;
  double t3199;
  double t3228;
  double t3242;
  double t3243;
  double t3246;
  double t3250;
  double t3253;
  double t3259;
  double t3264;
  double t3283;
  double t3297;
  double t2919;
  double t2974;
  double t2987;
  double t3180;
  double t3299;
  double t3302;
  double t3304;
  double t3308;
  double t3380;
  double t3406;
  double t3429;
  double t3433;
  double t3434;
  double t3439;
  double t3441;
  double t3450;
  double t3486;
  double t3539;
  double t3551;
  double t3559;
  double t3560;
  double t3565;
  double t3572;
  double t3589;
  double t3593;
  double t3597;
  double t3607;
  double t3638;
  double t3353;
  double t3356;
  double t3368;
  double t3483;
  double t3488;
  double t3499;
  double t3620;
  double t3623;
  double t501;
  double t3645;
  double t3646;
  double t3647;
  double t3652;
  double t3663;
  double t3665;
  double t3667;
  double t3668;
  double t32;
  double t420;
  double t3724;
  double t3728;
  double t3729;
  double t3732;
  double t3749;
  double t3752;
  double t3753;
  double t3758;
  double t3776;
  double t3787;
  double t3790;
  double t3791;
  double t3741;
  double t3775;
  double t3794;
  double t3821;
  double t3826;
  double t3830;
  double t3831;
  double t3839;
  double t3853;
  double t3854;
  double t3862;
  double t3882;
  double t3823;
  double t3852;
  double t3885;
  double t3887;
  double t3908;
  double t3913;
  double t3917;
  double t3921;
  double t3936;
  double t3941;
  double t3945;
  double t3947;
  double t3892;
  double t3926;
  double t3948;
  double t3949;
  double t3958;
  double t3960;
  double t3971;
  double t3973;
  double t3981;
  double t3982;
  double t3987;
  double t3992;
  double t3675;
  double t3951;
  double t3980;
  double t3993;
  double t3995;
  double t3998;
  double t4002;
  double t4003;
  double t4004;
  double t3690;
  double t3692;
  double t3697;
  double t3701;
  double t3703;
  double t3708;
  double t3709;
  double t4078;
  double t4082;
  double t4085;
  double t4093;
  double t4098;
  double t4099;
  double t4107;
  double t4108;
  double t4117;
  double t4091;
  double t4106;
  double t4118;
  double t4119;
  double t4123;
  double t4125;
  double t4137;
  double t4143;
  double t4151;
  double t4152;
  double t4154;
  double t4162;
  double t4120;
  double t4147;
  double t4175;
  double t4180;
  double t4185;
  double t4186;
  double t4189;
  double t4193;
  double t4197;
  double t4200;
  double t4205;
  double t4207;
  double t4184;
  double t4195;
  double t4214;
  double t4218;
  double t4227;
  double t4229;
  double t4233;
  double t4238;
  double t4240;
  double t4242;
  double t4243;
  double t4250;
  double t4220;
  double t4239;
  double t4251;
  double t4252;
  double t4257;
  double t4259;
  double t4261;
  double t4262;
  double t3633;
  double t3669;
  double t3672;
  double t3677;
  double t3679;
  double t3682;
  double t3997;
  double t4009;
  double t4013;
  double t4018;
  double t4022;
  double t4024;
  double t4253;
  double t4266;
  double t4267;
  double t4273;
  double t4275;
  double t4277;
  double t3698;
  double t3706;
  double t3710;
  double t3712;
  double t4034;
  double t4040;
  double t4045;
  double t4049;
  double t4301;
  double t4302;
  double t4303;
  double t4307;
  t1321 = Cos(var1[11]);
  t1389 = -1.*t1321;
  t1390 = 1. + t1389;
  t1571 = Sin(var1[11]);
  t1226 = Cos(var1[10]);
  t1231 = -1.*t1226;
  t1286 = 1. + t1231;
  t1132 = Cos(var1[9]);
  t1199 = -1.*t1132;
  t1207 = 1. + t1199;
  t1404 = -0.134322983001*t1390;
  t1414 = 1. + t1404;
  t1552 = -0.218018*t1414;
  t1559 = 0.18873312805116788*t1390;
  t1587 = -0.366501*t1571;
  t1689 = 0. + t1587;
  t1695 = 0.803828*t1689;
  t1696 = t1552 + t1559 + t1695;
  t1775 = Sin(var1[10]);
  t1929 = -1.000000637725*t1390;
  t1953 = 1. + t1929;
  t1962 = 0.803828*t1953;
  t1968 = -0.930418*t1571;
  t1979 = 0. + t1968;
  t1995 = 0.553471*t1979;
  t2014 = 0.366501*t1571;
  t2022 = 0. + t2014;
  t2097 = -0.218018*t2022;
  t2104 = t1962 + t1995 + t2097;
  t2196 = -0.8656776547239999*t1390;
  t2212 = 1. + t2196;
  t2241 = 0.553471*t2212;
  t2244 = -0.07434394776141752*t1390;
  t2251 = 0.930418*t1571;
  t2272 = 0. + t2251;
  t2325 = 0.803828*t2272;
  t2332 = t2241 + t2244 + t2325;
  t1084 = Cos(var1[8]);
  t1094 = -1.*t1084;
  t1095 = 1. + t1094;
  t1735 = 0.340999127418*t1286*t1696;
  t1824 = 0.930418*t1775;
  t1890 = 0. + t1824;
  t2105 = t1890*t2104;
  t2127 = -0.8656776547239999*t1286;
  t2131 = 1. + t2127;
  t2415 = t2131*t2332;
  t2424 = 0. + t1735 + t2105 + t2415;
  t2476 = -0.134322983001*t1286;
  t2497 = 1. + t2476;
  t2507 = t2497*t1696;
  t2566 = -0.366501*t1775;
  t2603 = 0. + t2566;
  t2613 = t2603*t2104;
  t2619 = 0.340999127418*t1286*t2332;
  t2632 = 0. + t2507 + t2613 + t2619;
  t2650 = Sin(var1[9]);
  t2665 = 0.366501*t1775;
  t2668 = 0. + t2665;
  t2669 = t2668*t1696;
  t2671 = -1.000000637725*t1286;
  t2672 = 1. + t2671;
  t2753 = t2672*t2104;
  t2860 = -0.930418*t1775;
  t2889 = 0. + t2860;
  t2892 = t2889*t2332;
  t2908 = 0. + t2669 + t2753 + t2892;
  t607 = Cos(var1[7]);
  t677 = -1.*t607;
  t958 = 1. + t677;
  t2440 = 0.340999127418*t1207*t2424;
  t2441 = -0.134322983001*t1207;
  t2465 = 1. + t2441;
  t2639 = t2465*t2632;
  t2655 = -0.366501*t2650;
  t2661 = 0. + t2655;
  t2913 = t2661*t2908;
  t2916 = 0. + t2440 + t2639 + t2913;
  t3028 = -0.8656776547239999*t1207;
  t3029 = 1. + t3028;
  t3040 = t3029*t2424;
  t3042 = 0.340999127418*t1207*t2632;
  t3048 = 0.930418*t2650;
  t3086 = 0. + t3048;
  t3177 = t3086*t2908;
  t3179 = 0. + t3040 + t3042 + t3177;
  t3199 = -0.930418*t2650;
  t3228 = 0. + t3199;
  t3242 = t3228*t2424;
  t3243 = 0.366501*t2650;
  t3246 = 0. + t3243;
  t3250 = t3246*t2632;
  t3253 = -1.000000637725*t1207;
  t3259 = 1. + t3253;
  t3264 = t3259*t2908;
  t3283 = 0. + t3242 + t3250 + t3264;
  t3297 = Sin(var1[8]);
  t2919 = 0.340999127418*t1095*t2916;
  t2974 = -0.8656776547239999*t1095;
  t2987 = 1. + t2974;
  t3180 = t2987*t3179;
  t3299 = -0.930418*t3297;
  t3302 = 0. + t3299;
  t3304 = t3283*t3302;
  t3308 = 0. + t2919 + t3180 + t3304;
  t3380 = -0.134322983001*t1095;
  t3406 = 1. + t3380;
  t3429 = t3406*t2916;
  t3433 = 0.340999127418*t1095*t3179;
  t3434 = 0.366501*t3297;
  t3439 = 0. + t3434;
  t3441 = t3283*t3439;
  t3450 = 0. + t3429 + t3433 + t3441;
  t3486 = Sin(var1[7]);
  t3539 = -1.000000637725*t1095;
  t3551 = 1. + t3539;
  t3559 = t3551*t3283;
  t3560 = -0.366501*t3297;
  t3565 = 0. + t3560;
  t3572 = t2916*t3565;
  t3589 = 0.930418*t3297;
  t3593 = 0. + t3589;
  t3597 = t3179*t3593;
  t3607 = 0. + t3559 + t3572 + t3597;
  t3638 = Cos(var1[6]);
  t3353 = -0.340999127418*t958*t3308;
  t3356 = -0.8656776547239999*t958;
  t3368 = 1. + t3356;
  t3483 = t3368*t3450;
  t3488 = -0.930418*t3486;
  t3499 = 0. + t3488;
  t3620 = t3499*t3607;
  t3623 = 0. + t3353 + t3483 + t3620;
  t501 = Sin(var1[6]);
  t3645 = -0.134322983001*t958;
  t3646 = 1. + t3645;
  t3647 = t3646*t3308;
  t3652 = -0.340999127418*t958*t3450;
  t3663 = -0.366501*t3486;
  t3665 = 0. + t3663;
  t3667 = t3665*t3607;
  t3668 = 0. + t3647 + t3652 + t3667;
  t32 = Cos(var1[4]);
  t420 = Cos(var1[5]);
  t3724 = -0.294604*t1414;
  t3728 = 0.2550318833994125*t1390;
  t3729 = -0.594863*t1689;
  t3732 = t3724 + t3728 + t3729;
  t3749 = -0.594863*t1953;
  t3752 = 0.747896*t1979;
  t3753 = -0.294604*t2022;
  t3758 = t3749 + t3752 + t3753;
  t3776 = 0.747896*t2212;
  t3787 = -0.10045970693385246*t1390;
  t3790 = -0.594863*t2272;
  t3791 = t3776 + t3787 + t3790;
  t3741 = 0.340999127418*t1286*t3732;
  t3775 = t1890*t3758;
  t3794 = t2131*t3791;
  t3821 = 0. + t3741 + t3775 + t3794;
  t3826 = t2497*t3732;
  t3830 = t2603*t3758;
  t3831 = 0.340999127418*t1286*t3791;
  t3839 = 0. + t3826 + t3830 + t3831;
  t3853 = t2668*t3732;
  t3854 = t2672*t3758;
  t3862 = t2889*t3791;
  t3882 = 0. + t3853 + t3854 + t3862;
  t3823 = 0.340999127418*t1207*t3821;
  t3852 = t2465*t3839;
  t3885 = t2661*t3882;
  t3887 = 0. + t3823 + t3852 + t3885;
  t3908 = t3029*t3821;
  t3913 = 0.340999127418*t1207*t3839;
  t3917 = t3086*t3882;
  t3921 = 0. + t3908 + t3913 + t3917;
  t3936 = t3228*t3821;
  t3941 = t3246*t3839;
  t3945 = t3259*t3882;
  t3947 = 0. + t3936 + t3941 + t3945;
  t3892 = 0.340999127418*t1095*t3887;
  t3926 = t2987*t3921;
  t3948 = t3947*t3302;
  t3949 = 0. + t3892 + t3926 + t3948;
  t3958 = t3406*t3887;
  t3960 = 0.340999127418*t1095*t3921;
  t3971 = t3947*t3439;
  t3973 = 0. + t3958 + t3960 + t3971;
  t3981 = t3551*t3947;
  t3982 = t3887*t3565;
  t3987 = t3921*t3593;
  t3992 = 0. + t3981 + t3982 + t3987;
  t3675 = Sin(var1[5]);
  t3951 = -0.340999127418*t958*t3949;
  t3980 = t3368*t3973;
  t3993 = t3499*t3992;
  t3995 = 0. + t3951 + t3980 + t3993;
  t3998 = t3646*t3949;
  t4002 = -0.340999127418*t958*t3973;
  t4003 = t3665*t3992;
  t4004 = 0. + t3998 + t4002 + t4003;
  t3690 = Sin(var1[4]);
  t3692 = 0.366501*t3486;
  t3697 = 0. + t3692;
  t3701 = 0.930418*t3486;
  t3703 = 0. + t3701;
  t3708 = -1.000000637725*t958;
  t3709 = 1. + t3708;
  t4078 = -0.366501*t2212;
  t4082 = -0.3172717261340007*t1390;
  t4085 = t4078 + t4082;
  t4093 = -0.930418*t1414;
  t4098 = -0.12497652119782442*t1390;
  t4099 = t4093 + t4098;
  t4107 = -0.366501*t1979;
  t4108 = -0.930418*t2022;
  t4117 = t4107 + t4108;
  t4091 = t4085*t2889;
  t4106 = t4099*t2668;
  t4118 = t2672*t4117;
  t4119 = 0. + t4091 + t4106 + t4118;
  t4123 = 0.340999127418*t1286*t4085;
  t4125 = t2497*t4099;
  t4137 = t2603*t4117;
  t4143 = 0. + t4123 + t4125 + t4137;
  t4151 = t2131*t4085;
  t4152 = 0.340999127418*t1286*t4099;
  t4154 = t1890*t4117;
  t4162 = 0. + t4151 + t4152 + t4154;
  t4120 = t3086*t4119;
  t4147 = 0.340999127418*t1207*t4143;
  t4175 = t3029*t4162;
  t4180 = 0. + t4120 + t4147 + t4175;
  t4185 = t2661*t4119;
  t4186 = t2465*t4143;
  t4189 = 0.340999127418*t1207*t4162;
  t4193 = 0. + t4185 + t4186 + t4189;
  t4197 = t3259*t4119;
  t4200 = t3246*t4143;
  t4205 = t3228*t4162;
  t4207 = 0. + t4197 + t4200 + t4205;
  t4184 = t2987*t4180;
  t4195 = 0.340999127418*t1095*t4193;
  t4214 = t4207*t3302;
  t4218 = 0. + t4184 + t4195 + t4214;
  t4227 = 0.340999127418*t1095*t4180;
  t4229 = t3406*t4193;
  t4233 = t4207*t3439;
  t4238 = 0. + t4227 + t4229 + t4233;
  t4240 = t3551*t4207;
  t4242 = t4193*t3565;
  t4243 = t4180*t3593;
  t4250 = 0. + t4240 + t4242 + t4243;
  t4220 = -0.340999127418*t958*t4218;
  t4239 = t3368*t4238;
  t4251 = t3499*t4250;
  t4252 = 0. + t4220 + t4239 + t4251;
  t4257 = t3646*t4218;
  t4259 = -0.340999127418*t958*t4238;
  t4261 = t3665*t4250;
  t4262 = 0. + t4257 + t4259 + t4261;
  t3633 = -1.*t501*t3623;
  t3669 = t3638*t3668;
  t3672 = 0. + t3633 + t3669;
  t3677 = t3638*t3623;
  t3679 = t501*t3668;
  t3682 = 0. + t3677 + t3679;
  t3997 = -1.*t501*t3995;
  t4009 = t3638*t4004;
  t4013 = 0. + t3997 + t4009;
  t4018 = t3638*t3995;
  t4022 = t501*t4004;
  t4024 = 0. + t4018 + t4022;
  t4253 = -1.*t501*t4252;
  t4266 = t3638*t4262;
  t4267 = 0. + t4253 + t4266;
  t4273 = t3638*t4252;
  t4275 = t501*t4262;
  t4277 = 0. + t4273 + t4275;
  t3698 = t3697*t3308;
  t3706 = t3703*t3450;
  t3710 = t3709*t3607;
  t3712 = 0. + t3698 + t3706 + t3710;
  t4034 = t3697*t3949;
  t4040 = t3703*t3973;
  t4045 = t3709*t3992;
  t4049 = 0. + t4034 + t4040 + t4045;
  t4301 = t3697*t4218;
  t4302 = t3703*t4238;
  t4303 = t3709*t4250;
  t4307 = 0. + t4301 + t4302 + t4303;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00001*(0. - 1.*t3690*t3712 + t32*(0. + t3675*t3682 + t3672*t420));
  p_output1[10]=0.00001*(0. - 1.*t3690*t4049 + t32*(0. + t3675*t4024 + t4013*t420));
  p_output1[11]=0.00001*(0. + t32*(0. + t420*t4267 + t3675*t4277) - 1.*t3690*t4307);
  p_output1[12]=0.00001*(0. - 1.*t3672*t3675 + t3682*t420);
  p_output1[13]=0.00001*(0. - 1.*t3675*t4013 + t4024*t420);
  p_output1[14]=0.00001*(0. - 1.*t3675*t4267 + t420*t4277);
  p_output1[15]=0.00001*t3712;
  p_output1[16]=0.00001*t4049;
  p_output1[17]=0.00001*t4307;
  p_output1[18]=0.00001*(0. - 1.*t3308*t3697 - 1.*t3450*t3703 - 1.*t3607*t3709);
  p_output1[19]=0.00001*(0. - 1.*t3697*t3949 - 1.*t3703*t3973 - 1.*t3709*t3992);
  p_output1[20]=0.00001*(0. - 1.*t3697*t4218 - 1.*t3703*t4238 - 1.*t3709*t4250);
  p_output1[21]=0.00001*(0. - 0.930418*t3308 + 0.366501*t3450);
  p_output1[22]=0.00001*(0. - 0.930418*t3949 + 0.366501*t3973);
  p_output1[23]=0.00001*(0. - 0.930418*t4218 + 0.366501*t4238);
  p_output1[24]=0.00001*(0. + 0.930418*t2916 + 0.366501*t3179);
  p_output1[25]=0.00001*(0. + 0.930418*t3887 + 0.366501*t3921);
  p_output1[26]=0.00001*(0. + 0.366501*t4180 + 0.930418*t4193);
  p_output1[27]=0.00001*(0. - 0.366501*t2424 - 0.930418*t2632);
  p_output1[28]=0.00001*(0. - 0.366501*t3821 - 0.930418*t3839);
  p_output1[29]=0.00001*(0. - 0.930418*t4143 - 0.366501*t4162);
  p_output1[30]=0.00001*(0. - 0.930418*t1696 - 0.366501*t2332);
  p_output1[31]=0.00001*(0. - 0.930418*t3732 - 0.366501*t3791);
  p_output1[32]=0.00001*(0. - 0.366501*t4085 - 0.930418*t4099);
  p_output1[33]=1.9655299995924306e-12;
  p_output1[34]=2.3257599990333946e-12;
  p_output1[35]=0.00001000000637725;
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
}



void Jdq_AMBody_left_toe_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
