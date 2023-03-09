/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_left_src.h"

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
  double t347;
  double t381;
  double t384;
  double t382;
  double t385;
  double t372;
  double t383;
  double t386;
  double t387;
  double t389;
  double t390;
  double t391;
  double t393;
  double t359;
  double t374;
  double t376;
  double t377;
  double t378;
  double t394;
  double t397;
  double t405;
  double t406;
  double t407;
  double t409;
  double t410;
  double t411;
  t347 = Cos(var1[3]);
  t381 = Cos(var1[5]);
  t384 = Sin(var1[4]);
  t382 = Sin(var1[3]);
  t385 = Sin(var1[5]);
  t372 = Cos(var1[6]);
  t383 = -1.*t381*t382;
  t386 = t347*t384*t385;
  t387 = t383 + t386;
  t389 = t347*t381*t384;
  t390 = t382*t385;
  t391 = t389 + t390;
  t393 = Sin(var1[6]);
  t359 = Cos(var1[4]);
  t374 = -1.*t372;
  t376 = 1. + t374;
  t377 = 0.091*t376;
  t378 = 0. + t377;
  t394 = 0.091*t393;
  t397 = 0. + t394;
  t405 = t347*t381;
  t406 = t382*t384*t385;
  t407 = t405 + t406;
  t409 = t381*t382*t384;
  t410 = -1.*t347*t385;
  t411 = t409 + t410;
  p_output1[0]=0. - 0.001*t347*t359 + t378*t387 + 0.091*(t372*t387 - 1.*t391*t393) + t391*t397 + var1[0];
  p_output1[1]=0. - 0.001*t359*t382 + t378*t407 + t397*t411 + 0.091*(t372*t407 - 1.*t393*t411) + var1[1];
  p_output1[2]=0. + 0.001*t384 + t359*t378*t385 + 0.091*(t359*t372*t385 - 1.*t359*t381*t393) + t359*t381*t397 + var1[2];
}



void p_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
