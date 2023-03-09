/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_shoulder_roll_joint_left_src.h"

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
  double t317;
  double t510;
  double t296;
  double t402;
  double t564;
  double t941;
  double t432;
  double t780;
  double t809;
  double t291;
  double t961;
  double t972;
  double t1078;
  double t1396;
  double t1485;
  double t1507;
  double t1516;
  double t1530;
  double t1608;
  double t1832;
  double t876;
  double t1094;
  double t1099;
  double t1185;
  double t1186;
  double t1208;
  double t1512;
  double t1630;
  double t1634;
  double t1734;
  double t1745;
  double t1783;
  double t1833;
  double t1931;
  double t1933;
  double t1975;
  double t1983;
  double t1988;
  double t2509;
  double t2513;
  double t2570;
  double t2662;
  double t2726;
  double t2823;
  double t2860;
  double t2866;
  t317 = Cos(var1[5]);
  t510 = Sin(var1[3]);
  t296 = Cos(var1[3]);
  t402 = Sin(var1[4]);
  t564 = Sin(var1[5]);
  t941 = Cos(var1[13]);
  t432 = t296*t317*t402;
  t780 = t510*t564;
  t809 = t432 + t780;
  t291 = Sin(var1[13]);
  t961 = -1.*t317*t510;
  t972 = t296*t402*t564;
  t1078 = t961 + t972;
  t1396 = t317*t510*t402;
  t1485 = -1.*t296*t564;
  t1507 = t1396 + t1485;
  t1516 = t296*t317;
  t1530 = t510*t402*t564;
  t1608 = t1516 + t1530;
  t1832 = Cos(var1[4]);
  t876 = -1.*t291*t809;
  t1094 = t941*t1078;
  t1099 = t876 + t1094;
  t1185 = t941*t809;
  t1186 = t291*t1078;
  t1208 = t1185 + t1186;
  t1512 = -1.*t291*t1507;
  t1630 = t941*t1608;
  t1634 = t1512 + t1630;
  t1734 = t941*t1507;
  t1745 = t291*t1608;
  t1783 = t1734 + t1745;
  t1833 = -1.*t1832*t317*t291;
  t1931 = t941*t1832*t564;
  t1933 = t1833 + t1931;
  t1975 = t941*t1832*t317;
  t1983 = t1832*t291*t564;
  t1988 = t1975 + t1983;
  t2509 = -1.*t941;
  t2513 = 1. + t2509;
  t2570 = 0.4*t2513;
  t2662 = 0.12*t291;
  t2726 = 0. + t2570 + t2662;
  t2823 = 0.12*t2513;
  t2860 = -0.4*t291;
  t2866 = 0. + t2823 + t2860;
  p_output1[0]=0.173648*t1099 + 0.984808*t1208;
  p_output1[1]=0.173648*t1634 + 0.984808*t1783;
  p_output1[2]=0.173648*t1933 + 0.984808*t1988;
  p_output1[3]=0.;
  p_output1[4]=0.984808*t1099 - 0.173648*t1208;
  p_output1[5]=0.984808*t1634 - 0.173648*t1783;
  p_output1[6]=0.984808*t1933 - 0.173648*t1988;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1832*t296;
  p_output1[9]=-1.*t1832*t510;
  p_output1[10]=t402;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.12*t1099 + 0.4*t1208 + t1078*t2866 - 0.001*t1832*t296 + t2726*t809 + var1[0];
  p_output1[13]=0. + 0.12*t1634 + 0.4*t1783 + t1507*t2726 + t1608*t2866 - 0.001*t1832*t510 + var1[1];
  p_output1[14]=0. + 0.12*t1933 + 0.4*t1988 + t1832*t2726*t317 + 0.001*t402 + t1832*t2866*t564 + var1[2];
  p_output1[15]=1.;
}



void T_shoulder_roll_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
