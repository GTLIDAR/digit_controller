/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_shoulder_yaw_joint_right_src.h"

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
  double t1323;
  double t56;
  double t1933;
  double t1971;
  double t1975;
  double t2095;
  double t2366;
  double t2557;
  double t2441;
  double t2579;
  double t554;
  double t673;
  double t693;
  double t2509;
  double t2606;
  double t2607;
  double t2831;
  double t2847;
  double t2853;
  double t3337;
  double t3358;
  double t3398;
  double t3542;
  double t491;
  double t3236;
  double t3243;
  double t2996;
  double t3112;
  double t3120;
  double t3294;
  double t3299;
  double t3301;
  double t3469;
  double t2931;
  double t2956;
  double t3757;
  double t3679;
  double t1378;
  double t1404;
  double t1430;
  double t1535;
  double t4115;
  double t3706;
  double t3718;
  double t3731;
  double t3736;
  double t3737;
  double t3738;
  double t4086;
  double t3836;
  double t3837;
  double t3840;
  double t3844;
  double t3845;
  double t3887;
  double t4187;
  double t4272;
  double t4313;
  double t4315;
  double t4335;
  double t4337;
  double t3592;
  double t4351;
  double t3690;
  double t4544;
  double t3794;
  double t4391;
  double t3767;
  double t895;
  double t1410;
  double t1544;
  double t1667;
  double t2017;
  double t2132;
  double t2315;
  double t2639;
  double t2745;
  double t2748;
  double t2885;
  double t2892;
  double t2978;
  double t2987;
  double t4779;
  double t4789;
  double t4794;
  double t4818;
  double t4819;
  double t4839;
  double t3157;
  double t3215;
  double t3245;
  double t3256;
  double t3316;
  double t3438;
  double t3629;
  double t3641;
  double t3692;
  double t3694;
  double t3704;
  double t4867;
  double t4892;
  double t4920;
  double t4977;
  double t4989;
  double t4996;
  double t3740;
  double t3744;
  double t3768;
  double t3783;
  double t3795;
  double t3801;
  double t3816;
  double t3961;
  double t3994;
  double t4088;
  double t4104;
  double t4155;
  double t4163;
  double t4178;
  double t4373;
  double t5025;
  double t5035;
  double t5045;
  double t5046;
  double t4413;
  double t5063;
  double t5088;
  double t5108;
  double t5110;
  double t4427;
  double t4428;
  double t5122;
  double t5132;
  double t5133;
  double t5146;
  double t4477;
  double t4503;
  double t4577;
  double t4606;
  double t4650;
  double t4700;
  double t4701;
  double t4716;
  double t5331;
  double t5333;
  double t5352;
  double t5360;
  double t5378;
  double t5410;
  double t5420;
  double t5427;
  double t5429;
  double t5431;
  double t5442;
  double t5447;
  double t5458;
  double t5467;
  double t5490;
  double t5496;
  double t5500;
  double t5501;
  t1323 = Sin(var1[25]);
  t56 = Cos(var1[3]);
  t1933 = Cos(var1[24]);
  t1971 = -1.*t1933;
  t1975 = 1. + t1971;
  t2095 = Sin(var1[24]);
  t2366 = Cos(var1[5]);
  t2557 = Sin(var1[3]);
  t2441 = Sin(var1[4]);
  t2579 = Sin(var1[5]);
  t554 = Cos(var1[25]);
  t673 = -1.*t554;
  t693 = 1. + t673;
  t2509 = t56*t2366*t2441;
  t2606 = t2557*t2579;
  t2607 = t2509 + t2606;
  t2831 = -1.*t2366*t2557;
  t2847 = t56*t2441*t2579;
  t2853 = t2831 + t2847;
  t3337 = Cos(var1[26]);
  t3358 = -1.*t3337;
  t3398 = 1. + t3358;
  t3542 = Sin(var1[26]);
  t491 = Cos(var1[4]);
  t3236 = -0.994522*t1323;
  t3243 = 0. + t3236;
  t2996 = -1.*t2095*t2607;
  t3112 = t1933*t2853;
  t3120 = t2996 + t3112;
  t3294 = t1933*t2607;
  t3299 = t2095*t2853;
  t3301 = t3294 + t3299;
  t3469 = -0.051978134642000004*t3398;
  t2931 = -0.104528*t1323;
  t2956 = 0. + t2931;
  t3757 = 0.05226439969100001*t3398;
  t3679 = 0.49726168403800003*t3398;
  t1378 = 0.104528*t1323;
  t1404 = 0. + t1378;
  t1430 = 0.994522*t1323;
  t1535 = 0. + t1430;
  t4115 = 0.073913*t3542;
  t3706 = t56*t491*t3243;
  t3718 = -0.103955395616*t693*t3120;
  t3731 = -0.9890740084840001*t693;
  t3736 = 1. + t3731;
  t3737 = t3736*t3301;
  t3738 = t3706 + t3718 + t3737;
  t4086 = -0.703234*t3542;
  t3836 = t56*t491*t2956;
  t3837 = -0.010926102783999999*t693;
  t3840 = 1. + t3837;
  t3844 = t3840*t3120;
  t3845 = -0.103955395616*t693*t3301;
  t3887 = t3836 + t3844 + t3845;
  t4187 = -1.0000001112680001*t693;
  t4272 = 1. + t4187;
  t4313 = t4272*t56*t491;
  t4315 = t1404*t3120;
  t4335 = t1535*t3301;
  t4337 = t4313 + t4315 + t4335;
  t3592 = -0.707107*t3542;
  t4351 = -0.49726168403800003*t3398;
  t3690 = -0.073913*t3542;
  t4544 = 0.051978134642000004*t3398;
  t3794 = 0.707107*t3542;
  t4391 = -0.05226439969100001*t3398;
  t3767 = 0.703234*t3542;
  t895 = -0.056500534356700764*t693;
  t1410 = 0.040271188976*t1404;
  t1544 = 0.38315650737400003*t1535;
  t1667 = 0. + t895 + t1410 + t1544;
  t2017 = 0.4*t1975;
  t2132 = -0.12*t2095;
  t2315 = 0. + t2017 + t2132;
  t2639 = -0.12*t1975;
  t2745 = -0.4*t2095;
  t2748 = 0. + t2639 + t2745;
  t2885 = 1.1345904784751044e-7*var1[25];
  t2892 = 0.04027119345689465*t693;
  t2978 = -0.05650052807*t2956;
  t2987 = t2885 + t2892 + t2978;
  t4779 = t2366*t2557*t2441;
  t4789 = -1.*t56*t2579;
  t4794 = t4779 + t4789;
  t4818 = t56*t2366;
  t4819 = t2557*t2441*t2579;
  t4839 = t4818 + t4819;
  t3157 = -1.1924972351948546e-8*var1[25];
  t3215 = 0.38315655000705834*t693;
  t3245 = -0.05650052807*t3243;
  t3256 = t3157 + t3215 + t3245;
  t3316 = 1.5601527583902087e-7*var1[26];
  t3438 = 0.09582494577057615*t3398;
  t3629 = t3469 + t3592;
  t3641 = -0.231098203479*t3629;
  t3692 = t3679 + t3690;
  t3694 = 0.164383620275*t3692;
  t3704 = t3316 + t3438 + t3641 + t3694;
  t4867 = -1.*t2095*t4794;
  t4892 = t1933*t4839;
  t4920 = t4867 + t4892;
  t4977 = t1933*t4794;
  t4989 = t2095*t4839;
  t4996 = t4977 + t4989;
  t3740 = 1.639789470231751e-8*var1[26];
  t3744 = -0.22983603018311177*t3398;
  t3768 = t3757 + t3767;
  t3783 = 0.164383620275*t3768;
  t3795 = t3469 + t3794;
  t3801 = 0.18957839082800002*t3795;
  t3816 = t3740 + t3744 + t3783 + t3801;
  t3961 = -1.568745163810375e-7*var1[26];
  t3994 = 0.08219200580743281*t3398;
  t4088 = t3757 + t4086;
  t4104 = -0.231098203479*t4088;
  t4155 = t3679 + t4115;
  t4163 = 0.18957839082800002*t4155;
  t4178 = t3961 + t3994 + t4104 + t4163;
  t4373 = t4351 + t4115;
  t5025 = t491*t3243*t2557;
  t5035 = -0.103955395616*t693*t4920;
  t5045 = t3736*t4996;
  t5046 = t5025 + t5035 + t5045;
  t4413 = t4391 + t4086;
  t5063 = t491*t2956*t2557;
  t5088 = t3840*t4920;
  t5108 = -0.103955395616*t693*t4996;
  t5110 = t5063 + t5088 + t5108;
  t4427 = -0.500001190325*t3398;
  t4428 = 1. + t4427;
  t5122 = t4272*t491*t2557;
  t5132 = t1404*t4920;
  t5133 = t1535*t4996;
  t5146 = t5122 + t5132 + t5133;
  t4477 = -0.5054634410180001*t3398;
  t4503 = 1. + t4477;
  t4577 = t4544 + t3592;
  t4606 = t4351 + t3690;
  t4650 = t4544 + t3794;
  t4700 = -0.9945383682050002*t3398;
  t4701 = 1. + t4700;
  t4716 = t4391 + t3767;
  t5331 = -1.*t491*t2366*t2095;
  t5333 = t1933*t491*t2579;
  t5352 = t5331 + t5333;
  t5360 = t1933*t491*t2366;
  t5378 = t491*t2095*t2579;
  t5410 = t5360 + t5378;
  t5420 = -1.*t3243*t2441;
  t5427 = -0.103955395616*t693*t5352;
  t5429 = t3736*t5410;
  t5431 = t5420 + t5427 + t5429;
  t5442 = -1.*t2956*t2441;
  t5447 = t3840*t5352;
  t5458 = -0.103955395616*t693*t5410;
  t5467 = t5442 + t5447 + t5458;
  t5490 = -1.*t4272*t2441;
  t5496 = t1404*t5352;
  t5500 = t1535*t5410;
  t5501 = t5490 + t5496 + t5500;
  p_output1[0]=0. + t2315*t2607 + t2748*t2853 + t2987*t3120 + t3256*t3301 + t3704*t3738 + t3816*t3887 + t4178*t4337 + 0.060173*(t3738*t4373 + t3887*t4413 + t4337*t4428) + 0.293218*(t3738*t4503 + t3887*t4577 + t4337*t4606) - 0.220205*(t3738*t4650 + t3887*t4701 + t4337*t4716) + t1667*t491*t56 + var1[0];
  p_output1[1]=0. + t2315*t4794 + t2748*t4839 + t1667*t2557*t491 + t2987*t4920 + t3256*t4996 + t3704*t5046 + t3816*t5110 + t4178*t5146 + 0.060173*(t4373*t5046 + t4413*t5110 + t4428*t5146) + 0.293218*(t4503*t5046 + t4577*t5110 + t4606*t5146) - 0.220205*(t4650*t5046 + t4701*t5110 + t4716*t5146) + var1[1];
  p_output1[2]=0. - 1.*t1667*t2441 + t2315*t2366*t491 + t2579*t2748*t491 + t2987*t5352 + t3256*t5410 + t3704*t5431 + t3816*t5467 + t4178*t5501 + 0.060173*(t4373*t5431 + t4413*t5467 + t4428*t5501) + 0.293218*(t4503*t5431 + t4577*t5467 + t4606*t5501) - 0.220205*(t4650*t5431 + t4701*t5467 + t4716*t5501) + var1[2];
}



void p_shoulder_yaw_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
