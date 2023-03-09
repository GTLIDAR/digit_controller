/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_right_hip_roll_src.h"

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
  double t53;
  double t378;
  double t1269;
  double t479;
  double t508;
  double t1280;
  double t2557;
  double t2445;
  double t2556;
  double t2593;
  double t2693;
  double t2748;
  double t2830;
  double t2886;
  double t3081;
  double t3170;
  double t3196;
  double t3476;
  double t3478;
  double t3488;
  double t3563;
  double t3577;
  double t3648;
  double t3076;
  double t3210;
  double t3213;
  double t2956;
  double t3657;
  double t4039;
  double t4104;
  double t4132;
  double t4308;
  double t4338;
  double t4370;
  double t677;
  double t1285;
  double t1648;
  double t1889;
  double t1998;
  double t2189;
  double t2734;
  double t2889;
  double t2902;
  double t2958;
  double t2994;
  double t3304;
  double t3327;
  double t3331;
  double t3520;
  double t3658;
  double t3721;
  double t3728;
  double t3731;
  double t3783;
  double t3793;
  double t3803;
  double t3821;
  double t3836;
  double t3849;
  double t3215;
  double t3960;
  double t3963;
  double t4165;
  double t4168;
  double t4215;
  double t4217;
  double t4236;
  double t4286;
  double t4374;
  double t4399;
  double t4409;
  double t4420;
  double t4426;
  double t4494;
  double t4496;
  double t4501;
  double t4519;
  double t4547;
  double t4566;
  double t4601;
  double t4603;
  double t4624;
  double t4687;
  double t4697;
  double t4711;
  double t4765;
  double t4784;
  double t4828;
  double t4840;
  double t4855;
  double t4856;
  t53 = Cos(var1[3]);
  t378 = Cos(var1[4]);
  t1269 = Cos(var1[17]);
  t479 = Cos(var1[5]);
  t508 = Sin(var1[17]);
  t1280 = Sin(var1[5]);
  t2557 = Sin(var1[3]);
  t2445 = Sin(var1[4]);
  t2556 = t53*t479*t2445;
  t2593 = t2557*t1280;
  t2693 = t2556 + t2593;
  t2748 = t479*t2557;
  t2830 = -1.*t53*t2445*t1280;
  t2886 = t2748 + t2830;
  t3081 = -1.*t479*t2557;
  t3170 = t53*t2445*t1280;
  t3196 = t3081 + t3170;
  t3476 = -1.*t479*t2557*t2445;
  t3478 = t53*t1280;
  t3488 = t3476 + t3478;
  t3563 = -1.*t53*t479;
  t3577 = -1.*t2557*t2445*t1280;
  t3648 = t3563 + t3577;
  t3076 = -1.*t508*t2693;
  t3210 = t1269*t3196;
  t3213 = t3076 + t3210;
  t2956 = t1269*t2693;
  t3657 = t1269*t3648;
  t4039 = t479*t2557*t2445;
  t4104 = -1.*t53*t1280;
  t4132 = t4039 + t4104;
  t4308 = t53*t479;
  t4338 = t2557*t2445*t1280;
  t4370 = t4308 + t4338;
  t677 = -1.*t53*t378*t479*t508;
  t1285 = t1269*t53*t378*t1280;
  t1648 = t677 + t1285;
  t1889 = t1269*t53*t378*t479;
  t1998 = t53*t378*t508*t1280;
  t2189 = t1889 + t1998;
  t2734 = t508*t2693;
  t2889 = t1269*t2886;
  t2902 = t2734 + t2889;
  t2958 = -1.*t508*t2886;
  t2994 = t2956 + t2958;
  t3304 = -1.*t1269*t2693;
  t3327 = -1.*t508*t3196;
  t3331 = t3304 + t3327;
  t3520 = -1.*t508*t3488;
  t3658 = t3520 + t3657;
  t3721 = t1269*t3488;
  t3728 = t508*t3648;
  t3731 = t3721 + t3728;
  t3783 = -1.*t378*t479*t508*t2557;
  t3793 = t1269*t378*t2557*t1280;
  t3803 = t3783 + t3793;
  t3821 = t1269*t378*t479*t2557;
  t3836 = t378*t508*t2557*t1280;
  t3849 = t3821 + t3836;
  t3215 = 0.930418*t3213;
  t3960 = t508*t3196;
  t3963 = t2956 + t3960;
  t4165 = t508*t4132;
  t4168 = t4165 + t3657;
  t4215 = t1269*t4132;
  t4217 = -1.*t508*t3648;
  t4236 = t4215 + t4217;
  t4286 = -1.*t508*t4132;
  t4374 = t1269*t4370;
  t4399 = t4286 + t4374;
  t4409 = -1.*t1269*t4132;
  t4420 = -1.*t508*t4370;
  t4426 = t4409 + t4420;
  t4494 = -1.*t378*t479*t508;
  t4496 = t1269*t378*t1280;
  t4501 = t4494 + t4496;
  t4519 = -1.*t1269*t378*t479;
  t4547 = -1.*t378*t508*t1280;
  t4566 = t4519 + t4547;
  t4601 = t378*t479*t508;
  t4603 = -1.*t1269*t378*t1280;
  t4624 = t4601 + t4603;
  t4687 = t1269*t378*t479;
  t4697 = t378*t508*t1280;
  t4711 = t4687 + t4697;
  t4765 = t479*t508*t2445;
  t4784 = -1.*t1269*t2445*t1280;
  t4828 = t4765 + t4784;
  t4840 = -1.*t1269*t479*t2445;
  t4855 = -1.*t508*t2445*t1280;
  t4856 = t4840 + t4855;
  p_output1[0]=(0.366501*t3658 + 0.930418*t3731)*var2[3] + (0.366501*t1648 + 0.930418*t2189)*var2[4] + (0.930418*t2902 + 0.366501*t2994)*var2[5] + (t3215 + 0.366501*t3331)*var2[17];
  p_output1[1]=(0.366501*t3213 + 0.930418*t3963)*var2[3] + (0.366501*t3803 + 0.930418*t3849)*var2[4] + (0.930418*t4168 + 0.366501*t4236)*var2[5] + (0.930418*t4399 + 0.366501*t4426)*var2[17];
  p_output1[2]=(0.366501*t4828 + 0.930418*t4856)*var2[4] + (0.930418*t4624 + 0.366501*t4711)*var2[5] + (0.930418*t4501 + 0.366501*t4566)*var2[17];
  p_output1[3]=(0.930418*t3658 - 0.366501*t3731)*var2[3] + (0.930418*t1648 - 0.366501*t2189)*var2[4] + (-0.366501*t2902 + 0.930418*t2994)*var2[5] + (-0.366501*t3213 + 0.930418*t3331)*var2[17];
  p_output1[4]=(t3215 - 0.366501*t3963)*var2[3] + (0.930418*t3803 - 0.366501*t3849)*var2[4] + (-0.366501*t4168 + 0.930418*t4236)*var2[5] + (-0.366501*t4399 + 0.930418*t4426)*var2[17];
  p_output1[5]=(0.930418*t4828 - 0.366501*t4856)*var2[4] + (-0.366501*t4624 + 0.930418*t4711)*var2[5] + (-0.366501*t4501 + 0.930418*t4566)*var2[17];
  p_output1[6]=t2557*t378*var2[3] + t2445*t53*var2[4];
  p_output1[7]=-1.*t378*t53*var2[3] + t2445*t2557*var2[4];
  p_output1[8]=t378*var2[4];
}



void dR_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
