/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_shoulder_pitch_src.h"

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
  double t1104;
  double t14;
  double t2327;
  double t2425;
  double t2488;
  double t2672;
  double t3192;
  double t3349;
  double t3203;
  double t3522;
  double t404;
  double t918;
  double t966;
  double t3213;
  double t3566;
  double t3751;
  double t4168;
  double t4274;
  double t4513;
  double t182;
  double t5103;
  double t5105;
  double t4821;
  double t4836;
  double t4839;
  double t5224;
  double t5234;
  double t5243;
  double t4690;
  double t4706;
  double t1210;
  double t1485;
  double t1678;
  double t1679;
  double t1094;
  double t1608;
  double t1687;
  double t1734;
  double t2582;
  double t2770;
  double t3052;
  double t3868;
  double t3911;
  double t4166;
  double t4570;
  double t4594;
  double t4716;
  double t4724;
  double t5489;
  double t5491;
  double t5507;
  double t5519;
  double t5522;
  double t5524;
  double t5045;
  double t5080;
  double t5150;
  double t5171;
  double t5531;
  double t5536;
  double t5542;
  double t5292;
  double t5295;
  double t5550;
  double t5572;
  double t5573;
  double t5348;
  double t5352;
  double t5405;
  double t5409;
  double t5695;
  double t5696;
  double t5710;
  double t5720;
  double t5732;
  double t5739;
  t1104 = Sin(var1[25]);
  t14 = Cos(var1[3]);
  t2327 = Cos(var1[24]);
  t2425 = -1.*t2327;
  t2488 = 1. + t2425;
  t2672 = Sin(var1[24]);
  t3192 = Cos(var1[5]);
  t3349 = Sin(var1[3]);
  t3203 = Sin(var1[4]);
  t3522 = Sin(var1[5]);
  t404 = Cos(var1[25]);
  t918 = -1.*t404;
  t966 = 1. + t918;
  t3213 = t14*t3192*t3203;
  t3566 = t3349*t3522;
  t3751 = t3213 + t3566;
  t4168 = -1.*t3192*t3349;
  t4274 = t14*t3203*t3522;
  t4513 = t4168 + t4274;
  t182 = Cos(var1[4]);
  t5103 = -0.994522*t1104;
  t5105 = 0. + t5103;
  t4821 = -1.*t2672*t3751;
  t4836 = t2327*t4513;
  t4839 = t4821 + t4836;
  t5224 = t2327*t3751;
  t5234 = t2672*t4513;
  t5243 = t5224 + t5234;
  t4690 = -0.104528*t1104;
  t4706 = 0. + t4690;
  t1210 = 0.104528*t1104;
  t1485 = 0. + t1210;
  t1678 = 0.994522*t1104;
  t1679 = 0. + t1678;
  t1094 = -0.056500534356700764*t966;
  t1608 = 0.040271188976*t1485;
  t1687 = 0.38315650737400003*t1679;
  t1734 = 0. + t1094 + t1608 + t1687;
  t2582 = 0.4*t2488;
  t2770 = -0.12*t2672;
  t3052 = 0. + t2582 + t2770;
  t3868 = -0.12*t2488;
  t3911 = -0.4*t2672;
  t4166 = 0. + t3868 + t3911;
  t4570 = 1.1345904784751044e-7*var1[25];
  t4594 = 0.04027119345689465*t966;
  t4716 = -0.05650052807*t4706;
  t4724 = t4570 + t4594 + t4716;
  t5489 = t3192*t3349*t3203;
  t5491 = -1.*t14*t3522;
  t5507 = t5489 + t5491;
  t5519 = t14*t3192;
  t5522 = t3349*t3203*t3522;
  t5524 = t5519 + t5522;
  t5045 = -1.1924972351948546e-8*var1[25];
  t5080 = 0.38315655000705834*t966;
  t5150 = -0.05650052807*t5105;
  t5171 = t5045 + t5080 + t5150;
  t5531 = -1.*t2672*t5507;
  t5536 = t2327*t5524;
  t5542 = t5531 + t5536;
  t5292 = -0.9890740084840001*t966;
  t5295 = 1. + t5292;
  t5550 = t2327*t5507;
  t5572 = t2672*t5524;
  t5573 = t5550 + t5572;
  t5348 = -0.010926102783999999*t966;
  t5352 = 1. + t5348;
  t5405 = -1.0000001112680001*t966;
  t5409 = 1. + t5405;
  t5695 = -1.*t182*t3192*t2672;
  t5696 = t2327*t182*t3522;
  t5710 = t5695 + t5696;
  t5720 = t2327*t182*t3192;
  t5732 = t182*t2672*t3522;
  t5739 = t5720 + t5732;
  p_output1[0]=0. + t14*t1734*t182 + t3052*t3751 + t4166*t4513 + t4724*t4839 + t5171*t5243 - 0.012773*(t1485*t4839 + t1679*t5243 + t14*t182*t5409) + 0.362968*(t14*t182*t5105 + t5243*t5295 - 0.103955395616*t4839*t966) - 0.18652*(t14*t182*t4706 + t4839*t5352 - 0.103955395616*t5243*t966) + var1[0];
  p_output1[1]=0. + t1734*t182*t3349 + t3052*t5507 + t4166*t5524 + t4724*t5542 + t5171*t5573 - 0.012773*(t182*t3349*t5409 + t1485*t5542 + t1679*t5573) + 0.362968*(t182*t3349*t5105 + t5295*t5573 - 0.103955395616*t5542*t966) - 0.18652*(t182*t3349*t4706 + t5352*t5542 - 0.103955395616*t5573*t966) + var1[1];
  p_output1[2]=0. + t182*t3052*t3192 - 1.*t1734*t3203 + t182*t3522*t4166 + t4724*t5710 + t5171*t5739 - 0.012773*(-1.*t3203*t5409 + t1485*t5710 + t1679*t5739) + 0.362968*(-1.*t3203*t5105 + t5295*t5739 - 0.103955395616*t5710*t966) - 0.18652*(-1.*t3203*t4706 + t5352*t5710 - 0.103955395616*t5739*t966) + var1[2];
}



void p_right_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
