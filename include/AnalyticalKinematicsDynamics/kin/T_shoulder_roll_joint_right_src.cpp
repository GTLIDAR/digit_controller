/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_shoulder_roll_joint_right_src.h"

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
  double t593;
  double t928;
  double t206;
  double t596;
  double t1044;
  double t1094;
  double t909;
  double t1049;
  double t1050;
  double t134;
  double t1107;
  double t1138;
  double t1172;
  double t1469;
  double t1474;
  double t1481;
  double t1502;
  double t1559;
  double t1569;
  double t1777;
  double t1084;
  double t1213;
  double t1215;
  double t1301;
  double t1312;
  double t1352;
  double t1489;
  double t1601;
  double t1607;
  double t1733;
  double t1741;
  double t1752;
  double t1801;
  double t1806;
  double t1849;
  double t1909;
  double t1929;
  double t1931;
  double t2433;
  double t2453;
  double t2514;
  double t2579;
  double t2593;
  double t2603;
  double t2609;
  double t2612;
  t593 = Cos(var1[5]);
  t928 = Sin(var1[3]);
  t206 = Cos(var1[3]);
  t596 = Sin(var1[4]);
  t1044 = Sin(var1[5]);
  t1094 = Cos(var1[24]);
  t909 = t206*t593*t596;
  t1049 = t928*t1044;
  t1050 = t909 + t1049;
  t134 = Sin(var1[24]);
  t1107 = -1.*t593*t928;
  t1138 = t206*t596*t1044;
  t1172 = t1107 + t1138;
  t1469 = t593*t928*t596;
  t1474 = -1.*t206*t1044;
  t1481 = t1469 + t1474;
  t1502 = t206*t593;
  t1559 = t928*t596*t1044;
  t1569 = t1502 + t1559;
  t1777 = Cos(var1[4]);
  t1084 = -1.*t134*t1050;
  t1213 = t1094*t1172;
  t1215 = t1084 + t1213;
  t1301 = t1094*t1050;
  t1312 = t134*t1172;
  t1352 = t1301 + t1312;
  t1489 = -1.*t134*t1481;
  t1601 = t1094*t1569;
  t1607 = t1489 + t1601;
  t1733 = t1094*t1481;
  t1741 = t134*t1569;
  t1752 = t1733 + t1741;
  t1801 = -1.*t1777*t593*t134;
  t1806 = t1094*t1777*t1044;
  t1849 = t1801 + t1806;
  t1909 = t1094*t1777*t593;
  t1929 = t1777*t134*t1044;
  t1931 = t1909 + t1929;
  t2433 = -1.*t1094;
  t2453 = 1. + t2433;
  t2514 = 0.4*t2453;
  t2579 = -0.12*t134;
  t2593 = 0. + t2514 + t2579;
  t2603 = -0.12*t2453;
  t2609 = -0.4*t134;
  t2612 = 0. + t2603 + t2609;
  p_output1[0]=-0.173648*t1215 + 0.984808*t1352;
  p_output1[1]=-0.173648*t1607 + 0.984808*t1752;
  p_output1[2]=-0.173648*t1849 + 0.984808*t1931;
  p_output1[3]=0.;
  p_output1[4]=0.984808*t1215 + 0.173648*t1352;
  p_output1[5]=0.984808*t1607 + 0.173648*t1752;
  p_output1[6]=0.984808*t1849 + 0.173648*t1931;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1777*t206;
  p_output1[9]=-1.*t1777*t928;
  p_output1[10]=t596;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.12*t1215 + 0.4*t1352 - 0.001*t1777*t206 + t1050*t2593 + t1172*t2612 + var1[0];
  p_output1[13]=0. - 0.12*t1607 + 0.4*t1752 + t1481*t2593 + t1569*t2612 - 0.001*t1777*t928 + var1[1];
  p_output1[14]=0. - 0.12*t1849 + 0.4*t1931 + t1044*t1777*t2612 + t1777*t2593*t593 + 0.001*t596 + var1[2];
  p_output1[15]=1.;
}



void T_shoulder_roll_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
