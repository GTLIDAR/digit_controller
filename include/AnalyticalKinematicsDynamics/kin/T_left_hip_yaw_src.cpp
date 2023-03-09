/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_hip_yaw_src.h"

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
  double t48;
  double t509;
  double t631;
  double t558;
  double t637;
  double t505;
  double t701;
  double t702;
  double t757;
  double t581;
  double t652;
  double t666;
  double t774;
  double t826;
  double t238;
  double t260;
  double t365;
  double t389;
  double t469;
  double t478;
  double t869;
  double t881;
  double t1206;
  double t1207;
  double t1228;
  double t1101;
  double t1133;
  double t1153;
  double t1025;
  double t1052;
  double t694;
  double t811;
  double t817;
  double t956;
  double t968;
  double t1009;
  double t1163;
  double t1260;
  double t1273;
  double t1741;
  double t1792;
  double t1356;
  double t1360;
  double t1369;
  double t1821;
  double t1875;
  double t2018;
  double t2026;
  double t2063;
  double t2071;
  double t1441;
  double t1492;
  double t1496;
  double t1525;
  double t1530;
  double t1569;
  double t1668;
  double t1798;
  double t1967;
  double t2005;
  double t2038;
  double t2057;
  double t2104;
  double t2107;
  double t2195;
  double t2199;
  double t2204;
  double t2282;
  double t2293;
  double t2296;
  double t2297;
  double t2303;
  double t2333;
  double t2393;
  double t2396;
  double t2397;
  double t2413;
  double t2429;
  double t2470;
  double t2492;
  double t2647;
  double t2683;
  double t2697;
  double t2708;
  double t2718;
  double t2735;
  double t2752;
  double t2768;
  double t2775;
  double t2846;
  double t3007;
  double t3010;
  double t3019;
  double t3085;
  double t3140;
  double t3196;
  double t3206;
  double t3222;
  t48 = Cos(var1[3]);
  t509 = Cos(var1[5]);
  t631 = Sin(var1[4]);
  t558 = Sin(var1[3]);
  t637 = Sin(var1[5]);
  t505 = Cos(var1[6]);
  t701 = t48*t509*t631;
  t702 = t558*t637;
  t757 = t701 + t702;
  t581 = -1.*t509*t558;
  t652 = t48*t631*t637;
  t666 = t581 + t652;
  t774 = Sin(var1[6]);
  t826 = Sin(var1[7]);
  t238 = Cos(var1[4]);
  t260 = Cos(var1[7]);
  t365 = -1.*t260;
  t389 = 1. + t365;
  t469 = -1.000000637725*t389;
  t478 = 1. + t469;
  t869 = -0.930418*t826;
  t881 = 0. + t869;
  t1206 = t509*t558*t631;
  t1207 = -1.*t48*t637;
  t1228 = t1206 + t1207;
  t1101 = t48*t509;
  t1133 = t558*t631*t637;
  t1153 = t1101 + t1133;
  t1025 = -0.366501*t826;
  t1052 = 0. + t1025;
  t694 = t505*t666;
  t811 = -1.*t757*t774;
  t817 = t694 + t811;
  t956 = t505*t757;
  t968 = t666*t774;
  t1009 = t956 + t968;
  t1163 = t505*t1153;
  t1260 = -1.*t1228*t774;
  t1273 = t1163 + t1260;
  t1741 = -0.134322983001*t389;
  t1792 = 1. + t1741;
  t1356 = t505*t1228;
  t1360 = t1153*t774;
  t1369 = t1356 + t1360;
  t1821 = 0.366501*t826;
  t1875 = 0. + t1821;
  t2018 = -0.8656776547239999*t389;
  t2026 = 1. + t2018;
  t2063 = 0.930418*t826;
  t2071 = 0. + t2063;
  t1441 = t238*t505*t637;
  t1492 = -1.*t238*t509*t774;
  t1496 = t1441 + t1492;
  t1525 = t238*t509*t505;
  t1530 = t238*t637*t774;
  t1569 = t1525 + t1530;
  t1668 = -0.340999127418*t389*t817;
  t1798 = t1792*t1009;
  t1967 = t48*t238*t1875;
  t2005 = t1668 + t1798 + t1967;
  t2038 = t2026*t817;
  t2057 = -0.340999127418*t389*t1009;
  t2104 = t48*t238*t2071;
  t2107 = t2038 + t2057 + t2104;
  t2195 = -0.340999127418*t389*t1273;
  t2199 = t1792*t1369;
  t2204 = t238*t558*t1875;
  t2282 = t2195 + t2199 + t2204;
  t2293 = t2026*t1273;
  t2296 = -0.340999127418*t389*t1369;
  t2297 = t238*t558*t2071;
  t2303 = t2293 + t2296 + t2297;
  t2333 = -0.340999127418*t389*t1496;
  t2393 = t1792*t1569;
  t2396 = -1.*t631*t1875;
  t2397 = t2333 + t2393 + t2396;
  t2413 = t2026*t1496;
  t2429 = -0.340999127418*t389*t1569;
  t2470 = -1.*t631*t2071;
  t2492 = t2413 + t2429 + t2470;
  t2647 = -1.*t505;
  t2683 = 1. + t2647;
  t2697 = 0.091*t2683;
  t2708 = 0. + t2697;
  t2718 = 0.091*t774;
  t2735 = 0. + t2718;
  t2752 = -0.04500040093286238*t389;
  t2768 = 0.07877663122399998*t881;
  t2775 = 0.031030906668*t1052;
  t2846 = 0. + t2752 + t2768 + t2775;
  t3007 = -3.2909349868922137e-7*var1[7];
  t3010 = 0.03103092645718495*t389;
  t3019 = -0.045000372235*t1875;
  t3085 = t3007 + t3010 + t3019;
  t3140 = 1.296332362046933e-7*var1[7];
  t3196 = 0.07877668146182712*t389;
  t3206 = -0.045000372235*t2071;
  t3222 = t3140 + t3196 + t3206;
  p_output1[0]=-1.*t1009*t1052 - 1.*t238*t478*t48 - 1.*t817*t881;
  p_output1[1]=-1.*t1052*t1369 - 1.*t238*t478*t558 - 1.*t1273*t881;
  p_output1[2]=-1.*t1052*t1569 + t478*t631 - 1.*t1496*t881;
  p_output1[3]=0.;
  p_output1[4]=0.366501*t2005 + 0.930418*t2107;
  p_output1[5]=0.366501*t2282 + 0.930418*t2303;
  p_output1[6]=0.366501*t2397 + 0.930418*t2492;
  p_output1[7]=0.;
  p_output1[8]=-0.930418*t2005 + 0.366501*t2107;
  p_output1[9]=-0.930418*t2282 + 0.366501*t2303;
  p_output1[10]=-0.930418*t2397 + 0.366501*t2492;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.086806*t2005 + 0.123098*t2107 + t1009*t3085 + t238*t2846*t48 + t2708*t666 + t2735*t757 + t3222*t817 - 0.04501*(t1009*t1052 + t238*t478*t48 + t817*t881) + var1[0];
  p_output1[13]=0. - 0.086806*t2282 + 0.123098*t2303 + t1153*t2708 + t1228*t2735 + t1369*t3085 + t1273*t3222 + t238*t2846*t558 - 0.04501*(t1052*t1369 + t238*t478*t558 + t1273*t881) + var1[1];
  p_output1[14]=0. - 0.086806*t2397 + 0.123098*t2492 + t1569*t3085 + t1496*t3222 + t238*t2735*t509 - 1.*t2846*t631 + t238*t2708*t637 - 0.04501*(t1052*t1569 - 1.*t478*t631 + t1496*t881) + var1[2];
  p_output1[15]=1.;
}



void T_left_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
