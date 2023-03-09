/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:57:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_left_knee_src.h"

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
  double t110;
  double t159;
  double t394;
  double t432;
  double t457;
  double t747;
  double t835;
  double t1046;
  double t1216;
  double t1229;
  double t1236;
  double t1354;
  double t1380;
  double t2070;
  double t2179;
  double t2219;
  double t2451;
  double t1571;
  double t1948;
  double t2042;
  double t2544;
  double t2598;
  double t2661;
  double t2680;
  double t2748;
  double t2810;
  double t3000;
  double t3002;
  double t2329;
  double t2367;
  double t2416;
  double t2445;
  double t3072;
  double t3079;
  double t3244;
  double t3257;
  double t3284;
  double t3288;
  double t3289;
  double t3293;
  double t3307;
  double t3315;
  double t3363;
  double t3366;
  double t3395;
  double t3434;
  double t3489;
  double t3490;
  double t3498;
  double t3518;
  double t3519;
  double t3520;
  double t3528;
  double t3535;
  double t3566;
  double t3583;
  double t3260;
  double t3262;
  double t3263;
  double t3383;
  double t3404;
  double t3411;
  double t3567;
  double t3568;
  double t1519;
  double t3593;
  double t3601;
  double t3604;
  double t3606;
  double t3622;
  double t3627;
  double t3665;
  double t3680;
  double t3727;
  double t3570;
  double t3685;
  double t3698;
  double t1516;
  double t3729;
  double t3741;
  double t3742;
  double t3794;
  double t3799;
  double t3802;
  double t3807;
  double t3811;
  double t3813;
  double t3800;
  double t3808;
  double t3815;
  double t3817;
  double t3962;
  double t3967;
  double t3968;
  double t3978;
  double t3981;
  double t3987;
  double t3993;
  double t3994;
  double t3996;
  double t4004;
  double t4006;
  double t4007;
  double t4020;
  double t4036;
  double t4038;
  double t4040;
  double t4043;
  double t4048;
  double t4013;
  double t4014;
  double t4049;
  double t4051;
  double t4062;
  double t4064;
  double t4080;
  double t4085;
  double t4094;
  double t4096;
  double t4107;
  double t4108;
  double t4053;
  double t4087;
  double t4109;
  double t4111;
  double t4126;
  double t4132;
  double t4144;
  double t4153;
  double t3758;
  double t4116;
  double t4163;
  double t4166;
  double t4171;
  double t4179;
  double t4181;
  double t3788;
  double t4242;
  double t4245;
  double t4249;
  double t4259;
  double t3955;
  double t4381;
  double t4389;
  double t4394;
  double t4396;
  double t4431;
  double t4437;
  double t4419;
  double t4429;
  double t4441;
  double t4451;
  double t4456;
  double t4459;
  double t4467;
  double t4468;
  double t4471;
  double t4475;
  double t4477;
  double t4478;
  double t4455;
  double t4470;
  double t4482;
  double t4486;
  double t4497;
  double t4498;
  double t4501;
  double t4502;
  double t4492;
  double t4509;
  double t4513;
  double t4524;
  double t4526;
  double t4529;
  double t4549;
  double t4552;
  double t4558;
  double t4562;
  double t73;
  double t1060;
  double t1437;
  double t1481;
  double t1484;
  double t3719;
  double t3743;
  double t3746;
  double t3756;
  double t3776;
  double t3783;
  double t3784;
  double t3786;
  double t3819;
  double t3825;
  double t3830;
  double t3841;
  double t3852;
  double t3875;
  double t3881;
  double t3902;
  double t3903;
  double t3906;
  double t3924;
  double t3927;
  double t3931;
  double t3942;
  double t3991;
  double t4008;
  double t4009;
  double t4010;
  double t4169;
  double t4188;
  double t4189;
  double t4194;
  double t4197;
  double t4198;
  double t4204;
  double t4222;
  double t4267;
  double t4273;
  double t4285;
  double t4293;
  double t4295;
  double t4308;
  double t4309;
  double t4310;
  double t4311;
  double t4313;
  double t4318;
  double t4339;
  double t4353;
  double t4363;
  double t4393;
  double t4397;
  double t4405;
  double t4406;
  double t4520;
  double t4530;
  double t4532;
  double t4537;
  double t4538;
  double t4544;
  double t4546;
  double t4548;
  double t4564;
  double t4570;
  double t4572;
  double t4579;
  double t4584;
  double t4588;
  double t4594;
  double t4599;
  double t4601;
  double t4602;
  double t4607;
  double t4611;
  double t4621;
  double t4626;
  t110 = Cos(var1[9]);
  t159 = -1.*t110;
  t394 = 1. + t159;
  t432 = -0.8656776547239999*t394;
  t457 = 1. + t432;
  t747 = -0.366501*t457;
  t835 = -0.3172717261340007*t394;
  t1046 = t747 + t835;
  t1216 = -0.134322983001*t394;
  t1229 = 1. + t1216;
  t1236 = -0.930418*t1229;
  t1354 = -0.12497652119782442*t394;
  t1380 = t1236 + t1354;
  t2070 = Cos(var1[8]);
  t2179 = -1.*t2070;
  t2219 = 1. + t2179;
  t2451 = Sin(var1[9]);
  t1571 = Cos(var1[7]);
  t1948 = -1.*t1571;
  t2042 = 1. + t1948;
  t2544 = -0.930418*t2451;
  t2598 = 0. + t2544;
  t2661 = -0.366501*t2598;
  t2680 = 0.366501*t2451;
  t2748 = 0. + t2680;
  t2810 = -0.930418*t2748;
  t3000 = t2661 + t2810;
  t3002 = Sin(var1[8]);
  t2329 = -0.8656776547239999*t2219;
  t2367 = 1. + t2329;
  t2416 = t1046*t2367;
  t2445 = 0.340999127418*t1380*t2219;
  t3072 = -0.930418*t3002;
  t3079 = 0. + t3072;
  t3244 = t3000*t3079;
  t3257 = 0. + t2416 + t2445 + t3244;
  t3284 = -0.134322983001*t2219;
  t3288 = 1. + t3284;
  t3289 = t1380*t3288;
  t3293 = 0.340999127418*t1046*t2219;
  t3307 = 0.366501*t3002;
  t3315 = 0. + t3307;
  t3363 = t3000*t3315;
  t3366 = 0. + t3289 + t3293 + t3363;
  t3395 = Sin(var1[7]);
  t3434 = -1.000000637725*t2219;
  t3489 = 1. + t3434;
  t3490 = t3489*t3000;
  t3498 = -0.366501*t3002;
  t3518 = 0. + t3498;
  t3519 = t1380*t3518;
  t3520 = 0.930418*t3002;
  t3528 = 0. + t3520;
  t3535 = t1046*t3528;
  t3566 = 0. + t3490 + t3519 + t3535;
  t3583 = Cos(var1[6]);
  t3260 = -0.340999127418*t2042*t3257;
  t3262 = -0.8656776547239999*t2042;
  t3263 = 1. + t3262;
  t3383 = t3263*t3366;
  t3404 = -0.930418*t3395;
  t3411 = 0. + t3404;
  t3567 = t3411*t3566;
  t3568 = 0. + t3260 + t3383 + t3567;
  t1519 = Sin(var1[6]);
  t3593 = -0.134322983001*t2042;
  t3601 = 1. + t3593;
  t3604 = t3601*t3257;
  t3606 = -0.340999127418*t2042*t3366;
  t3622 = -0.366501*t3395;
  t3627 = 0. + t3622;
  t3665 = t3627*t3566;
  t3680 = 0. + t3604 + t3606 + t3665;
  t3727 = Cos(var1[5]);
  t3570 = -1.*t1519*t3568;
  t3685 = t3583*t3680;
  t3698 = 0. + t3570 + t3685;
  t1516 = Sin(var1[5]);
  t3729 = t3583*t3568;
  t3741 = t1519*t3680;
  t3742 = 0. + t3729 + t3741;
  t3794 = 0.366501*t3395;
  t3799 = 0. + t3794;
  t3802 = 0.930418*t3395;
  t3807 = 0. + t3802;
  t3811 = -1.000000637725*t2042;
  t3813 = 1. + t3811;
  t3800 = t3799*t3257;
  t3808 = t3807*t3366;
  t3815 = t3813*t3566;
  t3817 = 0. + t3800 + t3808 + t3815;
  t3962 = 0.259155*t1229;
  t3967 = -0.22434503092393926*t394;
  t3968 = -0.366501*t2451;
  t3978 = 0. + t3968;
  t3981 = -0.707107*t3978;
  t3987 = t3962 + t3967 + t3981;
  t3993 = -0.657905*t457;
  t3994 = 0.0883716288660118*t394;
  t3996 = 0.930418*t2451;
  t4004 = 0. + t3996;
  t4006 = -0.707107*t4004;
  t4007 = t3993 + t3994 + t4006;
  t4020 = -1.000000637725*t394;
  t4036 = 1. + t4020;
  t4038 = -0.707107*t4036;
  t4040 = -0.657905*t2598;
  t4043 = 0.259155*t2748;
  t4048 = t4038 + t4040 + t4043;
  t4013 = 0.340999127418*t2219*t3987;
  t4014 = t2367*t4007;
  t4049 = t4048*t3079;
  t4051 = 0. + t4013 + t4014 + t4049;
  t4062 = t3288*t3987;
  t4064 = 0.340999127418*t2219*t4007;
  t4080 = t4048*t3315;
  t4085 = 0. + t4062 + t4064 + t4080;
  t4094 = t3489*t4048;
  t4096 = t3987*t3518;
  t4107 = t4007*t3528;
  t4108 = 0. + t4094 + t4096 + t4107;
  t4053 = -0.340999127418*t2042*t4051;
  t4087 = t3263*t4085;
  t4109 = t3411*t4108;
  t4111 = 0. + t4053 + t4087 + t4109;
  t4126 = t3601*t4051;
  t4132 = -0.340999127418*t2042*t4085;
  t4144 = t3627*t4108;
  t4153 = 0. + t4126 + t4132 + t4144;
  t3758 = Cos(var1[4]);
  t4116 = -1.*t1519*t4111;
  t4163 = t3583*t4153;
  t4166 = 0. + t4116 + t4163;
  t4171 = t3583*t4111;
  t4179 = t1519*t4153;
  t4181 = 0. + t4171 + t4179;
  t3788 = Sin(var1[4]);
  t4242 = t3799*t4051;
  t4245 = t3807*t4085;
  t4249 = t3813*t4108;
  t4259 = 0. + t4242 + t4245 + t4249;
  t3955 = 3.6361499999859603e-7*var2[9];
  t4381 = 0.707107*t3978;
  t4389 = t3962 + t3967 + t4381;
  t4394 = 0.707107*t4004;
  t4396 = t3993 + t3994 + t4394;
  t4431 = 0.707107*t4036;
  t4437 = t4431 + t4040 + t4043;
  t4419 = 0.340999127418*t2219*t4389;
  t4429 = t2367*t4396;
  t4441 = t4437*t3079;
  t4451 = 0. + t4419 + t4429 + t4441;
  t4456 = t3288*t4389;
  t4459 = 0.340999127418*t2219*t4396;
  t4467 = t4437*t3315;
  t4468 = 0. + t4456 + t4459 + t4467;
  t4471 = t3489*t4437;
  t4475 = t4389*t3518;
  t4477 = t4396*t3528;
  t4478 = 0. + t4471 + t4475 + t4477;
  t4455 = -0.340999127418*t2042*t4451;
  t4470 = t3263*t4468;
  t4482 = t3411*t4478;
  t4486 = 0. + t4455 + t4470 + t4482;
  t4497 = t3601*t4451;
  t4498 = -0.340999127418*t2042*t4468;
  t4501 = t3627*t4478;
  t4502 = 0. + t4497 + t4498 + t4501;
  t4492 = -1.*t1519*t4486;
  t4509 = t3583*t4502;
  t4513 = 0. + t4492 + t4509;
  t4524 = t3583*t4486;
  t4526 = t1519*t4502;
  t4529 = 0. + t4524 + t4526;
  t4549 = t3799*t4451;
  t4552 = t3807*t4468;
  t4558 = t3813*t4478;
  t4562 = 0. + t4549 + t4552 + t4558;
  t73 = 1.000000637725*var2[9];
  t1060 = 0.366501*t1046;
  t1437 = 0.930418*t1380;
  t1481 = 0. + t1060 + t1437;
  t1484 = var2[8]*t1481;
  t3719 = -1.*t1516*t3698;
  t3743 = t3727*t3742;
  t3746 = 0. + t3719 + t3743;
  t3756 = var2[4]*t3746;
  t3776 = t3727*t3698;
  t3783 = t1516*t3742;
  t3784 = 0. + t3776 + t3783;
  t3786 = t3758*t3784;
  t3819 = -1.*t3788*t3817;
  t3825 = 0. + t3786 + t3819;
  t3830 = var2[3]*t3825;
  t3841 = -0.930418*t3257;
  t3852 = 0.366501*t3366;
  t3875 = 0. + t3841 + t3852;
  t3881 = var2[7]*t3875;
  t3902 = -1.*t3799*t3257;
  t3903 = -1.*t3807*t3366;
  t3906 = -1.*t3813*t3566;
  t3924 = 0. + t3902 + t3903 + t3906;
  t3927 = var2[6]*t3924;
  t3931 = var2[5]*t3817;
  t3942 = t73 + t1484 + t3756 + t3830 + t3881 + t3927 + t3931;
  t3991 = 0.930418*t3987;
  t4008 = 0.366501*t4007;
  t4009 = 0. + t3991 + t4008;
  t4010 = var2[8]*t4009;
  t4169 = -1.*t1516*t4166;
  t4188 = t3727*t4181;
  t4189 = 0. + t4169 + t4188;
  t4194 = var2[4]*t4189;
  t4197 = t3727*t4166;
  t4198 = t1516*t4181;
  t4204 = 0. + t4197 + t4198;
  t4222 = t3758*t4204;
  t4267 = -1.*t3788*t4259;
  t4273 = 0. + t4222 + t4267;
  t4285 = var2[3]*t4273;
  t4293 = -0.930418*t4051;
  t4295 = 0.366501*t4085;
  t4308 = 0. + t4293 + t4295;
  t4309 = var2[7]*t4308;
  t4310 = -1.*t3799*t4051;
  t4311 = -1.*t3807*t4085;
  t4313 = -1.*t3813*t4108;
  t4318 = 0. + t4310 + t4311 + t4313;
  t4339 = var2[6]*t4318;
  t4353 = var2[5]*t4259;
  t4363 = t3955 + t4010 + t4194 + t4285 + t4309 + t4339 + t4353;
  t4393 = 0.930418*t4389;
  t4397 = 0.366501*t4396;
  t4405 = 0. + t4393 + t4397;
  t4406 = var2[8]*t4405;
  t4520 = -1.*t1516*t4513;
  t4530 = t3727*t4529;
  t4532 = 0. + t4520 + t4530;
  t4537 = var2[4]*t4532;
  t4538 = t3727*t4513;
  t4544 = t1516*t4529;
  t4546 = 0. + t4538 + t4544;
  t4548 = t3758*t4546;
  t4564 = -1.*t3788*t4562;
  t4570 = 0. + t4548 + t4564;
  t4572 = var2[3]*t4570;
  t4579 = -0.930418*t4451;
  t4584 = 0.366501*t4468;
  t4588 = 0. + t4579 + t4584;
  t4594 = var2[7]*t4588;
  t4599 = -1.*t3799*t4451;
  t4601 = -1.*t3807*t4468;
  t4602 = -1.*t3813*t4478;
  t4607 = 0. + t4599 + t4601 + t4602;
  t4611 = var2[6]*t4607;
  t4621 = var2[5]*t4562;
  t4626 = t3955 + t4406 + t4537 + t4572 + t4594 + t4611 + t4621;
  p_output1[0]=0.000309*t3942 + 0.004296*t4363 + 0.001393*t4626;
  p_output1[1]=0.00004*t3942 + 0.001393*t4363 + 0.036157*t4626;
  p_output1[2]=0.038903*t3942 + 0.000309*t4363 + 0.00004*t4626;
}



void AMBody_left_knee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
