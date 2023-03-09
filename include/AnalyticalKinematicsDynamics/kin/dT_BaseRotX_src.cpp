/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:32:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_BaseRotX_src.h"

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
  double t278;
  double t271;
  double t276;
  double t279;
  double t294;
  double t296;
  double t297;
  double t298;
  double t299;
  double t301;
  double t302;
  double t303;
  t278 = Cos(var1[3]);
  t271 = Cos(var1[4]);
  t276 = Sin(var1[3]);
  t279 = Sin(var1[4]);
  t294 = Sin(var1[5]);
  t296 = Cos(var1[5]);
  t297 = t278*t296*t279;
  t298 = t276*t294;
  t299 = t297 + t298;
  t301 = -1.*t278*t296;
  t302 = -1.*t276*t279*t294;
  t303 = t301 + t302;
  p_output1[0]=-1.*t271*t276*var2[3] - 1.*t278*t279*var2[4];
  p_output1[1]=t271*t278*var2[3] - 1.*t276*t279*var2[4];
  p_output1[2]=-1.*t271*var2[4];
  p_output1[3]=0;
  p_output1[4]=t303*var2[3] + t271*t278*t294*var2[4] + t299*var2[5];
  p_output1[5]=(t278*t279*t294 - 1.*t276*t296)*var2[3] + t271*t276*t294*var2[4] + (-1.*t278*t294 + t276*t279*t296)*var2[5];
  p_output1[6]=-1.*t279*t294*var2[4] + t271*t296*var2[5];
  p_output1[7]=0;
  p_output1[8]=(t278*t294 - 1.*t276*t279*t296)*var2[3] + t271*t278*t296*var2[4] + (-1.*t278*t279*t294 + t276*t296)*var2[5];
  p_output1[9]=t299*var2[3] + t271*t276*t296*var2[4] + t303*var2[5];
  p_output1[10]=-1.*t279*t296*var2[4] - 1.*t271*t294*var2[5];
  p_output1[11]=0;
  p_output1[12]=var2[0];
  p_output1[13]=var2[1];
  p_output1[14]=var2[2];
  p_output1[15]=0;
}



void dT_BaseRotX_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
