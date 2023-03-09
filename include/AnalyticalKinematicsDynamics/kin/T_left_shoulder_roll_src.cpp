/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_shoulder_roll_src.h"

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
  double t268;
  double t511;
  double t259;
  double t302;
  double t515;
  double t548;
  double t405;
  double t521;
  double t526;
  double t241;
  double t556;
  double t601;
  double t645;
  double t948;
  double t961;
  double t971;
  double t1020;
  double t1055;
  double t1102;
  double t1247;
  double t532;
  double t661;
  double t672;
  double t765;
  double t767;
  double t796;
  double t995;
  double t1129;
  double t1144;
  double t1200;
  double t1202;
  double t1214;
  double t1250;
  double t1253;
  double t1260;
  double t1295;
  double t1312;
  double t1325;
  double t1512;
  double t1519;
  double t1534;
  double t1548;
  double t1549;
  double t1569;
  double t1589;
  double t1612;
  t268 = Cos(var1[5]);
  t511 = Sin(var1[3]);
  t259 = Cos(var1[3]);
  t302 = Sin(var1[4]);
  t515 = Sin(var1[5]);
  t548 = Cos(var1[13]);
  t405 = t259*t268*t302;
  t521 = t511*t515;
  t526 = t405 + t521;
  t241 = Sin(var1[13]);
  t556 = -1.*t268*t511;
  t601 = t259*t302*t515;
  t645 = t556 + t601;
  t948 = t268*t511*t302;
  t961 = -1.*t259*t515;
  t971 = t948 + t961;
  t1020 = t259*t268;
  t1055 = t511*t302*t515;
  t1102 = t1020 + t1055;
  t1247 = Cos(var1[4]);
  t532 = -1.*t241*t526;
  t661 = t548*t645;
  t672 = t532 + t661;
  t765 = t548*t526;
  t767 = t241*t645;
  t796 = t765 + t767;
  t995 = -1.*t241*t971;
  t1129 = t548*t1102;
  t1144 = t995 + t1129;
  t1200 = t548*t971;
  t1202 = t241*t1102;
  t1214 = t1200 + t1202;
  t1250 = -1.*t1247*t268*t241;
  t1253 = t548*t1247*t515;
  t1260 = t1250 + t1253;
  t1295 = t548*t1247*t268;
  t1312 = t1247*t241*t515;
  t1325 = t1295 + t1312;
  t1512 = -1.*t548;
  t1519 = 1. + t1512;
  t1534 = 0.4*t1519;
  t1548 = 0.12*t241;
  t1549 = 0. + t1534 + t1548;
  t1569 = 0.12*t1519;
  t1589 = -0.4*t241;
  t1612 = 0. + t1569 + t1589;
  p_output1[0]=0.173648*t672 + 0.984808*t796;
  p_output1[1]=0.173648*t1144 + 0.984808*t1214;
  p_output1[2]=0.173648*t1260 + 0.984808*t1325;
  p_output1[3]=0.;
  p_output1[4]=0.984808*t672 - 0.173648*t796;
  p_output1[5]=0.984808*t1144 - 0.173648*t1214;
  p_output1[6]=0.984808*t1260 - 0.173648*t1325;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1247*t259;
  p_output1[9]=-1.*t1247*t511;
  p_output1[10]=t302;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.02441*t1247*t259 + t1549*t526 + t1612*t645 + 0.11689*t672 + 0.400559*t796 + var1[0];
  p_output1[13]=0. + 0.11689*t1144 + 0.400559*t1214 + t1102*t1612 - 0.02441*t1247*t511 + t1549*t971 + var1[1];
  p_output1[14]=0. + 0.11689*t1260 + 0.400559*t1325 + t1247*t1549*t268 + 0.02441*t302 + t1247*t1612*t515 + var1[2];
  p_output1[15]=1.;
}



void T_left_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
