/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_hip_rotation_right_src.h"

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
  double t502;
  double t641;
  double t769;
  double t657;
  double t793;
  double t549;
  double t844;
  double t691;
  double t819;
  double t823;
  double t639;
  double t965;
  double t971;
  double t1012;
  double t372;
  double t376;
  double t378;
  double t427;
  double t451;
  double t518;
  double t603;
  double t615;
  double t1097;
  double t1105;
  double t1154;
  double t1184;
  double t1296;
  double t1346;
  double t1411;
  double t1487;
  double t825;
  double t1030;
  double t1046;
  double t1108;
  double t1109;
  double t1114;
  double t1851;
  double t1917;
  double t1340;
  double t1538;
  double t1573;
  double t1955;
  double t1968;
  double t1627;
  double t1650;
  double t1658;
  double t2055;
  double t2089;
  double t2205;
  double t2209;
  double t1727;
  double t1738;
  double t1741;
  double t1806;
  double t1807;
  double t1811;
  double t1922;
  double t1952;
  double t1983;
  double t2007;
  double t2100;
  double t2218;
  double t2226;
  double t2233;
  double t2268;
  double t2287;
  double t2292;
  double t2298;
  double t2327;
  double t2334;
  double t2338;
  double t2352;
  double t2400;
  double t2403;
  double t2428;
  double t2473;
  double t2534;
  double t2538;
  double t2544;
  double t2560;
  double t2742;
  double t2747;
  double t2751;
  double t2755;
  double t2825;
  double t2830;
  double t2864;
  double t2865;
  double t2869;
  double t2887;
  double t2898;
  double t2904;
  double t2913;
  double t2916;
  double t2921;
  double t2927;
  double t2941;
  double t2953;
  t502 = Cos(var1[3]);
  t641 = Cos(var1[5]);
  t769 = Sin(var1[3]);
  t657 = Sin(var1[4]);
  t793 = Sin(var1[5]);
  t549 = Sin(var1[18]);
  t844 = Cos(var1[17]);
  t691 = t502*t641*t657;
  t819 = t769*t793;
  t823 = t691 + t819;
  t639 = Sin(var1[17]);
  t965 = -1.*t641*t769;
  t971 = t502*t657*t793;
  t1012 = t965 + t971;
  t372 = Cos(var1[18]);
  t376 = -1.*t372;
  t378 = 1. + t376;
  t427 = -1.000000637725*t378;
  t451 = 1. + t427;
  t518 = Cos(var1[4]);
  t603 = -0.930418*t549;
  t615 = 0. + t603;
  t1097 = 0.366501*t549;
  t1105 = 0. + t1097;
  t1154 = t641*t769*t657;
  t1184 = -1.*t502*t793;
  t1296 = t1154 + t1184;
  t1346 = t502*t641;
  t1411 = t769*t657*t793;
  t1487 = t1346 + t1411;
  t825 = -1.*t639*t823;
  t1030 = t844*t1012;
  t1046 = t825 + t1030;
  t1108 = t844*t823;
  t1109 = t639*t1012;
  t1114 = t1108 + t1109;
  t1851 = -0.366501*t549;
  t1917 = 0. + t1851;
  t1340 = -1.*t639*t1296;
  t1538 = t844*t1487;
  t1573 = t1340 + t1538;
  t1955 = -0.134322983001*t378;
  t1968 = 1. + t1955;
  t1627 = t844*t1296;
  t1650 = t639*t1487;
  t1658 = t1627 + t1650;
  t2055 = 0.930418*t549;
  t2089 = 0. + t2055;
  t2205 = -0.8656776547239999*t378;
  t2209 = 1. + t2205;
  t1727 = -1.*t518*t641*t639;
  t1738 = t844*t518*t793;
  t1741 = t1727 + t1738;
  t1806 = t844*t518*t641;
  t1807 = t518*t639*t793;
  t1811 = t1806 + t1807;
  t1922 = t502*t518*t1917;
  t1952 = 0.340999127418*t378*t1046;
  t1983 = t1968*t1114;
  t2007 = t1922 + t1952 + t1983;
  t2100 = t502*t518*t2089;
  t2218 = t2209*t1046;
  t2226 = 0.340999127418*t378*t1114;
  t2233 = t2100 + t2218 + t2226;
  t2268 = t518*t1917*t769;
  t2287 = 0.340999127418*t378*t1573;
  t2292 = t1968*t1658;
  t2298 = t2268 + t2287 + t2292;
  t2327 = t518*t2089*t769;
  t2334 = t2209*t1573;
  t2338 = 0.340999127418*t378*t1658;
  t2352 = t2327 + t2334 + t2338;
  t2400 = -1.*t1917*t657;
  t2403 = 0.340999127418*t378*t1741;
  t2428 = t1968*t1811;
  t2473 = t2400 + t2403 + t2428;
  t2534 = -1.*t2089*t657;
  t2538 = t2209*t1741;
  t2544 = 0.340999127418*t378*t1811;
  t2560 = t2534 + t2538 + t2544;
  t2742 = -0.04500040093286238*t378;
  t2747 = -0.07877663122399998*t615;
  t2751 = 0.031030906668*t1105;
  t2755 = 0. + t2742 + t2747 + t2751;
  t2825 = -0.091*t639;
  t2830 = 0. + t2825;
  t2864 = -1.*t844;
  t2865 = 1. + t2864;
  t2869 = -0.091*t2865;
  t2887 = 0. + t2869;
  t2898 = 1.296332362046933e-7*var1[18];
  t2904 = -0.07877668146182712*t378;
  t2913 = -0.045000372235*t2089;
  t2916 = t2898 + t2904 + t2913;
  t2921 = 3.2909349868922137e-7*var1[18];
  t2927 = 0.03103092645718495*t378;
  t2941 = -0.045000372235*t1917;
  t2953 = t2921 + t2927 + t2941;
  p_output1[0]=-1.*t1105*t1114 - 1.*t451*t502*t518 - 1.*t1046*t615;
  p_output1[1]=-1.*t1105*t1658 - 1.*t1573*t615 - 1.*t451*t518*t769;
  p_output1[2]=-1.*t1105*t1811 - 1.*t1741*t615 + t451*t657;
  p_output1[3]=0.;
  p_output1[4]=-0.366501*t2007 + 0.930418*t2233;
  p_output1[5]=-0.366501*t2298 + 0.930418*t2352;
  p_output1[6]=-0.366501*t2473 + 0.930418*t2560;
  p_output1[7]=0.;
  p_output1[8]=-0.930418*t2007 - 0.366501*t2233;
  p_output1[9]=-0.930418*t2298 - 0.366501*t2352;
  p_output1[10]=-0.930418*t2473 - 0.366501*t2560;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.046986*t2007 - 0.109508*t2233 + t1012*t2887 + t1046*t2916 + t1114*t2953 + t2755*t502*t518 - 0.045*(t1105*t1114 + t451*t502*t518 + t1046*t615) + t2830*t823 + var1[0];
  p_output1[13]=0. - 0.046986*t2298 - 0.109508*t2352 + t1296*t2830 + t1487*t2887 + t1573*t2916 + t1658*t2953 + t2755*t518*t769 - 0.045*(t1105*t1658 + t1573*t615 + t451*t518*t769) + var1[1];
  p_output1[14]=0. - 0.046986*t2473 - 0.109508*t2560 + t1741*t2916 + t1811*t2953 + t2830*t518*t641 - 1.*t2755*t657 - 0.045*(t1105*t1811 + t1741*t615 - 1.*t451*t657) + t2887*t518*t793 + var1[2];
  p_output1[15]=1.;
}



void T_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
