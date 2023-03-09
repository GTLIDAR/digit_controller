/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_shoulder_pitch_joint_right_src.h"

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
  double t146;
  double t1566;
  double t1738;
  double t1567;
  double t1786;
  double t1447;
  double t1486;
  double t1541;
  double t1828;
  double t1611;
  double t1797;
  double t1805;
  double t1552;
  double t1884;
  double t1896;
  double t1963;
  double t372;
  double t568;
  double t1827;
  double t1970;
  double t1989;
  double t2105;
  double t2127;
  double t2143;
  double t796;
  double t804;
  double t2070;
  double t2090;
  double t2540;
  double t2638;
  double t2693;
  double t2698;
  double t2708;
  double t2714;
  double t2184;
  double t2187;
  double t2204;
  double t2254;
  double t2694;
  double t2809;
  double t2810;
  double t2819;
  double t2820;
  double t2822;
  double t2310;
  double t2314;
  double t2404;
  double t2408;
  double t2413;
  double t2446;
  double t3045;
  double t3085;
  double t3088;
  double t3141;
  double t3175;
  double t3216;
  double t1001;
  double t1997;
  double t2150;
  double t2171;
  double t2203;
  double t2260;
  double t2272;
  double t2273;
  double t2396;
  double t2411;
  double t2449;
  double t2463;
  double t2519;
  double t2535;
  double t2814;
  double t2823;
  double t2831;
  double t2866;
  double t2885;
  double t2892;
  double t2901;
  double t2954;
  double t2982;
  double t2987;
  double t2996;
  double t3006;
  double t3036;
  double t3128;
  double t3236;
  double t3245;
  double t3275;
  double t3277;
  double t3278;
  double t3279;
  double t3281;
  double t3299;
  double t3316;
  double t3337;
  double t3338;
  t146 = Cos(var1[3]);
  t1566 = Cos(var1[5]);
  t1738 = Sin(var1[3]);
  t1567 = Sin(var1[4]);
  t1786 = Sin(var1[5]);
  t1447 = Cos(var1[25]);
  t1486 = -1.*t1447;
  t1541 = 1. + t1486;
  t1828 = Cos(var1[24]);
  t1611 = t146*t1566*t1567;
  t1797 = t1738*t1786;
  t1805 = t1611 + t1797;
  t1552 = Sin(var1[24]);
  t1884 = -1.*t1566*t1738;
  t1896 = t146*t1567*t1786;
  t1963 = t1884 + t1896;
  t372 = Cos(var1[4]);
  t568 = Sin(var1[25]);
  t1827 = -1.*t1552*t1805;
  t1970 = t1828*t1963;
  t1989 = t1827 + t1970;
  t2105 = t1828*t1805;
  t2127 = t1552*t1963;
  t2143 = t2105 + t2127;
  t796 = -0.994522*t568;
  t804 = 0. + t796;
  t2070 = -0.9890740084840001*t1541;
  t2090 = 1. + t2070;
  t2540 = t1566*t1738*t1567;
  t2638 = -1.*t146*t1786;
  t2693 = t2540 + t2638;
  t2698 = t146*t1566;
  t2708 = t1738*t1567*t1786;
  t2714 = t2698 + t2708;
  t2184 = -0.104528*t568;
  t2187 = 0. + t2184;
  t2204 = -0.010926102783999999*t1541;
  t2254 = 1. + t2204;
  t2694 = -1.*t1552*t2693;
  t2809 = t1828*t2714;
  t2810 = t2694 + t2809;
  t2819 = t1828*t2693;
  t2820 = t1552*t2714;
  t2822 = t2819 + t2820;
  t2310 = -1.0000001112680001*t1541;
  t2314 = 1. + t2310;
  t2404 = 0.104528*t568;
  t2408 = 0. + t2404;
  t2413 = 0.994522*t568;
  t2446 = 0. + t2413;
  t3045 = -1.*t372*t1566*t1552;
  t3085 = t1828*t372*t1786;
  t3088 = t3045 + t3085;
  t3141 = t1828*t372*t1566;
  t3175 = t372*t1552*t1786;
  t3216 = t3141 + t3175;
  t1001 = t146*t372*t804;
  t1997 = -0.103955395616*t1541*t1989;
  t2150 = t2090*t2143;
  t2171 = t1001 + t1997 + t2150;
  t2203 = t146*t372*t2187;
  t2260 = t2254*t1989;
  t2272 = -0.103955395616*t1541*t2143;
  t2273 = t2203 + t2260 + t2272;
  t2396 = t2314*t146*t372;
  t2411 = t2408*t1989;
  t2449 = t2446*t2143;
  t2463 = t2396 + t2411 + t2449;
  t2519 = 0.707107*t2463;
  t2535 = t372*t804*t1738;
  t2814 = -0.103955395616*t1541*t2810;
  t2823 = t2090*t2822;
  t2831 = t2535 + t2814 + t2823;
  t2866 = t372*t2187*t1738;
  t2885 = t2254*t2810;
  t2892 = -0.103955395616*t1541*t2822;
  t2901 = t2866 + t2885 + t2892;
  t2954 = t2314*t372*t1738;
  t2982 = t2408*t2810;
  t2987 = t2446*t2822;
  t2996 = t2954 + t2982 + t2987;
  t3006 = 0.707107*t2996;
  t3036 = -1.*t804*t1567;
  t3128 = -0.103955395616*t1541*t3088;
  t3236 = t2090*t3216;
  t3245 = t3036 + t3128 + t3236;
  t3275 = -1.*t2187*t1567;
  t3277 = t2254*t3088;
  t3278 = -0.103955395616*t1541*t3216;
  t3279 = t3275 + t3277 + t3278;
  t3281 = -1.*t2314*t1567;
  t3299 = t2408*t3088;
  t3316 = t2446*t3216;
  t3337 = t3281 + t3299 + t3316;
  t3338 = 0.707107*t3337;
  p_output1[0]=0.703234*t2171 + 0.073913*t2273 + t2519;
  p_output1[1]=0.703234*t2831 + 0.073913*t2901 + t3006;
  p_output1[2]=0.703234*t3245 + 0.073913*t3279 + t3338;
  p_output1[3]=-0.703234*t2171 - 0.073913*t2273 + t2519;
  p_output1[4]=-0.703234*t2831 - 0.073913*t2901 + t3006;
  p_output1[5]=-0.703234*t3245 - 0.073913*t3279 + t3338;
  p_output1[6]=-0.104528*t2171 + 0.994522*t2273;
  p_output1[7]=-0.104528*t2831 + 0.994522*t2901;
  p_output1[8]=-0.104528*t3245 + 0.994522*t3279;
}



void R_shoulder_pitch_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
