/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_shoulder_roll_src.h"

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
  double t800;
  double t1397;
  double t786;
  double t943;
  double t1423;
  double t1515;
  double t1330;
  double t1425;
  double t1435;
  double t538;
  double t1612;
  double t1653;
  double t1741;
  double t2162;
  double t2224;
  double t2252;
  double t2415;
  double t2439;
  double t2699;
  double t2861;
  double t1468;
  double t1759;
  double t1785;
  double t1868;
  double t2013;
  double t2032;
  double t2358;
  double t2701;
  double t2703;
  double t2743;
  double t2744;
  double t2761;
  double t2868;
  double t2874;
  double t2875;
  double t2903;
  double t2905;
  double t2907;
  t800 = Cos(var1[5]);
  t1397 = Sin(var1[3]);
  t786 = Cos(var1[3]);
  t943 = Sin(var1[4]);
  t1423 = Sin(var1[5]);
  t1515 = Cos(var1[24]);
  t1330 = t786*t800*t943;
  t1425 = t1397*t1423;
  t1435 = t1330 + t1425;
  t538 = Sin(var1[24]);
  t1612 = -1.*t800*t1397;
  t1653 = t786*t943*t1423;
  t1741 = t1612 + t1653;
  t2162 = t800*t1397*t943;
  t2224 = -1.*t786*t1423;
  t2252 = t2162 + t2224;
  t2415 = t786*t800;
  t2439 = t1397*t943*t1423;
  t2699 = t2415 + t2439;
  t2861 = Cos(var1[4]);
  t1468 = -1.*t538*t1435;
  t1759 = t1515*t1741;
  t1785 = t1468 + t1759;
  t1868 = t1515*t1435;
  t2013 = t538*t1741;
  t2032 = t1868 + t2013;
  t2358 = -1.*t538*t2252;
  t2701 = t1515*t2699;
  t2703 = t2358 + t2701;
  t2743 = t1515*t2252;
  t2744 = t538*t2699;
  t2761 = t2743 + t2744;
  t2868 = -1.*t2861*t800*t538;
  t2874 = t1515*t2861*t1423;
  t2875 = t2868 + t2874;
  t2903 = t1515*t2861*t800;
  t2905 = t2861*t538*t1423;
  t2907 = t2903 + t2905;
  p_output1[0]=-0.173648*t1785 + 0.984808*t2032;
  p_output1[1]=-0.173648*t2703 + 0.984808*t2761;
  p_output1[2]=-0.173648*t2875 + 0.984808*t2907;
  p_output1[3]=0.984808*t1785 + 0.173648*t2032;
  p_output1[4]=0.984808*t2703 + 0.173648*t2761;
  p_output1[5]=0.984808*t2875 + 0.173648*t2907;
  p_output1[6]=-1.*t2861*t786;
  p_output1[7]=-1.*t1397*t2861;
  p_output1[8]=t943;
}



void R_right_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
