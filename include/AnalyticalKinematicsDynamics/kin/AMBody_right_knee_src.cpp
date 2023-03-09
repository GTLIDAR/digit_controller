/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:10:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_right_knee_src.h"

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
  double t237;
  double t252;
  double t337;
  double t122;
  double t139;
  double t163;
  double t568;
  double t365;
  double t455;
  double t553;
  double t558;
  double t659;
  double t726;
  double t819;
  double t889;
  double t1502;
  double t1599;
  double t1677;
  double t1836;
  double t2003;
  double t2028;
  double t2051;
  double t2118;
  double t2130;
  double t2280;
  double t2288;
  double t2303;
  double t2305;
  double t2327;
  double t2333;
  double t2411;
  double t2459;
  double t2550;
  double t2642;
  double t1093;
  double t1149;
  double t1443;
  double t2119;
  double t2174;
  double t2211;
  double t2651;
  double t2666;
  double t3309;
  double t2692;
  double t2775;
  double t2863;
  double t2879;
  double t2931;
  double t2934;
  double t2971;
  double t2981;
  double t3057;
  double t3163;
  double t3165;
  double t3167;
  double t3168;
  double t3182;
  double t3191;
  double t3215;
  double t3242;
  double t3247;
  double t3249;
  double t3269;
  double t3277;
  double t3290;
  double t3293;
  double t3319;
  double t3331;
  double t3341;
  double t3348;
  double t3570;
  double t3463;
  double t3489;
  double t3499;
  double t3502;
  double t3505;
  double t3537;
  double t3543;
  double t3560;
  double t3451;
  double t3571;
  double t3573;
  double t3583;
  double t3584;
  double t3585;
  double t3589;
  double t3591;
  double t3592;
  double t3357;
  double t3369;
  double t3373;
  double t3384;
  double t3436;
  double t3601;
  double t3602;
  double t3604;
  double t3567;
  double t3595;
  double t3596;
  double t3607;
  double t3727;
  double t3729;
  double t3732;
  double t3768;
  double t3775;
  double t3790;
  double t3809;
  double t3813;
  double t3814;
  double t3802;
  double t3807;
  double t3818;
  double t3821;
  double t3829;
  double t3831;
  double t3841;
  double t3843;
  double t3878;
  double t3879;
  double t3881;
  double t3882;
  double t3927;
  double t3928;
  double t3930;
  double t3931;
  double t3933;
  double t3939;
  double t3944;
  double t3945;
  double t3899;
  double t3902;
  double t3916;
  double t3922;
  double t3652;
  double t3666;
  double t3954;
  double t3965;
  double t3966;
  double t3932;
  double t3948;
  double t3952;
  double t4011;
  double t4012;
  double t4013;
  double t4018;
  double t4020;
  double t4022;
  double t4029;
  double t4032;
  double t4033;
  double t4017;
  double t4027;
  double t4039;
  double t4041;
  double t4063;
  double t4071;
  double t4075;
  double t4077;
  double t4107;
  double t4119;
  double t4132;
  double t4138;
  double t4235;
  double t4238;
  double t4240;
  double t4247;
  double t4257;
  double t4264;
  double t4337;
  double t4354;
  double t4195;
  double t4197;
  double t4203;
  double t4205;
  double t4364;
  double t4368;
  double t4369;
  double t4254;
  double t4355;
  double t4361;
  double t25;
  double t2683;
  double t3010;
  double t3036;
  double t3054;
  double t3304;
  double t3340;
  double t3349;
  double t3351;
  double t3354;
  double t3400;
  double t3412;
  double t3414;
  double t3419;
  double t3434;
  double t3599;
  double t3610;
  double t3611;
  double t3614;
  double t3656;
  double t3671;
  double t3699;
  double t3700;
  double t3704;
  double t3709;
  double t3710;
  double t3714;
  double t3723;
  double t3736;
  double t3791;
  double t3796;
  double t3800;
  double t3826;
  double t3859;
  double t3860;
  double t3866;
  double t3887;
  double t3890;
  double t3891;
  double t3894;
  double t3898;
  double t3923;
  double t3953;
  double t3967;
  double t3979;
  double t3980;
  double t3982;
  double t3987;
  double t3988;
  double t3992;
  double t3996;
  double t3997;
  double t4002;
  double t4004;
  double t4010;
  double t4043;
  double t4085;
  double t4089;
  double t4105;
  double t4145;
  double t4150;
  double t4162;
  double t4164;
  double t4187;
  double t4211;
  double t4215;
  double t4225;
  double t4228;
  double t4232;
  double t4363;
  double t4371;
  double t4372;
  double t4387;
  double t4388;
  double t4397;
  double t4403;
  double t4404;
  double t4412;
  double t4415;
  double t4433;
  double t4434;
  t237 = Cos(var1[20]);
  t252 = -1.*t237;
  t337 = 1. + t252;
  t122 = Cos(var1[19]);
  t139 = -1.*t122;
  t163 = 1. + t139;
  t568 = Sin(var1[20]);
  t365 = -0.8656776547239999*t337;
  t455 = 1. + t365;
  t553 = -0.657905*t455;
  t558 = 0.0883716288660118*t337;
  t659 = -0.930418*t568;
  t726 = 0. + t659;
  t819 = -0.707107*t726;
  t889 = t553 + t558 + t819;
  t1502 = -0.134322983001*t337;
  t1599 = 1. + t1502;
  t1677 = -0.259155*t1599;
  t1836 = 0.22434503092393926*t337;
  t2003 = -0.366501*t568;
  t2028 = 0. + t2003;
  t2051 = -0.707107*t2028;
  t2118 = t1677 + t1836 + t2051;
  t2130 = Sin(var1[19]);
  t2280 = -1.000000637725*t337;
  t2288 = 1. + t2280;
  t2303 = -0.707107*t2288;
  t2305 = 0.366501*t568;
  t2327 = 0. + t2305;
  t2333 = -0.259155*t2327;
  t2411 = 0.930418*t568;
  t2459 = 0. + t2411;
  t2550 = -0.657905*t2459;
  t2642 = t2303 + t2333 + t2550;
  t1093 = -0.340999127418*t163*t889;
  t1149 = -0.134322983001*t163;
  t1443 = 1. + t1149;
  t2119 = t1443*t2118;
  t2174 = 0.366501*t2130;
  t2211 = 0. + t2174;
  t2651 = t2211*t2642;
  t2666 = 0. + t1093 + t2119 + t2651;
  t3309 = Sin(var1[18]);
  t2692 = -0.8656776547239999*t163;
  t2775 = 1. + t2692;
  t2863 = t2775*t889;
  t2879 = -0.340999127418*t163*t2118;
  t2931 = 0.930418*t2130;
  t2934 = 0. + t2931;
  t2971 = t2934*t2642;
  t2981 = 0. + t2863 + t2879 + t2971;
  t3057 = Cos(var1[18]);
  t3163 = -1.*t3057;
  t3165 = 1. + t3163;
  t3167 = -1.000000637725*t3165;
  t3168 = 1. + t3167;
  t3182 = -0.930418*t2130;
  t3191 = 0. + t3182;
  t3215 = t3191*t889;
  t3242 = -0.366501*t2130;
  t3247 = 0. + t3242;
  t3249 = t3247*t2118;
  t3269 = -1.000000637725*t163;
  t3277 = 1. + t3269;
  t3290 = t3277*t2642;
  t3293 = 0. + t3215 + t3249 + t3290;
  t3319 = 0.930418*t3309;
  t3331 = 0. + t3319;
  t3341 = -0.366501*t3309;
  t3348 = 0. + t3341;
  t3570 = Cos(var1[17]);
  t3463 = 0.366501*t3309;
  t3489 = 0. + t3463;
  t3499 = t3489*t3293;
  t3502 = 0.340999127418*t3165*t2666;
  t3505 = -0.134322983001*t3165;
  t3537 = 1. + t3505;
  t3543 = t3537*t2981;
  t3560 = 0. + t3499 + t3502 + t3543;
  t3451 = Sin(var1[17]);
  t3571 = -0.930418*t3309;
  t3573 = 0. + t3571;
  t3583 = t3573*t3293;
  t3584 = -0.8656776547239999*t3165;
  t3585 = 1. + t3584;
  t3589 = t3585*t2666;
  t3591 = 0.340999127418*t3165*t2981;
  t3592 = 0. + t3583 + t3589 + t3591;
  t3357 = t3168*t3293;
  t3369 = t3331*t2666;
  t3373 = t3348*t2981;
  t3384 = 0. + t3357 + t3369 + t3373;
  t3436 = Cos(var1[5]);
  t3601 = t3570*t3560;
  t3602 = -1.*t3451*t3592;
  t3604 = 0. + t3601 + t3602;
  t3567 = t3451*t3560;
  t3595 = t3570*t3592;
  t3596 = 0. + t3567 + t3595;
  t3607 = Sin(var1[5]);
  t3727 = -0.366501*t455;
  t3729 = -0.3172717261340007*t337;
  t3732 = t3727 + t3729;
  t3768 = 0.930418*t1599;
  t3775 = 0.12497652119782442*t337;
  t3790 = t3768 + t3775;
  t3809 = 0.930418*t2327;
  t3813 = -0.366501*t2459;
  t3814 = t3809 + t3813;
  t3802 = -0.340999127418*t163*t3732;
  t3807 = t1443*t3790;
  t3818 = t2211*t3814;
  t3821 = 0. + t3802 + t3807 + t3818;
  t3829 = t2775*t3732;
  t3831 = -0.340999127418*t163*t3790;
  t3841 = t2934*t3814;
  t3843 = 0. + t3829 + t3831 + t3841;
  t3878 = t3732*t3191;
  t3879 = t3790*t3247;
  t3881 = t3277*t3814;
  t3882 = 0. + t3878 + t3879 + t3881;
  t3927 = t3489*t3882;
  t3928 = 0.340999127418*t3165*t3821;
  t3930 = t3537*t3843;
  t3931 = 0. + t3927 + t3928 + t3930;
  t3933 = t3573*t3882;
  t3939 = t3585*t3821;
  t3944 = 0.340999127418*t3165*t3843;
  t3945 = 0. + t3933 + t3939 + t3944;
  t3899 = t3168*t3882;
  t3902 = t3331*t3821;
  t3916 = t3348*t3843;
  t3922 = 0. + t3899 + t3902 + t3916;
  t3652 = Sin(var1[4]);
  t3666 = Cos(var1[4]);
  t3954 = t3570*t3931;
  t3965 = -1.*t3451*t3945;
  t3966 = 0. + t3954 + t3965;
  t3932 = t3451*t3931;
  t3948 = t3570*t3945;
  t3952 = 0. + t3932 + t3948;
  t4011 = 0.657905*t455;
  t4012 = -0.0883716288660118*t337;
  t4013 = t4011 + t4012 + t819;
  t4018 = 0.259155*t1599;
  t4020 = -0.22434503092393926*t337;
  t4022 = t4018 + t4020 + t2051;
  t4029 = 0.259155*t2327;
  t4032 = 0.657905*t2459;
  t4033 = t2303 + t4029 + t4032;
  t4017 = -0.340999127418*t163*t4013;
  t4027 = t1443*t4022;
  t4039 = t2211*t4033;
  t4041 = 0. + t4017 + t4027 + t4039;
  t4063 = t2775*t4013;
  t4071 = -0.340999127418*t163*t4022;
  t4075 = t2934*t4033;
  t4077 = 0. + t4063 + t4071 + t4075;
  t4107 = t3191*t4013;
  t4119 = t3247*t4022;
  t4132 = t3277*t4033;
  t4138 = 0. + t4107 + t4119 + t4132;
  t4235 = t3489*t4138;
  t4238 = 0.340999127418*t3165*t4041;
  t4240 = t3537*t4077;
  t4247 = 0. + t4235 + t4238 + t4240;
  t4257 = t3573*t4138;
  t4264 = t3585*t4041;
  t4337 = 0.340999127418*t3165*t4077;
  t4354 = 0. + t4257 + t4264 + t4337;
  t4195 = t3168*t4138;
  t4197 = t3331*t4041;
  t4203 = t3348*t4077;
  t4205 = 0. + t4195 + t4197 + t4203;
  t4364 = t3570*t4247;
  t4368 = -1.*t3451*t4354;
  t4369 = 0. + t4364 + t4368;
  t4254 = t3451*t4247;
  t4355 = t3570*t4354;
  t4361 = 0. + t4254 + t4355;
  t25 = 3.6361499999859603e-7*var2[20];
  t2683 = -0.366501*t2666;
  t3010 = -0.930418*t2981;
  t3036 = 0. + t2683 + t3010;
  t3054 = var2[18]*t3036;
  t3304 = -1.*t3168*t3293;
  t3340 = -1.*t3331*t2666;
  t3349 = -1.*t3348*t2981;
  t3351 = 0. + t3304 + t3340 + t3349;
  t3354 = var2[17]*t3351;
  t3400 = var2[5]*t3384;
  t3412 = 0.366501*t889;
  t3414 = -0.930418*t2118;
  t3419 = 0. + t3412 + t3414;
  t3434 = var2[19]*t3419;
  t3599 = t3436*t3596;
  t3610 = -1.*t3604*t3607;
  t3611 = 0. + t3599 + t3610;
  t3614 = var2[4]*t3611;
  t3656 = -1.*t3384*t3652;
  t3671 = t3436*t3604;
  t3699 = t3596*t3607;
  t3700 = 0. + t3671 + t3699;
  t3704 = t3666*t3700;
  t3709 = 0. + t3656 + t3704;
  t3710 = var2[3]*t3709;
  t3714 = t25 + t3054 + t3354 + t3400 + t3434 + t3614 + t3710;
  t3723 = 1.000000637725*var2[20];
  t3736 = 0.366501*t3732;
  t3791 = -0.930418*t3790;
  t3796 = 0. + t3736 + t3791;
  t3800 = var2[19]*t3796;
  t3826 = -0.366501*t3821;
  t3859 = -0.930418*t3843;
  t3860 = 0. + t3826 + t3859;
  t3866 = var2[18]*t3860;
  t3887 = -1.*t3168*t3882;
  t3890 = -1.*t3331*t3821;
  t3891 = -1.*t3348*t3843;
  t3894 = 0. + t3887 + t3890 + t3891;
  t3898 = var2[17]*t3894;
  t3923 = var2[5]*t3922;
  t3953 = t3436*t3952;
  t3967 = -1.*t3966*t3607;
  t3979 = 0. + t3953 + t3967;
  t3980 = var2[4]*t3979;
  t3982 = -1.*t3922*t3652;
  t3987 = t3436*t3966;
  t3988 = t3952*t3607;
  t3992 = 0. + t3987 + t3988;
  t3996 = t3666*t3992;
  t3997 = 0. + t3982 + t3996;
  t4002 = var2[3]*t3997;
  t4004 = t3723 + t3800 + t3866 + t3898 + t3923 + t3980 + t4002;
  t4010 = -3.6361499999859603e-7*var2[20];
  t4043 = -0.366501*t4041;
  t4085 = -0.930418*t4077;
  t4089 = 0. + t4043 + t4085;
  t4105 = var2[18]*t4089;
  t4145 = -1.*t3168*t4138;
  t4150 = -1.*t3331*t4041;
  t4162 = -1.*t3348*t4077;
  t4164 = 0. + t4145 + t4150 + t4162;
  t4187 = var2[17]*t4164;
  t4211 = var2[5]*t4205;
  t4215 = 0.366501*t4013;
  t4225 = -0.930418*t4022;
  t4228 = 0. + t4215 + t4225;
  t4232 = var2[19]*t4228;
  t4363 = t3436*t4361;
  t4371 = -1.*t4369*t3607;
  t4372 = 0. + t4363 + t4371;
  t4387 = var2[4]*t4372;
  t4388 = -1.*t4205*t3652;
  t4397 = t3436*t4369;
  t4403 = t4361*t3607;
  t4404 = 0. + t4397 + t4403;
  t4412 = t3666*t4404;
  t4415 = 0. + t4388 + t4412;
  t4433 = var2[3]*t4415;
  t4434 = t4010 + t4105 + t4187 + t4211 + t4232 + t4387 + t4433;
  p_output1[0]=0.004296*t3714 + 0.000309*t4004 - 0.001393*t4434;
  p_output1[1]=-0.001393*t3714 - 0.00004*t4004 + 0.036157*t4434;
  p_output1[2]=0.000309*t3714 + 0.038903*t4004 - 0.00004*t4434;
}



void AMBody_right_knee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
