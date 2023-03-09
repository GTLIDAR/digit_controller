/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_hip_abduction_right_src.h"

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
  double t665;
  double t745;
  double t545;
  double t666;
  double t801;
  double t934;
  double t717;
  double t905;
  double t912;
  double t469;
  double t951;
  double t969;
  double t989;
  double t1566;
  double t1653;
  double t1678;
  double t1796;
  double t1832;
  double t1836;
  double t2253;
  double t917;
  double t1104;
  double t1163;
  double t1361;
  double t1394;
  double t1484;
  double t1738;
  double t1860;
  double t1934;
  double t2161;
  double t2163;
  double t2174;
  double t2255;
  double t2286;
  double t2312;
  double t2402;
  double t2407;
  double t2421;
  double t2890;
  double t2922;
  double t2968;
  double t2976;
  double t3009;
  double t3025;
  t665 = Cos(var1[5]);
  t745 = Sin(var1[3]);
  t545 = Cos(var1[3]);
  t666 = Sin(var1[4]);
  t801 = Sin(var1[5]);
  t934 = Cos(var1[17]);
  t717 = t545*t665*t666;
  t905 = t745*t801;
  t912 = t717 + t905;
  t469 = Sin(var1[17]);
  t951 = -1.*t665*t745;
  t969 = t545*t666*t801;
  t989 = t951 + t969;
  t1566 = t665*t745*t666;
  t1653 = -1.*t545*t801;
  t1678 = t1566 + t1653;
  t1796 = t545*t665;
  t1832 = t745*t666*t801;
  t1836 = t1796 + t1832;
  t2253 = Cos(var1[4]);
  t917 = -1.*t469*t912;
  t1104 = t934*t989;
  t1163 = t917 + t1104;
  t1361 = t934*t912;
  t1394 = t469*t989;
  t1484 = t1361 + t1394;
  t1738 = -1.*t469*t1678;
  t1860 = t934*t1836;
  t1934 = t1738 + t1860;
  t2161 = t934*t1678;
  t2163 = t469*t1836;
  t2174 = t2161 + t2163;
  t2255 = -1.*t2253*t665*t469;
  t2286 = t934*t2253*t801;
  t2312 = t2255 + t2286;
  t2402 = t934*t2253*t665;
  t2407 = t2253*t469*t801;
  t2421 = t2402 + t2407;
  t2890 = -0.091*t469;
  t2922 = 0. + t2890;
  t2968 = -1.*t934;
  t2976 = 1. + t2968;
  t3009 = -0.091*t2976;
  t3025 = 0. + t3009;
  p_output1[0]=0.366501*t1163 + 0.930418*t1484;
  p_output1[1]=0.366501*t1934 + 0.930418*t2174;
  p_output1[2]=0.366501*t2312 + 0.930418*t2421;
  p_output1[3]=0.;
  p_output1[4]=0.930418*t1163 - 0.366501*t1484;
  p_output1[5]=0.930418*t1934 - 0.366501*t2174;
  p_output1[6]=0.930418*t2312 - 0.366501*t2421;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2253*t545;
  p_output1[9]=-1.*t2253*t745;
  p_output1[10]=t666;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.091*t1163 - 0.001*t2253*t545 + t2922*t912 + t3025*t989 + var1[0];
  p_output1[13]=0. - 0.091*t1934 + t1678*t2922 + t1836*t3025 - 0.001*t2253*t745 + var1[1];
  p_output1[14]=0. - 0.091*t2312 + t2253*t2922*t665 + 0.001*t666 + t2253*t3025*t801 + var1[2];
  p_output1[15]=1.;
}



void T_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
