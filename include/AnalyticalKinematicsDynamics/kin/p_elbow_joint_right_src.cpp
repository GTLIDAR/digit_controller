/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_elbow_joint_right_src.h"

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
  double t912;
  double t522;
  double t2359;
  double t2612;
  double t2694;
  double t2732;
  double t2793;
  double t2820;
  double t2812;
  double t2833;
  double t827;
  double t861;
  double t889;
  double t2815;
  double t2834;
  double t2888;
  double t3021;
  double t3030;
  double t3039;
  double t3317;
  double t3322;
  double t3334;
  double t3372;
  double t764;
  double t3206;
  double t3219;
  double t3122;
  double t3127;
  double t3171;
  double t3260;
  double t3268;
  double t3303;
  double t3359;
  double t3076;
  double t3097;
  double t3610;
  double t3430;
  double t933;
  double t1011;
  double t1780;
  double t2080;
  double t3986;
  double t3895;
  double t3576;
  double t3577;
  double t3582;
  double t3587;
  double t3591;
  double t3600;
  double t3875;
  double t3651;
  double t3743;
  double t3752;
  double t3771;
  double t3772;
  double t3789;
  double t3918;
  double t3940;
  double t3941;
  double t3942;
  double t3948;
  double t3949;
  double t3962;
  double t3964;
  double t3967;
  double t3381;
  double t4044;
  double t3452;
  double t4164;
  double t3631;
  double t4056;
  double t3611;
  double t4212;
  double t4222;
  double t4047;
  double t4055;
  double t4058;
  double t4059;
  double t4060;
  double t4065;
  double t4069;
  double t4070;
  double t4144;
  double t4146;
  double t4159;
  double t4169;
  double t4174;
  double t4192;
  double t4197;
  double t4199;
  double t4239;
  double t4242;
  double t4254;
  double t4263;
  double t4268;
  double t4270;
  double t4272;
  double t4274;
  double t4092;
  double t4119;
  double t4009;
  double t4011;
  double t3989;
  double t3990;
  double t892;
  double t1346;
  double t2190;
  double t2191;
  double t2699;
  double t2754;
  double t2775;
  double t2950;
  double t2964;
  double t3010;
  double t3045;
  double t3072;
  double t3112;
  double t3114;
  double t4514;
  double t4528;
  double t4536;
  double t4552;
  double t4554;
  double t4569;
  double t3183;
  double t3191;
  double t3235;
  double t3247;
  double t3307;
  double t3339;
  double t3412;
  double t3415;
  double t3462;
  double t3498;
  double t3502;
  double t4572;
  double t4573;
  double t4576;
  double t4593;
  double t4596;
  double t4604;
  double t3606;
  double t3608;
  double t3618;
  double t3620;
  double t3637;
  double t3642;
  double t3649;
  double t3849;
  double t3857;
  double t3878;
  double t3883;
  double t3904;
  double t3909;
  double t3912;
  double t3979;
  double t4006;
  double t4036;
  double t4039;
  double t4618;
  double t4619;
  double t4621;
  double t4626;
  double t4631;
  double t4637;
  double t4642;
  double t4644;
  double t4666;
  double t4671;
  double t4672;
  double t4673;
  double t4081;
  double t4086;
  double t4123;
  double t4139;
  double t4203;
  double t4208;
  double t4234;
  double t4237;
  double t4678;
  double t4686;
  double t4688;
  double t4695;
  double t4708;
  double t4711;
  double t4725;
  double t4728;
  double t4301;
  double t4311;
  double t4735;
  double t4759;
  double t4763;
  double t4764;
  double t4364;
  double t4365;
  double t4395;
  double t4400;
  double t4845;
  double t4846;
  double t4847;
  double t4866;
  double t4877;
  double t4891;
  double t4896;
  double t4898;
  double t4903;
  double t4911;
  double t4932;
  double t4939;
  double t4943;
  double t4952;
  double t4967;
  double t4969;
  double t4970;
  double t4975;
  double t4978;
  double t4979;
  double t4982;
  double t4987;
  double t5010;
  double t5015;
  double t5029;
  double t5033;
  double t5044;
  double t5047;
  double t5054;
  double t5067;
  t912 = Sin(var1[25]);
  t522 = Cos(var1[3]);
  t2359 = Cos(var1[24]);
  t2612 = -1.*t2359;
  t2694 = 1. + t2612;
  t2732 = Sin(var1[24]);
  t2793 = Cos(var1[5]);
  t2820 = Sin(var1[3]);
  t2812 = Sin(var1[4]);
  t2833 = Sin(var1[5]);
  t827 = Cos(var1[25]);
  t861 = -1.*t827;
  t889 = 1. + t861;
  t2815 = t522*t2793*t2812;
  t2834 = t2820*t2833;
  t2888 = t2815 + t2834;
  t3021 = -1.*t2793*t2820;
  t3030 = t522*t2812*t2833;
  t3039 = t3021 + t3030;
  t3317 = Cos(var1[26]);
  t3322 = -1.*t3317;
  t3334 = 1. + t3322;
  t3372 = Sin(var1[26]);
  t764 = Cos(var1[4]);
  t3206 = -0.994522*t912;
  t3219 = 0. + t3206;
  t3122 = -1.*t2732*t2888;
  t3127 = t2359*t3039;
  t3171 = t3122 + t3127;
  t3260 = t2359*t2888;
  t3268 = t2732*t3039;
  t3303 = t3260 + t3268;
  t3359 = -0.051978134642000004*t3334;
  t3076 = -0.104528*t912;
  t3097 = 0. + t3076;
  t3610 = 0.05226439969100001*t3334;
  t3430 = 0.49726168403800003*t3334;
  t933 = 0.104528*t912;
  t1011 = 0. + t933;
  t1780 = 0.994522*t912;
  t2080 = 0. + t1780;
  t3986 = Sin(var1[27]);
  t3895 = 0.073913*t3372;
  t3576 = t522*t764*t3219;
  t3577 = -0.103955395616*t889*t3171;
  t3582 = -0.9890740084840001*t889;
  t3587 = 1. + t3582;
  t3591 = t3587*t3303;
  t3600 = t3576 + t3577 + t3591;
  t3875 = -0.703234*t3372;
  t3651 = t522*t764*t3097;
  t3743 = -0.010926102783999999*t889;
  t3752 = 1. + t3743;
  t3771 = t3752*t3171;
  t3772 = -0.103955395616*t889*t3303;
  t3789 = t3651 + t3771 + t3772;
  t3918 = -1.0000001112680001*t889;
  t3940 = 1. + t3918;
  t3941 = t3940*t522*t764;
  t3942 = t1011*t3171;
  t3948 = t2080*t3303;
  t3949 = t3941 + t3942 + t3948;
  t3962 = Cos(var1[27]);
  t3964 = -1.*t3962;
  t3967 = 1. + t3964;
  t3381 = -0.707107*t3372;
  t4044 = -0.49726168403800003*t3334;
  t3452 = -0.073913*t3372;
  t4164 = 0.051978134642000004*t3334;
  t3631 = 0.707107*t3372;
  t4056 = -0.05226439969100001*t3334;
  t3611 = 0.703234*t3372;
  t4212 = -0.104528*t3986;
  t4222 = 0. + t4212;
  t4047 = t4044 + t3895;
  t4055 = t4047*t3600;
  t4058 = t4056 + t3875;
  t4059 = t4058*t3789;
  t4060 = -0.500001190325*t3334;
  t4065 = 1. + t4060;
  t4069 = t4065*t3949;
  t4070 = t4055 + t4059 + t4069;
  t4144 = -0.5054634410180001*t3334;
  t4146 = 1. + t4144;
  t4159 = t4146*t3600;
  t4169 = t4164 + t3381;
  t4174 = t4169*t3789;
  t4192 = t4044 + t3452;
  t4197 = t4192*t3949;
  t4199 = t4159 + t4174 + t4197;
  t4239 = t4164 + t3631;
  t4242 = t4239*t3600;
  t4254 = -0.9945383682050002*t3334;
  t4263 = 1. + t4254;
  t4268 = t4263*t3789;
  t4270 = t4056 + t3611;
  t4272 = t4270*t3949;
  t4274 = t4242 + t4268 + t4272;
  t4092 = -0.994522*t3986;
  t4119 = 0. + t4092;
  t4009 = 0.994522*t3986;
  t4011 = 0. + t4009;
  t3989 = 0.104528*t3986;
  t3990 = 0. + t3989;
  t892 = -0.056500534356700764*t889;
  t1346 = 0.040271188976*t1011;
  t2190 = 0.38315650737400003*t2080;
  t2191 = 0. + t892 + t1346 + t2190;
  t2699 = 0.4*t2694;
  t2754 = -0.12*t2732;
  t2775 = 0. + t2699 + t2754;
  t2950 = -0.12*t2694;
  t2964 = -0.4*t2732;
  t3010 = 0. + t2950 + t2964;
  t3045 = 1.1345904784751044e-7*var1[25];
  t3072 = 0.04027119345689465*t889;
  t3112 = -0.05650052807*t3097;
  t3114 = t3045 + t3072 + t3112;
  t4514 = t2793*t2820*t2812;
  t4528 = -1.*t522*t2833;
  t4536 = t4514 + t4528;
  t4552 = t522*t2793;
  t4554 = t2820*t2812*t2833;
  t4569 = t4552 + t4554;
  t3183 = -1.1924972351948546e-8*var1[25];
  t3191 = 0.38315655000705834*t889;
  t3235 = -0.05650052807*t3219;
  t3247 = t3183 + t3191 + t3235;
  t3307 = 1.5601527583902087e-7*var1[26];
  t3339 = 0.09582494577057615*t3334;
  t3412 = t3359 + t3381;
  t3415 = -0.231098203479*t3412;
  t3462 = t3430 + t3452;
  t3498 = 0.164383620275*t3462;
  t3502 = t3307 + t3339 + t3415 + t3498;
  t4572 = -1.*t2732*t4536;
  t4573 = t2359*t4569;
  t4576 = t4572 + t4573;
  t4593 = t2359*t4536;
  t4596 = t2732*t4569;
  t4604 = t4593 + t4596;
  t3606 = 1.639789470231751e-8*var1[26];
  t3608 = -0.22983603018311177*t3334;
  t3618 = t3610 + t3611;
  t3620 = 0.164383620275*t3618;
  t3637 = t3359 + t3631;
  t3642 = 0.18957839082800002*t3637;
  t3649 = t3606 + t3608 + t3620 + t3642;
  t3849 = -1.568745163810375e-7*var1[26];
  t3857 = 0.08219200580743281*t3334;
  t3878 = t3610 + t3875;
  t3883 = -0.231098203479*t3878;
  t3904 = t3430 + t3895;
  t3909 = 0.18957839082800002*t3904;
  t3912 = t3849 + t3857 + t3883 + t3909;
  t3979 = 0.19098732144477495*t3967;
  t4006 = 0.014401763312*t3990;
  t4036 = 0.137024246638*t4011;
  t4039 = 0. + t3979 + t4006 + t4036;
  t4618 = t764*t3219*t2820;
  t4619 = -0.103955395616*t889*t4576;
  t4621 = t3587*t4604;
  t4626 = t4618 + t4619 + t4621;
  t4631 = t764*t3097*t2820;
  t4637 = t3752*t4576;
  t4642 = -0.103955395616*t889*t4604;
  t4644 = t4631 + t4637 + t4642;
  t4666 = t3940*t764*t2820;
  t4671 = t1011*t4576;
  t4672 = t2080*t4604;
  t4673 = t4666 + t4671 + t4672;
  t4081 = 5.06291820800569e-8*var1[27];
  t4086 = 0.13702426188441388*t3967;
  t4123 = 0.190987300194*t4119;
  t4139 = t4081 + t4086 + t4123;
  t4203 = -4.817066759205414e-7*var1[27];
  t4208 = 0.0144017649144554*t3967;
  t4234 = 0.190987300194*t4222;
  t4237 = t4203 + t4208 + t4234;
  t4678 = t4047*t4626;
  t4686 = t4058*t4644;
  t4688 = t4065*t4673;
  t4695 = t4678 + t4686 + t4688;
  t4708 = t4146*t4626;
  t4711 = t4169*t4644;
  t4725 = t4192*t4673;
  t4728 = t4708 + t4711 + t4725;
  t4301 = -0.010926102783999999*t3967;
  t4311 = 1. + t4301;
  t4735 = t4239*t4626;
  t4759 = t4263*t4644;
  t4763 = t4270*t4673;
  t4764 = t4735 + t4759 + t4763;
  t4364 = -0.9890740084840001*t3967;
  t4365 = 1. + t4364;
  t4395 = -1.0000001112680001*t3967;
  t4400 = 1. + t4395;
  t4845 = -1.*t764*t2793*t2732;
  t4846 = t2359*t764*t2833;
  t4847 = t4845 + t4846;
  t4866 = t2359*t764*t2793;
  t4877 = t764*t2732*t2833;
  t4891 = t4866 + t4877;
  t4896 = -1.*t3219*t2812;
  t4898 = -0.103955395616*t889*t4847;
  t4903 = t3587*t4891;
  t4911 = t4896 + t4898 + t4903;
  t4932 = -1.*t3097*t2812;
  t4939 = t3752*t4847;
  t4943 = -0.103955395616*t889*t4891;
  t4952 = t4932 + t4939 + t4943;
  t4967 = -1.*t3940*t2812;
  t4969 = t1011*t4847;
  t4970 = t2080*t4891;
  t4975 = t4967 + t4969 + t4970;
  t4978 = t4047*t4911;
  t4979 = t4058*t4952;
  t4982 = t4065*t4975;
  t4987 = t4978 + t4979 + t4982;
  t5010 = t4146*t4911;
  t5015 = t4169*t4952;
  t5029 = t4192*t4975;
  t5033 = t5010 + t5015 + t5029;
  t5044 = t4239*t4911;
  t5047 = t4263*t4952;
  t5054 = t4270*t4975;
  t5067 = t5044 + t5047 + t5054;
  p_output1[0]=0. + t2775*t2888 + t3010*t3039 + t3114*t3171 + t3247*t3303 + t3502*t3600 + t3649*t3789 + t3912*t3949 + t4039*t4070 + t4139*t4199 + t4237*t4274 - 0.272168*(-0.103955395616*t3967*t4199 + t4070*t4222 + t4274*t4311) + 0.167144*(t4070*t4119 - 0.103955395616*t3967*t4274 + t4199*t4365) + 0.190987*(t4011*t4199 + t3990*t4274 + t4070*t4400) + t2191*t522*t764 + var1[0];
  p_output1[1]=0. + t2775*t4536 + t3010*t4569 + t3114*t4576 + t3247*t4604 + t3502*t4626 + t3649*t4644 + t3912*t4673 + t4039*t4695 + t4139*t4728 + t4237*t4764 + 0.167144*(t4119*t4695 + t4365*t4728 - 0.103955395616*t3967*t4764) + 0.190987*(t4400*t4695 + t4011*t4728 + t3990*t4764) - 0.272168*(t4222*t4695 - 0.103955395616*t3967*t4728 + t4311*t4764) + t2191*t2820*t764 + var1[1];
  p_output1[2]=0. - 1.*t2191*t2812 + t3114*t4847 + t3247*t4891 + t3502*t4911 + t3649*t4952 + t3912*t4975 + t4039*t4987 + t4139*t5033 + t4237*t5067 + 0.167144*(t4119*t4987 + t4365*t5033 - 0.103955395616*t3967*t5067) + 0.190987*(t4400*t4987 + t4011*t5033 + t3990*t5067) - 0.272168*(t4222*t4987 - 0.103955395616*t3967*t5033 + t4311*t5067) + t2775*t2793*t764 + t2833*t3010*t764 + var1[2];
}



void p_elbow_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
