/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_right_shoulder_roll_src.h"

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
  double t187;
  double t192;
  double t551;
  double t383;
  double t473;
  double t552;
  double t1583;
  double t1531;
  double t1570;
  double t1612;
  double t1652;
  double t1656;
  double t1692;
  double t1694;
  double t2135;
  double t2156;
  double t2159;
  double t2387;
  double t2390;
  double t2598;
  double t2625;
  double t2630;
  double t2679;
  double t2123;
  double t2162;
  double t2187;
  double t1868;
  double t2699;
  double t3047;
  double t3082;
  double t3083;
  double t3285;
  double t3303;
  double t3310;
  double t529;
  double t795;
  double t800;
  double t1423;
  double t1435;
  double t1442;
  double t1653;
  double t1759;
  double t1776;
  double t1892;
  double t2032;
  double t2277;
  double t2314;
  double t2358;
  double t2606;
  double t2728;
  double t2746;
  double t2777;
  double t2816;
  double t2885;
  double t2903;
  double t2907;
  double t2930;
  double t2936;
  double t2952;
  double t2252;
  double t2970;
  double t2982;
  double t3089;
  double t3161;
  double t3173;
  double t3180;
  double t3209;
  double t3278;
  double t3328;
  double t3330;
  double t3359;
  double t3361;
  double t3370;
  double t3434;
  double t3464;
  double t3477;
  double t3496;
  double t3506;
  double t3531;
  double t3561;
  double t3591;
  double t3611;
  double t3639;
  double t3657;
  double t3675;
  double t3732;
  double t3740;
  double t3743;
  double t3782;
  double t3788;
  double t3803;
  double t4502;
  double t4511;
  double t4576;
  double t4584;
  double t4585;
  double t4521;
  double t4538;
  double t4542;
  double t4723;
  double t4739;
  double t4782;
  double t4790;
  double t4798;
  t187 = Cos(var1[3]);
  t192 = Cos(var1[4]);
  t551 = Cos(var1[24]);
  t383 = Cos(var1[5]);
  t473 = Sin(var1[24]);
  t552 = Sin(var1[5]);
  t1583 = Sin(var1[3]);
  t1531 = Sin(var1[4]);
  t1570 = t187*t383*t1531;
  t1612 = t1583*t552;
  t1652 = t1570 + t1612;
  t1656 = t383*t1583;
  t1692 = -1.*t187*t1531*t552;
  t1694 = t1656 + t1692;
  t2135 = -1.*t383*t1583;
  t2156 = t187*t1531*t552;
  t2159 = t2135 + t2156;
  t2387 = -1.*t383*t1583*t1531;
  t2390 = t187*t552;
  t2598 = t2387 + t2390;
  t2625 = -1.*t187*t383;
  t2630 = -1.*t1583*t1531*t552;
  t2679 = t2625 + t2630;
  t2123 = -1.*t473*t1652;
  t2162 = t551*t2159;
  t2187 = t2123 + t2162;
  t1868 = t551*t1652;
  t2699 = t551*t2679;
  t3047 = t383*t1583*t1531;
  t3082 = -1.*t187*t552;
  t3083 = t3047 + t3082;
  t3285 = t187*t383;
  t3303 = t1583*t1531*t552;
  t3310 = t3285 + t3303;
  t529 = -1.*t187*t192*t383*t473;
  t795 = t551*t187*t192*t552;
  t800 = t529 + t795;
  t1423 = t551*t187*t192*t383;
  t1435 = t187*t192*t473*t552;
  t1442 = t1423 + t1435;
  t1653 = t473*t1652;
  t1759 = t551*t1694;
  t1776 = t1653 + t1759;
  t1892 = -1.*t473*t1694;
  t2032 = t1868 + t1892;
  t2277 = -1.*t551*t1652;
  t2314 = -1.*t473*t2159;
  t2358 = t2277 + t2314;
  t2606 = -1.*t473*t2598;
  t2728 = t2606 + t2699;
  t2746 = t551*t2598;
  t2777 = t473*t2679;
  t2816 = t2746 + t2777;
  t2885 = -1.*t192*t383*t473*t1583;
  t2903 = t551*t192*t1583*t552;
  t2907 = t2885 + t2903;
  t2930 = t551*t192*t383*t1583;
  t2936 = t192*t473*t1583*t552;
  t2952 = t2930 + t2936;
  t2252 = 0.984808*t2187;
  t2970 = t473*t2159;
  t2982 = t1868 + t2970;
  t3089 = t473*t3083;
  t3161 = t3089 + t2699;
  t3173 = t551*t3083;
  t3180 = -1.*t473*t2679;
  t3209 = t3173 + t3180;
  t3278 = -1.*t473*t3083;
  t3328 = t551*t3310;
  t3330 = t3278 + t3328;
  t3359 = -1.*t551*t3083;
  t3361 = -1.*t473*t3310;
  t3370 = t3359 + t3361;
  t3434 = -1.*t192*t383*t473;
  t3464 = t551*t192*t552;
  t3477 = t3434 + t3464;
  t3496 = -1.*t551*t192*t383;
  t3506 = -1.*t192*t473*t552;
  t3531 = t3496 + t3506;
  t3561 = t192*t383*t473;
  t3591 = -1.*t551*t192*t552;
  t3611 = t3561 + t3591;
  t3639 = t551*t192*t383;
  t3657 = t192*t473*t552;
  t3675 = t3639 + t3657;
  t3732 = t383*t473*t1531;
  t3740 = -1.*t551*t1531*t552;
  t3743 = t3732 + t3740;
  t3782 = -1.*t551*t383*t1531;
  t3788 = -1.*t473*t1531*t552;
  t3803 = t3782 + t3788;
  t4502 = -1.*t551;
  t4511 = 1. + t4502;
  t4576 = -0.12*t4511;
  t4584 = -0.4*t473;
  t4585 = 0. + t4576 + t4584;
  t4521 = 0.4*t4511;
  t4538 = -0.12*t473;
  t4542 = 0. + t4521 + t4538;
  t4723 = -0.12*t551;
  t4739 = 0.4*t473;
  t4782 = t4723 + t4739;
  t4790 = -0.4*t551;
  t4798 = t4790 + t4538;
  p_output1[0]=(-0.173648*t2728 + 0.984808*t2816)*var2[3] + (0.984808*t1442 - 0.173648*t800)*var2[4] + (0.984808*t1776 - 0.173648*t2032)*var2[5] + (t2252 - 0.173648*t2358)*var2[24];
  p_output1[1]=(-0.173648*t2187 + 0.984808*t2982)*var2[3] + (-0.173648*t2907 + 0.984808*t2952)*var2[4] + (0.984808*t3161 - 0.173648*t3209)*var2[5] + (0.984808*t3330 - 0.173648*t3370)*var2[24];
  p_output1[2]=(-0.173648*t3743 + 0.984808*t3803)*var2[4] + (0.984808*t3611 - 0.173648*t3675)*var2[5] + (0.984808*t3477 - 0.173648*t3531)*var2[24];
  p_output1[3]=0;
  p_output1[4]=(0.984808*t2728 + 0.173648*t2816)*var2[3] + (0.173648*t1442 + 0.984808*t800)*var2[4] + (0.173648*t1776 + 0.984808*t2032)*var2[5] + (0.173648*t2187 + 0.984808*t2358)*var2[24];
  p_output1[5]=(t2252 + 0.173648*t2982)*var2[3] + (0.984808*t2907 + 0.173648*t2952)*var2[4] + (0.173648*t3161 + 0.984808*t3209)*var2[5] + (0.173648*t3330 + 0.984808*t3370)*var2[24];
  p_output1[6]=(0.984808*t3743 + 0.173648*t3803)*var2[4] + (0.173648*t3611 + 0.984808*t3675)*var2[5] + (0.173648*t3477 + 0.984808*t3531)*var2[24];
  p_output1[7]=0;
  p_output1[8]=t1583*t192*var2[3] + t1531*t187*var2[4];
  p_output1[9]=-1.*t187*t192*var2[3] + t1531*t1583*var2[4];
  p_output1[10]=t192*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.02441*t1583*t192 - 0.11689*t2728 + 0.400559*t2816 + t2598*t4542 + t2679*t4585)*var2[3] + (0.400559*t1442 + 0.02441*t1531*t187 + t187*t192*t383*t4542 + t187*t192*t4585*t552 - 0.11689*t800)*var2[4] + (0.400559*t1776 - 0.11689*t2032 + t1694*t4542 + t1652*t4585)*var2[5] + (0.400559*t2187 - 0.11689*t2358 + t1652*t4782 + t2159*t4798)*var2[24];
  p_output1[13]=var2[1] + (-0.02441*t187*t192 - 0.11689*t2187 + 0.400559*t2982 + t1652*t4542 + t2159*t4585)*var2[3] + (0.02441*t1531*t1583 - 0.11689*t2907 + 0.400559*t2952 + t1583*t192*t383*t4542 + t1583*t192*t4585*t552)*var2[4] + (0.400559*t3161 - 0.11689*t3209 + t2679*t4542 + t3083*t4585)*var2[5] + (0.400559*t3330 - 0.11689*t3370 + t3083*t4782 + t3310*t4798)*var2[24];
  p_output1[14]=var2[2] + (0.02441*t192 - 0.11689*t3743 + 0.400559*t3803 - 1.*t1531*t383*t4542 - 1.*t1531*t4585*t552)*var2[4] + (0.400559*t3611 - 0.11689*t3675 + t192*t383*t4585 - 1.*t192*t4542*t552)*var2[5] + (0.400559*t3477 - 0.11689*t3531 + t192*t383*t4782 + t192*t4798*t552)*var2[24];
  p_output1[15]=0;
}



void dT_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
