/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_left_hip_pitch_src.h"

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
  double t815;
  double t1393;
  double t1540;
  double t651;
  double t724;
  double t763;
  double t1918;
  double t1569;
  double t1586;
  double t1810;
  double t1887;
  double t2077;
  double t2095;
  double t2173;
  double t2523;
  double t2650;
  double t2659;
  double t2670;
  double t2686;
  double t2818;
  double t2821;
  double t2969;
  double t3032;
  double t3156;
  double t3184;
  double t3230;
  double t3241;
  double t3249;
  double t3255;
  double t3296;
  double t3352;
  double t3365;
  double t3377;
  double t3386;
  double t3439;
  double t2633;
  double t2642;
  double t2646;
  double t3053;
  double t3168;
  double t3183;
  double t3400;
  double t3408;
  double t441;
  double t3459;
  double t3463;
  double t3481;
  double t3491;
  double t3524;
  double t3541;
  double t3542;
  double t3555;
  double t3574;
  double t3436;
  double t3564;
  double t3566;
  double t390;
  double t3613;
  double t3626;
  double t3682;
  double t3839;
  double t3850;
  double t3866;
  double t3877;
  double t3883;
  double t3888;
  double t3857;
  double t3879;
  double t3890;
  double t3920;
  double t4033;
  double t4058;
  double t4073;
  double t4099;
  double t4100;
  double t4102;
  double t4123;
  double t4133;
  double t4160;
  double t4118;
  double t4120;
  double t4166;
  double t4247;
  double t4264;
  double t4303;
  double t4304;
  double t4317;
  double t3787;
  double t4261;
  double t4323;
  double t4328;
  double t4344;
  double t4345;
  double t4361;
  double t3834;
  double t4404;
  double t4413;
  double t4414;
  double t4418;
  double t4475;
  double t4477;
  double t4478;
  double t4481;
  double t4493;
  double t4497;
  double t4514;
  double t4520;
  double t4524;
  double t4480;
  double t4502;
  double t4527;
  double t4529;
  double t4540;
  double t4559;
  double t4560;
  double t4563;
  double t4537;
  double t4564;
  double t4565;
  double t4575;
  double t4579;
  double t4580;
  double t4619;
  double t4621;
  double t4628;
  double t4630;
  double t49;
  double t3569;
  double t3703;
  double t3737;
  double t3764;
  double t3813;
  double t3817;
  double t3825;
  double t3827;
  double t3935;
  double t3936;
  double t3954;
  double t3962;
  double t3964;
  double t3971;
  double t3972;
  double t3975;
  double t3980;
  double t3987;
  double t4016;
  double t4017;
  double t4026;
  double t4027;
  double t4032;
  double t4086;
  double t4105;
  double t4109;
  double t4111;
  double t4335;
  double t4369;
  double t4373;
  double t4378;
  double t4389;
  double t4397;
  double t4398;
  double t4403;
  double t4422;
  double t4424;
  double t4429;
  double t4431;
  double t4432;
  double t4442;
  double t4455;
  double t4457;
  double t4463;
  double t4464;
  double t4472;
  double t4566;
  double t4584;
  double t4588;
  double t4589;
  double t4592;
  double t4594;
  double t4601;
  double t4605;
  double t4638;
  double t4640;
  double t4642;
  double t4644;
  double t4646;
  double t4651;
  double t4652;
  double t4653;
  double t4660;
  double t4663;
  double t4668;
  double t4671;
  double t4672;
  double t4676;
  t815 = Cos(var1[8]);
  t1393 = -1.*t815;
  t1540 = 1. + t1393;
  t651 = Cos(var1[7]);
  t724 = -1.*t651;
  t763 = 1. + t724;
  t1918 = Sin(var1[8]);
  t1569 = -0.8656776547239999*t1540;
  t1586 = 1. + t1569;
  t1810 = -0.657905*t1586;
  t1887 = 0.0883716288660118*t1540;
  t2077 = -0.930418*t1918;
  t2095 = 0. + t2077;
  t2173 = 0.707107*t2095;
  t2523 = t1810 + t1887 + t2173;
  t2650 = -0.134322983001*t1540;
  t2659 = 1. + t2650;
  t2670 = 0.259155*t2659;
  t2686 = -0.22434503092393926*t1540;
  t2818 = 0.366501*t1918;
  t2821 = 0. + t2818;
  t2969 = 0.707107*t2821;
  t3032 = t2670 + t2686 + t2969;
  t3156 = Sin(var1[7]);
  t3184 = -1.000000637725*t1540;
  t3230 = 1. + t3184;
  t3241 = 0.707107*t3230;
  t3249 = -0.366501*t1918;
  t3255 = 0. + t3249;
  t3296 = 0.259155*t3255;
  t3352 = 0.930418*t1918;
  t3365 = 0. + t3352;
  t3377 = -0.657905*t3365;
  t3386 = t3241 + t3296 + t3377;
  t3439 = Cos(var1[6]);
  t2633 = -0.340999127418*t763*t2523;
  t2642 = -0.8656776547239999*t763;
  t2646 = 1. + t2642;
  t3053 = t2646*t3032;
  t3168 = -0.930418*t3156;
  t3183 = 0. + t3168;
  t3400 = t3183*t3386;
  t3408 = 0. + t2633 + t3053 + t3400;
  t441 = Sin(var1[6]);
  t3459 = -0.134322983001*t763;
  t3463 = 1. + t3459;
  t3481 = t3463*t2523;
  t3491 = -0.340999127418*t763*t3032;
  t3524 = -0.366501*t3156;
  t3541 = 0. + t3524;
  t3542 = t3541*t3386;
  t3555 = 0. + t3481 + t3491 + t3542;
  t3574 = Cos(var1[5]);
  t3436 = -1.*t441*t3408;
  t3564 = t3439*t3555;
  t3566 = 0. + t3436 + t3564;
  t390 = Sin(var1[5]);
  t3613 = t3439*t3408;
  t3626 = t441*t3555;
  t3682 = 0. + t3613 + t3626;
  t3839 = 0.366501*t3156;
  t3850 = 0. + t3839;
  t3866 = 0.930418*t3156;
  t3877 = 0. + t3866;
  t3883 = -1.000000637725*t763;
  t3888 = 1. + t3883;
  t3857 = t3850*t2523;
  t3879 = t3877*t3032;
  t3890 = t3888*t3386;
  t3920 = 0. + t3857 + t3879 + t3890;
  t4033 = -0.366501*t1586;
  t4058 = -0.3172717261340007*t1540;
  t4073 = t4033 + t4058;
  t4099 = -0.930418*t2659;
  t4100 = -0.12497652119782442*t1540;
  t4102 = t4099 + t4100;
  t4123 = -0.930418*t3255;
  t4133 = -0.366501*t3365;
  t4160 = t4123 + t4133;
  t4118 = -0.340999127418*t763*t4073;
  t4120 = t2646*t4102;
  t4166 = t3183*t4160;
  t4247 = 0. + t4118 + t4120 + t4166;
  t4264 = t3463*t4073;
  t4303 = -0.340999127418*t763*t4102;
  t4304 = t3541*t4160;
  t4317 = 0. + t4264 + t4303 + t4304;
  t3787 = Cos(var1[4]);
  t4261 = -1.*t441*t4247;
  t4323 = t3439*t4317;
  t4328 = 0. + t4261 + t4323;
  t4344 = t3439*t4247;
  t4345 = t441*t4317;
  t4361 = 0. + t4344 + t4345;
  t3834 = Sin(var1[4]);
  t4404 = t4073*t3850;
  t4413 = t4102*t3877;
  t4414 = t3888*t4160;
  t4418 = 0. + t4404 + t4413 + t4414;
  t4475 = 0.657905*t1586;
  t4477 = -0.0883716288660118*t1540;
  t4478 = t4475 + t4477 + t2173;
  t4481 = -0.259155*t2659;
  t4493 = 0.22434503092393926*t1540;
  t4497 = t4481 + t4493 + t2969;
  t4514 = -0.259155*t3255;
  t4520 = 0.657905*t3365;
  t4524 = t3241 + t4514 + t4520;
  t4480 = -0.340999127418*t763*t4478;
  t4502 = t2646*t4497;
  t4527 = t3183*t4524;
  t4529 = 0. + t4480 + t4502 + t4527;
  t4540 = t3463*t4478;
  t4559 = -0.340999127418*t763*t4497;
  t4560 = t3541*t4524;
  t4563 = 0. + t4540 + t4559 + t4560;
  t4537 = -1.*t441*t4529;
  t4564 = t3439*t4563;
  t4565 = 0. + t4537 + t4564;
  t4575 = t3439*t4529;
  t4579 = t441*t4563;
  t4580 = 0. + t4575 + t4579;
  t4619 = t3850*t4478;
  t4621 = t3877*t4497;
  t4628 = t3888*t4524;
  t4630 = 0. + t4619 + t4621 + t4628;
  t49 = -3.6361499999859603e-7*var2[8];
  t3569 = -1.*t390*t3566;
  t3703 = t3574*t3682;
  t3737 = 0. + t3569 + t3703;
  t3764 = var2[4]*t3737;
  t3813 = t3574*t3566;
  t3817 = t390*t3682;
  t3825 = 0. + t3813 + t3817;
  t3827 = t3787*t3825;
  t3935 = -1.*t3834*t3920;
  t3936 = 0. + t3827 + t3935;
  t3954 = var2[3]*t3936;
  t3962 = -0.930418*t2523;
  t3964 = 0.366501*t3032;
  t3971 = 0. + t3962 + t3964;
  t3972 = var2[7]*t3971;
  t3975 = -1.*t3850*t2523;
  t3980 = -1.*t3877*t3032;
  t3987 = -1.*t3888*t3386;
  t4016 = 0. + t3975 + t3980 + t3987;
  t4017 = var2[6]*t4016;
  t4026 = var2[5]*t3920;
  t4027 = t49 + t3764 + t3954 + t3972 + t4017 + t4026;
  t4032 = -1.000000637725*var2[8];
  t4086 = -0.930418*t4073;
  t4105 = 0.366501*t4102;
  t4109 = 0. + t4086 + t4105;
  t4111 = var2[7]*t4109;
  t4335 = -1.*t390*t4328;
  t4369 = t3574*t4361;
  t4373 = 0. + t4335 + t4369;
  t4378 = var2[4]*t4373;
  t4389 = t3574*t4328;
  t4397 = t390*t4361;
  t4398 = 0. + t4389 + t4397;
  t4403 = t3787*t4398;
  t4422 = -1.*t3834*t4418;
  t4424 = 0. + t4403 + t4422;
  t4429 = var2[3]*t4424;
  t4431 = -1.*t4073*t3850;
  t4432 = -1.*t4102*t3877;
  t4442 = -1.*t3888*t4160;
  t4455 = 0. + t4431 + t4432 + t4442;
  t4457 = var2[6]*t4455;
  t4463 = var2[5]*t4418;
  t4464 = t4032 + t4111 + t4378 + t4429 + t4457 + t4463;
  t4472 = 3.6361499999859603e-7*var2[8];
  t4566 = -1.*t390*t4565;
  t4584 = t3574*t4580;
  t4588 = 0. + t4566 + t4584;
  t4589 = var2[4]*t4588;
  t4592 = t3574*t4565;
  t4594 = t390*t4580;
  t4601 = 0. + t4592 + t4594;
  t4605 = t3787*t4601;
  t4638 = -1.*t3834*t4630;
  t4640 = 0. + t4605 + t4638;
  t4642 = var2[3]*t4640;
  t4644 = -0.930418*t4478;
  t4646 = 0.366501*t4497;
  t4651 = 0. + t4644 + t4646;
  t4652 = var2[7]*t4651;
  t4653 = -1.*t3850*t4478;
  t4660 = -1.*t3877*t4497;
  t4663 = -1.*t3888*t4524;
  t4668 = 0. + t4653 + t4660 + t4663;
  t4671 = var2[6]*t4668;
  t4672 = var2[5]*t4630;
  t4676 = t4472 + t4589 + t4642 + t4652 + t4671 + t4672;
  p_output1[0]=0.01153*t4027 + 0.00015*t4464 - 0.00017*t4676;
  p_output1[1]=-0.00017*t4027 + 0.00018*t4464 + 0.03335*t4676;
  p_output1[2]=0.00015*t4027 + 0.03396*t4464 + 0.00018*t4676;
}



void AMBody_left_hip_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
