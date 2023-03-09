/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_shoulder_yaw_src.h"

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
  double t905;
  double t19;
  double t2621;
  double t2622;
  double t2633;
  double t2781;
  double t2932;
  double t3114;
  double t2962;
  double t3151;
  double t472;
  double t578;
  double t583;
  double t2987;
  double t3156;
  double t3157;
  double t3262;
  double t3312;
  double t3376;
  double t4187;
  double t4188;
  double t4251;
  double t4313;
  double t444;
  double t3644;
  double t3734;
  double t3533;
  double t3544;
  double t3573;
  double t4106;
  double t4117;
  double t4131;
  double t4304;
  double t3506;
  double t3509;
  double t4729;
  double t4411;
  double t1082;
  double t1098;
  double t1419;
  double t1572;
  double t5182;
  double t4508;
  double t4556;
  double t4561;
  double t4565;
  double t4585;
  double t4592;
  double t5076;
  double t4947;
  double t4962;
  double t4971;
  double t4977;
  double t4984;
  double t4987;
  double t5243;
  double t5374;
  double t5448;
  double t5479;
  double t5531;
  double t5627;
  double t4331;
  double t5704;
  double t4430;
  double t5912;
  double t4901;
  double t5748;
  double t4836;
  double t666;
  double t1127;
  double t2126;
  double t2357;
  double t2661;
  double t2863;
  double t2869;
  double t3225;
  double t3246;
  double t3253;
  double t3442;
  double t3450;
  double t3516;
  double t3519;
  double t6301;
  double t6303;
  double t6306;
  double t6323;
  double t6330;
  double t6339;
  double t3599;
  double t3600;
  double t3745;
  double t4086;
  double t4150;
  double t4273;
  double t4336;
  double t4366;
  double t4431;
  double t4432;
  double t4442;
  double t6362;
  double t6365;
  double t6369;
  double t6380;
  double t6386;
  double t6402;
  double t4693;
  double t4699;
  double t4872;
  double t4874;
  double t4906;
  double t4921;
  double t4935;
  double t5036;
  double t5041;
  double t5153;
  double t5156;
  double t5197;
  double t5205;
  double t5237;
  double t5706;
  double t6409;
  double t6410;
  double t6413;
  double t6426;
  double t5780;
  double t6448;
  double t6460;
  double t6461;
  double t6465;
  double t5818;
  double t5828;
  double t6479;
  double t6486;
  double t6493;
  double t6498;
  double t5891;
  double t5894;
  double t5925;
  double t5964;
  double t6082;
  double t6091;
  double t6112;
  double t6149;
  double t6636;
  double t6645;
  double t6647;
  double t6654;
  double t6657;
  double t6658;
  double t6670;
  double t6671;
  double t6674;
  double t6678;
  double t6696;
  double t6700;
  double t6704;
  double t6705;
  double t6713;
  double t6714;
  double t6718;
  double t6729;
  t905 = Sin(var1[25]);
  t19 = Cos(var1[3]);
  t2621 = Cos(var1[24]);
  t2622 = -1.*t2621;
  t2633 = 1. + t2622;
  t2781 = Sin(var1[24]);
  t2932 = Cos(var1[5]);
  t3114 = Sin(var1[3]);
  t2962 = Sin(var1[4]);
  t3151 = Sin(var1[5]);
  t472 = Cos(var1[25]);
  t578 = -1.*t472;
  t583 = 1. + t578;
  t2987 = t19*t2932*t2962;
  t3156 = t3114*t3151;
  t3157 = t2987 + t3156;
  t3262 = -1.*t2932*t3114;
  t3312 = t19*t2962*t3151;
  t3376 = t3262 + t3312;
  t4187 = Cos(var1[26]);
  t4188 = -1.*t4187;
  t4251 = 1. + t4188;
  t4313 = Sin(var1[26]);
  t444 = Cos(var1[4]);
  t3644 = -0.994522*t905;
  t3734 = 0. + t3644;
  t3533 = -1.*t2781*t3157;
  t3544 = t2621*t3376;
  t3573 = t3533 + t3544;
  t4106 = t2621*t3157;
  t4117 = t2781*t3376;
  t4131 = t4106 + t4117;
  t4304 = -0.051978134642000004*t4251;
  t3506 = -0.104528*t905;
  t3509 = 0. + t3506;
  t4729 = 0.05226439969100001*t4251;
  t4411 = 0.49726168403800003*t4251;
  t1082 = 0.104528*t905;
  t1098 = 0. + t1082;
  t1419 = 0.994522*t905;
  t1572 = 0. + t1419;
  t5182 = 0.073913*t4313;
  t4508 = t19*t444*t3734;
  t4556 = -0.103955395616*t583*t3573;
  t4561 = -0.9890740084840001*t583;
  t4565 = 1. + t4561;
  t4585 = t4565*t4131;
  t4592 = t4508 + t4556 + t4585;
  t5076 = -0.703234*t4313;
  t4947 = t19*t444*t3509;
  t4962 = -0.010926102783999999*t583;
  t4971 = 1. + t4962;
  t4977 = t4971*t3573;
  t4984 = -0.103955395616*t583*t4131;
  t4987 = t4947 + t4977 + t4984;
  t5243 = -1.0000001112680001*t583;
  t5374 = 1. + t5243;
  t5448 = t5374*t19*t444;
  t5479 = t1098*t3573;
  t5531 = t1572*t4131;
  t5627 = t5448 + t5479 + t5531;
  t4331 = -0.707107*t4313;
  t5704 = -0.49726168403800003*t4251;
  t4430 = -0.073913*t4313;
  t5912 = 0.051978134642000004*t4251;
  t4901 = 0.707107*t4313;
  t5748 = -0.05226439969100001*t4251;
  t4836 = 0.703234*t4313;
  t666 = -0.056500534356700764*t583;
  t1127 = 0.040271188976*t1098;
  t2126 = 0.38315650737400003*t1572;
  t2357 = 0. + t666 + t1127 + t2126;
  t2661 = 0.4*t2633;
  t2863 = -0.12*t2781;
  t2869 = 0. + t2661 + t2863;
  t3225 = -0.12*t2633;
  t3246 = -0.4*t2781;
  t3253 = 0. + t3225 + t3246;
  t3442 = 1.1345904784751044e-7*var1[25];
  t3450 = 0.04027119345689465*t583;
  t3516 = -0.05650052807*t3509;
  t3519 = t3442 + t3450 + t3516;
  t6301 = t2932*t3114*t2962;
  t6303 = -1.*t19*t3151;
  t6306 = t6301 + t6303;
  t6323 = t19*t2932;
  t6330 = t3114*t2962*t3151;
  t6339 = t6323 + t6330;
  t3599 = -1.1924972351948546e-8*var1[25];
  t3600 = 0.38315655000705834*t583;
  t3745 = -0.05650052807*t3734;
  t4086 = t3599 + t3600 + t3745;
  t4150 = 1.5601527583902087e-7*var1[26];
  t4273 = 0.09582494577057615*t4251;
  t4336 = t4304 + t4331;
  t4366 = -0.231098203479*t4336;
  t4431 = t4411 + t4430;
  t4432 = 0.164383620275*t4431;
  t4442 = t4150 + t4273 + t4366 + t4432;
  t6362 = -1.*t2781*t6306;
  t6365 = t2621*t6339;
  t6369 = t6362 + t6365;
  t6380 = t2621*t6306;
  t6386 = t2781*t6339;
  t6402 = t6380 + t6386;
  t4693 = 1.639789470231751e-8*var1[26];
  t4699 = -0.22983603018311177*t4251;
  t4872 = t4729 + t4836;
  t4874 = 0.164383620275*t4872;
  t4906 = t4304 + t4901;
  t4921 = 0.18957839082800002*t4906;
  t4935 = t4693 + t4699 + t4874 + t4921;
  t5036 = -1.568745163810375e-7*var1[26];
  t5041 = 0.08219200580743281*t4251;
  t5153 = t4729 + t5076;
  t5156 = -0.231098203479*t5153;
  t5197 = t4411 + t5182;
  t5205 = 0.18957839082800002*t5197;
  t5237 = t5036 + t5041 + t5156 + t5205;
  t5706 = t5704 + t5182;
  t6409 = t444*t3734*t3114;
  t6410 = -0.103955395616*t583*t6369;
  t6413 = t4565*t6402;
  t6426 = t6409 + t6410 + t6413;
  t5780 = t5748 + t5076;
  t6448 = t444*t3509*t3114;
  t6460 = t4971*t6369;
  t6461 = -0.103955395616*t583*t6402;
  t6465 = t6448 + t6460 + t6461;
  t5818 = -0.500001190325*t4251;
  t5828 = 1. + t5818;
  t6479 = t5374*t444*t3114;
  t6486 = t1098*t6369;
  t6493 = t1572*t6402;
  t6498 = t6479 + t6486 + t6493;
  t5891 = -0.5054634410180001*t4251;
  t5894 = 1. + t5891;
  t5925 = t5912 + t4331;
  t5964 = t5704 + t4430;
  t6082 = t5912 + t4901;
  t6091 = -0.9945383682050002*t4251;
  t6112 = 1. + t6091;
  t6149 = t5748 + t4836;
  t6636 = -1.*t444*t2932*t2781;
  t6645 = t2621*t444*t3151;
  t6647 = t6636 + t6645;
  t6654 = t2621*t444*t2932;
  t6657 = t444*t2781*t3151;
  t6658 = t6654 + t6657;
  t6670 = -1.*t3734*t2962;
  t6671 = -0.103955395616*t583*t6647;
  t6674 = t4565*t6658;
  t6678 = t6670 + t6671 + t6674;
  t6696 = -1.*t3509*t2962;
  t6700 = t4971*t6647;
  t6704 = -0.103955395616*t583*t6658;
  t6705 = t6696 + t6700 + t6704;
  t6713 = -1.*t5374*t2962;
  t6714 = t1098*t6647;
  t6718 = t1572*t6658;
  t6729 = t6713 + t6714 + t6718;
  p_output1[0]=0. + t2869*t3157 + t3253*t3376 + t3519*t3573 + t4086*t4131 + t19*t2357*t444 + t4442*t4592 + t4935*t4987 + t5237*t5627 + 0.140811*(t4592*t5706 + t4987*t5780 + t5627*t5828) + 0.213182*(t4592*t5894 + t4987*t5925 + t5627*t5964) - 0.230568*(t4592*t6082 + t4987*t6112 + t5627*t6149) + var1[0];
  p_output1[1]=0. + t2357*t3114*t444 + t2869*t6306 + t3253*t6339 + t3519*t6369 + t4086*t6402 + t4442*t6426 + t4935*t6465 + t5237*t6498 + 0.140811*(t5706*t6426 + t5780*t6465 + t5828*t6498) + 0.213182*(t5894*t6426 + t5925*t6465 + t5964*t6498) - 0.230568*(t6082*t6426 + t6112*t6465 + t6149*t6498) + var1[1];
  p_output1[2]=0. - 1.*t2357*t2962 + t2869*t2932*t444 + t3151*t3253*t444 + t3519*t6647 + t4086*t6658 + t4442*t6678 + t4935*t6705 + t5237*t6729 + 0.140811*(t5706*t6678 + t5780*t6705 + t5828*t6729) + 0.213182*(t5894*t6678 + t5925*t6705 + t5964*t6729) - 0.230568*(t6082*t6678 + t6112*t6705 + t6149*t6729) + var1[2];
}



void p_right_shoulder_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
