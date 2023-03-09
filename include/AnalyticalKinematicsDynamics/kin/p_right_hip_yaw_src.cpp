/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_hip_yaw_src.h"

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
  double t1905;
  double t1306;
  double t3850;
  double t3929;
  double t3871;
  double t4033;
  double t1650;
  double t1735;
  double t1824;
  double t3561;
  double t3921;
  double t4158;
  double t4276;
  double t4391;
  double t4705;
  double t4712;
  double t4735;
  double t1376;
  double t5243;
  double t5264;
  double t5103;
  double t5130;
  double t5161;
  double t5356;
  double t5357;
  double t5362;
  double t4965;
  double t4982;
  double t1963;
  double t2202;
  double t2710;
  double t2988;
  double t1872;
  double t2236;
  double t3228;
  double t3234;
  double t3609;
  double t3724;
  double t4414;
  double t4511;
  double t4567;
  double t4687;
  double t4839;
  double t4922;
  double t5062;
  double t5084;
  double t5634;
  double t5638;
  double t5640;
  double t5643;
  double t5657;
  double t5659;
  double t5207;
  double t5213;
  double t5314;
  double t5315;
  double t5690;
  double t5692;
  double t5707;
  double t5484;
  double t5495;
  double t5738;
  double t5739;
  double t5754;
  double t5529;
  double t5537;
  double t5594;
  double t5603;
  double t6037;
  double t6050;
  double t6055;
  double t6072;
  double t6090;
  double t6101;
  t1905 = Sin(var1[18]);
  t1306 = Cos(var1[3]);
  t3850 = Cos(var1[5]);
  t3929 = Sin(var1[3]);
  t3871 = Sin(var1[4]);
  t4033 = Sin(var1[5]);
  t1650 = Cos(var1[18]);
  t1735 = -1.*t1650;
  t1824 = 1. + t1735;
  t3561 = Sin(var1[17]);
  t3921 = t1306*t3850*t3871;
  t4158 = t3929*t4033;
  t4276 = t3921 + t4158;
  t4391 = Cos(var1[17]);
  t4705 = -1.*t3850*t3929;
  t4712 = t1306*t3871*t4033;
  t4735 = t4705 + t4712;
  t1376 = Cos(var1[4]);
  t5243 = -0.366501*t1905;
  t5264 = 0. + t5243;
  t5103 = -1.*t3561*t4276;
  t5130 = t4391*t4735;
  t5161 = t5103 + t5130;
  t5356 = t4391*t4276;
  t5357 = t3561*t4735;
  t5362 = t5356 + t5357;
  t4965 = 0.930418*t1905;
  t4982 = 0. + t4965;
  t1963 = -0.930418*t1905;
  t2202 = 0. + t1963;
  t2710 = 0.366501*t1905;
  t2988 = 0. + t2710;
  t1872 = -0.04500040093286238*t1824;
  t2236 = -0.07877663122399998*t2202;
  t3228 = 0.031030906668*t2988;
  t3234 = 0. + t1872 + t2236 + t3228;
  t3609 = -0.091*t3561;
  t3724 = 0. + t3609;
  t4414 = -1.*t4391;
  t4511 = 1. + t4414;
  t4567 = -0.091*t4511;
  t4687 = 0. + t4567;
  t4839 = 1.296332362046933e-7*var1[18];
  t4922 = -0.07877668146182712*t1824;
  t5062 = -0.045000372235*t4982;
  t5084 = t4839 + t4922 + t5062;
  t5634 = t3850*t3929*t3871;
  t5638 = -1.*t1306*t4033;
  t5640 = t5634 + t5638;
  t5643 = t1306*t3850;
  t5657 = t3929*t3871*t4033;
  t5659 = t5643 + t5657;
  t5207 = 3.2909349868922137e-7*var1[18];
  t5213 = 0.03103092645718495*t1824;
  t5314 = -0.045000372235*t5264;
  t5315 = t5207 + t5213 + t5314;
  t5690 = -1.*t3561*t5640;
  t5692 = t4391*t5659;
  t5707 = t5690 + t5692;
  t5484 = -0.134322983001*t1824;
  t5495 = 1. + t5484;
  t5738 = t4391*t5640;
  t5739 = t3561*t5659;
  t5754 = t5738 + t5739;
  t5529 = -0.8656776547239999*t1824;
  t5537 = 1. + t5529;
  t5594 = -1.000000637725*t1824;
  t5603 = 1. + t5594;
  t6037 = -1.*t1376*t3850*t3561;
  t6050 = t4391*t1376*t4033;
  t6055 = t6037 + t6050;
  t6072 = t4391*t1376*t3850;
  t6090 = t1376*t3561*t4033;
  t6101 = t6072 + t6090;
  p_output1[0]=0. + t1306*t1376*t3234 + t3724*t4276 + t4687*t4735 + t5084*t5161 + t5315*t5362 - 0.086806*(0.340999127418*t1824*t5161 + t1306*t1376*t5264 + t5362*t5495) - 0.123098*(t1306*t1376*t4982 + 0.340999127418*t1824*t5362 + t5161*t5537) - 0.04501*(t2202*t5161 + t2988*t5362 + t1306*t1376*t5603) + var1[0];
  p_output1[1]=0. + t1376*t3234*t3929 + t3724*t5640 + t4687*t5659 + t5084*t5707 + t5315*t5754 - 0.123098*(t1376*t3929*t4982 + t5537*t5707 + 0.340999127418*t1824*t5754) - 0.04501*(t1376*t3929*t5603 + t2202*t5707 + t2988*t5754) - 0.086806*(t1376*t3929*t5264 + 0.340999127418*t1824*t5707 + t5495*t5754) + var1[1];
  p_output1[2]=0. + t1376*t3724*t3850 - 1.*t3234*t3871 + t1376*t4033*t4687 + t5084*t6055 + t5315*t6101 - 0.123098*(-1.*t3871*t4982 + t5537*t6055 + 0.340999127418*t1824*t6101) - 0.04501*(-1.*t3871*t5603 + t2202*t6055 + t2988*t6101) - 0.086806*(-1.*t3871*t5264 + 0.340999127418*t1824*t6055 + t5495*t6101) + var1[2];
}



void p_right_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
