/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_shoulder_roll_joint_right_src.h"

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
  double t335;
  double t479;
  double t2614;
  double t540;
  double t1188;
  double t2669;
  double t3587;
  double t3550;
  double t3578;
  double t3593;
  double t3612;
  double t3630;
  double t3638;
  double t3652;
  double t3902;
  double t3919;
  double t4005;
  double t4060;
  double t4071;
  double t4077;
  double t4097;
  double t4108;
  double t4110;
  double t3852;
  double t4006;
  double t4008;
  double t3707;
  double t4111;
  double t4208;
  double t4216;
  double t4217;
  double t4264;
  double t4265;
  double t4266;
  double t2124;
  double t2728;
  double t2834;
  double t3193;
  double t3310;
  double t3420;
  double t3622;
  double t3659;
  double t3678;
  double t3715;
  double t3721;
  double t4023;
  double t4051;
  double t4052;
  double t4090;
  double t4117;
  double t4120;
  double t4128;
  double t4130;
  double t4153;
  double t4154;
  double t4160;
  double t4165;
  double t4166;
  double t4167;
  double t4020;
  double t4186;
  double t4194;
  double t4222;
  double t4235;
  double t4239;
  double t4241;
  double t4245;
  double t4259;
  double t4267;
  double t4278;
  double t4292;
  double t4293;
  double t4306;
  double t4342;
  double t4344;
  double t4345;
  double t4364;
  double t4365;
  double t4366;
  double t4380;
  double t4382;
  double t4385;
  double t4387;
  double t4388;
  double t4393;
  double t4402;
  double t4403;
  double t4404;
  double t4408;
  double t4416;
  double t4425;
  t335 = Cos(var1[3]);
  t479 = Cos(var1[4]);
  t2614 = Cos(var1[24]);
  t540 = Cos(var1[5]);
  t1188 = Sin(var1[24]);
  t2669 = Sin(var1[5]);
  t3587 = Sin(var1[3]);
  t3550 = Sin(var1[4]);
  t3578 = t335*t540*t3550;
  t3593 = t3587*t2669;
  t3612 = t3578 + t3593;
  t3630 = t540*t3587;
  t3638 = -1.*t335*t3550*t2669;
  t3652 = t3630 + t3638;
  t3902 = -1.*t540*t3587;
  t3919 = t335*t3550*t2669;
  t4005 = t3902 + t3919;
  t4060 = -1.*t540*t3587*t3550;
  t4071 = t335*t2669;
  t4077 = t4060 + t4071;
  t4097 = -1.*t335*t540;
  t4108 = -1.*t3587*t3550*t2669;
  t4110 = t4097 + t4108;
  t3852 = -1.*t1188*t3612;
  t4006 = t2614*t4005;
  t4008 = t3852 + t4006;
  t3707 = t2614*t3612;
  t4111 = t2614*t4110;
  t4208 = t540*t3587*t3550;
  t4216 = -1.*t335*t2669;
  t4217 = t4208 + t4216;
  t4264 = t335*t540;
  t4265 = t3587*t3550*t2669;
  t4266 = t4264 + t4265;
  t2124 = -1.*t335*t479*t540*t1188;
  t2728 = t2614*t335*t479*t2669;
  t2834 = t2124 + t2728;
  t3193 = t2614*t335*t479*t540;
  t3310 = t335*t479*t1188*t2669;
  t3420 = t3193 + t3310;
  t3622 = t1188*t3612;
  t3659 = t2614*t3652;
  t3678 = t3622 + t3659;
  t3715 = -1.*t1188*t3652;
  t3721 = t3707 + t3715;
  t4023 = -1.*t2614*t3612;
  t4051 = -1.*t1188*t4005;
  t4052 = t4023 + t4051;
  t4090 = -1.*t1188*t4077;
  t4117 = t4090 + t4111;
  t4120 = t2614*t4077;
  t4128 = t1188*t4110;
  t4130 = t4120 + t4128;
  t4153 = -1.*t479*t540*t1188*t3587;
  t4154 = t2614*t479*t3587*t2669;
  t4160 = t4153 + t4154;
  t4165 = t2614*t479*t540*t3587;
  t4166 = t479*t1188*t3587*t2669;
  t4167 = t4165 + t4166;
  t4020 = 0.984808*t4008;
  t4186 = t1188*t4005;
  t4194 = t3707 + t4186;
  t4222 = t1188*t4217;
  t4235 = t4222 + t4111;
  t4239 = t2614*t4217;
  t4241 = -1.*t1188*t4110;
  t4245 = t4239 + t4241;
  t4259 = -1.*t1188*t4217;
  t4267 = t2614*t4266;
  t4278 = t4259 + t4267;
  t4292 = -1.*t2614*t4217;
  t4293 = -1.*t1188*t4266;
  t4306 = t4292 + t4293;
  t4342 = -1.*t479*t540*t1188;
  t4344 = t2614*t479*t2669;
  t4345 = t4342 + t4344;
  t4364 = -1.*t2614*t479*t540;
  t4365 = -1.*t479*t1188*t2669;
  t4366 = t4364 + t4365;
  t4380 = t479*t540*t1188;
  t4382 = -1.*t2614*t479*t2669;
  t4385 = t4380 + t4382;
  t4387 = t2614*t479*t540;
  t4388 = t479*t1188*t2669;
  t4393 = t4387 + t4388;
  t4402 = t540*t1188*t3550;
  t4403 = -1.*t2614*t3550*t2669;
  t4404 = t4402 + t4403;
  t4408 = -1.*t2614*t540*t3550;
  t4416 = -1.*t1188*t3550*t2669;
  t4425 = t4408 + t4416;
  p_output1[0]=(-0.173648*t4117 + 0.984808*t4130)*var2[3] + (-0.173648*t2834 + 0.984808*t3420)*var2[4] + (0.984808*t3678 - 0.173648*t3721)*var2[5] + (t4020 - 0.173648*t4052)*var2[24];
  p_output1[1]=(-0.173648*t4008 + 0.984808*t4194)*var2[3] + (-0.173648*t4160 + 0.984808*t4167)*var2[4] + (0.984808*t4235 - 0.173648*t4245)*var2[5] + (0.984808*t4278 - 0.173648*t4306)*var2[24];
  p_output1[2]=(-0.173648*t4404 + 0.984808*t4425)*var2[4] + (0.984808*t4385 - 0.173648*t4393)*var2[5] + (0.984808*t4345 - 0.173648*t4366)*var2[24];
  p_output1[3]=(0.984808*t4117 + 0.173648*t4130)*var2[3] + (0.984808*t2834 + 0.173648*t3420)*var2[4] + (0.173648*t3678 + 0.984808*t3721)*var2[5] + (0.173648*t4008 + 0.984808*t4052)*var2[24];
  p_output1[4]=(t4020 + 0.173648*t4194)*var2[3] + (0.984808*t4160 + 0.173648*t4167)*var2[4] + (0.173648*t4235 + 0.984808*t4245)*var2[5] + (0.173648*t4278 + 0.984808*t4306)*var2[24];
  p_output1[5]=(0.984808*t4404 + 0.173648*t4425)*var2[4] + (0.173648*t4385 + 0.984808*t4393)*var2[5] + (0.173648*t4345 + 0.984808*t4366)*var2[24];
  p_output1[6]=t3587*t479*var2[3] + t335*t3550*var2[4];
  p_output1[7]=-1.*t335*t479*var2[3] + t3550*t3587*var2[4];
  p_output1[8]=t479*var2[4];
}



void dR_shoulder_roll_joint_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
