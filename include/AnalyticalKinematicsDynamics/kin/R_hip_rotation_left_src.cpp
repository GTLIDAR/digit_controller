/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_left_src.h"

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
  double t1002;
  double t3342;
  double t3373;
  double t3356;
  double t3385;
  double t3314;
  double t3399;
  double t3400;
  double t3401;
  double t3364;
  double t3394;
  double t3396;
  double t3404;
  double t3422;
  double t1083;
  double t3229;
  double t3234;
  double t3297;
  double t3298;
  double t3302;
  double t3429;
  double t3431;
  double t3479;
  double t3480;
  double t3484;
  double t3471;
  double t3475;
  double t3476;
  double t3457;
  double t3458;
  double t3398;
  double t3406;
  double t3407;
  double t3436;
  double t3438;
  double t3440;
  double t3478;
  double t3485;
  double t3489;
  double t3530;
  double t3532;
  double t3494;
  double t3495;
  double t3501;
  double t3534;
  double t3537;
  double t3542;
  double t3545;
  double t3550;
  double t3551;
  double t3508;
  double t3510;
  double t3511;
  double t3516;
  double t3519;
  double t3520;
  double t3524;
  double t3533;
  double t3538;
  double t3539;
  double t3546;
  double t3547;
  double t3552;
  double t3553;
  double t3556;
  double t3557;
  double t3558;
  double t3559;
  double t3561;
  double t3562;
  double t3563;
  double t3564;
  double t3568;
  double t3569;
  double t3573;
  double t3574;
  double t3576;
  double t3577;
  double t3580;
  double t3581;
  t1002 = Cos(var1[3]);
  t3342 = Cos(var1[5]);
  t3373 = Sin(var1[4]);
  t3356 = Sin(var1[3]);
  t3385 = Sin(var1[5]);
  t3314 = Cos(var1[6]);
  t3399 = t1002*t3342*t3373;
  t3400 = t3356*t3385;
  t3401 = t3399 + t3400;
  t3364 = -1.*t3342*t3356;
  t3394 = t1002*t3373*t3385;
  t3396 = t3364 + t3394;
  t3404 = Sin(var1[6]);
  t3422 = Sin(var1[7]);
  t1083 = Cos(var1[4]);
  t3229 = Cos(var1[7]);
  t3234 = -1.*t3229;
  t3297 = 1. + t3234;
  t3298 = -1.000000637725*t3297;
  t3302 = 1. + t3298;
  t3429 = -0.930418*t3422;
  t3431 = 0. + t3429;
  t3479 = t3342*t3356*t3373;
  t3480 = -1.*t1002*t3385;
  t3484 = t3479 + t3480;
  t3471 = t1002*t3342;
  t3475 = t3356*t3373*t3385;
  t3476 = t3471 + t3475;
  t3457 = -0.366501*t3422;
  t3458 = 0. + t3457;
  t3398 = t3314*t3396;
  t3406 = -1.*t3401*t3404;
  t3407 = t3398 + t3406;
  t3436 = t3314*t3401;
  t3438 = t3396*t3404;
  t3440 = t3436 + t3438;
  t3478 = t3314*t3476;
  t3485 = -1.*t3484*t3404;
  t3489 = t3478 + t3485;
  t3530 = -0.134322983001*t3297;
  t3532 = 1. + t3530;
  t3494 = t3314*t3484;
  t3495 = t3476*t3404;
  t3501 = t3494 + t3495;
  t3534 = 0.366501*t3422;
  t3537 = 0. + t3534;
  t3542 = -0.8656776547239999*t3297;
  t3545 = 1. + t3542;
  t3550 = 0.930418*t3422;
  t3551 = 0. + t3550;
  t3508 = t1083*t3314*t3385;
  t3510 = -1.*t1083*t3342*t3404;
  t3511 = t3508 + t3510;
  t3516 = t1083*t3342*t3314;
  t3519 = t1083*t3385*t3404;
  t3520 = t3516 + t3519;
  t3524 = -0.340999127418*t3297*t3407;
  t3533 = t3532*t3440;
  t3538 = t1002*t1083*t3537;
  t3539 = t3524 + t3533 + t3538;
  t3546 = t3545*t3407;
  t3547 = -0.340999127418*t3297*t3440;
  t3552 = t1002*t1083*t3551;
  t3553 = t3546 + t3547 + t3552;
  t3556 = -0.340999127418*t3297*t3489;
  t3557 = t3532*t3501;
  t3558 = t1083*t3356*t3537;
  t3559 = t3556 + t3557 + t3558;
  t3561 = t3545*t3489;
  t3562 = -0.340999127418*t3297*t3501;
  t3563 = t1083*t3356*t3551;
  t3564 = t3561 + t3562 + t3563;
  t3568 = -0.340999127418*t3297*t3511;
  t3569 = t3532*t3520;
  t3573 = -1.*t3373*t3537;
  t3574 = t3568 + t3569 + t3573;
  t3576 = t3545*t3511;
  t3577 = -0.340999127418*t3297*t3520;
  t3580 = -1.*t3373*t3551;
  t3581 = t3576 + t3577 + t3580;
  p_output1[0]=-1.*t1002*t1083*t3302 - 1.*t3407*t3431 - 1.*t3440*t3458;
  p_output1[1]=-1.*t1083*t3302*t3356 - 1.*t3431*t3489 - 1.*t3458*t3501;
  p_output1[2]=t3302*t3373 - 1.*t3431*t3511 - 1.*t3458*t3520;
  p_output1[3]=0.366501*t3539 + 0.930418*t3553;
  p_output1[4]=0.366501*t3559 + 0.930418*t3564;
  p_output1[5]=0.366501*t3574 + 0.930418*t3581;
  p_output1[6]=-0.930418*t3539 + 0.366501*t3553;
  p_output1[7]=-0.930418*t3559 + 0.366501*t3564;
  p_output1[8]=-0.930418*t3574 + 0.366501*t3581;
}



void R_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
