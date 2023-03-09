/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_shoulder_pitch_joint_left_src.h"

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
  double t1616;
  double t686;
  double t2666;
  double t2711;
  double t2786;
  double t2796;
  double t3317;
  double t3358;
  double t3353;
  double t3438;
  double t1067;
  double t1249;
  double t1264;
  double t3356;
  double t3449;
  double t3452;
  double t3640;
  double t3676;
  double t3742;
  double t1024;
  double t3998;
  double t4000;
  double t3954;
  double t3958;
  double t3968;
  double t4034;
  double t4041;
  double t4042;
  double t3923;
  double t3936;
  double t2083;
  double t2167;
  double t1664;
  double t1784;
  double t1481;
  double t1813;
  double t2231;
  double t2546;
  double t2787;
  double t2838;
  double t3283;
  double t3551;
  double t3552;
  double t3598;
  double t3911;
  double t3913;
  double t3943;
  double t3948;
  double t4284;
  double t4285;
  double t4300;
  double t4303;
  double t4304;
  double t4306;
  double t3984;
  double t3997;
  double t4001;
  double t4028;
  double t4311;
  double t4312;
  double t4314;
  double t4089;
  double t4099;
  double t4323;
  double t4330;
  double t4332;
  double t4145;
  double t4168;
  double t4220;
  double t4226;
  double t4394;
  double t4404;
  double t4407;
  double t4416;
  double t4417;
  double t4419;
  t1616 = Sin(var1[14]);
  t686 = Cos(var1[3]);
  t2666 = Cos(var1[13]);
  t2711 = -1.*t2666;
  t2786 = 1. + t2711;
  t2796 = Sin(var1[13]);
  t3317 = Cos(var1[5]);
  t3358 = Sin(var1[3]);
  t3353 = Sin(var1[4]);
  t3438 = Sin(var1[5]);
  t1067 = Cos(var1[14]);
  t1249 = -1.*t1067;
  t1264 = 1. + t1249;
  t3356 = t686*t3317*t3353;
  t3449 = t3358*t3438;
  t3452 = t3356 + t3449;
  t3640 = -1.*t3317*t3358;
  t3676 = t686*t3353*t3438;
  t3742 = t3640 + t3676;
  t1024 = Cos(var1[4]);
  t3998 = 0.994522*t1616;
  t4000 = 0. + t3998;
  t3954 = -1.*t2796*t3452;
  t3958 = t2666*t3742;
  t3968 = t3954 + t3958;
  t4034 = t2666*t3452;
  t4041 = t2796*t3742;
  t4042 = t4034 + t4041;
  t3923 = -0.104528*t1616;
  t3936 = 0. + t3923;
  t2083 = 0.104528*t1616;
  t2167 = 0. + t2083;
  t1664 = -0.994522*t1616;
  t1784 = 0. + t1664;
  t1481 = -0.056500534356700764*t1264;
  t1813 = 0.38315650737400003*t1784;
  t2231 = -0.040271188976*t2167;
  t2546 = 0. + t1481 + t1813 + t2231;
  t2787 = 0.4*t2786;
  t2838 = 0.12*t2796;
  t3283 = 0. + t2787 + t2838;
  t3551 = 0.12*t2786;
  t3552 = -0.4*t2796;
  t3598 = 0. + t3551 + t3552;
  t3911 = 1.1345904784751044e-7*var1[14];
  t3913 = -0.04027119345689465*t1264;
  t3943 = -0.05650052807*t3936;
  t3948 = t3911 + t3913 + t3943;
  t4284 = t3317*t3358*t3353;
  t4285 = -1.*t686*t3438;
  t4300 = t4284 + t4285;
  t4303 = t686*t3317;
  t4304 = t3358*t3353*t3438;
  t4306 = t4303 + t4304;
  t3984 = 1.1924972351948546e-8*var1[14];
  t3997 = 0.38315655000705834*t1264;
  t4001 = -0.05650052807*t4000;
  t4028 = t3984 + t3997 + t4001;
  t4311 = -1.*t2796*t4300;
  t4312 = t2666*t4306;
  t4314 = t4311 + t4312;
  t4089 = -0.9890740084840001*t1264;
  t4099 = 1. + t4089;
  t4323 = t2666*t4300;
  t4330 = t2796*t4306;
  t4332 = t4323 + t4330;
  t4145 = -0.010926102783999999*t1264;
  t4168 = 1. + t4145;
  t4220 = -1.0000001112680001*t1264;
  t4226 = 1. + t4220;
  t4394 = -1.*t1024*t3317*t2796;
  t4404 = t2666*t1024*t3438;
  t4407 = t4394 + t4404;
  t4416 = t2666*t1024*t3317;
  t4417 = t1024*t2796*t3438;
  t4419 = t4416 + t4417;
  p_output1[0]=0. + t3283*t3452 + t3598*t3742 + t3948*t3968 + t4028*t4042 + t1024*t2546*t686 + 0.108558*(0.103955395616*t1264*t4042 + t3968*t4168 + t1024*t3936*t686) + 0.398799*(0.103955395616*t1264*t3968 + t4042*t4099 + t1024*t4000*t686) - 0.0565*(t2167*t3968 + t1784*t4042 + t1024*t4226*t686) + var1[0];
  p_output1[1]=0. + t1024*t2546*t3358 + t3283*t4300 + t3598*t4306 + t3948*t4314 + t4028*t4332 + 0.108558*(t1024*t3358*t3936 + t4168*t4314 + 0.103955395616*t1264*t4332) - 0.0565*(t1024*t3358*t4226 + t2167*t4314 + t1784*t4332) + 0.398799*(t1024*t3358*t4000 + 0.103955395616*t1264*t4314 + t4099*t4332) + var1[1];
  p_output1[2]=0. + t1024*t3283*t3317 - 1.*t2546*t3353 + t1024*t3438*t3598 + t3948*t4407 + t4028*t4419 + 0.108558*(-1.*t3353*t3936 + t4168*t4407 + 0.103955395616*t1264*t4419) - 0.0565*(-1.*t3353*t4226 + t2167*t4407 + t1784*t4419) + 0.398799*(-1.*t3353*t4000 + 0.103955395616*t1264*t4407 + t4099*t4419) + var1[2];
}



void p_shoulder_pitch_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
