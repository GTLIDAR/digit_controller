/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_hip_abduction_right_src.h"

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
  double t406;
  double t713;
  double t1625;
  double t756;
  double t892;
  double t1701;
  double t2297;
  double t2147;
  double t2212;
  double t2322;
  double t2343;
  double t2353;
  double t2541;
  double t2547;
  double t3449;
  double t3452;
  double t3471;
  double t3625;
  double t3642;
  double t3708;
  double t3732;
  double t3773;
  double t3797;
  double t3442;
  double t3515;
  double t3518;
  double t3009;
  double t3837;
  double t4167;
  double t4179;
  double t4183;
  double t4369;
  double t4379;
  double t4386;
  double t1621;
  double t1714;
  double t1772;
  double t1836;
  double t1856;
  double t1929;
  double t2344;
  double t2597;
  double t2632;
  double t3018;
  double t3087;
  double t3552;
  double t3557;
  double t3559;
  double t3709;
  double t3862;
  double t3884;
  double t3889;
  double t3933;
  double t3983;
  double t3984;
  double t4012;
  double t4034;
  double t4052;
  double t4070;
  double t3524;
  double t4123;
  double t4136;
  double t4219;
  double t4259;
  double t4280;
  double t4281;
  double t4326;
  double t4350;
  double t4416;
  double t4438;
  double t4446;
  double t4450;
  double t4454;
  double t4485;
  double t4487;
  double t4497;
  double t4523;
  double t4524;
  double t4531;
  double t4543;
  double t4550;
  double t4552;
  double t4573;
  double t4578;
  double t4600;
  double t4615;
  double t4628;
  double t4630;
  double t4655;
  double t4661;
  double t4662;
  t406 = Cos(var1[3]);
  t713 = Cos(var1[4]);
  t1625 = Cos(var1[17]);
  t756 = Cos(var1[5]);
  t892 = Sin(var1[17]);
  t1701 = Sin(var1[5]);
  t2297 = Sin(var1[3]);
  t2147 = Sin(var1[4]);
  t2212 = t406*t756*t2147;
  t2322 = t2297*t1701;
  t2343 = t2212 + t2322;
  t2353 = t756*t2297;
  t2541 = -1.*t406*t2147*t1701;
  t2547 = t2353 + t2541;
  t3449 = -1.*t756*t2297;
  t3452 = t406*t2147*t1701;
  t3471 = t3449 + t3452;
  t3625 = -1.*t756*t2297*t2147;
  t3642 = t406*t1701;
  t3708 = t3625 + t3642;
  t3732 = -1.*t406*t756;
  t3773 = -1.*t2297*t2147*t1701;
  t3797 = t3732 + t3773;
  t3442 = -1.*t892*t2343;
  t3515 = t1625*t3471;
  t3518 = t3442 + t3515;
  t3009 = t1625*t2343;
  t3837 = t1625*t3797;
  t4167 = t756*t2297*t2147;
  t4179 = -1.*t406*t1701;
  t4183 = t4167 + t4179;
  t4369 = t406*t756;
  t4379 = t2297*t2147*t1701;
  t4386 = t4369 + t4379;
  t1621 = -1.*t406*t713*t756*t892;
  t1714 = t1625*t406*t713*t1701;
  t1772 = t1621 + t1714;
  t1836 = t1625*t406*t713*t756;
  t1856 = t406*t713*t892*t1701;
  t1929 = t1836 + t1856;
  t2344 = t892*t2343;
  t2597 = t1625*t2547;
  t2632 = t2344 + t2597;
  t3018 = -1.*t892*t2547;
  t3087 = t3009 + t3018;
  t3552 = -1.*t1625*t2343;
  t3557 = -1.*t892*t3471;
  t3559 = t3552 + t3557;
  t3709 = -1.*t892*t3708;
  t3862 = t3709 + t3837;
  t3884 = t1625*t3708;
  t3889 = t892*t3797;
  t3933 = t3884 + t3889;
  t3983 = -1.*t713*t756*t892*t2297;
  t3984 = t1625*t713*t2297*t1701;
  t4012 = t3983 + t3984;
  t4034 = t1625*t713*t756*t2297;
  t4052 = t713*t892*t2297*t1701;
  t4070 = t4034 + t4052;
  t3524 = 0.930418*t3518;
  t4123 = t892*t3471;
  t4136 = t3009 + t4123;
  t4219 = t892*t4183;
  t4259 = t4219 + t3837;
  t4280 = t1625*t4183;
  t4281 = -1.*t892*t3797;
  t4326 = t4280 + t4281;
  t4350 = -1.*t892*t4183;
  t4416 = t1625*t4386;
  t4438 = t4350 + t4416;
  t4446 = -1.*t1625*t4183;
  t4450 = -1.*t892*t4386;
  t4454 = t4446 + t4450;
  t4485 = -1.*t713*t756*t892;
  t4487 = t1625*t713*t1701;
  t4497 = t4485 + t4487;
  t4523 = -1.*t1625*t713*t756;
  t4524 = -1.*t713*t892*t1701;
  t4531 = t4523 + t4524;
  t4543 = t713*t756*t892;
  t4550 = -1.*t1625*t713*t1701;
  t4552 = t4543 + t4550;
  t4573 = t1625*t713*t756;
  t4578 = t713*t892*t1701;
  t4600 = t4573 + t4578;
  t4615 = t756*t892*t2147;
  t4628 = -1.*t1625*t2147*t1701;
  t4630 = t4615 + t4628;
  t4655 = -1.*t1625*t756*t2147;
  t4661 = -1.*t892*t2147*t1701;
  t4662 = t4655 + t4661;
  p_output1[0]=(0.366501*t3862 + 0.930418*t3933)*var2[3] + (0.366501*t1772 + 0.930418*t1929)*var2[4] + (0.930418*t2632 + 0.366501*t3087)*var2[5] + (t3524 + 0.366501*t3559)*var2[17];
  p_output1[1]=(0.366501*t3518 + 0.930418*t4136)*var2[3] + (0.366501*t4012 + 0.930418*t4070)*var2[4] + (0.930418*t4259 + 0.366501*t4326)*var2[5] + (0.930418*t4438 + 0.366501*t4454)*var2[17];
  p_output1[2]=(0.366501*t4630 + 0.930418*t4662)*var2[4] + (0.930418*t4552 + 0.366501*t4600)*var2[5] + (0.930418*t4497 + 0.366501*t4531)*var2[17];
  p_output1[3]=(0.930418*t3862 - 0.366501*t3933)*var2[3] + (0.930418*t1772 - 0.366501*t1929)*var2[4] + (-0.366501*t2632 + 0.930418*t3087)*var2[5] + (-0.366501*t3518 + 0.930418*t3559)*var2[17];
  p_output1[4]=(t3524 - 0.366501*t4136)*var2[3] + (0.930418*t4012 - 0.366501*t4070)*var2[4] + (-0.366501*t4259 + 0.930418*t4326)*var2[5] + (-0.366501*t4438 + 0.930418*t4454)*var2[17];
  p_output1[5]=(0.930418*t4630 - 0.366501*t4662)*var2[4] + (-0.366501*t4552 + 0.930418*t4600)*var2[5] + (-0.366501*t4497 + 0.930418*t4531)*var2[17];
  p_output1[6]=t2297*t713*var2[3] + t2147*t406*var2[4];
  p_output1[7]=-1.*t406*t713*var2[3] + t2147*t2297*var2[4];
  p_output1[8]=t713*var2[4];
}



void dR_hip_abduction_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
