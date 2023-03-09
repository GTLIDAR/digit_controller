/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_right_shoulder_roll_src.h"

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
  double t83;
  double t185;
  double t871;
  double t198;
  double t237;
  double t888;
  double t2309;
  double t2054;
  double t2162;
  double t2351;
  double t2378;
  double t2439;
  double t2699;
  double t2701;
  double t2970;
  double t2982;
  double t2986;
  double t3252;
  double t3268;
  double t3285;
  double t3409;
  double t3464;
  double t3490;
  double t2961;
  double t3027;
  double t3034;
  double t2874;
  double t3525;
  double t3897;
  double t3955;
  double t3962;
  double t4193;
  double t4196;
  double t4197;
  double t787;
  double t1035;
  double t1088;
  double t1130;
  double t1698;
  double t1757;
  double t2415;
  double t2703;
  double t2805;
  double t2883;
  double t2903;
  double t3089;
  double t3161;
  double t3169;
  double t3313;
  double t3531;
  double t3561;
  double t3611;
  double t3614;
  double t3732;
  double t3743;
  double t3753;
  double t3759;
  double t3803;
  double t3807;
  double t3046;
  double t3855;
  double t3857;
  double t4008;
  double t4016;
  double t4070;
  double t4086;
  double t4092;
  double t4192;
  double t4215;
  double t4218;
  double t4228;
  double t4240;
  double t4247;
  double t4343;
  double t4358;
  double t4365;
  double t4398;
  double t4419;
  double t4426;
  double t4480;
  double t4501;
  double t4518;
  double t4538;
  double t4562;
  double t4564;
  double t4594;
  double t4597;
  double t4610;
  double t4631;
  double t4632;
  double t4639;
  t83 = Cos(var1[3]);
  t185 = Cos(var1[4]);
  t871 = Cos(var1[24]);
  t198 = Cos(var1[5]);
  t237 = Sin(var1[24]);
  t888 = Sin(var1[5]);
  t2309 = Sin(var1[3]);
  t2054 = Sin(var1[4]);
  t2162 = t83*t198*t2054;
  t2351 = t2309*t888;
  t2378 = t2162 + t2351;
  t2439 = t198*t2309;
  t2699 = -1.*t83*t2054*t888;
  t2701 = t2439 + t2699;
  t2970 = -1.*t198*t2309;
  t2982 = t83*t2054*t888;
  t2986 = t2970 + t2982;
  t3252 = -1.*t198*t2309*t2054;
  t3268 = t83*t888;
  t3285 = t3252 + t3268;
  t3409 = -1.*t83*t198;
  t3464 = -1.*t2309*t2054*t888;
  t3490 = t3409 + t3464;
  t2961 = -1.*t237*t2378;
  t3027 = t871*t2986;
  t3034 = t2961 + t3027;
  t2874 = t871*t2378;
  t3525 = t871*t3490;
  t3897 = t198*t2309*t2054;
  t3955 = -1.*t83*t888;
  t3962 = t3897 + t3955;
  t4193 = t83*t198;
  t4196 = t2309*t2054*t888;
  t4197 = t4193 + t4196;
  t787 = -1.*t83*t185*t198*t237;
  t1035 = t871*t83*t185*t888;
  t1088 = t787 + t1035;
  t1130 = t871*t83*t185*t198;
  t1698 = t83*t185*t237*t888;
  t1757 = t1130 + t1698;
  t2415 = t237*t2378;
  t2703 = t871*t2701;
  t2805 = t2415 + t2703;
  t2883 = -1.*t237*t2701;
  t2903 = t2874 + t2883;
  t3089 = -1.*t871*t2378;
  t3161 = -1.*t237*t2986;
  t3169 = t3089 + t3161;
  t3313 = -1.*t237*t3285;
  t3531 = t3313 + t3525;
  t3561 = t871*t3285;
  t3611 = t237*t3490;
  t3614 = t3561 + t3611;
  t3732 = -1.*t185*t198*t237*t2309;
  t3743 = t871*t185*t2309*t888;
  t3753 = t3732 + t3743;
  t3759 = t871*t185*t198*t2309;
  t3803 = t185*t237*t2309*t888;
  t3807 = t3759 + t3803;
  t3046 = 0.984808*t3034;
  t3855 = t237*t2986;
  t3857 = t2874 + t3855;
  t4008 = t237*t3962;
  t4016 = t4008 + t3525;
  t4070 = t871*t3962;
  t4086 = -1.*t237*t3490;
  t4092 = t4070 + t4086;
  t4192 = -1.*t237*t3962;
  t4215 = t871*t4197;
  t4218 = t4192 + t4215;
  t4228 = -1.*t871*t3962;
  t4240 = -1.*t237*t4197;
  t4247 = t4228 + t4240;
  t4343 = -1.*t185*t198*t237;
  t4358 = t871*t185*t888;
  t4365 = t4343 + t4358;
  t4398 = -1.*t871*t185*t198;
  t4419 = -1.*t185*t237*t888;
  t4426 = t4398 + t4419;
  t4480 = t185*t198*t237;
  t4501 = -1.*t871*t185*t888;
  t4518 = t4480 + t4501;
  t4538 = t871*t185*t198;
  t4562 = t185*t237*t888;
  t4564 = t4538 + t4562;
  t4594 = t198*t237*t2054;
  t4597 = -1.*t871*t2054*t888;
  t4610 = t4594 + t4597;
  t4631 = -1.*t871*t198*t2054;
  t4632 = -1.*t237*t2054*t888;
  t4639 = t4631 + t4632;
  p_output1[0]=(-0.173648*t3531 + 0.984808*t3614)*var2[3] + (-0.173648*t1088 + 0.984808*t1757)*var2[4] + (0.984808*t2805 - 0.173648*t2903)*var2[5] + (t3046 - 0.173648*t3169)*var2[24];
  p_output1[1]=(-0.173648*t3034 + 0.984808*t3857)*var2[3] + (-0.173648*t3753 + 0.984808*t3807)*var2[4] + (0.984808*t4016 - 0.173648*t4092)*var2[5] + (0.984808*t4218 - 0.173648*t4247)*var2[24];
  p_output1[2]=(-0.173648*t4610 + 0.984808*t4639)*var2[4] + (0.984808*t4518 - 0.173648*t4564)*var2[5] + (0.984808*t4365 - 0.173648*t4426)*var2[24];
  p_output1[3]=(0.984808*t3531 + 0.173648*t3614)*var2[3] + (0.984808*t1088 + 0.173648*t1757)*var2[4] + (0.173648*t2805 + 0.984808*t2903)*var2[5] + (0.173648*t3034 + 0.984808*t3169)*var2[24];
  p_output1[4]=(t3046 + 0.173648*t3857)*var2[3] + (0.984808*t3753 + 0.173648*t3807)*var2[4] + (0.173648*t4016 + 0.984808*t4092)*var2[5] + (0.173648*t4218 + 0.984808*t4247)*var2[24];
  p_output1[5]=(0.984808*t4610 + 0.173648*t4639)*var2[4] + (0.173648*t4518 + 0.984808*t4564)*var2[5] + (0.173648*t4365 + 0.984808*t4426)*var2[24];
  p_output1[6]=t185*t2309*var2[3] + t2054*t83*var2[4];
  p_output1[7]=-1.*t185*t83*var2[3] + t2054*t2309*var2[4];
  p_output1[8]=t185*var2[4];
}



void dR_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
