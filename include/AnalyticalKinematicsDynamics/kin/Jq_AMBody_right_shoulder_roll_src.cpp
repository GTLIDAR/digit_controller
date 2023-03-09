/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_right_shoulder_roll_src.h"

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
  double t750;
  double t1019;
  double t419;
  double t560;
  double t1388;
  double t2039;
  double t2302;
  double t2415;
  double t80;
  double t878;
  double t1020;
  double t1201;
  double t1386;
  double t2703;
  double t2805;
  double t2919;
  double t2924;
  double t2930;
  double t2954;
  double t2959;
  double t2969;
  double t3823;
  double t3693;
  double t3803;
  double t3807;
  double t3809;
  double t3831;
  double t3840;
  double t3875;
  double t3897;
  double t3950;
  double t3952;
  double t4008;
  double t4016;
  double t4037;
  double t4065;
  double t4070;
  double t4282;
  double t4297;
  double t4329;
  double t4341;
  double t4365;
  double t4370;
  double t4386;
  double t4426;
  double t4467;
  double t4477;
  double t4518;
  double t4538;
  double t4576;
  double t4584;
  double t4591;
  t750 = Cos(var1[24]);
  t1019 = Sin(var1[24]);
  t419 = Sin(var1[4]);
  t560 = Cos(var1[5]);
  t1388 = 0.984808*t750;
  t2039 = 0.173648*t1019;
  t2302 = t1388 + t2039;
  t2415 = Sin(var1[5]);
  t80 = Cos(var1[4]);
  t878 = 0.173648*t750;
  t1020 = -0.984808*t1019;
  t1201 = t878 + t1020;
  t1386 = t560*t1201;
  t2703 = t2302*t2415;
  t2805 = 0. + t1386 + t2703;
  t2919 = t560*t2302;
  t2924 = -0.173648*t750;
  t2930 = 0.984808*t1019;
  t2954 = t2924 + t2930;
  t2959 = t2954*t2415;
  t2969 = 0. + t2919 + t2959;
  t3823 = -1.*t2302*t2415;
  t3693 = -1.*t1201*t2415;
  t3803 = t2919 + t3693;
  t3807 = var2[3]*t80*t3803;
  t3809 = -1.*t560*t1201;
  t3831 = t3809 + t3823;
  t3840 = var2[4]*t3831;
  t3875 = t3807 + t3840;
  t3897 = t560*t2954;
  t3950 = t3897 + t3823;
  t3952 = var2[3]*t80*t3950;
  t4008 = -1.*t560*t2302;
  t4016 = -1.*t2954*t2415;
  t4037 = t4008 + t4016;
  t4065 = var2[4]*t4037;
  t4070 = t3952 + t4065;
  t4282 = -0.984808*t750;
  t4297 = -0.173648*t1019;
  t4329 = t4282 + t4297;
  t4341 = t560*t4329;
  t4365 = t1201*t2415;
  t4370 = t4341 + t4365;
  t4386 = var2[3]*t80*t4370;
  t4426 = -1.*t4329*t2415;
  t4467 = t1386 + t4426;
  t4477 = var2[4]*t4467;
  t4518 = t4386 + t4477;
  t4538 = var2[4]*t3803;
  t4576 = t1386 + t2703;
  t4584 = var2[3]*t80*t4576;
  t4591 = t4538 + t4584;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.00001*t2805*t419*var2[3] - 0.0007*t2969*t419*var2[3] + 0.00001*t80*var2[3];
  p_output1[13]=-0.00075*t2805*t419*var2[3] + 0.00001*t2969*t419*var2[3] - 0.00004*t80*var2[3];
  p_output1[14]=0.00004*t2805*t419*var2[3] - 0.00001*t2969*t419*var2[3] + 0.0003*t80*var2[3];
  p_output1[15]=-0.00001*t3875 + 0.0007*t4070;
  p_output1[16]=0.00075*t3875 - 0.00001*t4070;
  p_output1[17]=-0.00004*t3875 + 0.00001*t4070;
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
  p_output1[72]=-0.00001*t4518 + 0.0007*t4591;
  p_output1[73]=0.00075*t4518 - 0.00001*t4591;
  p_output1[74]=-0.00004*t4518 + 0.00001*t4591;
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



void Jq_AMBody_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
