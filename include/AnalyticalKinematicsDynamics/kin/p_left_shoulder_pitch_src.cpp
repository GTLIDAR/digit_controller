/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_shoulder_pitch_src.h"

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
  double t1233;
  double t590;
  double t1904;
  double t1920;
  double t2019;
  double t2384;
  double t2501;
  double t2749;
  double t2590;
  double t2759;
  double t916;
  double t929;
  double t987;
  double t2732;
  double t2870;
  double t2926;
  double t3078;
  double t3107;
  double t3124;
  double t828;
  double t4707;
  double t4710;
  double t4184;
  double t4299;
  double t4326;
  double t4736;
  double t4737;
  double t4743;
  double t3597;
  double t3632;
  double t1744;
  double t1810;
  double t1245;
  double t1503;
  double t1159;
  double t1659;
  double t1869;
  double t1895;
  double t2138;
  double t2435;
  double t2486;
  double t3006;
  double t3023;
  double t3062;
  double t3566;
  double t3592;
  double t4042;
  double t4072;
  double t5189;
  double t5191;
  double t5195;
  double t5208;
  double t5214;
  double t5217;
  double t4432;
  double t4551;
  double t4714;
  double t4724;
  double t5220;
  double t5221;
  double t5223;
  double t4939;
  double t4961;
  double t5243;
  double t5247;
  double t5248;
  double t5053;
  double t5055;
  double t5097;
  double t5100;
  double t5395;
  double t5399;
  double t5406;
  double t5414;
  double t5417;
  double t5423;
  t1233 = Sin(var1[14]);
  t590 = Cos(var1[3]);
  t1904 = Cos(var1[13]);
  t1920 = -1.*t1904;
  t2019 = 1. + t1920;
  t2384 = Sin(var1[13]);
  t2501 = Cos(var1[5]);
  t2749 = Sin(var1[3]);
  t2590 = Sin(var1[4]);
  t2759 = Sin(var1[5]);
  t916 = Cos(var1[14]);
  t929 = -1.*t916;
  t987 = 1. + t929;
  t2732 = t590*t2501*t2590;
  t2870 = t2749*t2759;
  t2926 = t2732 + t2870;
  t3078 = -1.*t2501*t2749;
  t3107 = t590*t2590*t2759;
  t3124 = t3078 + t3107;
  t828 = Cos(var1[4]);
  t4707 = 0.994522*t1233;
  t4710 = 0. + t4707;
  t4184 = -1.*t2384*t2926;
  t4299 = t1904*t3124;
  t4326 = t4184 + t4299;
  t4736 = t1904*t2926;
  t4737 = t2384*t3124;
  t4743 = t4736 + t4737;
  t3597 = -0.104528*t1233;
  t3632 = 0. + t3597;
  t1744 = 0.104528*t1233;
  t1810 = 0. + t1744;
  t1245 = -0.994522*t1233;
  t1503 = 0. + t1245;
  t1159 = -0.056500534356700764*t987;
  t1659 = 0.38315650737400003*t1503;
  t1869 = -0.040271188976*t1810;
  t1895 = 0. + t1159 + t1659 + t1869;
  t2138 = 0.4*t2019;
  t2435 = 0.12*t2384;
  t2486 = 0. + t2138 + t2435;
  t3006 = 0.12*t2019;
  t3023 = -0.4*t2384;
  t3062 = 0. + t3006 + t3023;
  t3566 = 1.1345904784751044e-7*var1[14];
  t3592 = -0.04027119345689465*t987;
  t4042 = -0.05650052807*t3632;
  t4072 = t3566 + t3592 + t4042;
  t5189 = t2501*t2749*t2590;
  t5191 = -1.*t590*t2759;
  t5195 = t5189 + t5191;
  t5208 = t590*t2501;
  t5214 = t2749*t2590*t2759;
  t5217 = t5208 + t5214;
  t4432 = 1.1924972351948546e-8*var1[14];
  t4551 = 0.38315655000705834*t987;
  t4714 = -0.05650052807*t4710;
  t4724 = t4432 + t4551 + t4714;
  t5220 = -1.*t2384*t5195;
  t5221 = t1904*t5217;
  t5223 = t5220 + t5221;
  t4939 = -0.9890740084840001*t987;
  t4961 = 1. + t4939;
  t5243 = t1904*t5195;
  t5247 = t2384*t5217;
  t5248 = t5243 + t5247;
  t5053 = -0.010926102783999999*t987;
  t5055 = 1. + t5053;
  t5097 = -1.0000001112680001*t987;
  t5100 = 1. + t5097;
  t5395 = -1.*t828*t2501*t2384;
  t5399 = t1904*t828*t2759;
  t5406 = t5395 + t5399;
  t5414 = t1904*t828*t2501;
  t5417 = t828*t2384*t2759;
  t5423 = t5414 + t5417;
  p_output1[0]=0. + t2486*t2926 + t3062*t3124 + t4072*t4326 + t4724*t4743 + t1895*t590*t828 - 0.012773*(t1810*t4326 + t1503*t4743 + t5100*t590*t828) + 0.362968*(t4743*t4961 + t4710*t590*t828 + 0.103955395616*t4326*t987) + 0.18652*(t4326*t5055 + t3632*t590*t828 + 0.103955395616*t4743*t987) + var1[0];
  p_output1[1]=0. + t2486*t5195 + t3062*t5217 + t4072*t5223 + t4724*t5248 + t1895*t2749*t828 - 0.012773*(t1810*t5223 + t1503*t5248 + t2749*t5100*t828) + 0.362968*(t4961*t5248 + t2749*t4710*t828 + 0.103955395616*t5223*t987) + 0.18652*(t5055*t5223 + t2749*t3632*t828 + 0.103955395616*t5248*t987) + var1[1];
  p_output1[2]=0. - 1.*t1895*t2590 + t4072*t5406 + t4724*t5423 - 0.012773*(-1.*t2590*t5100 + t1810*t5406 + t1503*t5423) + t2486*t2501*t828 + t2759*t3062*t828 + 0.362968*(-1.*t2590*t4710 + t4961*t5423 + 0.103955395616*t5406*t987) + 0.18652*(-1.*t2590*t3632 + t5055*t5406 + 0.103955395616*t5423*t987) + var1[2];
}



void p_left_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
