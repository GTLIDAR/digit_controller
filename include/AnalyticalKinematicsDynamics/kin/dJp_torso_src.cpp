/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_torso_src.h"

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
  double t1027;
  double t43;
  double t2765;
  double t1012;
  double t2000;
  double t2346;
  double t2867;
  double t2903;
  double t3027;
  double t3119;
  double t3150;
  double t3153;
  double t1451;
  double t2145;
  double t2347;
  double t2434;
  double t2793;
  double t3299;
  double t3300;
  double t3302;
  double t3319;
  double t3417;
  double t3475;
  double t3481;
  double t3488;
  double t2827;
  double t2829;
  double t2859;
  double t2864;
  double t3046;
  double t3162;
  double t3181;
  double t3187;
  double t3189;
  double t3212;
  double t3227;
  double t3540;
  double t3544;
  double t3558;
  double t3333;
  double t3335;
  double t3345;
  double t3383;
  double t3392;
  double t3394;
  double t3422;
  double t3425;
  double t3444;
  double t3445;
  double t3450;
  double t3591;
  double t3609;
  double t3614;
  double t3616;
  double t3619;
  t1027 = Sin(var1[3]);
  t43 = Cos(var1[4]);
  t2765 = Cos(var1[3]);
  t1012 = Cos(var1[5]);
  t2000 = Sin(var1[4]);
  t2346 = Sin(var1[5]);
  t2867 = t1012*t1027;
  t2903 = -1.*t2765*t2000*t2346;
  t3027 = t2867 + t2903;
  t3119 = -1.*t1012*t1027*t2000;
  t3150 = t2765*t2346;
  t3153 = t3119 + t3150;
  t1451 = -0.230096*t43*t1012*t1027;
  t2145 = 0.001437*t1027*t2000;
  t2347 = -0.000175*t43*t1027*t2346;
  t2434 = t1451 + t2145 + t2347;
  t2793 = -0.001437*t2765*t43;
  t3299 = 0.230096*t2765*t43*t1012;
  t3300 = -0.001437*t2765*t2000;
  t3302 = 0.000175*t2765*t43*t2346;
  t3319 = t3299 + t3300 + t3302;
  t3417 = -0.001437*t43*t1027;
  t3475 = 0.000175*t2765*t43*t1012;
  t3481 = -0.230096*t2765*t43*t2346;
  t3488 = t3475 + t3481;
  t2827 = -1.*t2765*t1012*t2000;
  t2829 = -1.*t1027*t2346;
  t2859 = t2827 + t2829;
  t2864 = 0.230096*t2859;
  t3046 = 0.000175*t3027;
  t3162 = 0.000175*t3153;
  t3181 = t2765*t1012;
  t3187 = t1027*t2000*t2346;
  t3189 = t3181 + t3187;
  t3212 = 0.230096*t3189;
  t3227 = t3162 + t3212;
  t3540 = 0.000175*t43*t1012*t1027;
  t3544 = -0.230096*t43*t1027*t2346;
  t3558 = t3540 + t3544;
  t3333 = t2765*t1012*t2000;
  t3335 = t1027*t2346;
  t3345 = t3333 + t3335;
  t3383 = 0.000175*t3345;
  t3392 = 0.230096*t3027;
  t3394 = t3383 + t3392;
  t3422 = 0.230096*t3153;
  t3425 = -1.*t2765*t1012;
  t3444 = -1.*t1027*t2000*t2346;
  t3445 = t3425 + t3444;
  t3450 = 0.000175*t3445;
  t3591 = -0.230096*t43*t1012;
  t3609 = -0.000175*t43*t2346;
  t3614 = -0.000175*t1012*t2000;
  t3616 = 0.230096*t2000*t2346;
  t3619 = t3614 + t3616;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2793 + t2864 + t3046)*var2[3] + t2434*var2[4] + t3227*var2[5];
  p_output1[10]=(t3417 + t3422 + t3450)*var2[3] + t3319*var2[4] + t3394*var2[5];
  p_output1[11]=0;
  p_output1[12]=t2434*var2[3] + (-0.230096*t1012*t2000*t2765 - 0.000175*t2000*t2346*t2765 + t2793)*var2[4] + t3488*var2[5];
  p_output1[13]=t3319*var2[3] + (-0.230096*t1012*t1027*t2000 - 0.000175*t1027*t2000*t2346 + t3417)*var2[4] + t3558*var2[5];
  p_output1[14]=(0.001437*t2000 + t3591 + t3609)*var2[4] + t3619*var2[5];
  p_output1[15]=t3227*var2[3] + t3488*var2[4] + (t2864 + t3046)*var2[5];
  p_output1[16]=t3394*var2[3] + t3558*var2[4] + (t3422 + t3450)*var2[5];
  p_output1[17]=t3619*var2[4] + (t3591 + t3609)*var2[5];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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



void dJp_torso_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
