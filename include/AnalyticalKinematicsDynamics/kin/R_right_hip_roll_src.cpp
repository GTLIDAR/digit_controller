/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_hip_roll_src.h"

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
  double t1363;
  double t1570;
  double t1324;
  double t1470;
  double t1635;
  double t1903;
  double t1506;
  double t1637;
  double t1705;
  double t1234;
  double t1921;
  double t2023;
  double t2026;
  double t2445;
  double t2456;
  double t2501;
  double t2556;
  double t2557;
  double t2593;
  double t2843;
  double t1825;
  double t2064;
  double t2085;
  double t2104;
  double t2275;
  double t2286;
  double t2537;
  double t2734;
  double t2748;
  double t2753;
  double t2794;
  double t2806;
  double t2865;
  double t2889;
  double t2897;
  double t2906;
  double t2916;
  double t2923;
  t1363 = Cos(var1[5]);
  t1570 = Sin(var1[3]);
  t1324 = Cos(var1[3]);
  t1470 = Sin(var1[4]);
  t1635 = Sin(var1[5]);
  t1903 = Cos(var1[17]);
  t1506 = t1324*t1363*t1470;
  t1637 = t1570*t1635;
  t1705 = t1506 + t1637;
  t1234 = Sin(var1[17]);
  t1921 = -1.*t1363*t1570;
  t2023 = t1324*t1470*t1635;
  t2026 = t1921 + t2023;
  t2445 = t1363*t1570*t1470;
  t2456 = -1.*t1324*t1635;
  t2501 = t2445 + t2456;
  t2556 = t1324*t1363;
  t2557 = t1570*t1470*t1635;
  t2593 = t2556 + t2557;
  t2843 = Cos(var1[4]);
  t1825 = -1.*t1234*t1705;
  t2064 = t1903*t2026;
  t2085 = t1825 + t2064;
  t2104 = t1903*t1705;
  t2275 = t1234*t2026;
  t2286 = t2104 + t2275;
  t2537 = -1.*t1234*t2501;
  t2734 = t1903*t2593;
  t2748 = t2537 + t2734;
  t2753 = t1903*t2501;
  t2794 = t1234*t2593;
  t2806 = t2753 + t2794;
  t2865 = -1.*t2843*t1363*t1234;
  t2889 = t1903*t2843*t1635;
  t2897 = t2865 + t2889;
  t2906 = t1903*t2843*t1363;
  t2916 = t2843*t1234*t1635;
  t2923 = t2906 + t2916;
  p_output1[0]=0.366501*t2085 + 0.930418*t2286;
  p_output1[1]=0.366501*t2748 + 0.930418*t2806;
  p_output1[2]=0.366501*t2897 + 0.930418*t2923;
  p_output1[3]=0.930418*t2085 - 0.366501*t2286;
  p_output1[4]=0.930418*t2748 - 0.366501*t2806;
  p_output1[5]=0.930418*t2897 - 0.366501*t2923;
  p_output1[6]=-1.*t1324*t2843;
  p_output1[7]=-1.*t1570*t2843;
  p_output1[8]=t1470;
}



void R_right_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
