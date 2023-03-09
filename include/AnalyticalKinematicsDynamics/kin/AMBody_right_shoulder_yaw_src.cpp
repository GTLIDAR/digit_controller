/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:22:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_right_shoulder_yaw_src.h"

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
  double t167;
  double t214;
  double t444;
  double t673;
  double t609;
  double t463;
  double t468;
  double t594;
  double t674;
  double t694;
  double t722;
  double t847;
  double t873;
  double t981;
  double t1153;
  double t1212;
  double t1545;
  double t2614;
  double t1226;
  double t1287;
  double t1435;
  double t1580;
  double t1861;
  double t1926;
  double t1965;
  double t1967;
  double t2022;
  double t2196;
  double t2624;
  double t2695;
  double t2729;
  double t2741;
  double t2838;
  double t2881;
  double t3023;
  double t3037;
  double t3055;
  double t3061;
  double t3143;
  double t3149;
  double t3169;
  double t3170;
  double t3173;
  double t3199;
  double t3202;
  double t3215;
  double t3259;
  double t3502;
  double t3382;
  double t3386;
  double t3390;
  double t3427;
  double t3437;
  double t3444;
  double t3457;
  double t3462;
  double t3375;
  double t3507;
  double t3543;
  double t3547;
  double t3575;
  double t3580;
  double t3581;
  double t3603;
  double t3659;
  double t3292;
  double t3301;
  double t3307;
  double t3320;
  double t3347;
  double t3703;
  double t3707;
  double t3711;
  double t3485;
  double t3672;
  double t3678;
  double t3712;
  double t3896;
  double t3901;
  double t3933;
  double t3937;
  double t3938;
  double t3946;
  double t3983;
  double t3986;
  double t3987;
  double t4037;
  double t4038;
  double t4041;
  double t4062;
  double t4078;
  double t4084;
  double t4085;
  double t4087;
  double t4012;
  double t4013;
  double t4030;
  double t4034;
  double t3788;
  double t3818;
  double t4130;
  double t4153;
  double t4157;
  double t4071;
  double t4088;
  double t4108;
  double t4249;
  double t4251;
  double t4254;
  double t4264;
  double t4272;
  double t4275;
  double t4316;
  double t4318;
  double t4335;
  double t4497;
  double t4505;
  double t4520;
  double t4530;
  double t4549;
  double t4562;
  double t4566;
  double t4568;
  double t4391;
  double t4410;
  double t4423;
  double t4495;
  double t4580;
  double t4597;
  double t4607;
  double t4533;
  double t4569;
  double t4570;
  double t3880;
  double t3934;
  double t3958;
  double t3972;
  double t3981;
  double t3982;
  double t3991;
  double t3999;
  double t4006;
  double t4010;
  double t4036;
  double t4113;
  double t4165;
  double t4185;
  double t4193;
  double t4201;
  double t4207;
  double t4208;
  double t4209;
  double t4211;
  double t4214;
  double t4215;
  double t4217;
  double t4238;
  double t4256;
  double t4277;
  double t4289;
  double t4290;
  double t4308;
  double t4353;
  double t4359;
  double t4372;
  double t4390;
  double t4496;
  double t4579;
  double t4622;
  double t4624;
  double t4630;
  double t4631;
  double t4634;
  double t4635;
  double t4643;
  double t4646;
  double t4657;
  double t4661;
  double t4665;
  t167 = Cos(var1[26]);
  t214 = -1.*t167;
  t444 = 1. + t214;
  t673 = Sin(var1[26]);
  t609 = 0.051978134642000004*t444;
  t463 = -0.9945383682050002*t444;
  t468 = 1. + t463;
  t594 = 0.073913*t468;
  t674 = -0.707107*t673;
  t694 = t609 + t674;
  t722 = 0.703234*t694;
  t847 = -0.05226439969100001*t444;
  t873 = -0.703234*t673;
  t981 = t847 + t873;
  t1153 = 0.707107*t981;
  t1212 = t594 + t722 + t1153;
  t1545 = -0.49726168403800003*t444;
  t2614 = Sin(var1[25]);
  t1226 = -0.5054634410180001*t444;
  t1287 = 1. + t1226;
  t1435 = 0.703234*t1287;
  t1580 = 0.073913*t673;
  t1861 = t1545 + t1580;
  t1926 = 0.707107*t1861;
  t1965 = 0.707107*t673;
  t1967 = t609 + t1965;
  t2022 = 0.073913*t1967;
  t2196 = t1435 + t1926 + t2022;
  t2624 = -0.104528*t2614;
  t2695 = 0. + t2624;
  t2729 = Cos(var1[25]);
  t2741 = -1.*t2729;
  t2838 = 1. + t2741;
  t2881 = -1.0000001112680001*t2838;
  t3023 = 1. + t2881;
  t3037 = -0.500001190325*t444;
  t3055 = 1. + t3037;
  t3061 = 0.707107*t3055;
  t3143 = -0.073913*t673;
  t3149 = t1545 + t3143;
  t3169 = 0.703234*t3149;
  t3170 = 0.703234*t673;
  t3173 = t847 + t3170;
  t3199 = 0.073913*t3173;
  t3202 = t3061 + t3169 + t3199;
  t3215 = -0.994522*t2614;
  t3259 = 0. + t3215;
  t3502 = Cos(var1[24]);
  t3382 = -0.103955395616*t2838*t1212;
  t3386 = 0.994522*t2614;
  t3390 = 0. + t3386;
  t3427 = t3390*t3202;
  t3437 = -0.9890740084840001*t2838;
  t3444 = 1. + t3437;
  t3457 = t3444*t2196;
  t3462 = 0. + t3382 + t3427 + t3457;
  t3375 = Sin(var1[24]);
  t3507 = -0.010926102783999999*t2838;
  t3543 = 1. + t3507;
  t3547 = t3543*t1212;
  t3575 = 0.104528*t2614;
  t3580 = 0. + t3575;
  t3581 = t3580*t3202;
  t3603 = -0.103955395616*t2838*t2196;
  t3659 = 0. + t3547 + t3581 + t3603;
  t3292 = t2695*t1212;
  t3301 = t3023*t3202;
  t3307 = t3259*t2196;
  t3320 = 0. + t3292 + t3301 + t3307;
  t3347 = Cos(var1[5]);
  t3703 = t3502*t3462;
  t3707 = -1.*t3375*t3659;
  t3711 = 0. + t3703 + t3707;
  t3485 = t3375*t3462;
  t3672 = t3502*t3659;
  t3678 = 0. + t3485 + t3672;
  t3712 = Sin(var1[5]);
  t3896 = -0.994522*t468;
  t3901 = 0.104528*t694;
  t3933 = t3896 + t3901;
  t3937 = 0.104528*t1287;
  t3938 = -0.994522*t1967;
  t3946 = t3937 + t3938;
  t3983 = 0.104528*t3149;
  t3986 = -0.994522*t3173;
  t3987 = t3983 + t3986;
  t4037 = -0.103955395616*t2838*t3933;
  t4038 = t3390*t3987;
  t4041 = t3444*t3946;
  t4062 = 0. + t4037 + t4038 + t4041;
  t4078 = t3543*t3933;
  t4084 = t3580*t3987;
  t4085 = -0.103955395616*t2838*t3946;
  t4087 = 0. + t4078 + t4084 + t4085;
  t4012 = t2695*t3933;
  t4013 = t3023*t3987;
  t4030 = t3259*t3946;
  t4034 = 0. + t4012 + t4013 + t4030;
  t3788 = Sin(var1[4]);
  t3818 = Cos(var1[4]);
  t4130 = t3502*t4062;
  t4153 = -1.*t3375*t4087;
  t4157 = 0. + t4130 + t4153;
  t4071 = t3375*t4062;
  t4088 = t3502*t4087;
  t4108 = 0. + t4071 + t4088;
  t4249 = -0.073913*t468;
  t4251 = -0.703234*t694;
  t4254 = t4249 + t4251 + t1153;
  t4264 = -0.703234*t1287;
  t4272 = -0.073913*t1967;
  t4275 = t4264 + t1926 + t4272;
  t4316 = -0.703234*t3149;
  t4318 = -0.073913*t3173;
  t4335 = t3061 + t4316 + t4318;
  t4497 = -0.103955395616*t2838*t4254;
  t4505 = t3390*t4335;
  t4520 = t3444*t4275;
  t4530 = 0. + t4497 + t4505 + t4520;
  t4549 = t3543*t4254;
  t4562 = t3580*t4335;
  t4566 = -0.103955395616*t2838*t4275;
  t4568 = 0. + t4549 + t4562 + t4566;
  t4391 = t2695*t4254;
  t4410 = t3023*t4335;
  t4423 = t3259*t4275;
  t4495 = 0. + t4391 + t4410 + t4423;
  t4580 = t3502*t4530;
  t4597 = -1.*t3375*t4568;
  t4607 = 0. + t4580 + t4597;
  t4533 = t3375*t4530;
  t4569 = t3502*t4568;
  t4570 = 0. + t4533 + t4569;
  t3880 = 4.610340000044122e-7*var2[26];
  t3934 = -0.994522*t3933;
  t3958 = 0.104528*t3946;
  t3972 = 0. + t3934 + t3958;
  t3981 = var2[25]*t3972;
  t3982 = -1.*t2695*t3933;
  t3991 = -1.*t3023*t3987;
  t3999 = -1.*t3259*t3946;
  t4006 = 0. + t3982 + t3991 + t3999;
  t4010 = var2[24]*t4006;
  t4036 = var2[5]*t4034;
  t4113 = t3347*t4108;
  t4165 = -1.*t4157*t3712;
  t4185 = 0. + t4113 + t4165;
  t4193 = var2[4]*t4185;
  t4201 = -1.*t4034*t3788;
  t4207 = t3347*t4157;
  t4208 = t4108*t3712;
  t4209 = 0. + t4207 + t4208;
  t4211 = t3818*t4209;
  t4214 = 0. + t4201 + t4211;
  t4215 = var2[3]*t4214;
  t4217 = t3880 + t3981 + t4010 + t4036 + t4193 + t4215;
  t4238 = 1.000001499774*var2[26];
  t4256 = -0.994522*t4254;
  t4277 = 0.104528*t4275;
  t4289 = 0. + t4256 + t4277;
  t4290 = var2[25]*t4289;
  t4308 = -1.*t2695*t4254;
  t4353 = -1.*t3023*t4335;
  t4359 = -1.*t3259*t4275;
  t4372 = 0. + t4308 + t4353 + t4359;
  t4390 = var2[24]*t4372;
  t4496 = var2[5]*t4495;
  t4579 = t3347*t4570;
  t4622 = -1.*t4607*t3712;
  t4624 = 0. + t4579 + t4622;
  t4630 = var2[4]*t4624;
  t4631 = -1.*t4495*t3788;
  t4634 = t3347*t4607;
  t4635 = t4570*t3712;
  t4643 = 0. + t4634 + t4635;
  t4646 = t3818*t4643;
  t4657 = 0. + t4631 + t4646;
  t4661 = var2[3]*t4657;
  t4665 = t4238 + t4290 + t4390 + t4496 + t4630 + t4661;
  p_output1[0]=0.00697*((0. - 1.*t3320*t3788 + (0. + t3347*t3711 + t3678*t3712)*t3818)*var2[3] + (0. + t3347*t3678 - 1.*t3711*t3712)*var2[4] + t3320*var2[5] + (0. - 1.*t1212*t2695 - 1.*t3023*t3202 - 1.*t2196*t3259)*var2[24] + (0. - 0.994522*t1212 + 0.104528*t2196)*var2[25] - 8.80875999975661e-7*var2[26]);
  p_output1[1]=0.007*t4217 - 0.00002*t4665;
  p_output1[2]=-0.00002*t4217 + 0.00067*t4665;
}



void AMBody_right_shoulder_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
