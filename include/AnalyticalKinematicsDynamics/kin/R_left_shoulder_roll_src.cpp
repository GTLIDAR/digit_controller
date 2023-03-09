/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_shoulder_roll_src.h"

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
  double t1202;
  double t1343;
  double t1158;
  double t1270;
  double t1482;
  double t1553;
  double t1317;
  double t1486;
  double t1510;
  double t899;
  double t1612;
  double t1618;
  double t1632;
  double t2031;
  double t2060;
  double t2079;
  double t2313;
  double t2339;
  double t2343;
  double t2401;
  double t1516;
  double t1652;
  double t1784;
  double t1936;
  double t1943;
  double t1968;
  double t2181;
  double t2344;
  double t2346;
  double t2356;
  double t2365;
  double t2374;
  double t2411;
  double t2423;
  double t2453;
  double t2460;
  double t2474;
  double t2483;
  t1202 = Cos(var1[5]);
  t1343 = Sin(var1[3]);
  t1158 = Cos(var1[3]);
  t1270 = Sin(var1[4]);
  t1482 = Sin(var1[5]);
  t1553 = Cos(var1[13]);
  t1317 = t1158*t1202*t1270;
  t1486 = t1343*t1482;
  t1510 = t1317 + t1486;
  t899 = Sin(var1[13]);
  t1612 = -1.*t1202*t1343;
  t1618 = t1158*t1270*t1482;
  t1632 = t1612 + t1618;
  t2031 = t1202*t1343*t1270;
  t2060 = -1.*t1158*t1482;
  t2079 = t2031 + t2060;
  t2313 = t1158*t1202;
  t2339 = t1343*t1270*t1482;
  t2343 = t2313 + t2339;
  t2401 = Cos(var1[4]);
  t1516 = -1.*t899*t1510;
  t1652 = t1553*t1632;
  t1784 = t1516 + t1652;
  t1936 = t1553*t1510;
  t1943 = t899*t1632;
  t1968 = t1936 + t1943;
  t2181 = -1.*t899*t2079;
  t2344 = t1553*t2343;
  t2346 = t2181 + t2344;
  t2356 = t1553*t2079;
  t2365 = t899*t2343;
  t2374 = t2356 + t2365;
  t2411 = -1.*t2401*t1202*t899;
  t2423 = t1553*t2401*t1482;
  t2453 = t2411 + t2423;
  t2460 = t1553*t2401*t1202;
  t2474 = t2401*t899*t1482;
  t2483 = t2460 + t2474;
  p_output1[0]=0.173648*t1784 + 0.984808*t1968;
  p_output1[1]=0.173648*t2346 + 0.984808*t2374;
  p_output1[2]=0.173648*t2453 + 0.984808*t2483;
  p_output1[3]=0.984808*t1784 - 0.173648*t1968;
  p_output1[4]=0.984808*t2346 - 0.173648*t2374;
  p_output1[5]=0.984808*t2453 - 0.173648*t2483;
  p_output1[6]=-1.*t1158*t2401;
  p_output1[7]=-1.*t1343*t2401;
  p_output1[8]=t1270;
}



void R_left_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
