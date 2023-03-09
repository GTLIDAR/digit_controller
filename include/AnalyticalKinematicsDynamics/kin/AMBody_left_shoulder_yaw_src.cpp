/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_left_shoulder_yaw_src.h"

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
  double t452;
  double t501;
  double t712;
  double t989;
  double t953;
  double t877;
  double t918;
  double t936;
  double t1011;
  double t1014;
  double t1036;
  double t1147;
  double t1172;
  double t1186;
  double t1232;
  double t1322;
  double t2005;
  double t2723;
  double t1453;
  double t1779;
  double t1926;
  double t2253;
  double t2268;
  double t2380;
  double t2388;
  double t2436;
  double t2656;
  double t2667;
  double t2787;
  double t2806;
  double t2871;
  double t2908;
  double t3096;
  double t3203;
  double t3213;
  double t3218;
  double t3229;
  double t3232;
  double t3235;
  double t3261;
  double t3305;
  double t3314;
  double t3337;
  double t3342;
  double t3343;
  double t3364;
  double t3365;
  double t3612;
  double t3494;
  double t3496;
  double t3510;
  double t3584;
  double t3587;
  double t3589;
  double t3590;
  double t3591;
  double t3493;
  double t3623;
  double t3624;
  double t3626;
  double t3674;
  double t3679;
  double t3689;
  double t3704;
  double t3715;
  double t3429;
  double t3432;
  double t3437;
  double t3440;
  double t3484;
  double t3746;
  double t3775;
  double t3778;
  double t3595;
  double t3731;
  double t3732;
  double t3782;
  double t3987;
  double t4057;
  double t4063;
  double t4080;
  double t4092;
  double t4109;
  double t4155;
  double t4159;
  double t4178;
  double t4268;
  double t4271;
  double t4284;
  double t4285;
  double t4290;
  double t4295;
  double t4296;
  double t4304;
  double t4217;
  double t4226;
  double t4257;
  double t4258;
  double t3802;
  double t3807;
  double t4343;
  double t4348;
  double t4375;
  double t4289;
  double t4309;
  double t4327;
  double t4518;
  double t4525;
  double t4528;
  double t4538;
  double t4546;
  double t4556;
  double t4581;
  double t4595;
  double t4601;
  double t4664;
  double t4665;
  double t4670;
  double t4672;
  double t4686;
  double t4687;
  double t4688;
  double t4689;
  double t4619;
  double t4620;
  double t4633;
  double t4647;
  double t4720;
  double t4741;
  double t4752;
  double t4678;
  double t4691;
  double t4693;
  double t3979;
  double t4064;
  double t4117;
  double t4123;
  double t4141;
  double t4154;
  double t4181;
  double t4206;
  double t4211;
  double t4213;
  double t4267;
  double t4331;
  double t4377;
  double t4391;
  double t4392;
  double t4446;
  double t4447;
  double t4449;
  double t4457;
  double t4462;
  double t4482;
  double t4498;
  double t4512;
  double t4514;
  double t4533;
  double t4563;
  double t4570;
  double t4573;
  double t4580;
  double t4603;
  double t4605;
  double t4607;
  double t4610;
  double t4651;
  double t4719;
  double t4755;
  double t4759;
  double t4762;
  double t4766;
  double t4768;
  double t4771;
  double t4779;
  double t4783;
  double t4784;
  double t4811;
  double t4839;
  t452 = Cos(var1[15]);
  t501 = -1.*t452;
  t712 = 1. + t501;
  t989 = Sin(var1[15]);
  t953 = -0.051978134642000004*t712;
  t877 = -0.9945383682050002*t712;
  t918 = 1. + t877;
  t936 = -0.073913*t918;
  t1011 = -0.707107*t989;
  t1014 = t953 + t1011;
  t1036 = 0.703234*t1014;
  t1147 = 0.05226439969100001*t712;
  t1172 = -0.703234*t989;
  t1186 = t1147 + t1172;
  t1232 = 0.707107*t1186;
  t1322 = t936 + t1036 + t1232;
  t2005 = -0.49726168403800003*t712;
  t2723 = Sin(var1[14]);
  t1453 = -0.5054634410180001*t712;
  t1779 = 1. + t1453;
  t1926 = 0.703234*t1779;
  t2253 = -0.073913*t989;
  t2268 = t2005 + t2253;
  t2380 = 0.707107*t2268;
  t2388 = 0.707107*t989;
  t2436 = t953 + t2388;
  t2656 = -0.073913*t2436;
  t2667 = t1926 + t2380 + t2656;
  t2787 = -0.104528*t2723;
  t2806 = 0. + t2787;
  t2871 = Cos(var1[14]);
  t2908 = -1.*t2871;
  t3096 = 1. + t2908;
  t3203 = -1.0000001112680001*t3096;
  t3213 = 1. + t3203;
  t3218 = -0.500001190325*t712;
  t3229 = 1. + t3218;
  t3232 = 0.707107*t3229;
  t3235 = 0.073913*t989;
  t3261 = t2005 + t3235;
  t3305 = 0.703234*t3261;
  t3314 = 0.703234*t989;
  t3337 = t1147 + t3314;
  t3342 = -0.073913*t3337;
  t3343 = t3232 + t3305 + t3342;
  t3364 = 0.994522*t2723;
  t3365 = 0. + t3364;
  t3612 = Cos(var1[13]);
  t3494 = 0.103955395616*t3096*t1322;
  t3496 = -0.994522*t2723;
  t3510 = 0. + t3496;
  t3584 = t3510*t3343;
  t3587 = -0.9890740084840001*t3096;
  t3589 = 1. + t3587;
  t3590 = t3589*t2667;
  t3591 = 0. + t3494 + t3584 + t3590;
  t3493 = Sin(var1[13]);
  t3623 = -0.010926102783999999*t3096;
  t3624 = 1. + t3623;
  t3626 = t3624*t1322;
  t3674 = 0.104528*t2723;
  t3679 = 0. + t3674;
  t3689 = t3679*t3343;
  t3704 = 0.103955395616*t3096*t2667;
  t3715 = 0. + t3626 + t3689 + t3704;
  t3429 = t2806*t1322;
  t3432 = t3213*t3343;
  t3437 = t3365*t2667;
  t3440 = 0. + t3429 + t3432 + t3437;
  t3484 = Cos(var1[5]);
  t3746 = t3612*t3591;
  t3775 = -1.*t3493*t3715;
  t3778 = 0. + t3746 + t3775;
  t3595 = t3493*t3591;
  t3731 = t3612*t3715;
  t3732 = 0. + t3595 + t3731;
  t3782 = Sin(var1[5]);
  t3987 = -0.994522*t918;
  t4057 = -0.104528*t1014;
  t4063 = t3987 + t4057;
  t4080 = -0.104528*t1779;
  t4092 = -0.994522*t2436;
  t4109 = t4080 + t4092;
  t4155 = -0.104528*t3261;
  t4159 = -0.994522*t3337;
  t4178 = t4155 + t4159;
  t4268 = 0.103955395616*t3096*t4063;
  t4271 = t3510*t4178;
  t4284 = t3589*t4109;
  t4285 = 0. + t4268 + t4271 + t4284;
  t4290 = t3624*t4063;
  t4295 = t3679*t4178;
  t4296 = 0.103955395616*t3096*t4109;
  t4304 = 0. + t4290 + t4295 + t4296;
  t4217 = t2806*t4063;
  t4226 = t3213*t4178;
  t4257 = t3365*t4109;
  t4258 = 0. + t4217 + t4226 + t4257;
  t3802 = Sin(var1[4]);
  t3807 = Cos(var1[4]);
  t4343 = t3612*t4285;
  t4348 = -1.*t3493*t4304;
  t4375 = 0. + t4343 + t4348;
  t4289 = t3493*t4285;
  t4309 = t3612*t4304;
  t4327 = 0. + t4289 + t4309;
  t4518 = 0.073913*t918;
  t4525 = -0.703234*t1014;
  t4528 = t4518 + t4525 + t1232;
  t4538 = -0.703234*t1779;
  t4546 = 0.073913*t2436;
  t4556 = t4538 + t2380 + t4546;
  t4581 = -0.703234*t3261;
  t4595 = 0.073913*t3337;
  t4601 = t3232 + t4581 + t4595;
  t4664 = 0.103955395616*t3096*t4528;
  t4665 = t3510*t4601;
  t4670 = t3589*t4556;
  t4672 = 0. + t4664 + t4665 + t4670;
  t4686 = t3624*t4528;
  t4687 = t3679*t4601;
  t4688 = 0.103955395616*t3096*t4556;
  t4689 = 0. + t4686 + t4687 + t4688;
  t4619 = t2806*t4528;
  t4620 = t3213*t4601;
  t4633 = t3365*t4556;
  t4647 = 0. + t4619 + t4620 + t4633;
  t4720 = t3612*t4672;
  t4741 = -1.*t3493*t4689;
  t4752 = 0. + t4720 + t4741;
  t4678 = t3493*t4672;
  t4691 = t3612*t4689;
  t4693 = 0. + t4678 + t4691;
  t3979 = -4.610340000044122e-7*var2[15];
  t4064 = 0.994522*t4063;
  t4117 = 0.104528*t4109;
  t4123 = 0. + t4064 + t4117;
  t4141 = var2[14]*t4123;
  t4154 = -1.*t2806*t4063;
  t4181 = -1.*t3213*t4178;
  t4206 = -1.*t3365*t4109;
  t4211 = 0. + t4154 + t4181 + t4206;
  t4213 = var2[13]*t4211;
  t4267 = var2[5]*t4258;
  t4331 = t3484*t4327;
  t4377 = -1.*t4375*t3782;
  t4391 = 0. + t4331 + t4377;
  t4392 = var2[4]*t4391;
  t4446 = -1.*t4258*t3802;
  t4447 = t3484*t4375;
  t4449 = t4327*t3782;
  t4457 = 0. + t4447 + t4449;
  t4462 = t3807*t4457;
  t4482 = 0. + t4446 + t4462;
  t4498 = var2[3]*t4482;
  t4512 = t3979 + t4141 + t4213 + t4267 + t4392 + t4498;
  t4514 = 1.000001499774*var2[15];
  t4533 = 0.994522*t4528;
  t4563 = 0.104528*t4556;
  t4570 = 0. + t4533 + t4563;
  t4573 = var2[14]*t4570;
  t4580 = -1.*t2806*t4528;
  t4603 = -1.*t3213*t4601;
  t4605 = -1.*t3365*t4556;
  t4607 = 0. + t4580 + t4603 + t4605;
  t4610 = var2[13]*t4607;
  t4651 = var2[5]*t4647;
  t4719 = t3484*t4693;
  t4755 = -1.*t4752*t3782;
  t4759 = 0. + t4719 + t4755;
  t4762 = var2[4]*t4759;
  t4766 = -1.*t4647*t3802;
  t4768 = t3484*t4752;
  t4771 = t4693*t3782;
  t4779 = 0. + t4768 + t4771;
  t4783 = t3807*t4779;
  t4784 = 0. + t4766 + t4783;
  t4811 = var2[3]*t4784;
  t4839 = t4514 + t4573 + t4610 + t4651 + t4762 + t4811;
  p_output1[0]=0.00697*((0. - 1.*t3440*t3802 + (0. + t3484*t3778 + t3732*t3782)*t3807)*var2[3] + (0. + t3484*t3732 - 1.*t3778*t3782)*var2[4] + t3440*var2[5] + (0. - 1.*t1322*t2806 - 1.*t3213*t3343 - 1.*t2667*t3365)*var2[13] + (0. + 0.994522*t1322 + 0.104528*t2667)*var2[14] - 8.80875999975661e-7*var2[15]);
  p_output1[1]=0.007*t4512 + 0.00002*t4839;
  p_output1[2]=0.00002*t4512 + 0.00067*t4839;
}



void AMBody_left_shoulder_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
