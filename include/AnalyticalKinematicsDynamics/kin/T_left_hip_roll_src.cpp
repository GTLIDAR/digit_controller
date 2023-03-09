/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_hip_roll_src.h"

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
  double t639;
  double t583;
  double t697;
  double t596;
  double t744;
  double t527;
  double t816;
  double t865;
  double t866;
  double t609;
  double t786;
  double t789;
  double t932;
  double t1391;
  double t1456;
  double t1482;
  double t1316;
  double t1321;
  double t1334;
  double t1729;
  double t790;
  double t943;
  double t978;
  double t1026;
  double t1069;
  double t1270;
  double t1358;
  double t1495;
  double t1499;
  double t1541;
  double t1594;
  double t1625;
  double t1735;
  double t1861;
  double t1864;
  double t1928;
  double t1929;
  double t1931;
  double t2252;
  double t2272;
  double t2354;
  double t2367;
  double t2419;
  double t2446;
  t639 = Cos(var1[3]);
  t583 = Cos(var1[5]);
  t697 = Sin(var1[4]);
  t596 = Sin(var1[3]);
  t744 = Sin(var1[5]);
  t527 = Cos(var1[6]);
  t816 = t639*t583*t697;
  t865 = t596*t744;
  t866 = t816 + t865;
  t609 = -1.*t583*t596;
  t786 = t639*t697*t744;
  t789 = t609 + t786;
  t932 = Sin(var1[6]);
  t1391 = t583*t596*t697;
  t1456 = -1.*t639*t744;
  t1482 = t1391 + t1456;
  t1316 = t639*t583;
  t1321 = t596*t697*t744;
  t1334 = t1316 + t1321;
  t1729 = Cos(var1[4]);
  t790 = t527*t789;
  t943 = -1.*t866*t932;
  t978 = t790 + t943;
  t1026 = t527*t866;
  t1069 = t789*t932;
  t1270 = t1026 + t1069;
  t1358 = t527*t1334;
  t1495 = -1.*t1482*t932;
  t1499 = t1358 + t1495;
  t1541 = t527*t1482;
  t1594 = t1334*t932;
  t1625 = t1541 + t1594;
  t1735 = t1729*t527*t744;
  t1861 = -1.*t1729*t583*t932;
  t1864 = t1735 + t1861;
  t1928 = t1729*t583*t527;
  t1929 = t1729*t744*t932;
  t1931 = t1928 + t1929;
  t2252 = -1.*t527;
  t2272 = 1. + t2252;
  t2354 = 0.091*t2272;
  t2367 = 0. + t2354;
  t2419 = 0.091*t932;
  t2446 = 0. + t2419;
  p_output1[0]=0.930418*t1270 - 0.366501*t978;
  p_output1[1]=-0.366501*t1499 + 0.930418*t1625;
  p_output1[2]=-0.366501*t1864 + 0.930418*t1931;
  p_output1[3]=0.;
  p_output1[4]=0.366501*t1270 + 0.930418*t978;
  p_output1[5]=0.930418*t1499 + 0.366501*t1625;
  p_output1[6]=0.930418*t1864 + 0.366501*t1931;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1729*t639;
  p_output1[9]=-1.*t1729*t596;
  p_output1[10]=t697;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.001745*t1270 - 0.03244*t1729*t639 + t2367*t789 + t2446*t866 + 0.091945*t978 + var1[0];
  p_output1[13]=0. + 0.091945*t1499 - 0.001745*t1625 + t1334*t2367 + t1482*t2446 - 0.03244*t1729*t596 + var1[1];
  p_output1[14]=0. + 0.091945*t1864 - 0.001745*t1931 + t1729*t2446*t583 + 0.03244*t697 + t1729*t2367*t744 + var1[2];
  p_output1[15]=1.;
}



void T_left_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
