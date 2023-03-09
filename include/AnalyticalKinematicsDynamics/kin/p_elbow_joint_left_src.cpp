/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_elbow_joint_left_src.h"

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
  double t956;
  double t571;
  double t2122;
  double t2134;
  double t2184;
  double t2548;
  double t2720;
  double t2766;
  double t2752;
  double t2839;
  double t675;
  double t736;
  double t766;
  double t2758;
  double t2872;
  double t2895;
  double t3202;
  double t3220;
  double t3223;
  double t3561;
  double t3598;
  double t3603;
  double t3641;
  double t673;
  double t3456;
  double t3473;
  double t3346;
  double t3357;
  double t3360;
  double t3528;
  double t3530;
  double t3531;
  double t3635;
  double t3266;
  double t3334;
  double t3868;
  double t3698;
  double t1636;
  double t1687;
  double t1000;
  double t1407;
  double t4202;
  double t4135;
  double t3745;
  double t3750;
  double t3764;
  double t3790;
  double t3791;
  double t3803;
  double t4128;
  double t3959;
  double t3976;
  double t4030;
  double t4042;
  double t4054;
  double t4092;
  double t4152;
  double t4153;
  double t4158;
  double t4168;
  double t4184;
  double t4187;
  double t4192;
  double t4193;
  double t4196;
  double t3647;
  double t4254;
  double t3702;
  double t4354;
  double t3890;
  double t4268;
  double t3873;
  double t4403;
  double t4404;
  double t4262;
  double t4266;
  double t4269;
  double t4280;
  double t4281;
  double t4285;
  double t4296;
  double t4302;
  double t4337;
  double t4343;
  double t4351;
  double t4355;
  double t4366;
  double t4368;
  double t4371;
  double t4374;
  double t4412;
  double t4419;
  double t4421;
  double t4424;
  double t4428;
  double t4431;
  double t4432;
  double t4443;
  double t4313;
  double t4314;
  double t4204;
  double t4216;
  double t4226;
  double t4234;
  double t789;
  double t1583;
  double t1743;
  double t1811;
  double t2523;
  double t2616;
  double t2695;
  double t3082;
  double t3121;
  double t3190;
  double t3245;
  double t3251;
  double t3336;
  double t3344;
  double t4631;
  double t4634;
  double t4636;
  double t4638;
  double t4643;
  double t4644;
  double t3406;
  double t3454;
  double t3489;
  double t3501;
  double t3545;
  double t3625;
  double t3673;
  double t3694;
  double t3713;
  double t3726;
  double t3735;
  double t4651;
  double t4652;
  double t4657;
  double t4663;
  double t4666;
  double t4668;
  double t3855;
  double t3856;
  double t3885;
  double t3889;
  double t3903;
  double t3909;
  double t3934;
  double t4106;
  double t4126;
  double t4130;
  double t4132;
  double t4138;
  double t4145;
  double t4149;
  double t4199;
  double t4218;
  double t4240;
  double t4245;
  double t4676;
  double t4689;
  double t4698;
  double t4705;
  double t4715;
  double t4722;
  double t4727;
  double t4728;
  double t4734;
  double t4739;
  double t4741;
  double t4742;
  double t4308;
  double t4310;
  double t4322;
  double t4324;
  double t4393;
  double t4402;
  double t4407;
  double t4409;
  double t4773;
  double t4776;
  double t4783;
  double t4784;
  double t4796;
  double t4799;
  double t4831;
  double t4861;
  double t4463;
  double t4482;
  double t4872;
  double t4881;
  double t4885;
  double t4887;
  double t4519;
  double t4520;
  double t4544;
  double t4554;
  double t5108;
  double t5116;
  double t5132;
  double t5144;
  double t5194;
  double t5209;
  double t5235;
  double t5245;
  double t5251;
  double t5267;
  double t5274;
  double t5279;
  double t5291;
  double t5296;
  double t5302;
  double t5305;
  double t5314;
  double t5315;
  double t5318;
  double t5320;
  double t5323;
  double t5330;
  double t5339;
  double t5341;
  double t5351;
  double t5354;
  double t5363;
  double t5364;
  double t5369;
  double t5380;
  t956 = Sin(var1[14]);
  t571 = Cos(var1[3]);
  t2122 = Cos(var1[13]);
  t2134 = -1.*t2122;
  t2184 = 1. + t2134;
  t2548 = Sin(var1[13]);
  t2720 = Cos(var1[5]);
  t2766 = Sin(var1[3]);
  t2752 = Sin(var1[4]);
  t2839 = Sin(var1[5]);
  t675 = Cos(var1[14]);
  t736 = -1.*t675;
  t766 = 1. + t736;
  t2758 = t571*t2720*t2752;
  t2872 = t2766*t2839;
  t2895 = t2758 + t2872;
  t3202 = -1.*t2720*t2766;
  t3220 = t571*t2752*t2839;
  t3223 = t3202 + t3220;
  t3561 = Cos(var1[15]);
  t3598 = -1.*t3561;
  t3603 = 1. + t3598;
  t3641 = Sin(var1[15]);
  t673 = Cos(var1[4]);
  t3456 = 0.994522*t956;
  t3473 = 0. + t3456;
  t3346 = -1.*t2548*t2895;
  t3357 = t2122*t3223;
  t3360 = t3346 + t3357;
  t3528 = t2122*t2895;
  t3530 = t2548*t3223;
  t3531 = t3528 + t3530;
  t3635 = 0.051978134642000004*t3603;
  t3266 = -0.104528*t956;
  t3334 = 0. + t3266;
  t3868 = -0.05226439969100001*t3603;
  t3698 = 0.49726168403800003*t3603;
  t1636 = 0.104528*t956;
  t1687 = 0. + t1636;
  t1000 = -0.994522*t956;
  t1407 = 0. + t1000;
  t4202 = Sin(var1[16]);
  t4135 = -0.073913*t3641;
  t3745 = t571*t673*t3473;
  t3750 = 0.103955395616*t766*t3360;
  t3764 = -0.9890740084840001*t766;
  t3790 = 1. + t3764;
  t3791 = t3790*t3531;
  t3803 = t3745 + t3750 + t3791;
  t4128 = -0.703234*t3641;
  t3959 = t571*t673*t3334;
  t3976 = -0.010926102783999999*t766;
  t4030 = 1. + t3976;
  t4042 = t4030*t3360;
  t4054 = 0.103955395616*t766*t3531;
  t4092 = t3959 + t4042 + t4054;
  t4152 = -1.0000001112680001*t766;
  t4153 = 1. + t4152;
  t4158 = t4153*t571*t673;
  t4168 = t1687*t3360;
  t4184 = t1407*t3531;
  t4187 = t4158 + t4168 + t4184;
  t4192 = Cos(var1[16]);
  t4193 = -1.*t4192;
  t4196 = 1. + t4193;
  t3647 = -0.707107*t3641;
  t4254 = -0.49726168403800003*t3603;
  t3702 = 0.073913*t3641;
  t4354 = -0.051978134642000004*t3603;
  t3890 = 0.707107*t3641;
  t4268 = 0.05226439969100001*t3603;
  t3873 = 0.703234*t3641;
  t4403 = -0.104528*t4202;
  t4404 = 0. + t4403;
  t4262 = t4254 + t4135;
  t4266 = t4262*t3803;
  t4269 = t4268 + t4128;
  t4280 = t4269*t4092;
  t4281 = -0.500001190325*t3603;
  t4285 = 1. + t4281;
  t4296 = t4285*t4187;
  t4302 = t4266 + t4280 + t4296;
  t4337 = -0.5054634410180001*t3603;
  t4343 = 1. + t4337;
  t4351 = t4343*t3803;
  t4355 = t4354 + t3647;
  t4366 = t4355*t4092;
  t4368 = t4254 + t3702;
  t4371 = t4368*t4187;
  t4374 = t4351 + t4366 + t4371;
  t4412 = t4354 + t3890;
  t4419 = t4412*t3803;
  t4421 = -0.9945383682050002*t3603;
  t4424 = 1. + t4421;
  t4428 = t4424*t4092;
  t4431 = t4268 + t3873;
  t4432 = t4431*t4187;
  t4443 = t4419 + t4428 + t4432;
  t4313 = 0.994522*t4202;
  t4314 = 0. + t4313;
  t4204 = -0.994522*t4202;
  t4216 = 0. + t4204;
  t4226 = 0.104528*t4202;
  t4234 = 0. + t4226;
  t789 = -0.056500534356700764*t766;
  t1583 = 0.38315650737400003*t1407;
  t1743 = -0.040271188976*t1687;
  t1811 = 0. + t789 + t1583 + t1743;
  t2523 = 0.4*t2184;
  t2616 = 0.12*t2548;
  t2695 = 0. + t2523 + t2616;
  t3082 = 0.12*t2184;
  t3121 = -0.4*t2548;
  t3190 = 0. + t3082 + t3121;
  t3245 = 1.1345904784751044e-7*var1[14];
  t3251 = -0.04027119345689465*t766;
  t3336 = -0.05650052807*t3334;
  t3344 = t3245 + t3251 + t3336;
  t4631 = t2720*t2766*t2752;
  t4634 = -1.*t571*t2839;
  t4636 = t4631 + t4634;
  t4638 = t571*t2720;
  t4643 = t2766*t2752*t2839;
  t4644 = t4638 + t4643;
  t3406 = 1.1924972351948546e-8*var1[14];
  t3454 = 0.38315655000705834*t766;
  t3489 = -0.05650052807*t3473;
  t3501 = t3406 + t3454 + t3489;
  t3545 = -1.5601527583902087e-7*var1[15];
  t3625 = 0.09582494577057615*t3603;
  t3673 = t3635 + t3647;
  t3694 = 0.231098203479*t3673;
  t3713 = t3698 + t3702;
  t3726 = 0.164383620275*t3713;
  t3735 = t3545 + t3625 + t3694 + t3726;
  t4651 = -1.*t2548*t4636;
  t4652 = t2122*t4644;
  t4657 = t4651 + t4652;
  t4663 = t2122*t4636;
  t4666 = t2548*t4644;
  t4668 = t4663 + t4666;
  t3855 = 1.639789470231751e-8*var1[15];
  t3856 = 0.22983603018311177*t3603;
  t3885 = t3868 + t3873;
  t3889 = 0.164383620275*t3885;
  t3903 = t3635 + t3890;
  t3909 = 0.18957839082800002*t3903;
  t3934 = t3855 + t3856 + t3889 + t3909;
  t4106 = 1.568745163810375e-7*var1[15];
  t4126 = 0.08219200580743281*t3603;
  t4130 = t3868 + t4128;
  t4132 = 0.231098203479*t4130;
  t4138 = t3698 + t4135;
  t4145 = 0.18957839082800002*t4138;
  t4149 = t4106 + t4126 + t4132 + t4145;
  t4199 = 0.19098732144477495*t4196;
  t4218 = 0.137024246638*t4216;
  t4240 = -0.014401763312*t4234;
  t4245 = 0. + t4199 + t4218 + t4240;
  t4676 = t673*t3473*t2766;
  t4689 = 0.103955395616*t766*t4657;
  t4698 = t3790*t4668;
  t4705 = t4676 + t4689 + t4698;
  t4715 = t673*t3334*t2766;
  t4722 = t4030*t4657;
  t4727 = 0.103955395616*t766*t4668;
  t4728 = t4715 + t4722 + t4727;
  t4734 = t4153*t673*t2766;
  t4739 = t1687*t4657;
  t4741 = t1407*t4668;
  t4742 = t4734 + t4739 + t4741;
  t4308 = -5.06291820800569e-8*var1[16];
  t4310 = 0.13702426188441388*t4196;
  t4322 = 0.190987300194*t4314;
  t4324 = t4308 + t4310 + t4322;
  t4393 = -4.817066759205414e-7*var1[16];
  t4402 = -0.0144017649144554*t4196;
  t4407 = 0.190987300194*t4404;
  t4409 = t4393 + t4402 + t4407;
  t4773 = t4262*t4705;
  t4776 = t4269*t4728;
  t4783 = t4285*t4742;
  t4784 = t4773 + t4776 + t4783;
  t4796 = t4343*t4705;
  t4799 = t4355*t4728;
  t4831 = t4368*t4742;
  t4861 = t4796 + t4799 + t4831;
  t4463 = -0.010926102783999999*t4196;
  t4482 = 1. + t4463;
  t4872 = t4412*t4705;
  t4881 = t4424*t4728;
  t4885 = t4431*t4742;
  t4887 = t4872 + t4881 + t4885;
  t4519 = -0.9890740084840001*t4196;
  t4520 = 1. + t4519;
  t4544 = -1.0000001112680001*t4196;
  t4554 = 1. + t4544;
  t5108 = -1.*t673*t2720*t2548;
  t5116 = t2122*t673*t2839;
  t5132 = t5108 + t5116;
  t5144 = t2122*t673*t2720;
  t5194 = t673*t2548*t2839;
  t5209 = t5144 + t5194;
  t5235 = -1.*t3473*t2752;
  t5245 = 0.103955395616*t766*t5132;
  t5251 = t3790*t5209;
  t5267 = t5235 + t5245 + t5251;
  t5274 = -1.*t3334*t2752;
  t5279 = t4030*t5132;
  t5291 = 0.103955395616*t766*t5209;
  t5296 = t5274 + t5279 + t5291;
  t5302 = -1.*t4153*t2752;
  t5305 = t1687*t5132;
  t5314 = t1407*t5209;
  t5315 = t5302 + t5305 + t5314;
  t5318 = t4262*t5267;
  t5320 = t4269*t5296;
  t5323 = t4285*t5315;
  t5330 = t5318 + t5320 + t5323;
  t5339 = t4343*t5267;
  t5341 = t4355*t5296;
  t5351 = t4368*t5315;
  t5354 = t5339 + t5341 + t5351;
  t5363 = t4412*t5267;
  t5364 = t4424*t5296;
  t5369 = t4431*t5315;
  t5380 = t5363 + t5364 + t5369;
  p_output1[0]=0. + t2695*t2895 + t3190*t3223 + t3344*t3360 + t3501*t3531 + t3735*t3803 + t3934*t4092 + t4149*t4187 + t4245*t4302 + t4324*t4374 + t4409*t4443 + 0.272168*(0.103955395616*t4196*t4374 + t4302*t4404 + t4443*t4482) + 0.167144*(t4302*t4314 + 0.103955395616*t4196*t4443 + t4374*t4520) + 0.190987*(t4216*t4374 + t4234*t4443 + t4302*t4554) + t1811*t571*t673 + var1[0];
  p_output1[1]=0. + t2695*t4636 + t3190*t4644 + t3344*t4657 + t3501*t4668 + t3735*t4705 + t3934*t4728 + t4149*t4742 + t4245*t4784 + t4324*t4861 + t4409*t4887 + 0.167144*(t4314*t4784 + t4520*t4861 + 0.103955395616*t4196*t4887) + 0.190987*(t4554*t4784 + t4216*t4861 + t4234*t4887) + 0.272168*(t4404*t4784 + 0.103955395616*t4196*t4861 + t4482*t4887) + t1811*t2766*t673 + var1[1];
  p_output1[2]=0. - 1.*t1811*t2752 + t3344*t5132 + t3501*t5209 + t3735*t5267 + t3934*t5296 + t4149*t5315 + t4245*t5330 + t4324*t5354 + t4409*t5380 + 0.167144*(t4314*t5330 + t4520*t5354 + 0.103955395616*t4196*t5380) + 0.190987*(t4554*t5330 + t4216*t5354 + t4234*t5380) + 0.272168*(t4404*t5330 + 0.103955395616*t4196*t5354 + t4482*t5380) + t2695*t2720*t673 + t2839*t3190*t673 + var1[2];
}



void p_elbow_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
