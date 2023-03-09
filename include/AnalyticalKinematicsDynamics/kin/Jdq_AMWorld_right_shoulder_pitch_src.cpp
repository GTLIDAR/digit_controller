/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_right_shoulder_pitch_src.h"

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
  double t28;
  double t1177;
  double t1363;
  double t1364;
  double t1100;
  double t1696;
  double t1804;
  double t1813;
  double t1850;
  double t1901;
  double t1375;
  double t1421;
  double t1547;
  double t1593;
  double t1673;
  double t2015;
  double t62;
  double t74;
  double t144;
  double t248;
  double t793;
  double t833;
  double t934;
  double t2712;
  double t2752;
  double t2781;
  double t2798;
  double t2803;
  double t2918;
  double t2987;
  double t3133;
  double t3160;
  double t3225;
  double t3228;
  double t3232;
  double t2274;
  double t3562;
  double t3609;
  double t3600;
  double t3644;
  double t3673;
  double t3913;
  double t4028;
  double t4037;
  double t3793;
  double t4086;
  double t4106;
  double t4141;
  double t4150;
  double t4251;
  double t126;
  double t472;
  double t733;
  double t822;
  double t1688;
  double t2016;
  double t2023;
  double t2126;
  double t2167;
  double t2171;
  double t2231;
  double t2281;
  double t2325;
  double t2357;
  double t2499;
  double t2574;
  double t2596;
  double t2634;
  double t4636;
  double t4699;
  double t4768;
  double t4836;
  double t4872;
  double t4874;
  double t2653;
  double t2654;
  double t2695;
  double t2702;
  double t2972;
  double t3246;
  double t3261;
  double t3262;
  double t3290;
  double t3297;
  double t3299;
  double t3376;
  double t3409;
  double t3427;
  double t3474;
  double t3573;
  double t4131;
  double t4304;
  double t4313;
  double t4430;
  double t4431;
  double t4441;
  double t4442;
  double t4556;
  double t4592;
  double t4612;
  double t4614;
  double t4825;
  double t4901;
  double t4902;
  double t4971;
  double t4984;
  double t4987;
  double t5018;
  double t5041;
  double t5076;
  double t5153;
  double t5156;
  double t5386;
  double t5402;
  double t5427;
  double t5456;
  double t5479;
  double t2541;
  double t3513;
  double t3516;
  double t5834;
  double t5848;
  double t5864;
  double t5876;
  double t5891;
  double t5894;
  double t5865;
  double t5900;
  double t5912;
  double t6010;
  double t6013;
  double t6035;
  double t4508;
  double t5182;
  double t5197;
  double t5237;
  double t5831;
  double t5942;
  double t6063;
  double t6082;
  double t6091;
  double t6112;
  double t6134;
  double t6149;
  double t5658;
  double t5693;
  double t5704;
  double t6288;
  double t6298;
  double t6300;
  double t6301;
  double t6303;
  double t6375;
  double t6380;
  double t6386;
  double t6405;
  double t6409;
  double t6410;
  double t6366;
  double t6402;
  double t6413;
  double t6426;
  double t6440;
  double t6448;
  double t6460;
  double t6461;
  double t6476;
  double t6477;
  double t6479;
  double t6486;
  double t6493;
  double t4418;
  double t4444;
  double t4453;
  double t6530;
  double t6540;
  double t6561;
  double t6570;
  double t6573;
  double t6574;
  double t5312;
  double t5364;
  double t5531;
  double t6592;
  double t6610;
  double t6611;
  double t5706;
  double t5748;
  double t5780;
  double t6569;
  double t6578;
  double t6583;
  double t6085;
  double t6154;
  double t6166;
  double t6590;
  double t6614;
  double t6616;
  double t6623;
  double t6230;
  double t6242;
  double t6306;
  double t6631;
  double t6635;
  double t6636;
  double t6323;
  double t6330;
  double t6339;
  double t6500;
  double t6501;
  double t6502;
  double t6510;
  double t6516;
  double t6521;
  double t6430;
  double t6465;
  double t6498;
  double t6676;
  double t6678;
  double t6679;
  double t6700;
  double t6704;
  double t6705;
  double t6707;
  double t6713;
  double t6714;
  double t6718;
  double t6779;
  double t6784;
  double t6786;
  double t6792;
  double t6794;
  double t6830;
  double t6791;
  double t6798;
  double t6805;
  double t6812;
  double t6831;
  double t6854;
  double t6855;
  double t6860;
  double t6865;
  double t6867;
  t28 = Sin(var1[25]);
  t1177 = Cos(var1[25]);
  t1363 = -1.*t1177;
  t1364 = 1. + t1363;
  t1100 = Cos(var1[24]);
  t1696 = -0.010926102783999999*t1364;
  t1804 = 1. + t1696;
  t1813 = 0.994522*t1804;
  t1850 = 0.010866249592949247*t1364;
  t1901 = t1813 + t1850;
  t1375 = -0.9890740084840001*t1364;
  t1421 = 1. + t1375;
  t1547 = -0.104528*t1421;
  t1593 = -0.10338592795881554*t1364;
  t1673 = t1547 + t1593;
  t2015 = Sin(var1[24]);
  t62 = -0.994522*t28;
  t74 = 0. + t62;
  t144 = -0.104528*t28;
  t248 = 0. + t144;
  t793 = Sin(var1[4]);
  t833 = Cos(var1[4]);
  t934 = Cos(var1[5]);
  t2712 = -0.073913*t1804;
  t2752 = 0.07310496868062215*t1364;
  t2781 = 0.104528*t28;
  t2798 = 0. + t2781;
  t2803 = 0.707107*t2798;
  t2918 = t2712 + t2752 + t2803;
  t2987 = -0.703234*t1421;
  t3133 = 0.007683655156165408*t1364;
  t3160 = 0.994522*t28;
  t3225 = 0. + t3160;
  t3228 = 0.707107*t3225;
  t3232 = t2987 + t3133 + t3228;
  t2274 = Sin(var1[5]);
  t3562 = Cos(var1[3]);
  t3609 = Sin(var1[3]);
  t3600 = t3562*t934*t793;
  t3644 = t3609*t2274;
  t3673 = t3600 + t3644;
  t3913 = -1.*t934*t3609;
  t4028 = t3562*t793*t2274;
  t4037 = t3913 + t4028;
  t3793 = -1.*t2015*t3673;
  t4086 = t1100*t4037;
  t4106 = t3793 + t4086;
  t4141 = t1100*t3673;
  t4150 = t2015*t4037;
  t4251 = t4141 + t4150;
  t126 = -0.104528*t74;
  t472 = 0.994522*t248;
  t733 = 0. + t126 + t472;
  t822 = -1.*t733*t793;
  t1688 = t1100*t1673;
  t2016 = -1.*t1901*t2015;
  t2023 = 0. + t1688 + t2016;
  t2126 = t934*t2023;
  t2167 = t1100*t1901;
  t2171 = t1673*t2015;
  t2231 = 0. + t2167 + t2171;
  t2281 = t2231*t2274;
  t2325 = 0. + t2126 + t2281;
  t2357 = t833*t2325;
  t2499 = 0. + t822 + t2357;
  t2574 = -1.0000001112680001*t1364;
  t2596 = 1. + t2574;
  t2634 = 0.707107*t2596;
  t4636 = 0.073913*t1804;
  t4699 = -0.07310496868062215*t1364;
  t4768 = t4636 + t4699 + t2803;
  t4836 = 0.703234*t1421;
  t4872 = -0.007683655156165408*t1364;
  t4874 = t4836 + t4872 + t3228;
  t2653 = -0.703234*t74;
  t2654 = -0.073913*t248;
  t2695 = 0. + t2634 + t2653 + t2654;
  t2702 = -1.*t2695*t793;
  t2972 = -1.*t2015*t2918;
  t3246 = t1100*t3232;
  t3261 = 0. + t2972 + t3246;
  t3262 = t934*t3261;
  t3290 = t1100*t2918;
  t3297 = t2015*t3232;
  t3299 = 0. + t3290 + t3297;
  t3376 = t3299*t2274;
  t3409 = 0. + t3262 + t3376;
  t3427 = t833*t3409;
  t3474 = 0. + t2702 + t3427;
  t3573 = t3562*t833*t74;
  t4131 = -0.103955395616*t1364*t4106;
  t4304 = t1421*t4251;
  t4313 = t3573 + t4131 + t4304;
  t4430 = t3562*t833*t248;
  t4431 = t1804*t4106;
  t4441 = -0.103955395616*t1364*t4251;
  t4442 = t4430 + t4431 + t4441;
  t4556 = 0.703234*t74;
  t4592 = 0.073913*t248;
  t4612 = 0. + t2634 + t4556 + t4592;
  t4614 = -1.*t4612*t793;
  t4825 = -1.*t2015*t4768;
  t4901 = t1100*t4874;
  t4902 = 0. + t4825 + t4901;
  t4971 = t934*t4902;
  t4984 = t1100*t4768;
  t4987 = t2015*t4874;
  t5018 = 0. + t4984 + t4987;
  t5041 = t5018*t2274;
  t5076 = 0. + t4971 + t5041;
  t5153 = t833*t5076;
  t5156 = 0. + t4614 + t5153;
  t5386 = t2596*t3562*t833;
  t5402 = t2798*t4106;
  t5427 = t3225*t4251;
  t5456 = t5386 + t5402 + t5427;
  t5479 = 0.707107*t5456;
  t2541 = 0.00578*t2499;
  t3513 = 0.00205*t3474;
  t3516 = t2541 + t3513;
  t5834 = t934*t3609*t793;
  t5848 = -1.*t3562*t2274;
  t5864 = t5834 + t5848;
  t5876 = t3562*t934;
  t5891 = t3609*t793*t2274;
  t5894 = t5876 + t5891;
  t5865 = -1.*t2015*t5864;
  t5900 = t1100*t5894;
  t5912 = t5865 + t5900;
  t6010 = t1100*t5864;
  t6013 = t2015*t5894;
  t6035 = t6010 + t6013;
  t4508 = 0.00205*t2499;
  t5182 = 0.00001*t5156;
  t5197 = 0.00209*t3474;
  t5237 = t4508 + t5182 + t5197;
  t5831 = t833*t74*t3609;
  t5942 = -0.103955395616*t1364*t5912;
  t6063 = t1421*t6035;
  t6082 = t5831 + t5942 + t6063;
  t6091 = t833*t248*t3609;
  t6112 = t1804*t5912;
  t6134 = -0.103955395616*t1364*t6035;
  t6149 = t6091 + t6112 + t6134;
  t5658 = 0.00676*t5156;
  t5693 = 0.00001*t3474;
  t5704 = t5658 + t5693;
  t6288 = t2596*t833*t3609;
  t6298 = t2798*t5912;
  t6300 = t3225*t6035;
  t6301 = t6288 + t6298 + t6300;
  t6303 = 0.707107*t6301;
  t6375 = -1.*t833*t934*t2015;
  t6380 = t1100*t833*t2274;
  t6386 = t6375 + t6380;
  t6405 = t1100*t833*t934;
  t6409 = t833*t2015*t2274;
  t6410 = t6405 + t6409;
  t6366 = -1.*t74*t793;
  t6402 = -0.103955395616*t1364*t6386;
  t6413 = t1421*t6410;
  t6426 = t6366 + t6402 + t6413;
  t6440 = -1.*t248*t793;
  t6448 = t1804*t6386;
  t6460 = -0.103955395616*t1364*t6410;
  t6461 = t6440 + t6448 + t6460;
  t6476 = -1.*t2596*t793;
  t6477 = t2798*t6386;
  t6479 = t3225*t6410;
  t6486 = t6476 + t6477 + t6479;
  t6493 = 0.707107*t6486;
  t4418 = -0.104528*t4313;
  t4444 = 0.994522*t4442;
  t4453 = t4418 + t4444;
  t6530 = t934*t2231;
  t6540 = -1.*t2023*t2274;
  t6561 = 0. + t6530 + t6540;
  t6570 = t934*t3299;
  t6573 = -1.*t3261*t2274;
  t6574 = 0. + t6570 + t6573;
  t5312 = -0.703234*t4313;
  t5364 = -0.073913*t4442;
  t5531 = t5312 + t5364 + t5479;
  t6592 = t934*t5018;
  t6610 = -1.*t4902*t2274;
  t6611 = 0. + t6592 + t6610;
  t5706 = 0.703234*t4313;
  t5748 = 0.073913*t4442;
  t5780 = t5706 + t5748 + t5479;
  t6569 = 0.00578*t6561;
  t6578 = 0.00205*t6574;
  t6583 = t6569 + t6578;
  t6085 = -0.104528*t6082;
  t6154 = 0.994522*t6149;
  t6166 = t6085 + t6154;
  t6590 = 0.00205*t6561;
  t6614 = 0.00001*t6611;
  t6616 = 0.00209*t6574;
  t6623 = t6590 + t6614 + t6616;
  t6230 = -0.703234*t6082;
  t6242 = -0.073913*t6149;
  t6306 = t6230 + t6242 + t6303;
  t6631 = 0.00676*t6611;
  t6635 = 0.00001*t6574;
  t6636 = t6631 + t6635;
  t6323 = 0.703234*t6082;
  t6330 = 0.073913*t6149;
  t6339 = t6323 + t6330 + t6303;
  t6500 = -0.104528*t6426;
  t6501 = 0.994522*t6461;
  t6502 = t6500 + t6501;
  t6510 = -0.703234*t6426;
  t6516 = -0.073913*t6461;
  t6521 = t6510 + t6516 + t6493;
  t6430 = 0.703234*t6426;
  t6465 = 0.073913*t6461;
  t6498 = t6430 + t6465 + t6493;
  t6676 = 0.00205*t2695;
  t6678 = 0.00578*t733;
  t6679 = t6676 + t6678;
  t6700 = 0.00209*t2695;
  t6704 = 0.00001*t4612;
  t6705 = 0.00205*t733;
  t6707 = t6700 + t6704 + t6705;
  t6713 = 0.00001*t2695;
  t6714 = 0.00676*t4612;
  t6718 = t6713 + t6714;
  t6779 = 0.104528*t74;
  t6784 = -0.994522*t248;
  t6786 = 0. + t6779 + t6784;
  t6792 = -0.707107*t2596;
  t6794 = 0. + t6792 + t4556 + t4592;
  t6830 = 0. + t6792 + t2653 + t2654;
  t6791 = 0.00578*t6786;
  t6798 = 0.00205*t6794;
  t6805 = t6791 + t6798;
  t6812 = 0.00205*t6786;
  t6831 = 0.00001*t6830;
  t6854 = 0.00209*t6794;
  t6855 = t6812 + t6831 + t6854;
  t6860 = 0.00676*t6830;
  t6865 = 0.00001*t6794;
  t6867 = t6860 + t6865;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3516*t4453 + t5237*t5531 + t5704*t5780;
  p_output1[10]=t3516*t6166 + t5237*t6306 + t5704*t6339;
  p_output1[11]=t5704*t6498 + t3516*t6502 + t5237*t6521;
  p_output1[12]=t4453*t6583 + t5531*t6623 + t5780*t6636;
  p_output1[13]=t6166*t6583 + t6306*t6623 + t6339*t6636;
  p_output1[14]=t6502*t6583 + t6521*t6623 + t6498*t6636;
  p_output1[15]=t4453*t6679 + t5531*t6707 + t5780*t6718;
  p_output1[16]=t6166*t6679 + t6306*t6707 + t6339*t6718;
  p_output1[17]=t6502*t6679 + t6521*t6707 + t6498*t6718;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=t4453*t6805 + t5531*t6855 + t5780*t6867;
  p_output1[73]=t6166*t6805 + t6306*t6855 + t6339*t6867;
  p_output1[74]=t6502*t6805 + t6521*t6855 + t6498*t6867;
  p_output1[75]=-0.0057799996980093405*t4453 - 0.0020499992691486806*t5531 - 3.1119795000297823e-9*t5780;
  p_output1[76]=-0.0057799996980093405*t6166 - 0.0020499992691486806*t6306 - 3.1119795000297823e-9*t6339;
  p_output1[77]=-3.1119795000297823e-9*t6498 - 0.0057799996980093405*t6502 - 0.0020499992691486806*t6521;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jdq_AMWorld_right_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
