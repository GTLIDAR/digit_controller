/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_torso_src.h"

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
  double t1659;
  double t1248;
  double t1257;
  double t1707;
  double t1920;
  double t1942;
  double t2049;
  double t2052;
  double t2088;
  double t2139;
  double t2175;
  double t2256;
  double t2756;
  double t2767;
  double t2784;
  double t2702;
  double t2736;
  double t2747;
  double t2491;
  double t2498;
  double t2506;
  double t2388;
  double t2432;
  double t2453;
  t1659 = Cos(var1[3]);
  t1248 = Cos(var1[4]);
  t1257 = Sin(var1[3]);
  t1707 = Sin(var1[4]);
  t1920 = Sin(var1[5]);
  t1942 = Cos(var1[5]);
  t2049 = t1659*t1942*t1707;
  t2052 = t1257*t1920;
  t2088 = t2049 + t2052;
  t2139 = -1.*t1659*t1942;
  t2175 = -1.*t1257*t1707*t1920;
  t2256 = t2139 + t2175;
  t2756 = t1942*t1257;
  t2767 = -1.*t1659*t1707*t1920;
  t2784 = t2756 + t2767;
  t2702 = -1.*t1942*t1257*t1707;
  t2736 = t1659*t1920;
  t2747 = t2702 + t2736;
  t2491 = -1.*t1942*t1257;
  t2498 = t1659*t1707*t1920;
  t2506 = t2491 + t2498;
  t2388 = t1942*t1257*t1707;
  t2432 = -1.*t1659*t1920;
  t2453 = t2388 + t2432;
  p_output1[0]=-1.*t1248*t1257*var2[3] - 1.*t1659*t1707*var2[4];
  p_output1[1]=t1248*t1659*var2[3] - 1.*t1257*t1707*var2[4];
  p_output1[2]=-1.*t1248*var2[4];
  p_output1[3]=0;
  p_output1[4]=t2256*var2[3] + t1248*t1659*t1920*var2[4] + t2088*var2[5];
  p_output1[5]=t2506*var2[3] + t1248*t1257*t1920*var2[4] + t2453*var2[5];
  p_output1[6]=-1.*t1707*t1920*var2[4] + t1248*t1942*var2[5];
  p_output1[7]=0;
  p_output1[8]=t2747*var2[3] + t1248*t1659*t1942*var2[4] + t2784*var2[5];
  p_output1[9]=t2088*var2[3] + t1248*t1257*t1942*var2[4] + t2256*var2[5];
  p_output1[10]=-1.*t1707*t1942*var2[4] - 1.*t1248*t1920*var2[5];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.001437*t1248*t1257 + 0.000175*t2256 + 0.230096*t2747)*var2[3] + (-0.001437*t1659*t1707 + 0.000175*t1248*t1659*t1920 + 0.230096*t1248*t1659*t1942)*var2[4] + (0.000175*t2088 + 0.230096*t2784)*var2[5];
  p_output1[13]=var2[1] + (0.001437*t1248*t1659 + 0.230096*t2088 + 0.000175*t2506)*var2[3] + (-0.001437*t1257*t1707 + 0.000175*t1248*t1257*t1920 + 0.230096*t1248*t1257*t1942)*var2[4] + (0.230096*t2256 + 0.000175*t2453)*var2[5];
  p_output1[14]=var2[2] + (-0.001437*t1248 - 0.000175*t1707*t1920 - 0.230096*t1707*t1942)*var2[4] + (-0.230096*t1248*t1920 + 0.000175*t1248*t1942)*var2[5];
  p_output1[15]=0;
}



void dT_torso_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
