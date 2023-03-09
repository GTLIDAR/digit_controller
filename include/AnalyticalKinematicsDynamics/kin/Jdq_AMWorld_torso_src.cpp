/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_torso_src.h"

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
  double t1957;
  double t2144;
  double t2487;
  double t2673;
  double t1018;
  double t3587;
  double t2350;
  double t2592;
  double t3082;
  double t3326;
  double t3385;
  double t3407;
  double t3442;
  double t3504;
  double t3741;
  double t3841;
  double t3911;
  double t3950;
  double t3573;
  double t3588;
  double t3730;
  double t3988;
  double t4017;
  double t4022;
  double t4187;
  double t4190;
  double t4195;
  double t4204;
  double t4205;
  double t4206;
  double t4061;
  double t4062;
  double t4076;
  double t4213;
  double t4220;
  double t4229;
  double t4091;
  double t4109;
  double t4119;
  t1957 = Cos(var1[4]);
  t2144 = Cos(var1[5]);
  t2487 = Sin(var1[4]);
  t2673 = Sin(var1[5]);
  t1018 = Cos(var1[3]);
  t3587 = Sin(var1[3]);
  t2350 = 0.007698*t1957*t2144;
  t2592 = -0.483626*t2487;
  t3082 = -0.000091*t1957*t2673;
  t3326 = t2350 + t2592 + t3082;
  t3385 = 0.101876*t1957*t2144;
  t3407 = -0.007698*t2487;
  t3442 = -0.000019*t1957*t2673;
  t3504 = t3385 + t3407 + t3442;
  t3741 = -0.000019*t1957*t2144;
  t3841 = 0.000091*t2487;
  t3911 = 0.45019*t1957*t2673;
  t3950 = t3741 + t3841 + t3911;
  t3573 = t1018*t2144*t2487;
  t3588 = t3587*t2673;
  t3730 = t3573 + t3588;
  t3988 = -1.*t2144*t3587;
  t4017 = t1018*t2487*t2673;
  t4022 = t3988 + t4017;
  t4187 = -0.000091*t2144;
  t4190 = -0.007698*t2673;
  t4195 = t4187 + t4190;
  t4204 = -0.000019*t2144;
  t4205 = -0.101876*t2673;
  t4206 = t4204 + t4205;
  t4061 = t2144*t3587*t2487;
  t4062 = -1.*t1018*t2673;
  t4076 = t4061 + t4062;
  t4213 = 0.45019*t2144;
  t4220 = 0.000019*t2673;
  t4229 = t4213 + t4220;
  t4091 = t1018*t2144;
  t4109 = t3587*t2487*t2673;
  t4119 = t4091 + t4109;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1018*t1957*t3326 + t3504*t3730 + t3950*t4022;
  p_output1[10]=t1957*t3326*t3587 + t3504*t4076 + t3950*t4119;
  p_output1[11]=-1.*t2487*t3326 + t1957*t2144*t3504 + t1957*t2673*t3950;
  p_output1[12]=t1018*t1957*t4195 + t3730*t4206 + t4022*t4229;
  p_output1[13]=t1957*t3587*t4195 + t4076*t4206 + t4119*t4229;
  p_output1[14]=-1.*t2487*t4195 + t1957*t2144*t4206 + t1957*t2673*t4229;
  p_output1[15]=0.483626*t1018*t1957 + 0.007698*t3730 - 0.000091*t4022;
  p_output1[16]=0.483626*t1957*t3587 + 0.007698*t4076 - 0.000091*t4119;
  p_output1[17]=t3326;
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



void Jdq_AMWorld_torso_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
