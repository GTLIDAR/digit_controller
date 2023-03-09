/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_shoulder_yaw_joint_right_src.h"

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
  double t787;
  double t1514;
  double t1597;
  double t1525;
  double t1666;
  double t1413;
  double t1422;
  double t1423;
  double t1736;
  double t1592;
  double t1667;
  double t1678;
  double t1477;
  double t1775;
  double t1783;
  double t1803;
  double t252;
  double t254;
  double t288;
  double t373;
  double t809;
  double t1146;
  double t1727;
  double t1810;
  double t1837;
  double t1887;
  double t1964;
  double t1985;
  double t1184;
  double t1249;
  double t1334;
  double t1868;
  double t1885;
  double t1886;
  double t2027;
  double t2033;
  double t2063;
  double t2071;
  double t2078;
  double t2155;
  double t2165;
  double t2168;
  double t2183;
  double t2211;
  double t291;
  double t2287;
  double t2290;
  double t2307;
  double t2310;
  double t2321;
  double t2360;
  double t2376;
  double t2393;
  double t2422;
  double t2445;
  double t2565;
  double t2054;
  double t376;
  double t481;
  double t2771;
  double t2779;
  double t2791;
  double t2812;
  double t2834;
  double t2842;
  double t2055;
  double t2057;
  double t2806;
  double t2846;
  double t2849;
  double t2862;
  double t2871;
  double t2898;
  double t2257;
  double t2261;
  double t2480;
  double t2499;
  double t2767;
  double t2857;
  double t2904;
  double t2907;
  double t2566;
  double t2610;
  double t2909;
  double t2915;
  double t2929;
  double t2937;
  double t2623;
  double t2629;
  double t2973;
  double t2983;
  double t2984;
  double t2985;
  double t2657;
  double t2664;
  double t2667;
  double t2672;
  double t2701;
  double t2708;
  double t3063;
  double t3068;
  double t3073;
  double t3112;
  double t3122;
  double t3123;
  double t3062;
  double t3076;
  double t3126;
  double t3150;
  double t3167;
  double t3174;
  double t3178;
  double t3181;
  double t3186;
  double t3191;
  double t3193;
  double t3203;
  double t2563;
  double t2619;
  double t2648;
  double t2653;
  double t2665;
  double t2694;
  double t2723;
  double t2749;
  double t2999;
  double t3001;
  double t3014;
  double t3017;
  double t3021;
  double t3040;
  double t3041;
  double t3045;
  double t3247;
  double t3260;
  double t3268;
  double t3279;
  double t3300;
  double t3303;
  double t3306;
  double t3312;
  double t2039;
  double t2224;
  double t2458;
  double t2459;
  double t2466;
  double t2908;
  double t2965;
  double t2993;
  double t2994;
  double t2997;
  double t3155;
  double t3183;
  double t3219;
  double t3235;
  double t3239;
  t787 = Cos(var1[3]);
  t1514 = Cos(var1[5]);
  t1597 = Sin(var1[3]);
  t1525 = Sin(var1[4]);
  t1666 = Sin(var1[5]);
  t1413 = Cos(var1[25]);
  t1422 = -1.*t1413;
  t1423 = 1. + t1422;
  t1736 = Cos(var1[24]);
  t1592 = t787*t1514*t1525;
  t1667 = t1597*t1666;
  t1678 = t1592 + t1667;
  t1477 = Sin(var1[24]);
  t1775 = -1.*t1514*t1597;
  t1783 = t787*t1525*t1666;
  t1803 = t1775 + t1783;
  t252 = Cos(var1[26]);
  t254 = -1.*t252;
  t288 = 1. + t254;
  t373 = Sin(var1[26]);
  t809 = Cos(var1[4]);
  t1146 = Sin(var1[25]);
  t1727 = -1.*t1477*t1678;
  t1810 = t1736*t1803;
  t1837 = t1727 + t1810;
  t1887 = t1736*t1678;
  t1964 = t1477*t1803;
  t1985 = t1887 + t1964;
  t1184 = -0.994522*t1146;
  t1249 = 0. + t1184;
  t1334 = t787*t809*t1249;
  t1868 = -0.103955395616*t1423*t1837;
  t1885 = -0.9890740084840001*t1423;
  t1886 = 1. + t1885;
  t2027 = t1886*t1985;
  t2033 = t1334 + t1868 + t2027;
  t2063 = -0.104528*t1146;
  t2071 = 0. + t2063;
  t2078 = t787*t809*t2071;
  t2155 = -0.010926102783999999*t1423;
  t2165 = 1. + t2155;
  t2168 = t2165*t1837;
  t2183 = -0.103955395616*t1423*t1985;
  t2211 = t2078 + t2168 + t2183;
  t291 = -0.49726168403800003*t288;
  t2287 = -1.0000001112680001*t1423;
  t2290 = 1. + t2287;
  t2307 = t2290*t787*t809;
  t2310 = 0.104528*t1146;
  t2321 = 0. + t2310;
  t2360 = t2321*t1837;
  t2376 = 0.994522*t1146;
  t2393 = 0. + t2376;
  t2422 = t2393*t1985;
  t2445 = t2307 + t2360 + t2422;
  t2565 = 0.051978134642000004*t288;
  t2054 = -0.05226439969100001*t288;
  t376 = 0.073913*t373;
  t481 = t291 + t376;
  t2771 = t1514*t1597*t1525;
  t2779 = -1.*t787*t1666;
  t2791 = t2771 + t2779;
  t2812 = t787*t1514;
  t2834 = t1597*t1525*t1666;
  t2842 = t2812 + t2834;
  t2055 = -0.703234*t373;
  t2057 = t2054 + t2055;
  t2806 = -1.*t1477*t2791;
  t2846 = t1736*t2842;
  t2849 = t2806 + t2846;
  t2862 = t1736*t2791;
  t2871 = t1477*t2842;
  t2898 = t2862 + t2871;
  t2257 = -0.500001190325*t288;
  t2261 = 1. + t2257;
  t2480 = -0.5054634410180001*t288;
  t2499 = 1. + t2480;
  t2767 = t809*t1249*t1597;
  t2857 = -0.103955395616*t1423*t2849;
  t2904 = t1886*t2898;
  t2907 = t2767 + t2857 + t2904;
  t2566 = -0.707107*t373;
  t2610 = t2565 + t2566;
  t2909 = t809*t2071*t1597;
  t2915 = t2165*t2849;
  t2929 = -0.103955395616*t1423*t2898;
  t2937 = t2909 + t2915 + t2929;
  t2623 = -0.073913*t373;
  t2629 = t291 + t2623;
  t2973 = t2290*t809*t1597;
  t2983 = t2321*t2849;
  t2984 = t2393*t2898;
  t2985 = t2973 + t2983 + t2984;
  t2657 = 0.707107*t373;
  t2664 = t2565 + t2657;
  t2667 = -0.9945383682050002*t288;
  t2672 = 1. + t2667;
  t2701 = 0.703234*t373;
  t2708 = t2054 + t2701;
  t3063 = -1.*t809*t1514*t1477;
  t3068 = t1736*t809*t1666;
  t3073 = t3063 + t3068;
  t3112 = t1736*t809*t1514;
  t3122 = t809*t1477*t1666;
  t3123 = t3112 + t3122;
  t3062 = -1.*t1249*t1525;
  t3076 = -0.103955395616*t1423*t3073;
  t3126 = t1886*t3123;
  t3150 = t3062 + t3076 + t3126;
  t3167 = -1.*t2071*t1525;
  t3174 = t2165*t3073;
  t3178 = -0.103955395616*t1423*t3123;
  t3181 = t3167 + t3174 + t3178;
  t3186 = -1.*t2290*t1525;
  t3191 = t2321*t3073;
  t3193 = t2393*t3123;
  t3203 = t3186 + t3191 + t3193;
  t2563 = t2499*t2033;
  t2619 = t2610*t2211;
  t2648 = t2629*t2445;
  t2653 = t2563 + t2619 + t2648;
  t2665 = t2664*t2033;
  t2694 = t2672*t2211;
  t2723 = t2708*t2445;
  t2749 = t2665 + t2694 + t2723;
  t2999 = t2499*t2907;
  t3001 = t2610*t2937;
  t3014 = t2629*t2985;
  t3017 = t2999 + t3001 + t3014;
  t3021 = t2664*t2907;
  t3040 = t2672*t2937;
  t3041 = t2708*t2985;
  t3045 = t3021 + t3040 + t3041;
  t3247 = t2499*t3150;
  t3260 = t2610*t3181;
  t3268 = t2629*t3203;
  t3279 = t3247 + t3260 + t3268;
  t3300 = t2664*t3150;
  t3303 = t2672*t3181;
  t3306 = t2708*t3203;
  t3312 = t3300 + t3303 + t3306;
  t2039 = t481*t2033;
  t2224 = t2057*t2211;
  t2458 = t2261*t2445;
  t2459 = t2039 + t2224 + t2458;
  t2466 = 0.707107*t2459;
  t2908 = t481*t2907;
  t2965 = t2057*t2937;
  t2993 = t2261*t2985;
  t2994 = t2908 + t2965 + t2993;
  t2997 = 0.707107*t2994;
  t3155 = t481*t3150;
  t3183 = t2057*t3181;
  t3219 = t2261*t3203;
  t3235 = t3155 + t3183 + t3219;
  t3239 = 0.707107*t3235;
  p_output1[0]=t2466 + 0.703234*t2653 + 0.073913*t2749;
  p_output1[1]=t2997 + 0.703234*t3017 + 0.073913*t3045;
  p_output1[2]=t3239 + 0.703234*t3279 + 0.073913*t3312;
  p_output1[3]=0.104528*t2653 - 0.994522*t2749;
  p_output1[4]=0.104528*t3017 - 0.994522*t3045;
  p_output1[5]=0.104528*t3279 - 0.994522*t3312;
  p_output1[6]=t2466 - 0.703234*t2653 - 0.073913*t2749;
  p_output1[7]=t2997 - 0.703234*t3017 - 0.073913*t3045;
  p_output1[8]=t3239 - 0.703234*t3279 - 0.073913*t3312;
}



void R_shoulder_yaw_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
