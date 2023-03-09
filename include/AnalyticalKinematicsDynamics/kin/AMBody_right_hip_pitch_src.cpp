/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_right_hip_pitch_src.h"

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
  double t113;
  double t118;
  double t226;
  double t336;
  double t345;
  double t361;
  double t419;
  double t422;
  double t736;
  double t869;
  double t912;
  double t1066;
  double t1107;
  double t1377;
  double t2582;
  double t1565;
  double t1632;
  double t2189;
  double t2401;
  double t2487;
  double t2531;
  double t2535;
  double t2542;
  double t2549;
  double t2590;
  double t2649;
  double t2667;
  double t2676;
  double t2683;
  double t2755;
  double t2797;
  double t3330;
  double t3225;
  double t3260;
  double t3269;
  double t3271;
  double t3274;
  double t3276;
  double t3278;
  double t3290;
  double t3176;
  double t3344;
  double t3348;
  double t3423;
  double t3437;
  double t3484;
  double t3490;
  double t3492;
  double t3508;
  double t2880;
  double t2970;
  double t3002;
  double t3004;
  double t3171;
  double t3537;
  double t3548;
  double t3551;
  double t3300;
  double t3514;
  double t3515;
  double t3558;
  double t3837;
  double t3872;
  double t3891;
  double t3892;
  double t3893;
  double t3899;
  double t3902;
  double t3903;
  double t3904;
  double t3907;
  double t3908;
  double t3909;
  double t3940;
  double t3941;
  double t3955;
  double t3962;
  double t3971;
  double t4007;
  double t4068;
  double t4071;
  double t4075;
  double t4077;
  double t4093;
  double t4097;
  double t4099;
  double t4111;
  double t4055;
  double t4058;
  double t4059;
  double t4064;
  double t3577;
  double t3620;
  double t4177;
  double t4182;
  double t4188;
  double t4088;
  double t4162;
  double t4172;
  double t3829;
  double t4254;
  double t4259;
  double t4264;
  double t4265;
  double t4275;
  double t4276;
  double t4365;
  double t4371;
  double t4376;
  double t4391;
  double t4398;
  double t4406;
  double t4413;
  double t4417;
  double t4296;
  double t4338;
  double t4340;
  double t4348;
  double t4495;
  double t4496;
  double t4510;
  double t4396;
  double t4418;
  double t4429;
  double t5;
  double t723;
  double t1154;
  double t1240;
  double t1328;
  double t1925;
  double t2461;
  double t2801;
  double t2802;
  double t2842;
  double t3103;
  double t3536;
  double t3565;
  double t3568;
  double t3571;
  double t3615;
  double t3639;
  double t3651;
  double t3710;
  double t3748;
  double t3780;
  double t3781;
  double t3803;
  double t3901;
  double t3912;
  double t3917;
  double t3931;
  double t4009;
  double t4043;
  double t4044;
  double t4045;
  double t4046;
  double t4066;
  double t4173;
  double t4192;
  double t4194;
  double t4195;
  double t4196;
  double t4198;
  double t4200;
  double t4201;
  double t4212;
  double t4232;
  double t4235;
  double t4236;
  double t4263;
  double t4267;
  double t4269;
  double t4272;
  double t4279;
  double t4283;
  double t4292;
  double t4293;
  double t4294;
  double t4361;
  double t4473;
  double t4511;
  double t4512;
  double t4513;
  double t4514;
  double t4516;
  double t4519;
  double t4524;
  double t4526;
  double t4527;
  double t4528;
  double t4555;
  t113 = Cos(var1[19]);
  t118 = -1.*t113;
  t226 = 1. + t118;
  t336 = -0.8656776547239999*t226;
  t345 = 1. + t336;
  t361 = -0.366501*t345;
  t419 = -0.3172717261340007*t226;
  t422 = t361 + t419;
  t736 = -0.134322983001*t226;
  t869 = 1. + t736;
  t912 = 0.930418*t869;
  t1066 = 0.12497652119782442*t226;
  t1107 = t912 + t1066;
  t1377 = Sin(var1[18]);
  t2582 = Sin(var1[19]);
  t1565 = -0.366501*t1377;
  t1632 = 0. + t1565;
  t2189 = 0.930418*t1377;
  t2401 = 0. + t2189;
  t2487 = Cos(var1[18]);
  t2531 = -1.*t2487;
  t2535 = 1. + t2531;
  t2542 = -1.000000637725*t2535;
  t2549 = 1. + t2542;
  t2590 = -0.930418*t2582;
  t2649 = 0. + t2590;
  t2667 = -0.366501*t2649;
  t2676 = -0.366501*t2582;
  t2683 = 0. + t2676;
  t2755 = 0.930418*t2683;
  t2797 = t2667 + t2755;
  t3330 = Sin(var1[17]);
  t3225 = 0.340999127418*t2535*t422;
  t3260 = -0.8656776547239999*t2535;
  t3269 = 1. + t3260;
  t3271 = t3269*t1107;
  t3274 = -0.930418*t1377;
  t3276 = 0. + t3274;
  t3278 = t3276*t2797;
  t3290 = 0. + t3225 + t3271 + t3278;
  t3176 = Cos(var1[17]);
  t3344 = -0.134322983001*t2535;
  t3348 = 1. + t3344;
  t3423 = t3348*t422;
  t3437 = 0.340999127418*t2535*t1107;
  t3484 = 0.366501*t1377;
  t3490 = 0. + t3484;
  t3492 = t3490*t2797;
  t3508 = 0. + t3423 + t3437 + t3492;
  t2880 = t422*t1632;
  t2970 = t1107*t2401;
  t3002 = t2549*t2797;
  t3004 = 0. + t2880 + t2970 + t3002;
  t3171 = Cos(var1[5]);
  t3537 = -1.*t3330*t3290;
  t3548 = t3176*t3508;
  t3551 = 0. + t3537 + t3548;
  t3300 = t3176*t3290;
  t3514 = t3330*t3508;
  t3515 = 0. + t3300 + t3514;
  t3558 = Sin(var1[5]);
  t3837 = -0.259155*t869;
  t3872 = 0.22434503092393926*t226;
  t3891 = 0.366501*t2582;
  t3892 = 0. + t3891;
  t3893 = -0.707107*t3892;
  t3899 = t3837 + t3872 + t3893;
  t3902 = -0.657905*t345;
  t3903 = 0.0883716288660118*t226;
  t3904 = 0.930418*t2582;
  t3907 = 0. + t3904;
  t3908 = -0.707107*t3907;
  t3909 = t3902 + t3903 + t3908;
  t3940 = -1.000000637725*t226;
  t3941 = 1. + t3940;
  t3955 = -0.707107*t3941;
  t3962 = -0.657905*t2649;
  t3971 = -0.259155*t2683;
  t4007 = t3955 + t3962 + t3971;
  t4068 = t3490*t4007;
  t4071 = 0.340999127418*t2535*t3899;
  t4075 = t3348*t3909;
  t4077 = 0. + t4068 + t4071 + t4075;
  t4093 = t3276*t4007;
  t4097 = t3269*t3899;
  t4099 = 0.340999127418*t2535*t3909;
  t4111 = 0. + t4093 + t4097 + t4099;
  t4055 = t2549*t4007;
  t4058 = t2401*t3899;
  t4059 = t1632*t3909;
  t4064 = 0. + t4055 + t4058 + t4059;
  t3577 = Sin(var1[4]);
  t3620 = Cos(var1[4]);
  t4177 = t3176*t4077;
  t4182 = -1.*t3330*t4111;
  t4188 = 0. + t4177 + t4182;
  t4088 = t3330*t4077;
  t4162 = t3176*t4111;
  t4172 = 0. + t4088 + t4162;
  t3829 = -3.6361499999859603e-7*var2[19];
  t4254 = 0.707107*t3892;
  t4259 = t3837 + t3872 + t4254;
  t4264 = 0.707107*t3907;
  t4265 = t3902 + t3903 + t4264;
  t4275 = 0.707107*t3941;
  t4276 = t4275 + t3962 + t3971;
  t4365 = t3490*t4276;
  t4371 = 0.340999127418*t2535*t4259;
  t4376 = t3348*t4265;
  t4391 = 0. + t4365 + t4371 + t4376;
  t4398 = t3276*t4276;
  t4406 = t3269*t4259;
  t4413 = 0.340999127418*t2535*t4265;
  t4417 = 0. + t4398 + t4406 + t4413;
  t4296 = t2549*t4276;
  t4338 = t2401*t4259;
  t4340 = t1632*t4265;
  t4348 = 0. + t4296 + t4338 + t4340;
  t4495 = t3176*t4391;
  t4496 = -1.*t3330*t4417;
  t4510 = 0. + t4495 + t4496;
  t4396 = t3330*t4391;
  t4418 = t3176*t4417;
  t4429 = 0. + t4396 + t4418;
  t5 = -1.000000637725*var2[19];
  t723 = -0.930418*t422;
  t1154 = -0.366501*t1107;
  t1240 = 0. + t723 + t1154;
  t1328 = var2[18]*t1240;
  t1925 = -1.*t422*t1632;
  t2461 = -1.*t1107*t2401;
  t2801 = -1.*t2549*t2797;
  t2802 = 0. + t1925 + t2461 + t2801;
  t2842 = var2[17]*t2802;
  t3103 = var2[5]*t3004;
  t3536 = t3171*t3515;
  t3565 = -1.*t3551*t3558;
  t3568 = 0. + t3536 + t3565;
  t3571 = var2[4]*t3568;
  t3615 = -1.*t3004*t3577;
  t3639 = t3171*t3551;
  t3651 = t3515*t3558;
  t3710 = 0. + t3639 + t3651;
  t3748 = t3620*t3710;
  t3780 = 0. + t3615 + t3748;
  t3781 = var2[3]*t3780;
  t3803 = t5 + t1328 + t2842 + t3103 + t3571 + t3781;
  t3901 = -0.366501*t3899;
  t3912 = -0.930418*t3909;
  t3917 = 0. + t3901 + t3912;
  t3931 = var2[18]*t3917;
  t4009 = -1.*t2549*t4007;
  t4043 = -1.*t2401*t3899;
  t4044 = -1.*t1632*t3909;
  t4045 = 0. + t4009 + t4043 + t4044;
  t4046 = var2[17]*t4045;
  t4066 = var2[5]*t4064;
  t4173 = t3171*t4172;
  t4192 = -1.*t4188*t3558;
  t4194 = 0. + t4173 + t4192;
  t4195 = var2[4]*t4194;
  t4196 = -1.*t4064*t3577;
  t4198 = t3171*t4188;
  t4200 = t4172*t3558;
  t4201 = 0. + t4198 + t4200;
  t4212 = t3620*t4201;
  t4232 = 0. + t4196 + t4212;
  t4235 = var2[3]*t4232;
  t4236 = t3829 + t3931 + t4046 + t4066 + t4195 + t4235;
  t4263 = -0.366501*t4259;
  t4267 = -0.930418*t4265;
  t4269 = 0. + t4263 + t4267;
  t4272 = var2[18]*t4269;
  t4279 = -1.*t2549*t4276;
  t4283 = -1.*t2401*t4259;
  t4292 = -1.*t1632*t4265;
  t4293 = 0. + t4279 + t4283 + t4292;
  t4294 = var2[17]*t4293;
  t4361 = var2[5]*t4348;
  t4473 = t3171*t4429;
  t4511 = -1.*t4510*t3558;
  t4512 = 0. + t4473 + t4511;
  t4513 = var2[4]*t4512;
  t4514 = -1.*t4348*t3577;
  t4516 = t3171*t4510;
  t4519 = t4429*t3558;
  t4524 = 0. + t4516 + t4519;
  t4526 = t3620*t4524;
  t4527 = 0. + t4514 + t4526;
  t4528 = var2[3]*t4527;
  t4555 = t3829 + t4272 + t4294 + t4361 + t4513 + t4528;
  p_output1[0]=0.00015*t3803 + 0.00017*t4236 + 0.01153*t4555;
  p_output1[1]=-0.00018*t3803 + 0.03335*t4236 + 0.00017*t4555;
  p_output1[2]=0.03396*t3803 - 0.00018*t4236 + 0.00015*t4555;
}



void AMBody_right_hip_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
