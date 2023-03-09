/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_left_shoulder_roll_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t373;
  double t391;
  double t1129;
  double t397;
  double t728;
  double t1144;
  double t1401;
  double t1339;
  double t1343;
  double t1412;
  double t1455;
  double t1497;
  double t1499;
  double t1508;
  double t1726;
  double t1736;
  double t1768;
  double t2033;
  double t2060;
  double t2089;
  double t2110;
  double t2114;
  double t2151;
  double t1708;
  double t1876;
  double t1879;
  double t1548;
  double t2152;
  double t2557;
  double t2560;
  double t2561;
  double t2812;
  double t2817;
  double t2823;
  double t1102;
  double t1158;
  double t1166;
  double t1202;
  double t1214;
  double t1260;
  double t1486;
  double t1510;
  double t1516;
  double t1569;
  double t1612;
  double t1923;
  double t1929;
  double t1936;
  double t2091;
  double t2181;
  double t2197;
  double t2199;
  double t2236;
  double t2321;
  double t2339;
  double t2346;
  double t2356;
  double t2365;
  double t2374;
  double t1909;
  double t2423;
  double t2453;
  double t2639;
  double t2645;
  double t2745;
  double t2762;
  double t2767;
  double t2783;
  double t2826;
  double t2836;
  double t2948;
  double t2986;
  double t3001;
  double t3063;
  double t3129;
  double t3143;
  double t3170;
  double t3180;
  double t3196;
  double t3222;
  double t3229;
  double t3243;
  double t3277;
  double t3292;
  double t3308;
  double t3324;
  double t3331;
  double t3339;
  double t3354;
  double t3385;
  double t3386;
  double t4039;
  double t4048;
  double t4073;
  double t4075;
  double t4097;
  double t4050;
  double t4053;
  double t4057;
  double t4253;
  double t4310;
  double t4326;
  double t4361;
  double t4372;
  t373 = Cos(var1[3]);
  t391 = Cos(var1[4]);
  t1129 = Cos(var1[13]);
  t397 = Cos(var1[5]);
  t728 = Sin(var1[13]);
  t1144 = Sin(var1[5]);
  t1401 = Sin(var1[3]);
  t1339 = Sin(var1[4]);
  t1343 = t373*t397*t1339;
  t1412 = t1401*t1144;
  t1455 = t1343 + t1412;
  t1497 = t397*t1401;
  t1499 = -1.*t373*t1339*t1144;
  t1508 = t1497 + t1499;
  t1726 = -1.*t397*t1401;
  t1736 = t373*t1339*t1144;
  t1768 = t1726 + t1736;
  t2033 = -1.*t397*t1401*t1339;
  t2060 = t373*t1144;
  t2089 = t2033 + t2060;
  t2110 = -1.*t373*t397;
  t2114 = -1.*t1401*t1339*t1144;
  t2151 = t2110 + t2114;
  t1708 = -1.*t728*t1455;
  t1876 = t1129*t1768;
  t1879 = t1708 + t1876;
  t1548 = t1129*t1455;
  t2152 = t1129*t2151;
  t2557 = t397*t1401*t1339;
  t2560 = -1.*t373*t1144;
  t2561 = t2557 + t2560;
  t2812 = t373*t397;
  t2817 = t1401*t1339*t1144;
  t2823 = t2812 + t2817;
  t1102 = -1.*t373*t391*t397*t728;
  t1158 = t1129*t373*t391*t1144;
  t1166 = t1102 + t1158;
  t1202 = t1129*t373*t391*t397;
  t1214 = t373*t391*t728*t1144;
  t1260 = t1202 + t1214;
  t1486 = t728*t1455;
  t1510 = t1129*t1508;
  t1516 = t1486 + t1510;
  t1569 = -1.*t728*t1508;
  t1612 = t1548 + t1569;
  t1923 = -1.*t1129*t1455;
  t1929 = -1.*t728*t1768;
  t1936 = t1923 + t1929;
  t2091 = -1.*t728*t2089;
  t2181 = t2091 + t2152;
  t2197 = t1129*t2089;
  t2199 = t728*t2151;
  t2236 = t2197 + t2199;
  t2321 = -1.*t391*t397*t728*t1401;
  t2339 = t1129*t391*t1401*t1144;
  t2346 = t2321 + t2339;
  t2356 = t1129*t391*t397*t1401;
  t2365 = t391*t728*t1401*t1144;
  t2374 = t2356 + t2365;
  t1909 = 0.984808*t1879;
  t2423 = t728*t1768;
  t2453 = t1548 + t2423;
  t2639 = t728*t2561;
  t2645 = t2639 + t2152;
  t2745 = t1129*t2561;
  t2762 = -1.*t728*t2151;
  t2767 = t2745 + t2762;
  t2783 = -1.*t728*t2561;
  t2826 = t1129*t2823;
  t2836 = t2783 + t2826;
  t2948 = -1.*t1129*t2561;
  t2986 = -1.*t728*t2823;
  t3001 = t2948 + t2986;
  t3063 = -1.*t391*t397*t728;
  t3129 = t1129*t391*t1144;
  t3143 = t3063 + t3129;
  t3170 = -1.*t1129*t391*t397;
  t3180 = -1.*t391*t728*t1144;
  t3196 = t3170 + t3180;
  t3222 = t391*t397*t728;
  t3229 = -1.*t1129*t391*t1144;
  t3243 = t3222 + t3229;
  t3277 = t1129*t391*t397;
  t3292 = t391*t728*t1144;
  t3308 = t3277 + t3292;
  t3324 = t397*t728*t1339;
  t3331 = -1.*t1129*t1339*t1144;
  t3339 = t3324 + t3331;
  t3354 = -1.*t1129*t397*t1339;
  t3385 = -1.*t728*t1339*t1144;
  t3386 = t3354 + t3385;
  t4039 = -1.*t1129;
  t4048 = 1. + t4039;
  t4073 = 0.12*t4048;
  t4075 = -0.4*t728;
  t4097 = 0. + t4073 + t4075;
  t4050 = 0.4*t4048;
  t4053 = 0.12*t728;
  t4057 = 0. + t4050 + t4053;
  t4253 = 0.12*t1129;
  t4310 = 0.4*t728;
  t4326 = t4253 + t4310;
  t4361 = -0.4*t1129;
  t4372 = t4361 + t4053;
  p_output1[0]=(0.173648*t2181 + 0.984808*t2236)*var2[3] + (0.173648*t1166 + 0.984808*t1260)*var2[4] + (0.984808*t1516 + 0.173648*t1612)*var2[5] + (t1909 + 0.173648*t1936)*var2[13];
  p_output1[1]=(0.173648*t1879 + 0.984808*t2453)*var2[3] + (0.173648*t2346 + 0.984808*t2374)*var2[4] + (0.984808*t2645 + 0.173648*t2767)*var2[5] + (0.984808*t2836 + 0.173648*t3001)*var2[13];
  p_output1[2]=(0.173648*t3339 + 0.984808*t3386)*var2[4] + (0.984808*t3243 + 0.173648*t3308)*var2[5] + (0.984808*t3143 + 0.173648*t3196)*var2[13];
  p_output1[3]=0;
  p_output1[4]=(0.984808*t2181 - 0.173648*t2236)*var2[3] + (0.984808*t1166 - 0.173648*t1260)*var2[4] + (-0.173648*t1516 + 0.984808*t1612)*var2[5] + (-0.173648*t1879 + 0.984808*t1936)*var2[13];
  p_output1[5]=(t1909 - 0.173648*t2453)*var2[3] + (0.984808*t2346 - 0.173648*t2374)*var2[4] + (-0.173648*t2645 + 0.984808*t2767)*var2[5] + (-0.173648*t2836 + 0.984808*t3001)*var2[13];
  p_output1[6]=(0.984808*t3339 - 0.173648*t3386)*var2[4] + (-0.173648*t3243 + 0.984808*t3308)*var2[5] + (-0.173648*t3143 + 0.984808*t3196)*var2[13];
  p_output1[7]=0;
  p_output1[8]=t1401*t391*var2[3] + t1339*t373*var2[4];
  p_output1[9]=-1.*t373*t391*var2[3] + t1339*t1401*var2[4];
  p_output1[10]=t391*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.11689*t2181 + 0.400559*t2236 + 0.02441*t1401*t391 + t2089*t4057 + t2151*t4097)*var2[3] + (0.11689*t1166 + 0.400559*t1260 + 0.02441*t1339*t373 + t373*t391*t397*t4057 + t1144*t373*t391*t4097)*var2[4] + (0.400559*t1516 + 0.11689*t1612 + t1508*t4057 + t1455*t4097)*var2[5] + (0.400559*t1879 + 0.11689*t1936 + t1455*t4326 + t1768*t4372)*var2[13];
  p_output1[13]=var2[1] + (0.11689*t1879 + 0.400559*t2453 - 0.02441*t373*t391 + t1455*t4057 + t1768*t4097)*var2[3] + (0.02441*t1339*t1401 + 0.11689*t2346 + 0.400559*t2374 + t1401*t391*t397*t4057 + t1144*t1401*t391*t4097)*var2[4] + (0.400559*t2645 + 0.11689*t2767 + t2151*t4057 + t2561*t4097)*var2[5] + (0.400559*t2836 + 0.11689*t3001 + t2561*t4326 + t2823*t4372)*var2[13];
  p_output1[14]=var2[2] + (0.11689*t3339 + 0.400559*t3386 + 0.02441*t391 - 1.*t1339*t397*t4057 - 1.*t1144*t1339*t4097)*var2[4] + (0.400559*t3243 + 0.11689*t3308 - 1.*t1144*t391*t4057 + t391*t397*t4097)*var2[5] + (0.400559*t3143 + 0.11689*t3196 + t391*t397*t4326 + t1144*t391*t4372)*var2[13];
  p_output1[15]=0;
}



void dT_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
