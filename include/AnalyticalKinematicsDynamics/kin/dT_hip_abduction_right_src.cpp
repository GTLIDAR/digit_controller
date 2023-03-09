/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_hip_abduction_right_src.h"

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
  double t278;
  double t344;
  double t791;
  double t476;
  double t489;
  double t940;
  double t1860;
  double t1832;
  double t1836;
  double t2174;
  double t2192;
  double t2312;
  double t2407;
  double t2421;
  double t2736;
  double t2777;
  double t2945;
  double t3304;
  double t3329;
  double t3341;
  double t3387;
  double t3389;
  double t3406;
  double t2669;
  double t3009;
  double t3018;
  double t2539;
  double t3431;
  double t3710;
  double t3742;
  double t3749;
  double t3889;
  double t3912;
  double t3921;
  double t537;
  double t1003;
  double t1263;
  double t1556;
  double t1566;
  double t1640;
  double t2286;
  double t2426;
  double t2455;
  double t2540;
  double t2541;
  double t3032;
  double t3112;
  double t3215;
  double t3343;
  double t3442;
  double t3452;
  double t3471;
  double t3475;
  double t3530;
  double t3552;
  double t3559;
  double t3572;
  double t3573;
  double t3586;
  double t3025;
  double t3658;
  double t3659;
  double t3771;
  double t3773;
  double t3837;
  double t3858;
  double t3862;
  double t3886;
  double t3927;
  double t3933;
  double t3945;
  double t3946;
  double t3950;
  double t3974;
  double t3980;
  double t3983;
  double t4007;
  double t4009;
  double t4012;
  double t4052;
  double t4053;
  double t4070;
  double t4086;
  double t4089;
  double t4091;
  double t4109;
  double t4114;
  double t4118;
  double t4125;
  double t4130;
  double t4136;
  double t4642;
  double t4645;
  double t4655;
  double t4659;
  double t4615;
  double t4624;
  t278 = Cos(var1[3]);
  t344 = Cos(var1[4]);
  t791 = Cos(var1[17]);
  t476 = Cos(var1[5]);
  t489 = Sin(var1[17]);
  t940 = Sin(var1[5]);
  t1860 = Sin(var1[3]);
  t1832 = Sin(var1[4]);
  t1836 = t278*t476*t1832;
  t2174 = t1860*t940;
  t2192 = t1836 + t2174;
  t2312 = t476*t1860;
  t2407 = -1.*t278*t1832*t940;
  t2421 = t2312 + t2407;
  t2736 = -1.*t476*t1860;
  t2777 = t278*t1832*t940;
  t2945 = t2736 + t2777;
  t3304 = -1.*t476*t1860*t1832;
  t3329 = t278*t940;
  t3341 = t3304 + t3329;
  t3387 = -1.*t278*t476;
  t3389 = -1.*t1860*t1832*t940;
  t3406 = t3387 + t3389;
  t2669 = -1.*t489*t2192;
  t3009 = t791*t2945;
  t3018 = t2669 + t3009;
  t2539 = t791*t2192;
  t3431 = t791*t3406;
  t3710 = t476*t1860*t1832;
  t3742 = -1.*t278*t940;
  t3749 = t3710 + t3742;
  t3889 = t278*t476;
  t3912 = t1860*t1832*t940;
  t3921 = t3889 + t3912;
  t537 = -1.*t278*t344*t476*t489;
  t1003 = t791*t278*t344*t940;
  t1263 = t537 + t1003;
  t1556 = t791*t278*t344*t476;
  t1566 = t278*t344*t489*t940;
  t1640 = t1556 + t1566;
  t2286 = t489*t2192;
  t2426 = t791*t2421;
  t2455 = t2286 + t2426;
  t2540 = -1.*t489*t2421;
  t2541 = t2539 + t2540;
  t3032 = -1.*t791*t2192;
  t3112 = -1.*t489*t2945;
  t3215 = t3032 + t3112;
  t3343 = -1.*t489*t3341;
  t3442 = t3343 + t3431;
  t3452 = t791*t3341;
  t3471 = t489*t3406;
  t3475 = t3452 + t3471;
  t3530 = -1.*t344*t476*t489*t1860;
  t3552 = t791*t344*t1860*t940;
  t3559 = t3530 + t3552;
  t3572 = t791*t344*t476*t1860;
  t3573 = t344*t489*t1860*t940;
  t3586 = t3572 + t3573;
  t3025 = 0.930418*t3018;
  t3658 = t489*t2945;
  t3659 = t2539 + t3658;
  t3771 = t489*t3749;
  t3773 = t3771 + t3431;
  t3837 = t791*t3749;
  t3858 = -1.*t489*t3406;
  t3862 = t3837 + t3858;
  t3886 = -1.*t489*t3749;
  t3927 = t791*t3921;
  t3933 = t3886 + t3927;
  t3945 = -1.*t791*t3749;
  t3946 = -1.*t489*t3921;
  t3950 = t3945 + t3946;
  t3974 = -1.*t344*t476*t489;
  t3980 = t791*t344*t940;
  t3983 = t3974 + t3980;
  t4007 = -1.*t791*t344*t476;
  t4009 = -1.*t344*t489*t940;
  t4012 = t4007 + t4009;
  t4052 = t344*t476*t489;
  t4053 = -1.*t791*t344*t940;
  t4070 = t4052 + t4053;
  t4086 = t791*t344*t476;
  t4089 = t344*t489*t940;
  t4091 = t4086 + t4089;
  t4109 = t476*t489*t1832;
  t4114 = -1.*t791*t1832*t940;
  t4118 = t4109 + t4114;
  t4125 = -1.*t791*t476*t1832;
  t4130 = -1.*t489*t1832*t940;
  t4136 = t4125 + t4130;
  t4642 = -1.*t791;
  t4645 = 1. + t4642;
  t4655 = -0.091*t4645;
  t4659 = 0. + t4655;
  t4615 = -0.091*t489;
  t4624 = 0. + t4615;
  p_output1[0]=(0.366501*t3442 + 0.930418*t3475)*var2[3] + (0.366501*t1263 + 0.930418*t1640)*var2[4] + (0.930418*t2455 + 0.366501*t2541)*var2[5] + (t3025 + 0.366501*t3215)*var2[17];
  p_output1[1]=(0.366501*t3018 + 0.930418*t3659)*var2[3] + (0.366501*t3559 + 0.930418*t3586)*var2[4] + (0.930418*t3773 + 0.366501*t3862)*var2[5] + (0.930418*t3933 + 0.366501*t3950)*var2[17];
  p_output1[2]=(0.366501*t4118 + 0.930418*t4136)*var2[4] + (0.930418*t4070 + 0.366501*t4091)*var2[5] + (0.930418*t3983 + 0.366501*t4012)*var2[17];
  p_output1[3]=0;
  p_output1[4]=(0.930418*t3442 - 0.366501*t3475)*var2[3] + (0.930418*t1263 - 0.366501*t1640)*var2[4] + (-0.366501*t2455 + 0.930418*t2541)*var2[5] + (-0.366501*t3018 + 0.930418*t3215)*var2[17];
  p_output1[5]=(t3025 - 0.366501*t3659)*var2[3] + (0.930418*t3559 - 0.366501*t3586)*var2[4] + (-0.366501*t3773 + 0.930418*t3862)*var2[5] + (-0.366501*t3933 + 0.930418*t3950)*var2[17];
  p_output1[6]=(0.930418*t4118 - 0.366501*t4136)*var2[4] + (-0.366501*t4070 + 0.930418*t4091)*var2[5] + (-0.366501*t3983 + 0.930418*t4012)*var2[17];
  p_output1[7]=0;
  p_output1[8]=t1860*t344*var2[3] + t1832*t278*var2[4];
  p_output1[9]=-1.*t278*t344*var2[3] + t1832*t1860*var2[4];
  p_output1[10]=t344*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.001*t1860*t344 - 0.091*t3442 + t3341*t4624 + t3406*t4659)*var2[3] + (-0.091*t1263 + 0.001*t1832*t278 + t278*t344*t4624*t476 + t278*t344*t4659*t940)*var2[4] + (-0.091*t2541 + t2421*t4624 + t2192*t4659)*var2[5] + (-0.091*t3215 - 0.091*t2945*t489 - 0.091*t2192*t791)*var2[17];
  p_output1[13]=var2[1] + (-0.091*t3018 - 0.001*t278*t344 + t2192*t4624 + t2945*t4659)*var2[3] + (0.001*t1832*t1860 - 0.091*t3559 + t1860*t344*t4624*t476 + t1860*t344*t4659*t940)*var2[4] + (-0.091*t3862 + t3406*t4624 + t3749*t4659)*var2[5] + (-0.091*t3950 - 0.091*t3921*t489 - 0.091*t3749*t791)*var2[17];
  p_output1[14]=var2[2] + (0.001*t344 - 0.091*t4118 - 1.*t1832*t4624*t476 - 1.*t1832*t4659*t940)*var2[4] + (-0.091*t4091 + t344*t4659*t476 - 1.*t344*t4624*t940)*var2[5] + (-0.091*t4012 - 0.091*t344*t476*t791 - 0.091*t344*t489*t940)*var2[17];
  p_output1[15]=0;
}



void dT_hip_abduction_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
