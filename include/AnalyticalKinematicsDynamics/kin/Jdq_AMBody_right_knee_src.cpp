/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:10:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_right_knee_src.h"

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
  double t911;
  double t912;
  double t931;
  double t882;
  double t1156;
  double t1939;
  double t1956;
  double t1959;
  double t965;
  double t1004;
  double t1016;
  double t1064;
  double t1198;
  double t1330;
  double t1343;
  double t1444;
  double t1598;
  double t1673;
  double t1679;
  double t1684;
  double t1851;
  double t1906;
  double t1926;
  double t1930;
  double t2170;
  double t2174;
  double t2177;
  double t2216;
  double t2281;
  double t2298;
  double t2300;
  double t2352;
  double t2387;
  double t2405;
  double t2589;
  double t889;
  double t901;
  double t1457;
  double t1519;
  double t1560;
  double t1934;
  double t1974;
  double t1995;
  double t2413;
  double t2416;
  double t204;
  double t322;
  double t679;
  double t2769;
  double t2815;
  double t2834;
  double t2879;
  double t2890;
  double t2995;
  double t3035;
  double t3036;
  double t3072;
  double t3088;
  double t3141;
  double t3282;
  double t3313;
  double t3351;
  double t3368;
  double t3381;
  double t3916;
  double t3846;
  double t3876;
  double t3878;
  double t3879;
  double t3881;
  double t3894;
  double t3898;
  double t3899;
  double t3820;
  double t3923;
  double t3927;
  double t3928;
  double t3930;
  double t3931;
  double t3932;
  double t3933;
  double t3935;
  double t713;
  double t715;
  double t2607;
  double t2759;
  double t4187;
  double t4197;
  double t4203;
  double t4218;
  double t4228;
  double t4238;
  double t4242;
  double t4243;
  double t4247;
  double t3047;
  double t3050;
  double t3752;
  double t3814;
  double t3818;
  double t4211;
  double t4240;
  double t4254;
  double t4257;
  double t4265;
  double t4284;
  double t4292;
  double t4320;
  double t4337;
  double t4344;
  double t4348;
  double t4355;
  double t4366;
  double t4372;
  double t4398;
  double t4412;
  double t4448;
  double t4449;
  double t4494;
  double t4496;
  double t4011;
  double t4638;
  double t4662;
  double t4669;
  double t4676;
  double t4678;
  double t4686;
  double t4696;
  double t4714;
  double t4735;
  double t4672;
  double t4690;
  double t4736;
  double t4738;
  double t4750;
  double t4755;
  double t4757;
  double t4762;
  double t4786;
  double t4796;
  double t4802;
  double t4823;
  double t4867;
  double t4872;
  double t4874;
  double t4876;
  double t4914;
  double t4916;
  double t4918;
  double t4924;
  double t2540;
  double t3039;
  double t3545;
  double t3560;
  double t3794;
  double t3902;
  double t3949;
  double t3953;
  double t3979;
  double t3987;
  double t3988;
  double t3995;
  double t4029;
  double t4042;
  double t4098;
  double t4132;
  double t4264;
  double t4332;
  double t4360;
  double t4363;
  double t4365;
  double t4414;
  double t4514;
  double t4516;
  double t4525;
  double t4539;
  double t4555;
  double t4565;
  double t4583;
  double t4584;
  double t4586;
  double t4603;
  double t4746;
  double t4782;
  double t4840;
  double t4841;
  double t4843;
  double t4900;
  double t4932;
  double t4933;
  double t4938;
  double t4942;
  double t4945;
  double t4948;
  double t4952;
  double t4974;
  double t4983;
  double t4990;
  double t5129;
  double t5149;
  double t5150;
  double t5155;
  double t5157;
  double t5165;
  double t5167;
  double t5171;
  double t5173;
  double t5320;
  double t5321;
  double t5330;
  double t5336;
  double t5348;
  double t5349;
  double t5350;
  double t5358;
  double t5375;
  double t5377;
  double t5379;
  double t5392;
  double t5441;
  double t5445;
  double t5447;
  double t5486;
  double t5491;
  double t5493;
  double t5500;
  double t5501;
  double t5504;
  double t5551;
  double t5555;
  double t5559;
  double t5580;
  double t5591;
  double t5615;
  double t5629;
  double t5634;
  double t5635;
  t911 = Cos(var1[20]);
  t912 = -1.*t911;
  t931 = 1. + t912;
  t882 = Sin(var1[19]);
  t1156 = Sin(var1[20]);
  t1939 = Cos(var1[19]);
  t1956 = -1.*t1939;
  t1959 = 1. + t1956;
  t965 = -0.8656776547239999*t931;
  t1004 = 1. + t965;
  t1016 = -0.657905*t1004;
  t1064 = 0.0883716288660118*t931;
  t1198 = -0.930418*t1156;
  t1330 = 0. + t1198;
  t1343 = -0.707107*t1330;
  t1444 = t1016 + t1064 + t1343;
  t1598 = -0.134322983001*t931;
  t1673 = 1. + t1598;
  t1679 = -0.259155*t1673;
  t1684 = 0.22434503092393926*t931;
  t1851 = -0.366501*t1156;
  t1906 = 0. + t1851;
  t1926 = -0.707107*t1906;
  t1930 = t1679 + t1684 + t1926;
  t2170 = -1.000000637725*t931;
  t2174 = 1. + t2170;
  t2177 = -0.707107*t2174;
  t2216 = 0.366501*t1156;
  t2281 = 0. + t2216;
  t2298 = -0.259155*t2281;
  t2300 = 0.930418*t1156;
  t2352 = 0. + t2300;
  t2387 = -0.657905*t2352;
  t2405 = t2177 + t2298 + t2387;
  t2589 = Sin(var1[18]);
  t889 = -0.930418*t882;
  t901 = 0. + t889;
  t1457 = t901*t1444;
  t1519 = -0.366501*t882;
  t1560 = 0. + t1519;
  t1934 = t1560*t1930;
  t1974 = -1.000000637725*t1959;
  t1995 = 1. + t1974;
  t2413 = t1995*t2405;
  t2416 = 0. + t1457 + t1934 + t2413;
  t204 = Cos(var1[18]);
  t322 = -1.*t204;
  t679 = 1. + t322;
  t2769 = -0.340999127418*t1959*t1444;
  t2815 = -0.134322983001*t1959;
  t2834 = 1. + t2815;
  t2879 = t2834*t1930;
  t2890 = 0.366501*t882;
  t2995 = 0. + t2890;
  t3035 = t2995*t2405;
  t3036 = 0. + t2769 + t2879 + t3035;
  t3072 = -0.8656776547239999*t1959;
  t3088 = 1. + t3072;
  t3141 = t3088*t1444;
  t3282 = -0.340999127418*t1959*t1930;
  t3313 = 0.930418*t882;
  t3351 = 0. + t3313;
  t3368 = t3351*t2405;
  t3381 = 0. + t3141 + t3282 + t3368;
  t3916 = Sin(var1[17]);
  t3846 = 0.366501*t2589;
  t3876 = 0. + t3846;
  t3878 = t3876*t2416;
  t3879 = 0.340999127418*t679*t3036;
  t3881 = -0.134322983001*t679;
  t3894 = 1. + t3881;
  t3898 = t3894*t3381;
  t3899 = 0. + t3878 + t3879 + t3898;
  t3820 = Cos(var1[17]);
  t3923 = -0.930418*t2589;
  t3927 = 0. + t3923;
  t3928 = t3927*t2416;
  t3930 = -0.8656776547239999*t679;
  t3931 = 1. + t3930;
  t3932 = t3931*t3036;
  t3933 = 0.340999127418*t679*t3381;
  t3935 = 0. + t3928 + t3932 + t3933;
  t713 = -1.000000637725*t679;
  t715 = 1. + t713;
  t2607 = 0.930418*t2589;
  t2759 = 0. + t2607;
  t4187 = -0.366501*t1004;
  t4197 = -0.3172717261340007*t931;
  t4203 = t4187 + t4197;
  t4218 = 0.930418*t1673;
  t4228 = 0.12497652119782442*t931;
  t4238 = t4218 + t4228;
  t4242 = 0.930418*t2281;
  t4243 = -0.366501*t2352;
  t4247 = t4242 + t4243;
  t3047 = -0.366501*t2589;
  t3050 = 0. + t3047;
  t3752 = Sin(var1[4]);
  t3814 = Cos(var1[4]);
  t3818 = Cos(var1[5]);
  t4211 = t4203*t901;
  t4240 = t4238*t1560;
  t4254 = t1995*t4247;
  t4257 = 0. + t4211 + t4240 + t4254;
  t4265 = -0.340999127418*t1959*t4203;
  t4284 = t2834*t4238;
  t4292 = t2995*t4247;
  t4320 = 0. + t4265 + t4284 + t4292;
  t4337 = t3088*t4203;
  t4344 = -0.340999127418*t1959*t4238;
  t4348 = t3351*t4247;
  t4355 = 0. + t4337 + t4344 + t4348;
  t4366 = t3876*t4257;
  t4372 = 0.340999127418*t679*t4320;
  t4398 = t3894*t4355;
  t4412 = 0. + t4366 + t4372 + t4398;
  t4448 = t3927*t4257;
  t4449 = t3931*t4320;
  t4494 = 0.340999127418*t679*t4355;
  t4496 = 0. + t4448 + t4449 + t4494;
  t4011 = Sin(var1[5]);
  t4638 = 0.657905*t1004;
  t4662 = -0.0883716288660118*t931;
  t4669 = t4638 + t4662 + t1343;
  t4676 = 0.259155*t1673;
  t4678 = -0.22434503092393926*t931;
  t4686 = t4676 + t4678 + t1926;
  t4696 = 0.259155*t2281;
  t4714 = 0.657905*t2352;
  t4735 = t2177 + t4696 + t4714;
  t4672 = t901*t4669;
  t4690 = t1560*t4686;
  t4736 = t1995*t4735;
  t4738 = 0. + t4672 + t4690 + t4736;
  t4750 = -0.340999127418*t1959*t4669;
  t4755 = t2834*t4686;
  t4757 = t2995*t4735;
  t4762 = 0. + t4750 + t4755 + t4757;
  t4786 = t3088*t4669;
  t4796 = -0.340999127418*t1959*t4686;
  t4802 = t3351*t4735;
  t4823 = 0. + t4786 + t4796 + t4802;
  t4867 = t3876*t4738;
  t4872 = 0.340999127418*t679*t4762;
  t4874 = t3894*t4823;
  t4876 = 0. + t4867 + t4872 + t4874;
  t4914 = t3927*t4738;
  t4916 = t3931*t4762;
  t4918 = 0.340999127418*t679*t4823;
  t4924 = 0. + t4914 + t4916 + t4918;
  t2540 = t715*t2416;
  t3039 = t2759*t3036;
  t3545 = t3050*t3381;
  t3560 = 0. + t2540 + t3039 + t3545;
  t3794 = -1.*t3560*t3752;
  t3902 = t3820*t3899;
  t3949 = -1.*t3916*t3935;
  t3953 = 0. + t3902 + t3949;
  t3979 = t3818*t3953;
  t3987 = t3916*t3899;
  t3988 = t3820*t3935;
  t3995 = 0. + t3987 + t3988;
  t4029 = t3995*t4011;
  t4042 = 0. + t3979 + t4029;
  t4098 = t3814*t4042;
  t4132 = 0. + t3794 + t4098;
  t4264 = t715*t4257;
  t4332 = t2759*t4320;
  t4360 = t3050*t4355;
  t4363 = 0. + t4264 + t4332 + t4360;
  t4365 = -1.*t4363*t3752;
  t4414 = t3820*t4412;
  t4514 = -1.*t3916*t4496;
  t4516 = 0. + t4414 + t4514;
  t4525 = t3818*t4516;
  t4539 = t3916*t4412;
  t4555 = t3820*t4496;
  t4565 = 0. + t4539 + t4555;
  t4583 = t4565*t4011;
  t4584 = 0. + t4525 + t4583;
  t4586 = t3814*t4584;
  t4603 = 0. + t4365 + t4586;
  t4746 = t715*t4738;
  t4782 = t2759*t4762;
  t4840 = t3050*t4823;
  t4841 = 0. + t4746 + t4782 + t4840;
  t4843 = -1.*t4841*t3752;
  t4900 = t3820*t4876;
  t4932 = -1.*t3916*t4924;
  t4933 = 0. + t4900 + t4932;
  t4938 = t3818*t4933;
  t4942 = t3916*t4876;
  t4945 = t3820*t4924;
  t4948 = 0. + t4942 + t4945;
  t4952 = t4948*t4011;
  t4974 = 0. + t4938 + t4952;
  t4983 = t3814*t4974;
  t4990 = 0. + t4843 + t4983;
  t5129 = t3818*t3995;
  t5149 = -1.*t3953*t4011;
  t5150 = 0. + t5129 + t5149;
  t5155 = t3818*t4565;
  t5157 = -1.*t4516*t4011;
  t5165 = 0. + t5155 + t5157;
  t5167 = t3818*t4948;
  t5171 = -1.*t4933*t4011;
  t5173 = 0. + t5167 + t5171;
  t5320 = -1.*t715*t2416;
  t5321 = -1.*t2759*t3036;
  t5330 = -1.*t3050*t3381;
  t5336 = 0. + t5320 + t5321 + t5330;
  t5348 = -1.*t715*t4257;
  t5349 = -1.*t2759*t4320;
  t5350 = -1.*t3050*t4355;
  t5358 = 0. + t5348 + t5349 + t5350;
  t5375 = -1.*t715*t4738;
  t5377 = -1.*t2759*t4762;
  t5379 = -1.*t3050*t4823;
  t5392 = 0. + t5375 + t5377 + t5379;
  t5441 = -0.366501*t3036;
  t5445 = -0.930418*t3381;
  t5447 = 0. + t5441 + t5445;
  t5486 = -0.366501*t4320;
  t5491 = -0.930418*t4355;
  t5493 = 0. + t5486 + t5491;
  t5500 = -0.366501*t4762;
  t5501 = -0.930418*t4823;
  t5504 = 0. + t5500 + t5501;
  t5551 = 0.366501*t4203;
  t5555 = -0.930418*t4238;
  t5559 = 0. + t5551 + t5555;
  t5580 = 0.366501*t4669;
  t5591 = -0.930418*t4686;
  t5615 = 0. + t5580 + t5591;
  t5629 = 0.366501*t1444;
  t5634 = -0.930418*t1930;
  t5635 = 0. + t5629 + t5634;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.004296*t4132 + 0.000309*t4603 - 0.001393*t4990;
  p_output1[10]=-0.001393*t4132 - 0.00004*t4603 + 0.036157*t4990;
  p_output1[11]=0.000309*t4132 + 0.038903*t4603 - 0.00004*t4990;
  p_output1[12]=0.004296*t5150 + 0.000309*t5165 - 0.001393*t5173;
  p_output1[13]=-0.001393*t5150 - 0.00004*t5165 + 0.036157*t5173;
  p_output1[14]=0.000309*t5150 + 0.038903*t5165 - 0.00004*t5173;
  p_output1[15]=0.004296*t3560 + 0.000309*t4363 - 0.001393*t4841;
  p_output1[16]=-0.001393*t3560 - 0.00004*t4363 + 0.036157*t4841;
  p_output1[17]=0.000309*t3560 + 0.038903*t4363 - 0.00004*t4841;
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
  p_output1[51]=0.004296*t5336 + 0.000309*t5358 - 0.001393*t5392;
  p_output1[52]=-0.001393*t5336 - 0.00004*t5358 + 0.036157*t5392;
  p_output1[53]=0.000309*t5336 + 0.038903*t5358 - 0.00004*t5392;
  p_output1[54]=0.004296*t5447 + 0.000309*t5493 - 0.001393*t5504;
  p_output1[55]=-0.001393*t5447 - 0.00004*t5493 + 0.036157*t5504;
  p_output1[56]=0.000309*t5447 + 0.038903*t5493 - 0.00004*t5504;
  p_output1[57]=0.000309*t5559 - 0.001393*t5615 + 0.004296*t5635;
  p_output1[58]=-0.00004*t5559 + 0.036157*t5615 - 0.001393*t5635;
  p_output1[59]=0.038903*t5559 - 0.00004*t5615 + 0.000309*t5635;
  p_output1[60]=0.00030900226566275997;
  p_output1[61]=-0.00004001367925224995;
  p_output1[62]=0.03890302493631731;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jdq_AMBody_right_knee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
