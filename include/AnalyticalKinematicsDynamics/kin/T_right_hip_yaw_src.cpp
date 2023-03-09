/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_right_hip_yaw_src.h"

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
  double t651;
  double t755;
  double t783;
  double t756;
  double t813;
  double t700;
  double t856;
  double t776;
  double t833;
  double t839;
  double t740;
  double t879;
  double t887;
  double t888;
  double t380;
  double t393;
  double t416;
  double t463;
  double t522;
  double t682;
  double t707;
  double t728;
  double t985;
  double t1000;
  double t1239;
  double t1247;
  double t1267;
  double t1302;
  double t1306;
  double t1308;
  double t851;
  double t950;
  double t973;
  double t1011;
  double t1041;
  double t1169;
  double t1749;
  double t1767;
  double t1299;
  double t1330;
  double t1343;
  double t1815;
  double t1823;
  double t1434;
  double t1448;
  double t1450;
  double t1879;
  double t1882;
  double t1899;
  double t1908;
  double t1530;
  double t1537;
  double t1541;
  double t1557;
  double t1591;
  double t1594;
  double t1805;
  double t1809;
  double t1840;
  double t1865;
  double t1886;
  double t1923;
  double t1954;
  double t1961;
  double t2048;
  double t2060;
  double t2076;
  double t2084;
  double t2120;
  double t2130;
  double t2132;
  double t2144;
  double t2182;
  double t2191;
  double t2192;
  double t2206;
  double t2242;
  double t2243;
  double t2244;
  double t2269;
  double t2430;
  double t2444;
  double t2482;
  double t2494;
  double t2516;
  double t2534;
  double t2554;
  double t2608;
  double t2644;
  double t2665;
  double t2716;
  double t2722;
  double t2741;
  double t2829;
  double t2848;
  double t2859;
  double t2872;
  double t2938;
  t651 = Cos(var1[3]);
  t755 = Cos(var1[5]);
  t783 = Sin(var1[3]);
  t756 = Sin(var1[4]);
  t813 = Sin(var1[5]);
  t700 = Sin(var1[18]);
  t856 = Cos(var1[17]);
  t776 = t651*t755*t756;
  t833 = t783*t813;
  t839 = t776 + t833;
  t740 = Sin(var1[17]);
  t879 = -1.*t755*t783;
  t887 = t651*t756*t813;
  t888 = t879 + t887;
  t380 = Cos(var1[18]);
  t393 = -1.*t380;
  t416 = 1. + t393;
  t463 = -1.000000637725*t416;
  t522 = 1. + t463;
  t682 = Cos(var1[4]);
  t707 = -0.930418*t700;
  t728 = 0. + t707;
  t985 = 0.366501*t700;
  t1000 = 0. + t985;
  t1239 = t755*t783*t756;
  t1247 = -1.*t651*t813;
  t1267 = t1239 + t1247;
  t1302 = t651*t755;
  t1306 = t783*t756*t813;
  t1308 = t1302 + t1306;
  t851 = -1.*t740*t839;
  t950 = t856*t888;
  t973 = t851 + t950;
  t1011 = t856*t839;
  t1041 = t740*t888;
  t1169 = t1011 + t1041;
  t1749 = -0.366501*t700;
  t1767 = 0. + t1749;
  t1299 = -1.*t740*t1267;
  t1330 = t856*t1308;
  t1343 = t1299 + t1330;
  t1815 = -0.134322983001*t416;
  t1823 = 1. + t1815;
  t1434 = t856*t1267;
  t1448 = t740*t1308;
  t1450 = t1434 + t1448;
  t1879 = 0.930418*t700;
  t1882 = 0. + t1879;
  t1899 = -0.8656776547239999*t416;
  t1908 = 1. + t1899;
  t1530 = -1.*t682*t755*t740;
  t1537 = t856*t682*t813;
  t1541 = t1530 + t1537;
  t1557 = t856*t682*t755;
  t1591 = t682*t740*t813;
  t1594 = t1557 + t1591;
  t1805 = t651*t682*t1767;
  t1809 = 0.340999127418*t416*t973;
  t1840 = t1823*t1169;
  t1865 = t1805 + t1809 + t1840;
  t1886 = t651*t682*t1882;
  t1923 = t1908*t973;
  t1954 = 0.340999127418*t416*t1169;
  t1961 = t1886 + t1923 + t1954;
  t2048 = t682*t1767*t783;
  t2060 = 0.340999127418*t416*t1343;
  t2076 = t1823*t1450;
  t2084 = t2048 + t2060 + t2076;
  t2120 = t682*t1882*t783;
  t2130 = t1908*t1343;
  t2132 = 0.340999127418*t416*t1450;
  t2144 = t2120 + t2130 + t2132;
  t2182 = -1.*t1767*t756;
  t2191 = 0.340999127418*t416*t1541;
  t2192 = t1823*t1594;
  t2206 = t2182 + t2191 + t2192;
  t2242 = -1.*t1882*t756;
  t2243 = t1908*t1541;
  t2244 = 0.340999127418*t416*t1594;
  t2269 = t2242 + t2243 + t2244;
  t2430 = -0.04500040093286238*t416;
  t2444 = -0.07877663122399998*t728;
  t2482 = 0.031030906668*t1000;
  t2494 = 0. + t2430 + t2444 + t2482;
  t2516 = -0.091*t740;
  t2534 = 0. + t2516;
  t2554 = -1.*t856;
  t2608 = 1. + t2554;
  t2644 = -0.091*t2608;
  t2665 = 0. + t2644;
  t2716 = 1.296332362046933e-7*var1[18];
  t2722 = -0.07877668146182712*t416;
  t2741 = -0.045000372235*t1882;
  t2829 = t2716 + t2722 + t2741;
  t2848 = 3.2909349868922137e-7*var1[18];
  t2859 = 0.03103092645718495*t416;
  t2872 = -0.045000372235*t1767;
  t2938 = t2848 + t2859 + t2872;
  p_output1[0]=-1.*t1000*t1169 - 1.*t522*t651*t682 - 1.*t728*t973;
  p_output1[1]=-1.*t1000*t1450 - 1.*t1343*t728 - 1.*t522*t682*t783;
  p_output1[2]=-1.*t1000*t1594 - 1.*t1541*t728 + t522*t756;
  p_output1[3]=0.;
  p_output1[4]=-0.366501*t1865 + 0.930418*t1961;
  p_output1[5]=-0.366501*t2084 + 0.930418*t2144;
  p_output1[6]=-0.366501*t2206 + 0.930418*t2269;
  p_output1[7]=0.;
  p_output1[8]=-0.930418*t1865 - 0.366501*t1961;
  p_output1[9]=-0.930418*t2084 - 0.366501*t2144;
  p_output1[10]=-0.930418*t2206 - 0.366501*t2269;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.086806*t1865 - 0.123098*t1961 + t1169*t2938 + t2494*t651*t682 + t2534*t839 + t2665*t888 + t2829*t973 - 0.04501*(t1000*t1169 + t522*t651*t682 + t728*t973) + var1[0];
  p_output1[13]=0. - 0.086806*t2084 - 0.123098*t2144 + t1267*t2534 + t1308*t2665 + t1343*t2829 + t1450*t2938 + t2494*t682*t783 - 0.04501*(t1000*t1450 + t1343*t728 + t522*t682*t783) + var1[1];
  p_output1[14]=0. - 0.086806*t2206 - 0.123098*t2269 + t1541*t2829 + t1594*t2938 + t2534*t682*t755 - 1.*t2494*t756 - 0.04501*(t1000*t1594 + t1541*t728 - 1.*t522*t756) + t2665*t682*t813 + var1[2];
  p_output1[15]=1.;
}



void T_right_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
