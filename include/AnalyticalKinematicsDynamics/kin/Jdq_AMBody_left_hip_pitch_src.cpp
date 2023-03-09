/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_hip_pitch_src.h"

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
  double t976;
  double t1207;
  double t1236;
  double t471;
  double t673;
  double t969;
  double t1714;
  double t1245;
  double t1357;
  double t1612;
  double t1701;
  double t1789;
  double t1978;
  double t2004;
  double t2006;
  double t2197;
  double t2198;
  double t2239;
  double t2241;
  double t2282;
  double t2286;
  double t2287;
  double t2290;
  double t2421;
  double t2513;
  double t2571;
  double t2582;
  double t2633;
  double t2946;
  double t3044;
  double t3096;
  double t3098;
  double t3102;
  double t3114;
  double t3199;
  double t2018;
  double t2026;
  double t2111;
  double t2340;
  double t2441;
  double t2510;
  double t3140;
  double t3156;
  double t426;
  double t3220;
  double t3237;
  double t3241;
  double t3249;
  double t3307;
  double t3467;
  double t3481;
  double t3524;
  double t121;
  double t217;
  double t4527;
  double t4531;
  double t4547;
  double t4575;
  double t4584;
  double t4601;
  double t4621;
  double t4627;
  double t4646;
  double t3739;
  double t4560;
  double t4619;
  double t4746;
  double t4756;
  double t4791;
  double t4795;
  double t4799;
  double t4801;
  double t4151;
  double t4304;
  double t4337;
  double t4404;
  double t4419;
  double t4459;
  double t4464;
  double t5152;
  double t5156;
  double t5159;
  double t5195;
  double t5196;
  double t5209;
  double t5235;
  double t5246;
  double t5249;
  double t5181;
  double t5227;
  double t5266;
  double t5278;
  double t5300;
  double t5327;
  double t5338;
  double t5344;
  double t3168;
  double t3542;
  double t3565;
  double t3694;
  double t3742;
  double t3844;
  double t3929;
  double t3940;
  double t4053;
  double t4118;
  double t4351;
  double t4421;
  double t4465;
  double t4472;
  double t4493;
  double t4502;
  double t4789;
  double t4807;
  double t4815;
  double t4825;
  double t4842;
  double t4904;
  double t4973;
  double t4981;
  double t5005;
  double t5016;
  double t5059;
  double t5079;
  double t5082;
  double t5083;
  double t5092;
  double t5118;
  double t5283;
  double t5395;
  double t5396;
  double t5405;
  double t5425;
  double t5428;
  double t5430;
  double t5435;
  double t5457;
  double t5462;
  double t5470;
  double t5489;
  double t5490;
  double t5495;
  double t5496;
  double t5507;
  double t5591;
  double t5596;
  double t5657;
  double t5683;
  double t5696;
  double t5722;
  double t5730;
  double t5732;
  double t5737;
  double t5852;
  double t5858;
  double t5862;
  double t5866;
  double t5903;
  double t5904;
  double t5907;
  double t5917;
  double t5942;
  double t5943;
  double t5952;
  double t5955;
  double t6015;
  double t6021;
  double t6023;
  double t6033;
  double t6039;
  double t6042;
  double t6052;
  double t6062;
  double t6065;
  t976 = Cos(var1[8]);
  t1207 = -1.*t976;
  t1236 = 1. + t1207;
  t471 = Cos(var1[7]);
  t673 = -1.*t471;
  t969 = 1. + t673;
  t1714 = Sin(var1[8]);
  t1245 = -0.8656776547239999*t1236;
  t1357 = 1. + t1245;
  t1612 = -0.657905*t1357;
  t1701 = 0.0883716288660118*t1236;
  t1789 = -0.930418*t1714;
  t1978 = 0. + t1789;
  t2004 = 0.707107*t1978;
  t2006 = t1612 + t1701 + t2004;
  t2197 = -0.134322983001*t1236;
  t2198 = 1. + t2197;
  t2239 = 0.259155*t2198;
  t2241 = -0.22434503092393926*t1236;
  t2282 = 0.366501*t1714;
  t2286 = 0. + t2282;
  t2287 = 0.707107*t2286;
  t2290 = t2239 + t2241 + t2287;
  t2421 = Sin(var1[7]);
  t2513 = -1.000000637725*t1236;
  t2571 = 1. + t2513;
  t2582 = 0.707107*t2571;
  t2633 = -0.366501*t1714;
  t2946 = 0. + t2633;
  t3044 = 0.259155*t2946;
  t3096 = 0.930418*t1714;
  t3098 = 0. + t3096;
  t3102 = -0.657905*t3098;
  t3114 = t2582 + t3044 + t3102;
  t3199 = Cos(var1[6]);
  t2018 = -0.340999127418*t969*t2006;
  t2026 = -0.8656776547239999*t969;
  t2111 = 1. + t2026;
  t2340 = t2111*t2290;
  t2441 = -0.930418*t2421;
  t2510 = 0. + t2441;
  t3140 = t2510*t3114;
  t3156 = 0. + t2018 + t2340 + t3140;
  t426 = Sin(var1[6]);
  t3220 = -0.134322983001*t969;
  t3237 = 1. + t3220;
  t3241 = t3237*t2006;
  t3249 = -0.340999127418*t969*t2290;
  t3307 = -0.366501*t2421;
  t3467 = 0. + t3307;
  t3481 = t3467*t3114;
  t3524 = 0. + t3241 + t3249 + t3481;
  t121 = Cos(var1[4]);
  t217 = Cos(var1[5]);
  t4527 = -0.366501*t1357;
  t4531 = -0.3172717261340007*t1236;
  t4547 = t4527 + t4531;
  t4575 = -0.930418*t2198;
  t4584 = -0.12497652119782442*t1236;
  t4601 = t4575 + t4584;
  t4621 = -0.930418*t2946;
  t4627 = -0.366501*t3098;
  t4646 = t4621 + t4627;
  t3739 = Sin(var1[5]);
  t4560 = -0.340999127418*t969*t4547;
  t4619 = t2111*t4601;
  t4746 = t2510*t4646;
  t4756 = 0. + t4560 + t4619 + t4746;
  t4791 = t3237*t4547;
  t4795 = -0.340999127418*t969*t4601;
  t4799 = t3467*t4646;
  t4801 = 0. + t4791 + t4795 + t4799;
  t4151 = Sin(var1[4]);
  t4304 = 0.366501*t2421;
  t4337 = 0. + t4304;
  t4404 = 0.930418*t2421;
  t4419 = 0. + t4404;
  t4459 = -1.000000637725*t969;
  t4464 = 1. + t4459;
  t5152 = 0.657905*t1357;
  t5156 = -0.0883716288660118*t1236;
  t5159 = t5152 + t5156 + t2004;
  t5195 = -0.259155*t2198;
  t5196 = 0.22434503092393926*t1236;
  t5209 = t5195 + t5196 + t2287;
  t5235 = -0.259155*t2946;
  t5246 = 0.657905*t3098;
  t5249 = t2582 + t5235 + t5246;
  t5181 = -0.340999127418*t969*t5159;
  t5227 = t2111*t5209;
  t5266 = t2510*t5249;
  t5278 = 0. + t5181 + t5227 + t5266;
  t5300 = t3237*t5159;
  t5327 = -0.340999127418*t969*t5209;
  t5338 = t3467*t5249;
  t5344 = 0. + t5300 + t5327 + t5338;
  t3168 = -1.*t426*t3156;
  t3542 = t3199*t3524;
  t3565 = 0. + t3168 + t3542;
  t3694 = t217*t3565;
  t3742 = t3199*t3156;
  t3844 = t426*t3524;
  t3929 = 0. + t3742 + t3844;
  t3940 = t3739*t3929;
  t4053 = 0. + t3694 + t3940;
  t4118 = t121*t4053;
  t4351 = t4337*t2006;
  t4421 = t4419*t2290;
  t4465 = t4464*t3114;
  t4472 = 0. + t4351 + t4421 + t4465;
  t4493 = -1.*t4151*t4472;
  t4502 = 0. + t4118 + t4493;
  t4789 = -1.*t426*t4756;
  t4807 = t3199*t4801;
  t4815 = 0. + t4789 + t4807;
  t4825 = t217*t4815;
  t4842 = t3199*t4756;
  t4904 = t426*t4801;
  t4973 = 0. + t4842 + t4904;
  t4981 = t3739*t4973;
  t5005 = 0. + t4825 + t4981;
  t5016 = t121*t5005;
  t5059 = t4547*t4337;
  t5079 = t4601*t4419;
  t5082 = t4464*t4646;
  t5083 = 0. + t5059 + t5079 + t5082;
  t5092 = -1.*t4151*t5083;
  t5118 = 0. + t5016 + t5092;
  t5283 = -1.*t426*t5278;
  t5395 = t3199*t5344;
  t5396 = 0. + t5283 + t5395;
  t5405 = t217*t5396;
  t5425 = t3199*t5278;
  t5428 = t426*t5344;
  t5430 = 0. + t5425 + t5428;
  t5435 = t3739*t5430;
  t5457 = 0. + t5405 + t5435;
  t5462 = t121*t5457;
  t5470 = t4337*t5159;
  t5489 = t4419*t5209;
  t5490 = t4464*t5249;
  t5495 = 0. + t5470 + t5489 + t5490;
  t5496 = -1.*t4151*t5495;
  t5507 = 0. + t5462 + t5496;
  t5591 = -1.*t3739*t3565;
  t5596 = t217*t3929;
  t5657 = 0. + t5591 + t5596;
  t5683 = -1.*t3739*t4815;
  t5696 = t217*t4973;
  t5722 = 0. + t5683 + t5696;
  t5730 = -1.*t3739*t5396;
  t5732 = t217*t5430;
  t5737 = 0. + t5730 + t5732;
  t5852 = -1.*t4337*t2006;
  t5858 = -1.*t4419*t2290;
  t5862 = -1.*t4464*t3114;
  t5866 = 0. + t5852 + t5858 + t5862;
  t5903 = -1.*t4547*t4337;
  t5904 = -1.*t4601*t4419;
  t5907 = -1.*t4464*t4646;
  t5917 = 0. + t5903 + t5904 + t5907;
  t5942 = -1.*t4337*t5159;
  t5943 = -1.*t4419*t5209;
  t5952 = -1.*t4464*t5249;
  t5955 = 0. + t5942 + t5943 + t5952;
  t6015 = -0.930418*t4547;
  t6021 = 0.366501*t4601;
  t6023 = 0. + t6015 + t6021;
  t6033 = -0.930418*t2006;
  t6039 = 0.366501*t2290;
  t6042 = 0. + t6033 + t6039;
  t6052 = -0.930418*t5159;
  t6062 = 0.366501*t5209;
  t6065 = 0. + t6052 + t6062;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.01153*t4502 + 0.00015*t5118 - 0.00017*t5507;
  p_output1[10]=-0.00017*t4502 + 0.00018*t5118 + 0.03335*t5507;
  p_output1[11]=0.00015*t4502 + 0.03396*t5118 + 0.00018*t5507;
  p_output1[12]=0.01153*t5657 + 0.00015*t5722 - 0.00017*t5737;
  p_output1[13]=-0.00017*t5657 + 0.00018*t5722 + 0.03335*t5737;
  p_output1[14]=0.00015*t5657 + 0.03396*t5722 + 0.00018*t5737;
  p_output1[15]=0.01153*t4472 + 0.00015*t5083 - 0.00017*t5495;
  p_output1[16]=-0.00017*t4472 + 0.00018*t5083 + 0.03335*t5495;
  p_output1[17]=0.00015*t4472 + 0.03396*t5083 + 0.00018*t5495;
  p_output1[18]=0.01153*t5866 + 0.00015*t5917 - 0.00017*t5955;
  p_output1[19]=-0.00017*t5866 + 0.00018*t5917 + 0.03335*t5955;
  p_output1[20]=0.00015*t5866 + 0.03396*t5917 + 0.00018*t5955;
  p_output1[21]=0.00015*t6023 + 0.01153*t6042 - 0.00017*t6065;
  p_output1[22]=0.00018*t6023 - 0.00017*t6042 + 0.03335*t6065;
  p_output1[23]=0.03396*t6023 + 0.00015*t6042 + 0.00018*t6065;
  p_output1[24]=-0.00015000434995424998;
  p_output1[25]=-0.00017998792641570004;
  p_output1[26]=-0.03396002164623255;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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



void Jdq_AMBody_left_hip_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
