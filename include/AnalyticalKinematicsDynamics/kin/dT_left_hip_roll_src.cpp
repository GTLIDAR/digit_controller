/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_left_hip_roll_src.h"

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
  double t86;
  double t98;
  double t683;
  double t171;
  double t224;
  double t684;
  double t1560;
  double t1511;
  double t1625;
  double t1772;
  double t1928;
  double t1541;
  double t1587;
  double t1594;
  double t2171;
  double t2191;
  double t2210;
  double t2874;
  double t2890;
  double t2929;
  double t2772;
  double t2814;
  double t2825;
  double t2354;
  double t2371;
  double t2415;
  double t2015;
  double t2850;
  double t3362;
  double t3364;
  double t3373;
  double t3499;
  double t3501;
  double t3541;
  double t232;
  double t937;
  double t939;
  double t1026;
  double t1073;
  double t1334;
  double t1603;
  double t1929;
  double t1931;
  double t2023;
  double t2081;
  double t2456;
  double t2473;
  double t2488;
  double t2955;
  double t2970;
  double t2988;
  double t3002;
  double t3016;
  double t3092;
  double t3105;
  double t3117;
  double t3136;
  double t3141;
  double t3157;
  double t2419;
  double t3268;
  double t3291;
  double t3379;
  double t3398;
  double t3411;
  double t3448;
  double t3453;
  double t3555;
  double t3630;
  double t3633;
  double t3644;
  double t3667;
  double t3669;
  double t3802;
  double t3812;
  double t3843;
  double t3872;
  double t3878;
  double t3968;
  double t4056;
  double t4074;
  double t4097;
  double t4123;
  double t4139;
  double t4142;
  double t4207;
  double t4210;
  double t4211;
  double t4248;
  double t4271;
  double t4318;
  double t4983;
  double t4990;
  double t4993;
  double t4994;
  double t5019;
  double t5021;
  t86 = Cos(var1[3]);
  t98 = Cos(var1[4]);
  t683 = Cos(var1[5]);
  t171 = Cos(var1[6]);
  t224 = Sin(var1[5]);
  t684 = Sin(var1[6]);
  t1560 = Sin(var1[4]);
  t1511 = Sin(var1[3]);
  t1625 = t86*t683*t1560;
  t1772 = t1511*t224;
  t1928 = t1625 + t1772;
  t1541 = t683*t1511;
  t1587 = -1.*t86*t1560*t224;
  t1594 = t1541 + t1587;
  t2171 = -1.*t683*t1511;
  t2191 = t86*t1560*t224;
  t2210 = t2171 + t2191;
  t2874 = -1.*t683*t1511*t1560;
  t2890 = t86*t224;
  t2929 = t2874 + t2890;
  t2772 = -1.*t86*t683;
  t2814 = -1.*t1511*t1560*t224;
  t2825 = t2772 + t2814;
  t2354 = t171*t2210;
  t2371 = -1.*t1928*t684;
  t2415 = t2354 + t2371;
  t2015 = t171*t1928;
  t2850 = t171*t2825;
  t3362 = t683*t1511*t1560;
  t3364 = -1.*t86*t224;
  t3373 = t3362 + t3364;
  t3499 = t86*t683;
  t3501 = t1511*t1560*t224;
  t3541 = t3499 + t3501;
  t232 = t86*t98*t171*t224;
  t937 = -1.*t86*t98*t683*t684;
  t939 = t232 + t937;
  t1026 = t86*t98*t683*t171;
  t1073 = t86*t98*t224*t684;
  t1334 = t1026 + t1073;
  t1603 = t171*t1594;
  t1929 = t1928*t684;
  t1931 = t1603 + t1929;
  t2023 = -1.*t1594*t684;
  t2081 = t2015 + t2023;
  t2456 = -1.*t171*t1928;
  t2473 = -1.*t2210*t684;
  t2488 = t2456 + t2473;
  t2955 = -1.*t2929*t684;
  t2970 = t2850 + t2955;
  t2988 = t171*t2929;
  t3002 = t2825*t684;
  t3016 = t2988 + t3002;
  t3092 = t98*t171*t1511*t224;
  t3105 = -1.*t98*t683*t1511*t684;
  t3117 = t3092 + t3105;
  t3136 = t98*t683*t171*t1511;
  t3141 = t98*t1511*t224*t684;
  t3157 = t3136 + t3141;
  t2419 = 0.930418*t2415;
  t3268 = t2210*t684;
  t3291 = t2015 + t3268;
  t3379 = t3373*t684;
  t3398 = t2850 + t3379;
  t3411 = t171*t3373;
  t3448 = -1.*t2825*t684;
  t3453 = t3411 + t3448;
  t3555 = t171*t3541;
  t3630 = -1.*t3373*t684;
  t3633 = t3555 + t3630;
  t3644 = -1.*t171*t3373;
  t3667 = -1.*t3541*t684;
  t3669 = t3644 + t3667;
  t3802 = t98*t171*t224;
  t3812 = -1.*t98*t683*t684;
  t3843 = t3802 + t3812;
  t3872 = -1.*t98*t683*t171;
  t3878 = -1.*t98*t224*t684;
  t3968 = t3872 + t3878;
  t4056 = -1.*t98*t171*t224;
  t4074 = t98*t683*t684;
  t4097 = t4056 + t4074;
  t4123 = t98*t683*t171;
  t4139 = t98*t224*t684;
  t4142 = t4123 + t4139;
  t4207 = -1.*t171*t1560*t224;
  t4210 = t683*t1560*t684;
  t4211 = t4207 + t4210;
  t4248 = -1.*t683*t171*t1560;
  t4271 = -1.*t1560*t224*t684;
  t4318 = t4248 + t4271;
  t4983 = -1.*t171;
  t4990 = 1. + t4983;
  t4993 = 0.091*t4990;
  t4994 = 0. + t4993;
  t5019 = 0.091*t684;
  t5021 = 0. + t5019;
  p_output1[0]=(-0.366501*t2970 + 0.930418*t3016)*var2[3] + (0.930418*t1334 - 0.366501*t939)*var2[4] + (0.930418*t1931 - 0.366501*t2081)*var2[5] + (t2419 - 0.366501*t2488)*var2[6];
  p_output1[1]=(-0.366501*t2415 + 0.930418*t3291)*var2[3] + (-0.366501*t3117 + 0.930418*t3157)*var2[4] + (0.930418*t3398 - 0.366501*t3453)*var2[5] + (0.930418*t3633 - 0.366501*t3669)*var2[6];
  p_output1[2]=(-0.366501*t4211 + 0.930418*t4318)*var2[4] + (0.930418*t4097 - 0.366501*t4142)*var2[5] + (0.930418*t3843 - 0.366501*t3968)*var2[6];
  p_output1[3]=0;
  p_output1[4]=(0.930418*t2970 + 0.366501*t3016)*var2[3] + (0.366501*t1334 + 0.930418*t939)*var2[4] + (0.366501*t1931 + 0.930418*t2081)*var2[5] + (0.366501*t2415 + 0.930418*t2488)*var2[6];
  p_output1[5]=(t2419 + 0.366501*t3291)*var2[3] + (0.930418*t3117 + 0.366501*t3157)*var2[4] + (0.366501*t3398 + 0.930418*t3453)*var2[5] + (0.366501*t3633 + 0.930418*t3669)*var2[6];
  p_output1[6]=(0.930418*t4211 + 0.366501*t4318)*var2[4] + (0.366501*t4097 + 0.930418*t4142)*var2[5] + (0.366501*t3843 + 0.930418*t3968)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t1511*t98*var2[3] + t1560*t86*var2[4];
  p_output1[9]=-1.*t86*t98*var2[3] + t1511*t1560*var2[4];
  p_output1[10]=t98*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.091945*t2970 - 0.001745*t3016 + t2825*t4994 + t2929*t5021 + 0.03244*t1511*t98)*var2[3] + (-0.001745*t1334 + 0.03244*t1560*t86 + 0.091945*t939 + t224*t4994*t86*t98 + t5021*t683*t86*t98)*var2[4] + (-0.001745*t1931 + 0.091945*t2081 + t1928*t4994 + t1594*t5021)*var2[5] + (0.091*t171*t1928 - 0.001745*t2415 + 0.091945*t2488 + 0.091*t2210*t684)*var2[6];
  p_output1[13]=var2[1] + (0.091945*t2415 - 0.001745*t3291 + t2210*t4994 + t1928*t5021 - 0.03244*t86*t98)*var2[3] + (0.03244*t1511*t1560 + 0.091945*t3117 - 0.001745*t3157 + t1511*t224*t4994*t98 + t1511*t5021*t683*t98)*var2[4] + (-0.001745*t3398 + 0.091945*t3453 + t3373*t4994 + t2825*t5021)*var2[5] + (0.091*t171*t3373 - 0.001745*t3633 + 0.091945*t3669 + 0.091*t3541*t684)*var2[6];
  p_output1[14]=var2[2] + (0.091945*t4211 - 0.001745*t4318 - 1.*t1560*t224*t4994 - 1.*t1560*t5021*t683 + 0.03244*t98)*var2[4] + (-0.001745*t4097 + 0.091945*t4142 - 1.*t224*t5021*t98 + t4994*t683*t98)*var2[5] + (-0.001745*t3843 + 0.091945*t3968 + 0.091*t171*t683*t98 + 0.091*t224*t684*t98)*var2[6];
  p_output1[15]=0;
}



void dT_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
