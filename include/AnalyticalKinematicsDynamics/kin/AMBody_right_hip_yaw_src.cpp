/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_right_hip_yaw_src.h"

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
  double t202;
  double t407;
  double t436;
  double t1350;
  double t1724;
  double t1445;
  double t1488;
  double t1323;
  double t1773;
  double t2051;
  double t715;
  double t892;
  double t1301;
  double t2298;
  double t2375;
  double t2380;
  double t1587;
  double t2154;
  double t2219;
  double t2439;
  double t3820;
  double t3955;
  double t4002;
  double t4030;
  double t4101;
  double t3617;
  double t3698;
  double t3703;
  double t3717;
  double t3789;
  double t2822;
  double t2993;
  double t3019;
  double t2645;
  double t2658;
  double t4230;
  double t4241;
  double t4280;
  double t3812;
  double t4191;
  double t4194;
  double t4627;
  double t4635;
  double t4641;
  double t4606;
  double t4613;
  double t4538;
  double t4543;
  double t4571;
  double t4708;
  double t4721;
  double t4745;
  double t4624;
  double t4649;
  double t4670;
  double t2814;
  double t3148;
  double t3250;
  double t3254;
  double t3381;
  double t3404;
  double t4199;
  double t4292;
  double t4322;
  double t4326;
  double t4333;
  double t4334;
  double t4355;
  double t4367;
  double t4385;
  double t4403;
  double t4404;
  double t4436;
  double t4488;
  double t4518;
  double t4529;
  double t4530;
  double t4587;
  double t4699;
  double t4751;
  double t4760;
  double t4772;
  double t4815;
  double t4838;
  double t4841;
  double t4853;
  double t4858;
  double t4869;
  double t4891;
  double t4895;
  t202 = Cos(var1[18]);
  t407 = -1.*t202;
  t436 = 1. + t407;
  t1350 = Sin(var1[18]);
  t1724 = Cos(var1[17]);
  t1445 = -0.366501*t1350;
  t1488 = 0. + t1445;
  t1323 = Sin(var1[17]);
  t1773 = 0.930418*t1350;
  t2051 = 0. + t1773;
  t715 = 1.000000637725*t436;
  t892 = -1. + t715;
  t1301 = Cos(var1[5]);
  t2298 = t1724*t1488;
  t2375 = -1.*t1323*t2051;
  t2380 = t2298 + t2375;
  t1587 = t1323*t1488;
  t2154 = t1724*t2051;
  t2219 = t1587 + t2154;
  t2439 = Sin(var1[5]);
  t3820 = -0.134322983001*t436;
  t3955 = 1. + t3820;
  t4002 = -0.930418*t3955;
  t4030 = -0.12497652119782442*t436;
  t4101 = t4002 + t4030;
  t3617 = -0.8656776547239999*t436;
  t3698 = 1. + t3617;
  t3703 = -0.366501*t3698;
  t3717 = -0.3172717261340007*t436;
  t3789 = t3703 + t3717;
  t2822 = -0.930418*t1488;
  t2993 = -0.366501*t2051;
  t3019 = 0. + t2822 + t2993;
  t2645 = Sin(var1[4]);
  t2658 = Cos(var1[4]);
  t4230 = t1724*t4101;
  t4241 = -1.*t3789*t1323;
  t4280 = 0. + t4230 + t4241;
  t3812 = t1724*t3789;
  t4191 = t4101*t1323;
  t4194 = 0. + t3812 + t4191;
  t4627 = -0.366501*t3955;
  t4635 = 0.3172717261340007*t436;
  t4641 = t4627 + t4635;
  t4606 = 0.930418*t3698;
  t4613 = t4606 + t4030;
  t4538 = -0.366501*t1488;
  t4543 = 0.930418*t2051;
  t4571 = 0. + t4538 + t4543;
  t4708 = t1724*t4641;
  t4721 = -1.*t4613*t1323;
  t4745 = 0. + t4708 + t4721;
  t4624 = t1724*t4613;
  t4649 = t4641*t1323;
  t4670 = 0. + t4624 + t4649;
  t2814 = 1.000000637725*var2[18];
  t3148 = var2[5]*t3019;
  t3250 = 0.930418*t1488;
  t3254 = 0.366501*t2051;
  t3381 = 0. + t3250 + t3254;
  t3404 = var2[17]*t3381;
  t4199 = t1301*t4194;
  t4292 = -1.*t4280*t2439;
  t4322 = 0. + t4199 + t4292;
  t4326 = var2[4]*t4322;
  t4333 = -1.*t3019*t2645;
  t4334 = t1301*t4280;
  t4355 = t4194*t2439;
  t4367 = 0. + t4334 + t4355;
  t4385 = t2658*t4367;
  t4403 = 0. + t4333 + t4385;
  t4404 = var2[3]*t4403;
  t4436 = t2814 + t3148 + t3404 + t4326 + t4404;
  t4488 = 0.366501*t1488;
  t4518 = -0.930418*t2051;
  t4529 = 0. + t4488 + t4518;
  t4530 = var2[17]*t4529;
  t4587 = var2[5]*t4571;
  t4699 = t1301*t4670;
  t4751 = -1.*t4745*t2439;
  t4760 = 0. + t4699 + t4751;
  t4772 = var2[4]*t4760;
  t4815 = -1.*t4571*t2645;
  t4838 = t1301*t4745;
  t4841 = t4670*t2439;
  t4853 = 0. + t4838 + t4841;
  t4858 = t2658*t4853;
  t4869 = 0. + t4815 + t4858;
  t4891 = var2[3]*t4869;
  t4895 = 0. + t4530 + t4587 + t4772 + t4891;
  p_output1[0]=0.00163*(0. + ((t1301*t2380 + t2219*t2439)*t2658 - 1.*t2645*t892)*var2[3] + (t1301*t2219 - 1.*t2380*t2439)*var2[4] + t892*var2[5] + (1. - 1.000000637725*t436)*var2[17]);
  p_output1[1]=-0.00005*t4436 + 0.00193*t4895;
  p_output1[2]=0.00077*t4436 - 0.00005*t4895;
}



void AMBody_right_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
