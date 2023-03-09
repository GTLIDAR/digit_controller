/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_right_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t1037;
  double t1189;
  double t780;
  double t1119;
  double t1246;
  double t1309;
  double t1162;
  double t1262;
  double t1263;
  double t762;
  double t1312;
  double t1322;
  double t1333;
  double t2147;
  double t2174;
  double t2194;
  double t2336;
  double t2343;
  double t2426;
  double t2781;
  double t1288;
  double t1348;
  double t1566;
  double t1692;
  double t1701;
  double t1796;
  double t2262;
  double t2504;
  double t2521;
  double t2545;
  double t2547;
  double t2597;
  double t2848;
  double t3009;
  double t3018;
  double t3215;
  double t3281;
  double t3431;
  t1037 = Cos(var1[5]);
  t1189 = Sin(var1[3]);
  t780 = Cos(var1[3]);
  t1119 = Sin(var1[4]);
  t1246 = Sin(var1[5]);
  t1309 = Cos(var1[17]);
  t1162 = t780*t1037*t1119;
  t1262 = t1189*t1246;
  t1263 = t1162 + t1262;
  t762 = Sin(var1[17]);
  t1312 = -1.*t1037*t1189;
  t1322 = t780*t1119*t1246;
  t1333 = t1312 + t1322;
  t2147 = t1037*t1189*t1119;
  t2174 = -1.*t780*t1246;
  t2194 = t2147 + t2174;
  t2336 = t780*t1037;
  t2343 = t1189*t1119*t1246;
  t2426 = t2336 + t2343;
  t2781 = Cos(var1[4]);
  t1288 = -1.*t762*t1263;
  t1348 = t1309*t1333;
  t1566 = t1288 + t1348;
  t1692 = t1309*t1263;
  t1701 = t762*t1333;
  t1796 = t1692 + t1701;
  t2262 = -1.*t762*t2194;
  t2504 = t1309*t2426;
  t2521 = t2262 + t2504;
  t2545 = t1309*t2194;
  t2547 = t762*t2426;
  t2597 = t2545 + t2547;
  t2848 = -1.*t2781*t1037*t762;
  t3009 = t1309*t2781*t1246;
  t3018 = t2848 + t3009;
  t3215 = t1309*t2781*t1037;
  t3281 = t2781*t762*t1246;
  t3431 = t3215 + t3281;
  p_output1[0]=0.366501*t1566 + 0.930418*t1796;
  p_output1[1]=0.366501*t2521 + 0.930418*t2597;
  p_output1[2]=0.366501*t3018 + 0.930418*t3431;
  p_output1[3]=0.930418*t1566 - 0.366501*t1796;
  p_output1[4]=0.930418*t2521 - 0.366501*t2597;
  p_output1[5]=0.930418*t3018 - 0.366501*t3431;
  p_output1[6]=-1.*t2781*t780;
  p_output1[7]=-1.*t1189*t2781;
  p_output1[8]=t1119;
}



void R_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
