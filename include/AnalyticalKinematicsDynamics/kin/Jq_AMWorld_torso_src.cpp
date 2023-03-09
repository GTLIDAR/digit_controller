/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_torso_src.h"

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
  double t1515;
  double t2364;
  double t2997;
  double t1721;
  double t1867;
  double t1935;
  double t2144;
  double t2740;
  double t3049;
  double t3247;
  double t3326;
  double t3330;
  double t3385;
  double t3545;
  double t2350;
  double t3258;
  double t3450;
  double t3490;
  double t3585;
  double t3587;
  double t3588;
  double t3634;
  double t3730;
  double t3737;
  double t3741;
  double t3763;
  double t3911;
  double t3945;
  double t3947;
  double t3964;
  double t3978;
  double t3980;
  double t4022;
  double t4032;
  double t4046;
  double t4050;
  double t4059;
  double t4061;
  double t4062;
  double t4063;
  double t4082;
  double t4084;
  double t4091;
  double t4099;
  double t4213;
  double t4222;
  double t4227;
  double t4229;
  double t4154;
  double t4157;
  double t4158;
  double t4220;
  double t4231;
  double t4234;
  double t4245;
  double t4249;
  double t4252;
  double t4125;
  double t4138;
  double t4147;
  double t4255;
  double t4259;
  double t4261;
  double t3699;
  double t3700;
  double t3712;
  t1515 = Cos(var1[4]);
  t2364 = Cos(var1[5]);
  t2997 = Sin(var1[5]);
  t1721 = Sin(var1[3]);
  t1867 = Sin(var1[4]);
  t1935 = -1.*var2[3]*t1867;
  t2144 = var2[5] + t1935;
  t2740 = var2[3]*t1515*t2364;
  t3049 = -1.*var2[4]*t2997;
  t3247 = 0. + t2740 + t3049;
  t3326 = var2[4]*t2364;
  t3330 = var2[3]*t1515*t2997;
  t3385 = 0. + t3326 + t3330;
  t3545 = Cos(var1[3]);
  t2350 = 0.483626*t2144;
  t3258 = 0.007698*t3247;
  t3450 = -0.000091*t3385;
  t3490 = t2350 + t3258 + t3450;
  t3585 = 0.007698*t2144;
  t3587 = 0.101876*t3247;
  t3588 = -0.000019*t3385;
  t3634 = t3585 + t3587 + t3588;
  t3730 = -0.000091*t2144;
  t3737 = -0.000019*t3247;
  t3741 = 0.45019*t3385;
  t3763 = t3730 + t3737 + t3741;
  t3911 = t3545*t2364*t1867;
  t3945 = t1721*t2997;
  t3947 = t3911 + t3945;
  t3964 = -1.*t2364*t1721;
  t3978 = t3545*t1867*t2997;
  t3980 = t3964 + t3978;
  t4022 = -0.007698*var2[3]*t1515;
  t4032 = -0.101876*var2[3]*t2364*t1867;
  t4046 = 0.000019*var2[3]*t1867*t2997;
  t4050 = t4022 + t4032 + t4046;
  t4059 = -0.483626*var2[3]*t1515;
  t4061 = -0.007698*var2[3]*t2364*t1867;
  t4062 = 0.000091*var2[3]*t1867*t2997;
  t4063 = t4059 + t4061 + t4062;
  t4082 = 0.000091*var2[3]*t1515;
  t4084 = 0.000019*var2[3]*t2364*t1867;
  t4091 = -0.45019*var2[3]*t1867*t2997;
  t4099 = t4082 + t4084 + t4091;
  t4213 = t2740 + t3049;
  t4222 = -1.*var2[4]*t2364;
  t4227 = -1.*var2[3]*t1515*t2997;
  t4229 = t4222 + t4227;
  t4154 = t3545*t2364;
  t4157 = t1721*t1867*t2997;
  t4158 = t4154 + t4157;
  t4220 = 0.45019*t4213;
  t4231 = -0.000019*t4229;
  t4234 = t4220 + t4231;
  t4245 = -0.000091*t4213;
  t4249 = 0.007698*t4229;
  t4252 = t4245 + t4249;
  t4125 = t2364*t1721*t1867;
  t4138 = -1.*t3545*t2997;
  t4147 = t4125 + t4138;
  t4255 = -0.000019*t4213;
  t4259 = 0.101876*t4229;
  t4261 = t4255 + t4259;
  t3699 = -1.*t3545*t2364;
  t3700 = -1.*t1721*t1867*t2997;
  t3712 = t3699 + t3700;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.*t1515*t1721*t3490 + (-1.*t1721*t1867*t2364 + t2997*t3545)*t3634 + t3712*t3763;
  p_output1[10]=t1515*t3490*t3545 + t3634*t3947 + t3763*t3980;
  p_output1[11]=0;
  p_output1[12]=-1.*t1867*t3490*t3545 + t1515*t2364*t3545*t3634 + t1515*t2997*t3545*t3763 + t3947*t4050 + t1515*t3545*t4063 + t3980*t4099;
  p_output1[13]=-1.*t1721*t1867*t3490 + t1515*t1721*t2364*t3634 + t1515*t1721*t2997*t3763 + t1515*t1721*t4063 + t4050*t4147 + t4099*t4158;
  p_output1[14]=-1.*t1515*t3490 - 1.*t1867*t2364*t3634 - 1.*t1867*t2997*t3763 + t1515*t2364*t4050 - 1.*t1867*t4063 + t1515*t2997*t4099;
  p_output1[15]=(t1721*t2364 - 1.*t1867*t2997*t3545)*t3634 + t3763*t3947 + t3980*t4234 + t1515*t3545*t4252 + t3947*t4261;
  p_output1[16]=t3634*t3712 + t3763*t4147 + t4158*t4234 + t1515*t1721*t4252 + t4147*t4261;
  p_output1[17]=-1.*t1515*t2997*t3634 + t1515*t2364*t3763 + t1515*t2997*t4234 - 1.*t1867*t4252 + t1515*t2364*t4261;
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



void Jq_AMWorld_torso_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
