/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_shoulder_pitch_src.h"

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
  double t332;
  double t1251;
  double t1626;
  double t1507;
  double t1631;
  double t947;
  double t1049;
  double t1128;
  double t1833;
  double t1537;
  double t1672;
  double t1701;
  double t1150;
  double t1851;
  double t1870;
  double t1871;
  double t388;
  double t401;
  double t1832;
  double t1891;
  double t1932;
  double t2003;
  double t2047;
  double t2060;
  double t409;
  double t435;
  double t1970;
  double t1974;
  double t2528;
  double t2559;
  double t2599;
  double t2602;
  double t2609;
  double t2615;
  double t2215;
  double t2235;
  double t2253;
  double t2272;
  double t2601;
  double t2616;
  double t2623;
  double t2642;
  double t2655;
  double t2674;
  double t2311;
  double t2316;
  double t2324;
  double t2347;
  double t2367;
  double t2377;
  double t2873;
  double t2888;
  double t2899;
  double t2923;
  double t2929;
  double t2931;
  double t764;
  double t1968;
  double t2139;
  double t2144;
  double t2245;
  double t2275;
  double t2287;
  double t2298;
  double t2317;
  double t2349;
  double t2410;
  double t2481;
  double t2487;
  double t2502;
  double t2624;
  double t2721;
  double t2722;
  double t2738;
  double t2769;
  double t2792;
  double t2795;
  double t2833;
  double t2836;
  double t2845;
  double t2853;
  double t2856;
  double t2859;
  double t2912;
  double t2955;
  double t2976;
  double t3046;
  double t3051;
  double t3075;
  double t3119;
  double t3134;
  double t3167;
  double t3171;
  double t3174;
  double t3178;
  t332 = Cos(var1[3]);
  t1251 = Cos(var1[5]);
  t1626 = Sin(var1[3]);
  t1507 = Sin(var1[4]);
  t1631 = Sin(var1[5]);
  t947 = Cos(var1[25]);
  t1049 = -1.*t947;
  t1128 = 1. + t1049;
  t1833 = Cos(var1[24]);
  t1537 = t332*t1251*t1507;
  t1672 = t1626*t1631;
  t1701 = t1537 + t1672;
  t1150 = Sin(var1[24]);
  t1851 = -1.*t1251*t1626;
  t1870 = t332*t1507*t1631;
  t1871 = t1851 + t1870;
  t388 = Cos(var1[4]);
  t401 = Sin(var1[25]);
  t1832 = -1.*t1150*t1701;
  t1891 = t1833*t1871;
  t1932 = t1832 + t1891;
  t2003 = t1833*t1701;
  t2047 = t1150*t1871;
  t2060 = t2003 + t2047;
  t409 = -0.994522*t401;
  t435 = 0. + t409;
  t1970 = -0.9890740084840001*t1128;
  t1974 = 1. + t1970;
  t2528 = t1251*t1626*t1507;
  t2559 = -1.*t332*t1631;
  t2599 = t2528 + t2559;
  t2602 = t332*t1251;
  t2609 = t1626*t1507*t1631;
  t2615 = t2602 + t2609;
  t2215 = -0.104528*t401;
  t2235 = 0. + t2215;
  t2253 = -0.010926102783999999*t1128;
  t2272 = 1. + t2253;
  t2601 = -1.*t1150*t2599;
  t2616 = t1833*t2615;
  t2623 = t2601 + t2616;
  t2642 = t1833*t2599;
  t2655 = t1150*t2615;
  t2674 = t2642 + t2655;
  t2311 = -1.0000001112680001*t1128;
  t2316 = 1. + t2311;
  t2324 = 0.104528*t401;
  t2347 = 0. + t2324;
  t2367 = 0.994522*t401;
  t2377 = 0. + t2367;
  t2873 = -1.*t388*t1251*t1150;
  t2888 = t1833*t388*t1631;
  t2899 = t2873 + t2888;
  t2923 = t1833*t388*t1251;
  t2929 = t388*t1150*t1631;
  t2931 = t2923 + t2929;
  t764 = t332*t388*t435;
  t1968 = -0.103955395616*t1128*t1932;
  t2139 = t1974*t2060;
  t2144 = t764 + t1968 + t2139;
  t2245 = t332*t388*t2235;
  t2275 = t2272*t1932;
  t2287 = -0.103955395616*t1128*t2060;
  t2298 = t2245 + t2275 + t2287;
  t2317 = t2316*t332*t388;
  t2349 = t2347*t1932;
  t2410 = t2377*t2060;
  t2481 = t2317 + t2349 + t2410;
  t2487 = 0.707107*t2481;
  t2502 = t388*t435*t1626;
  t2624 = -0.103955395616*t1128*t2623;
  t2721 = t1974*t2674;
  t2722 = t2502 + t2624 + t2721;
  t2738 = t388*t2235*t1626;
  t2769 = t2272*t2623;
  t2792 = -0.103955395616*t1128*t2674;
  t2795 = t2738 + t2769 + t2792;
  t2833 = t2316*t388*t1626;
  t2836 = t2347*t2623;
  t2845 = t2377*t2674;
  t2853 = t2833 + t2836 + t2845;
  t2856 = 0.707107*t2853;
  t2859 = -1.*t435*t1507;
  t2912 = -0.103955395616*t1128*t2899;
  t2955 = t1974*t2931;
  t2976 = t2859 + t2912 + t2955;
  t3046 = -1.*t2235*t1507;
  t3051 = t2272*t2899;
  t3075 = -0.103955395616*t1128*t2931;
  t3119 = t3046 + t3051 + t3075;
  t3134 = -1.*t2316*t1507;
  t3167 = t2347*t2899;
  t3171 = t2377*t2931;
  t3174 = t3134 + t3167 + t3171;
  t3178 = 0.707107*t3174;
  p_output1[0]=0.703234*t2144 + 0.073913*t2298 + t2487;
  p_output1[1]=0.703234*t2722 + 0.073913*t2795 + t2856;
  p_output1[2]=0.703234*t2976 + 0.073913*t3119 + t3178;
  p_output1[3]=-0.703234*t2144 - 0.073913*t2298 + t2487;
  p_output1[4]=-0.703234*t2722 - 0.073913*t2795 + t2856;
  p_output1[5]=-0.703234*t2976 - 0.073913*t3119 + t3178;
  p_output1[6]=-0.104528*t2144 + 0.994522*t2298;
  p_output1[7]=-0.104528*t2722 + 0.994522*t2795;
  p_output1[8]=-0.104528*t2976 + 0.994522*t3119;
}



void R_right_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
