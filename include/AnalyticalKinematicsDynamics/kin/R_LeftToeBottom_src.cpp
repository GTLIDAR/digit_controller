/*
 * Automatically Generated from Mathematica.
 * Thu 10 Nov 2022 14:17:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t1426;
  double t1400;
  double t1454;
  double t1409;
  double t1481;
  double t1274;
  double t1308;
  double t1315;
  double t1399;
  double t1632;
  double t1635;
  double t1639;
  double t1415;
  double t1503;
  double t1524;
  double t1655;
  double t1126;
  double t1156;
  double t1194;
  double t1532;
  double t1657;
  double t1734;
  double t1764;
  double t1776;
  double t1788;
  double t1821;
  double t1822;
  double t2091;
  double t2093;
  double t2107;
  double t2109;
  double t2112;
  double t2121;
  double t2212;
  double t2213;
  double t2238;
  double t2246;
  double t1735;
  double t1737;
  double t1738;
  double t1791;
  double t1854;
  double t1861;
  double t1864;
  double t1865;
  double t2290;
  double t1888;
  double t1898;
  double t1927;
  double t1933;
  double t1935;
  double t1989;
  double t2041;
  double t2065;
  double t1028;
  double t1119;
  double t1122;
  double t912;
  double t1873;
  double t1880;
  double t1882;
  double t2069;
  double t2301;
  double t2323;
  double t2329;
  double t2336;
  double t2359;
  double t2426;
  double t2444;
  double t2469;
  double t2495;
  double t2536;
  double t2558;
  double t2560;
  double t2573;
  double t2590;
  double t2744;
  double t2803;
  double t2816;
  double t2827;
  double t2833;
  double t2836;
  double t2857;
  double t2867;
  double t2872;
  double t3143;
  double t3158;
  double t3161;
  double t2341;
  double t2386;
  double t2407;
  double t2746;
  double t2748;
  double t2767;
  double t2971;
  double t2990;
  double t3035;
  double t3067;
  double t3097;
  double t3099;
  double t3108;
  double t3111;
  double t3120;
  double t3130;
  double t3186;
  double t3188;
  double t3210;
  double t3212;
  double t3233;
  double t3235;
  double t3238;
  double t3272;
  double t3298;
  double t3312;
  double t3391;
  double t3395;
  double t3408;
  double t154;
  double t167;
  double t209;
  double t263;
  double t301;
  double t915;
  double t1010;
  double t3014;
  double t3019;
  double t3033;
  double t3140;
  double t3167;
  double t3177;
  double t3318;
  double t3351;
  double t3409;
  double t3422;
  double t3424;
  double t3437;
  double t3438;
  double t3457;
  double t3462;
  double t3469;
  double t3484;
  double t3486;
  double t3491;
  double t3495;
  double t3496;
  double t3511;
  double t3516;
  double t3518;
  double t397;
  double t425;
  double t3363;
  double t3470;
  double t3472;
  double t3475;
  double t3522;
  double t3523;
  double t3546;
  double t3555;
  double t3560;
  double t3636;
  double t3637;
  double t3644;
  double t3656;
  double t3663;
  double t262;
  double t3687;
  double t3691;
  double t3692;
  double t3700;
  double t3707;
  double t3716;
  double t3719;
  double t3721;
  double t3728;
  double t3729;
  double t3751;
  double t3539;
  double t279;
  double t296;
  double t3874;
  double t3879;
  double t3890;
  double t3849;
  double t3855;
  double t3856;
  double t3872;
  double t3897;
  double t3898;
  double t3902;
  double t3905;
  double t3912;
  double t3934;
  double t3936;
  double t3938;
  double t3944;
  double t3900;
  double t3913;
  double t3916;
  double t3919;
  double t3921;
  double t3922;
  double t3925;
  double t3931;
  double t3920;
  double t3932;
  double t3946;
  double t3947;
  double t3950;
  double t3953;
  double t3956;
  double t3961;
  double t3968;
  double t3973;
  double t3983;
  double t3984;
  double t3948;
  double t3967;
  double t3986;
  double t3990;
  double t3997;
  double t4007;
  double t4009;
  double t4010;
  double t4016;
  double t4020;
  double t4033;
  double t4035;
  double t3543;
  double t3545;
  double t3991;
  double t4012;
  double t4037;
  double t4044;
  double t4049;
  double t4052;
  double t4058;
  double t4067;
  double t4076;
  double t4078;
  double t4090;
  double t4091;
  double t3673;
  double t3675;
  double t3743;
  double t3748;
  double t4046;
  double t4070;
  double t4094;
  double t4097;
  double t3752;
  double t3753;
  double t4102;
  double t4106;
  double t4109;
  double t4114;
  double t3767;
  double t3768;
  double t4121;
  double t4124;
  double t4128;
  double t4134;
  double t3792;
  double t3798;
  double t3802;
  double t3806;
  double t3817;
  double t3819;
  double t4178;
  double t4185;
  double t4190;
  double t4192;
  double t4193;
  double t4201;
  double t4222;
  double t4238;
  double t4242;
  double t4244;
  double t4191;
  double t4203;
  double t4205;
  double t4206;
  double t4211;
  double t4214;
  double t4215;
  double t4218;
  double t4209;
  double t4219;
  double t4249;
  double t4258;
  double t4262;
  double t4265;
  double t4273;
  double t4277;
  double t4287;
  double t4291;
  double t4292;
  double t4294;
  double t4259;
  double t4286;
  double t4295;
  double t4297;
  double t4302;
  double t4304;
  double t4307;
  double t4310;
  double t4327;
  double t4330;
  double t4331;
  double t4334;
  double t4299;
  double t4313;
  double t4339;
  double t4349;
  double t4351;
  double t4357;
  double t4358;
  double t4368;
  double t4382;
  double t4394;
  double t4398;
  double t4406;
  double t4350;
  double t4372;
  double t4411;
  double t4419;
  double t4430;
  double t4434;
  double t4441;
  double t4442;
  double t4457;
  double t4465;
  double t4475;
  double t4482;
  double t3750;
  double t3765;
  double t3773;
  double t3774;
  double t3801;
  double t3812;
  double t3820;
  double t3828;
  double t4146;
  double t4152;
  double t4154;
  double t4159;
  double t4162;
  double t4163;
  double t4165;
  double t4168;
  double t4505;
  double t4509;
  double t4519;
  double t4524;
  double t4553;
  double t4558;
  double t4561;
  double t4573;
  double t3533;
  double t3669;
  double t3730;
  double t3735;
  double t4101;
  double t4119;
  double t4137;
  double t4138;
  double t4423;
  double t4454;
  double t4490;
  double t4497;
  t1426 = Cos(var1[3]);
  t1400 = Cos(var1[5]);
  t1454 = Sin(var1[4]);
  t1409 = Sin(var1[3]);
  t1481 = Sin(var1[5]);
  t1274 = Cos(var1[7]);
  t1308 = -1.*t1274;
  t1315 = 1. + t1308;
  t1399 = Cos(var1[6]);
  t1632 = t1426*t1400*t1454;
  t1635 = t1409*t1481;
  t1639 = t1632 + t1635;
  t1415 = -1.*t1400*t1409;
  t1503 = t1426*t1454*t1481;
  t1524 = t1415 + t1503;
  t1655 = Sin(var1[6]);
  t1126 = Cos(var1[8]);
  t1156 = -1.*t1126;
  t1194 = 1. + t1156;
  t1532 = t1399*t1524;
  t1657 = -1.*t1639*t1655;
  t1734 = t1532 + t1657;
  t1764 = t1399*t1639;
  t1776 = t1524*t1655;
  t1788 = t1764 + t1776;
  t1821 = Cos(var1[4]);
  t1822 = Sin(var1[7]);
  t2091 = -1.000000637725*t1315;
  t2093 = 1. + t2091;
  t2107 = t1426*t1821*t2093;
  t2109 = -0.930418*t1822;
  t2112 = 0. + t2109;
  t2121 = t1734*t2112;
  t2212 = -0.366501*t1822;
  t2213 = 0. + t2212;
  t2238 = t1788*t2213;
  t2246 = t2107 + t2121 + t2238;
  t1735 = -0.340999127418*t1315*t1734;
  t1737 = -0.134322983001*t1315;
  t1738 = 1. + t1737;
  t1791 = t1738*t1788;
  t1854 = 0.366501*t1822;
  t1861 = 0. + t1854;
  t1864 = t1426*t1821*t1861;
  t1865 = t1735 + t1791 + t1864;
  t2290 = Sin(var1[8]);
  t1888 = -0.8656776547239999*t1315;
  t1898 = 1. + t1888;
  t1927 = t1898*t1734;
  t1933 = -0.340999127418*t1315*t1788;
  t1935 = 0.930418*t1822;
  t1989 = 0. + t1935;
  t2041 = t1426*t1821*t1989;
  t2065 = t1927 + t1933 + t2041;
  t1028 = Cos(var1[9]);
  t1119 = -1.*t1028;
  t1122 = 1. + t1119;
  t912 = Sin(var1[10]);
  t1873 = 0.340999127418*t1194*t1865;
  t1880 = -0.134322983001*t1194;
  t1882 = 1. + t1880;
  t2069 = t1882*t2065;
  t2301 = -0.366501*t2290;
  t2323 = 0. + t2301;
  t2329 = t2246*t2323;
  t2336 = t1873 + t2069 + t2329;
  t2359 = Sin(var1[9]);
  t2426 = -1.000000637725*t1194;
  t2444 = 1. + t2426;
  t2469 = t2444*t2246;
  t2495 = -0.930418*t2290;
  t2536 = 0. + t2495;
  t2558 = t1865*t2536;
  t2560 = 0.366501*t2290;
  t2573 = 0. + t2560;
  t2590 = t2065*t2573;
  t2744 = t2469 + t2558 + t2590;
  t2803 = -0.8656776547239999*t1194;
  t2816 = 1. + t2803;
  t2827 = t2816*t1865;
  t2833 = 0.340999127418*t1194*t2065;
  t2836 = 0.930418*t2290;
  t2857 = 0. + t2836;
  t2867 = t2246*t2857;
  t2872 = t2827 + t2833 + t2867;
  t3143 = Cos(var1[10]);
  t3158 = -1.*t3143;
  t3161 = 1. + t3158;
  t2341 = 0.340999127418*t1122*t2336;
  t2386 = -0.930418*t2359;
  t2407 = 0. + t2386;
  t2746 = t2407*t2744;
  t2748 = -0.8656776547239999*t1122;
  t2767 = 1. + t2748;
  t2971 = t2767*t2872;
  t2990 = t2341 + t2746 + t2971;
  t3035 = -0.134322983001*t1122;
  t3067 = 1. + t3035;
  t3097 = t3067*t2336;
  t3099 = 0.366501*t2359;
  t3108 = 0. + t3099;
  t3111 = t3108*t2744;
  t3120 = 0.340999127418*t1122*t2872;
  t3130 = t3097 + t3111 + t3120;
  t3186 = -0.366501*t2359;
  t3188 = 0. + t3186;
  t3210 = t3188*t2336;
  t3212 = -1.000000637725*t1122;
  t3233 = 1. + t3212;
  t3235 = t3233*t2744;
  t3238 = 0.930418*t2359;
  t3272 = 0. + t3238;
  t3298 = t3272*t2872;
  t3312 = t3210 + t3235 + t3298;
  t3391 = Cos(var1[11]);
  t3395 = -1.*t3391;
  t3408 = 1. + t3395;
  t154 = Cos(var1[12]);
  t167 = -1.*t154;
  t209 = 1. + t167;
  t263 = Sin(var1[12]);
  t301 = Sin(var1[11]);
  t915 = 0.930418*t912;
  t1010 = 0. + t915;
  t3014 = t1010*t2990;
  t3019 = -0.366501*t912;
  t3033 = 0. + t3019;
  t3140 = t3033*t3130;
  t3167 = -1.000000637725*t3161;
  t3177 = 1. + t3167;
  t3318 = t3177*t3312;
  t3351 = t3014 + t3140 + t3318;
  t3409 = -0.8656776547239999*t3161;
  t3422 = 1. + t3409;
  t3424 = t3422*t2990;
  t3437 = 0.340999127418*t3161*t3130;
  t3438 = -0.930418*t912;
  t3457 = 0. + t3438;
  t3462 = t3457*t3312;
  t3469 = t3424 + t3437 + t3462;
  t3484 = 0.340999127418*t3161*t2990;
  t3486 = -0.134322983001*t3161;
  t3491 = 1. + t3486;
  t3495 = t3491*t3130;
  t3496 = 0.366501*t912;
  t3511 = 0. + t3496;
  t3516 = t3511*t3312;
  t3518 = t3484 + t3495 + t3516;
  t397 = 0.366501*t301;
  t425 = 0. + t397;
  t3363 = t425*t3351;
  t3470 = 0.340999127418*t3408*t3469;
  t3472 = -0.134322983001*t3408;
  t3475 = 1. + t3472;
  t3522 = t3475*t3518;
  t3523 = t3363 + t3470 + t3522;
  t3546 = -0.930418*t301;
  t3555 = 0. + t3546;
  t3560 = t3555*t3351;
  t3636 = -0.8656776547239999*t3408;
  t3637 = 1. + t3636;
  t3644 = t3637*t3469;
  t3656 = 0.340999127418*t3408*t3518;
  t3663 = t3560 + t3644 + t3656;
  t262 = -0.175248972904*t209;
  t3687 = -1.000000637725*t3408;
  t3691 = 1. + t3687;
  t3692 = t3691*t3351;
  t3700 = 0.930418*t301;
  t3707 = 0. + t3700;
  t3716 = t3707*t3469;
  t3719 = -0.366501*t301;
  t3721 = 0. + t3719;
  t3728 = t3721*t3518;
  t3729 = t3692 + t3716 + t3728;
  t3751 = -0.120666640478*t209;
  t3539 = 0.444895486988*t209;
  t279 = 0.553471*t263;
  t296 = t262 + t279;
  t3874 = t1400*t1409*t1454;
  t3879 = -1.*t1426*t1481;
  t3890 = t3874 + t3879;
  t3849 = t1426*t1400;
  t3855 = t1409*t1454*t1481;
  t3856 = t3849 + t3855;
  t3872 = t1399*t3856;
  t3897 = -1.*t3890*t1655;
  t3898 = t3872 + t3897;
  t3902 = t1399*t3890;
  t3905 = t3856*t1655;
  t3912 = t3902 + t3905;
  t3934 = t1821*t2093*t1409;
  t3936 = t3898*t2112;
  t3938 = t3912*t2213;
  t3944 = t3934 + t3936 + t3938;
  t3900 = -0.340999127418*t1315*t3898;
  t3913 = t1738*t3912;
  t3916 = t1821*t1409*t1861;
  t3919 = t3900 + t3913 + t3916;
  t3921 = t1898*t3898;
  t3922 = -0.340999127418*t1315*t3912;
  t3925 = t1821*t1409*t1989;
  t3931 = t3921 + t3922 + t3925;
  t3920 = 0.340999127418*t1194*t3919;
  t3932 = t1882*t3931;
  t3946 = t3944*t2323;
  t3947 = t3920 + t3932 + t3946;
  t3950 = t2444*t3944;
  t3953 = t3919*t2536;
  t3956 = t3931*t2573;
  t3961 = t3950 + t3953 + t3956;
  t3968 = t2816*t3919;
  t3973 = 0.340999127418*t1194*t3931;
  t3983 = t3944*t2857;
  t3984 = t3968 + t3973 + t3983;
  t3948 = 0.340999127418*t1122*t3947;
  t3967 = t2407*t3961;
  t3986 = t2767*t3984;
  t3990 = t3948 + t3967 + t3986;
  t3997 = t3067*t3947;
  t4007 = t3108*t3961;
  t4009 = 0.340999127418*t1122*t3984;
  t4010 = t3997 + t4007 + t4009;
  t4016 = t3188*t3947;
  t4020 = t3233*t3961;
  t4033 = t3272*t3984;
  t4035 = t4016 + t4020 + t4033;
  t3543 = 0.218018*t263;
  t3545 = t3539 + t3543;
  t3991 = t1010*t3990;
  t4012 = t3033*t4010;
  t4037 = t3177*t4035;
  t4044 = t3991 + t4012 + t4037;
  t4049 = t3422*t3990;
  t4052 = 0.340999127418*t3161*t4010;
  t4058 = t3457*t4035;
  t4067 = t4049 + t4052 + t4058;
  t4076 = 0.340999127418*t3161*t3990;
  t4078 = t3491*t4010;
  t4090 = t3511*t4035;
  t4091 = t4076 + t4078 + t4090;
  t3673 = -0.353861996165*t209;
  t3675 = 1. + t3673;
  t3743 = -0.952469601425*t209;
  t3748 = 1. + t3743;
  t4046 = t425*t4044;
  t4070 = 0.340999127418*t3408*t4067;
  t4094 = t3475*t4091;
  t4097 = t4046 + t4070 + t4094;
  t3752 = 0.803828*t263;
  t3753 = t3751 + t3752;
  t4102 = t3555*t4044;
  t4106 = t3637*t4067;
  t4109 = 0.340999127418*t3408*t4091;
  t4114 = t4102 + t4106 + t4109;
  t3767 = -0.553471*t263;
  t3768 = t262 + t3767;
  t4121 = t3691*t4044;
  t4124 = t3707*t4067;
  t4128 = t3721*t4091;
  t4134 = t4121 + t4124 + t4128;
  t3792 = -0.803828*t263;
  t3798 = t3751 + t3792;
  t3802 = -0.693671301908*t209;
  t3806 = 1. + t3802;
  t3817 = -0.218018*t263;
  t3819 = t3539 + t3817;
  t4178 = t1821*t1399*t1481;
  t4185 = -1.*t1821*t1400*t1655;
  t4190 = t4178 + t4185;
  t4192 = t1821*t1400*t1399;
  t4193 = t1821*t1481*t1655;
  t4201 = t4192 + t4193;
  t4222 = -1.*t2093*t1454;
  t4238 = t4190*t2112;
  t4242 = t4201*t2213;
  t4244 = t4222 + t4238 + t4242;
  t4191 = -0.340999127418*t1315*t4190;
  t4203 = t1738*t4201;
  t4205 = -1.*t1454*t1861;
  t4206 = t4191 + t4203 + t4205;
  t4211 = t1898*t4190;
  t4214 = -0.340999127418*t1315*t4201;
  t4215 = -1.*t1454*t1989;
  t4218 = t4211 + t4214 + t4215;
  t4209 = 0.340999127418*t1194*t4206;
  t4219 = t1882*t4218;
  t4249 = t4244*t2323;
  t4258 = t4209 + t4219 + t4249;
  t4262 = t2444*t4244;
  t4265 = t4206*t2536;
  t4273 = t4218*t2573;
  t4277 = t4262 + t4265 + t4273;
  t4287 = t2816*t4206;
  t4291 = 0.340999127418*t1194*t4218;
  t4292 = t4244*t2857;
  t4294 = t4287 + t4291 + t4292;
  t4259 = 0.340999127418*t1122*t4258;
  t4286 = t2407*t4277;
  t4295 = t2767*t4294;
  t4297 = t4259 + t4286 + t4295;
  t4302 = t3067*t4258;
  t4304 = t3108*t4277;
  t4307 = 0.340999127418*t1122*t4294;
  t4310 = t4302 + t4304 + t4307;
  t4327 = t3188*t4258;
  t4330 = t3233*t4277;
  t4331 = t3272*t4294;
  t4334 = t4327 + t4330 + t4331;
  t4299 = t1010*t4297;
  t4313 = t3033*t4310;
  t4339 = t3177*t4334;
  t4349 = t4299 + t4313 + t4339;
  t4351 = t3422*t4297;
  t4357 = 0.340999127418*t3161*t4310;
  t4358 = t3457*t4334;
  t4368 = t4351 + t4357 + t4358;
  t4382 = 0.340999127418*t3161*t4297;
  t4394 = t3491*t4310;
  t4398 = t3511*t4334;
  t4406 = t4382 + t4394 + t4398;
  t4350 = t425*t4349;
  t4372 = 0.340999127418*t3408*t4368;
  t4411 = t3475*t4406;
  t4419 = t4350 + t4372 + t4411;
  t4430 = t3555*t4349;
  t4434 = t3637*t4368;
  t4441 = 0.340999127418*t3408*t4406;
  t4442 = t4430 + t4434 + t4441;
  t4457 = t3691*t4349;
  t4465 = t3707*t4368;
  t4475 = t3721*t4406;
  t4482 = t4457 + t4465 + t4475;
  t3750 = t3748*t3523;
  t3765 = t3753*t3663;
  t3773 = t3768*t3729;
  t3774 = t3750 + t3765 + t3773;
  t3801 = t3798*t3523;
  t3812 = t3806*t3663;
  t3820 = t3819*t3729;
  t3828 = t3801 + t3812 + t3820;
  t4146 = t3748*t4097;
  t4152 = t3753*t4114;
  t4154 = t3768*t4134;
  t4159 = t4146 + t4152 + t4154;
  t4162 = t3798*t4097;
  t4163 = t3806*t4114;
  t4165 = t3819*t4134;
  t4168 = t4162 + t4163 + t4165;
  t4505 = t3748*t4419;
  t4509 = t3753*t4442;
  t4519 = t3768*t4482;
  t4524 = t4505 + t4509 + t4519;
  t4553 = t3798*t4419;
  t4558 = t3806*t4442;
  t4561 = t3819*t4482;
  t4573 = t4553 + t4558 + t4561;
  t3533 = t296*t3523;
  t3669 = t3545*t3663;
  t3730 = t3675*t3729;
  t3735 = t3533 + t3669 + t3730;
  t4101 = t296*t4097;
  t4119 = t3545*t4114;
  t4137 = t3675*t4134;
  t4138 = t4101 + t4119 + t4137;
  t4423 = t296*t4419;
  t4454 = t3545*t4442;
  t4490 = t3675*t4482;
  t4497 = t4423 + t4454 + t4490;
  p_output1[0]=0.993567*t3735 - 0.041508*t3774 + 0.105375*t3828;
  p_output1[1]=0.993567*t4138 - 0.041508*t4159 + 0.105375*t4168;
  p_output1[2]=0.993567*t4497 - 0.041508*t4524 + 0.105375*t4573;
  p_output1[3]=0.930418*t3774 + 0.366501*t3828;
  p_output1[4]=0.930418*t4159 + 0.366501*t4168;
  p_output1[5]=0.930418*t4524 + 0.366501*t4573;
  p_output1[6]=-0.113255*t3735 - 0.364143*t3774 + 0.924432*t3828;
  p_output1[7]=-0.113255*t4138 - 0.364143*t4159 + 0.924432*t4168;
  p_output1[8]=-0.113255*t4497 - 0.364143*t4524 + 0.924432*t4573;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
