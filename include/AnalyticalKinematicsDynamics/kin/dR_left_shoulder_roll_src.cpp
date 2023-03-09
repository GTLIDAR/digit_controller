/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_left_shoulder_roll_src.h"

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
  double t85;
  double t169;
  double t1664;
  double t172;
  double t1360;
  double t1772;
  double t2365;
  double t2344;
  double t2349;
  double t2382;
  double t2400;
  double t2439;
  double t2443;
  double t2457;
  double t2913;
  double t3005;
  double t3012;
  double t3251;
  double t3277;
  double t3292;
  double t3303;
  double t3322;
  double t3324;
  double t2826;
  double t3013;
  double t3040;
  double t2597;
  double t3339;
  double t3655;
  double t3658;
  double t3700;
  double t3935;
  double t3937;
  double t3940;
  double t1490;
  double t1867;
  double t1936;
  double t1958;
  double t1968;
  double t1988;
  double t2429;
  double t2483;
  double t2488;
  double t2639;
  double t2645;
  double t3053;
  double t3129;
  double t3212;
  double t3294;
  double t3347;
  double t3392;
  double t3394;
  double t3395;
  double t3426;
  double t3431;
  double t3436;
  double t3469;
  double t3484;
  double t3496;
  double t3050;
  double t3528;
  double t3535;
  double t3706;
  double t3735;
  double t3751;
  double t3754;
  double t3765;
  double t3918;
  double t3948;
  double t3955;
  double t3960;
  double t3972;
  double t3979;
  double t4046;
  double t4053;
  double t4063;
  double t4075;
  double t4127;
  double t4132;
  double t4154;
  double t4171;
  double t4178;
  double t4227;
  double t4230;
  double t4236;
  double t4361;
  double t4374;
  double t4382;
  double t4425;
  double t4433;
  double t4448;
  t85 = Cos(var1[3]);
  t169 = Cos(var1[4]);
  t1664 = Cos(var1[13]);
  t172 = Cos(var1[5]);
  t1360 = Sin(var1[13]);
  t1772 = Sin(var1[5]);
  t2365 = Sin(var1[3]);
  t2344 = Sin(var1[4]);
  t2349 = t85*t172*t2344;
  t2382 = t2365*t1772;
  t2400 = t2349 + t2382;
  t2439 = t172*t2365;
  t2443 = -1.*t85*t2344*t1772;
  t2457 = t2439 + t2443;
  t2913 = -1.*t172*t2365;
  t3005 = t85*t2344*t1772;
  t3012 = t2913 + t3005;
  t3251 = -1.*t172*t2365*t2344;
  t3277 = t85*t1772;
  t3292 = t3251 + t3277;
  t3303 = -1.*t85*t172;
  t3322 = -1.*t2365*t2344*t1772;
  t3324 = t3303 + t3322;
  t2826 = -1.*t1360*t2400;
  t3013 = t1664*t3012;
  t3040 = t2826 + t3013;
  t2597 = t1664*t2400;
  t3339 = t1664*t3324;
  t3655 = t172*t2365*t2344;
  t3658 = -1.*t85*t1772;
  t3700 = t3655 + t3658;
  t3935 = t85*t172;
  t3937 = t2365*t2344*t1772;
  t3940 = t3935 + t3937;
  t1490 = -1.*t85*t169*t172*t1360;
  t1867 = t1664*t85*t169*t1772;
  t1936 = t1490 + t1867;
  t1958 = t1664*t85*t169*t172;
  t1968 = t85*t169*t1360*t1772;
  t1988 = t1958 + t1968;
  t2429 = t1360*t2400;
  t2483 = t1664*t2457;
  t2488 = t2429 + t2483;
  t2639 = -1.*t1360*t2457;
  t2645 = t2597 + t2639;
  t3053 = -1.*t1664*t2400;
  t3129 = -1.*t1360*t3012;
  t3212 = t3053 + t3129;
  t3294 = -1.*t1360*t3292;
  t3347 = t3294 + t3339;
  t3392 = t1664*t3292;
  t3394 = t1360*t3324;
  t3395 = t3392 + t3394;
  t3426 = -1.*t169*t172*t1360*t2365;
  t3431 = t1664*t169*t2365*t1772;
  t3436 = t3426 + t3431;
  t3469 = t1664*t169*t172*t2365;
  t3484 = t169*t1360*t2365*t1772;
  t3496 = t3469 + t3484;
  t3050 = 0.984808*t3040;
  t3528 = t1360*t3012;
  t3535 = t2597 + t3528;
  t3706 = t1360*t3700;
  t3735 = t3706 + t3339;
  t3751 = t1664*t3700;
  t3754 = -1.*t1360*t3324;
  t3765 = t3751 + t3754;
  t3918 = -1.*t1360*t3700;
  t3948 = t1664*t3940;
  t3955 = t3918 + t3948;
  t3960 = -1.*t1664*t3700;
  t3972 = -1.*t1360*t3940;
  t3979 = t3960 + t3972;
  t4046 = -1.*t169*t172*t1360;
  t4053 = t1664*t169*t1772;
  t4063 = t4046 + t4053;
  t4075 = -1.*t1664*t169*t172;
  t4127 = -1.*t169*t1360*t1772;
  t4132 = t4075 + t4127;
  t4154 = t169*t172*t1360;
  t4171 = -1.*t1664*t169*t1772;
  t4178 = t4154 + t4171;
  t4227 = t1664*t169*t172;
  t4230 = t169*t1360*t1772;
  t4236 = t4227 + t4230;
  t4361 = t172*t1360*t2344;
  t4374 = -1.*t1664*t2344*t1772;
  t4382 = t4361 + t4374;
  t4425 = -1.*t1664*t172*t2344;
  t4433 = -1.*t1360*t2344*t1772;
  t4448 = t4425 + t4433;
  p_output1[0]=(0.173648*t3347 + 0.984808*t3395)*var2[3] + (0.173648*t1936 + 0.984808*t1988)*var2[4] + (0.984808*t2488 + 0.173648*t2645)*var2[5] + (t3050 + 0.173648*t3212)*var2[13];
  p_output1[1]=(0.173648*t3040 + 0.984808*t3535)*var2[3] + (0.173648*t3436 + 0.984808*t3496)*var2[4] + (0.984808*t3735 + 0.173648*t3765)*var2[5] + (0.984808*t3955 + 0.173648*t3979)*var2[13];
  p_output1[2]=(0.173648*t4382 + 0.984808*t4448)*var2[4] + (0.984808*t4178 + 0.173648*t4236)*var2[5] + (0.984808*t4063 + 0.173648*t4132)*var2[13];
  p_output1[3]=(0.984808*t3347 - 0.173648*t3395)*var2[3] + (0.984808*t1936 - 0.173648*t1988)*var2[4] + (-0.173648*t2488 + 0.984808*t2645)*var2[5] + (-0.173648*t3040 + 0.984808*t3212)*var2[13];
  p_output1[4]=(t3050 - 0.173648*t3535)*var2[3] + (0.984808*t3436 - 0.173648*t3496)*var2[4] + (-0.173648*t3735 + 0.984808*t3765)*var2[5] + (-0.173648*t3955 + 0.984808*t3979)*var2[13];
  p_output1[5]=(0.984808*t4382 - 0.173648*t4448)*var2[4] + (-0.173648*t4178 + 0.984808*t4236)*var2[5] + (-0.173648*t4063 + 0.984808*t4132)*var2[13];
  p_output1[6]=t169*t2365*var2[3] + t2344*t85*var2[4];
  p_output1[7]=-1.*t169*t85*var2[3] + t2344*t2365*var2[4];
  p_output1[8]=t169*var2[4];
}



void dR_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
