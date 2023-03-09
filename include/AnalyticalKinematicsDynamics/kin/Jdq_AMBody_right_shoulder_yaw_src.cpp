/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:22:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_right_shoulder_yaw_src.h"

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
  double t701;
  double t752;
  double t785;
  double t871;
  double t1308;
  double t96;
  double t1772;
  double t868;
  double t1486;
  double t1520;
  double t1556;
  double t787;
  double t847;
  double t855;
  double t873;
  double t893;
  double t1067;
  double t1312;
  double t1370;
  double t1373;
  double t1380;
  double t1636;
  double t1639;
  double t1737;
  double t1791;
  double t1825;
  double t2035;
  double t2095;
  double t2114;
  double t2115;
  double t2156;
  double t2389;
  double t2410;
  double t2487;
  double t2488;
  double t2490;
  double t2514;
  double t2537;
  double t2550;
  double t2554;
  double t2617;
  double t3203;
  double t2823;
  double t2935;
  double t2973;
  double t3035;
  double t3089;
  double t3115;
  double t3137;
  double t3158;
  double t2822;
  double t3214;
  double t3215;
  double t3231;
  double t3240;
  double t3307;
  double t3351;
  double t3388;
  double t3397;
  double t184;
  double t661;
  double t1585;
  double t1630;
  double t2318;
  double t2348;
  double t2679;
  double t2796;
  double t2819;
  double t3737;
  double t3750;
  double t3866;
  double t3879;
  double t3882;
  double t3934;
  double t3938;
  double t3972;
  double t3974;
  double t4010;
  double t4030;
  double t4036;
  double t4037;
  double t4069;
  double t4085;
  double t4109;
  double t4160;
  double t3569;
  double t4505;
  double t4520;
  double t4530;
  double t4549;
  double t4562;
  double t4579;
  double t4601;
  double t4602;
  double t4630;
  double t4676;
  double t4685;
  double t4689;
  double t4721;
  double t4737;
  double t4758;
  double t4769;
  double t4770;
  double t3874;
  double t3937;
  double t3986;
  double t3988;
  double t4006;
  double t4067;
  double t4207;
  double t4208;
  double t4211;
  double t4227;
  double t4245;
  double t4248;
  double t4249;
  double t4256;
  double t4350;
  double t4489;
  double t4533;
  double t4580;
  double t4650;
  double t4657;
  double t4668;
  double t4726;
  double t4777;
  double t4789;
  double t4792;
  double t4813;
  double t4818;
  double t4819;
  double t4820;
  double t4822;
  double t4828;
  double t4841;
  double t3521;
  double t3541;
  double t3562;
  double t3180;
  double t3440;
  double t3457;
  double t4954;
  double t4956;
  double t4998;
  double t5000;
  double t5008;
  double t5017;
  double t1393;
  double t2273;
  double t2665;
  double t2673;
  double t5174;
  double t5178;
  double t5187;
  double t5206;
  double t5216;
  double t5217;
  double t5226;
  double t5234;
  double t5353;
  double t5363;
  double t5371;
  double t5394;
  double t5396;
  double t5400;
  t701 = Cos(var1[26]);
  t752 = -1.*t701;
  t785 = 1. + t752;
  t871 = Sin(var1[26]);
  t1308 = -0.05226439969100001*t785;
  t96 = Sin(var1[25]);
  t1772 = -0.49726168403800003*t785;
  t868 = 0.051978134642000004*t785;
  t1486 = Cos(var1[25]);
  t1520 = -1.*t1486;
  t1556 = 1. + t1520;
  t787 = -0.9945383682050002*t785;
  t847 = 1. + t787;
  t855 = 0.073913*t847;
  t873 = -0.707107*t871;
  t893 = t868 + t873;
  t1067 = 0.703234*t893;
  t1312 = -0.703234*t871;
  t1370 = t1308 + t1312;
  t1373 = 0.707107*t1370;
  t1380 = t855 + t1067 + t1373;
  t1636 = -0.500001190325*t785;
  t1639 = 1. + t1636;
  t1737 = 0.707107*t1639;
  t1791 = -0.073913*t871;
  t1825 = t1772 + t1791;
  t2035 = 0.703234*t1825;
  t2095 = 0.703234*t871;
  t2114 = t1308 + t2095;
  t2115 = 0.073913*t2114;
  t2156 = t1737 + t2035 + t2115;
  t2389 = -0.5054634410180001*t785;
  t2410 = 1. + t2389;
  t2487 = 0.703234*t2410;
  t2488 = 0.073913*t871;
  t2490 = t1772 + t2488;
  t2514 = 0.707107*t2490;
  t2537 = 0.707107*t871;
  t2550 = t868 + t2537;
  t2554 = 0.073913*t2550;
  t2617 = t2487 + t2514 + t2554;
  t3203 = Sin(var1[24]);
  t2823 = -0.103955395616*t1556*t1380;
  t2935 = 0.994522*t96;
  t2973 = 0. + t2935;
  t3035 = t2973*t2156;
  t3089 = -0.9890740084840001*t1556;
  t3115 = 1. + t3089;
  t3137 = t3115*t2617;
  t3158 = 0. + t2823 + t3035 + t3137;
  t2822 = Cos(var1[24]);
  t3214 = -0.010926102783999999*t1556;
  t3215 = 1. + t3214;
  t3231 = t3215*t1380;
  t3240 = 0.104528*t96;
  t3307 = 0. + t3240;
  t3351 = t3307*t2156;
  t3388 = -0.103955395616*t1556*t2617;
  t3397 = 0. + t3231 + t3351 + t3388;
  t184 = -0.104528*t96;
  t661 = 0. + t184;
  t1585 = -1.0000001112680001*t1556;
  t1630 = 1. + t1585;
  t2318 = -0.994522*t96;
  t2348 = 0. + t2318;
  t2679 = Sin(var1[4]);
  t2796 = Cos(var1[4]);
  t2819 = Cos(var1[5]);
  t3737 = -0.994522*t847;
  t3750 = 0.104528*t893;
  t3866 = t3737 + t3750;
  t3879 = 0.104528*t1825;
  t3882 = -0.994522*t2114;
  t3934 = t3879 + t3882;
  t3938 = 0.104528*t2410;
  t3972 = -0.994522*t2550;
  t3974 = t3938 + t3972;
  t4010 = -0.103955395616*t1556*t3866;
  t4030 = t2973*t3934;
  t4036 = t3115*t3974;
  t4037 = 0. + t4010 + t4030 + t4036;
  t4069 = t3215*t3866;
  t4085 = t3307*t3934;
  t4109 = -0.103955395616*t1556*t3974;
  t4160 = 0. + t4069 + t4085 + t4109;
  t3569 = Sin(var1[5]);
  t4505 = -0.073913*t847;
  t4520 = -0.703234*t893;
  t4530 = t4505 + t4520 + t1373;
  t4549 = -0.703234*t1825;
  t4562 = -0.073913*t2114;
  t4579 = t1737 + t4549 + t4562;
  t4601 = -0.703234*t2410;
  t4602 = -0.073913*t2550;
  t4630 = t4601 + t2514 + t4602;
  t4676 = -0.103955395616*t1556*t4530;
  t4685 = t2973*t4579;
  t4689 = t3115*t4630;
  t4721 = 0. + t4676 + t4685 + t4689;
  t4737 = t3215*t4530;
  t4758 = t3307*t4579;
  t4769 = -0.103955395616*t1556*t4630;
  t4770 = 0. + t4737 + t4758 + t4769;
  t3874 = t661*t3866;
  t3937 = t1630*t3934;
  t3986 = t2348*t3974;
  t3988 = 0. + t3874 + t3937 + t3986;
  t4006 = -1.*t3988*t2679;
  t4067 = t2822*t4037;
  t4207 = -1.*t3203*t4160;
  t4208 = 0. + t4067 + t4207;
  t4211 = t2819*t4208;
  t4227 = t3203*t4037;
  t4245 = t2822*t4160;
  t4248 = 0. + t4227 + t4245;
  t4249 = t4248*t3569;
  t4256 = 0. + t4211 + t4249;
  t4350 = t2796*t4256;
  t4489 = 0. + t4006 + t4350;
  t4533 = t661*t4530;
  t4580 = t1630*t4579;
  t4650 = t2348*t4630;
  t4657 = 0. + t4533 + t4580 + t4650;
  t4668 = -1.*t4657*t2679;
  t4726 = t2822*t4721;
  t4777 = -1.*t3203*t4770;
  t4789 = 0. + t4726 + t4777;
  t4792 = t2819*t4789;
  t4813 = t3203*t4721;
  t4818 = t2822*t4770;
  t4819 = 0. + t4813 + t4818;
  t4820 = t4819*t3569;
  t4822 = 0. + t4792 + t4820;
  t4828 = t2796*t4822;
  t4841 = 0. + t4668 + t4828;
  t3521 = t3203*t3158;
  t3541 = t2822*t3397;
  t3562 = 0. + t3521 + t3541;
  t3180 = t2822*t3158;
  t3440 = -1.*t3203*t3397;
  t3457 = 0. + t3180 + t3440;
  t4954 = t2819*t4248;
  t4956 = -1.*t4208*t3569;
  t4998 = 0. + t4954 + t4956;
  t5000 = t2819*t4819;
  t5008 = -1.*t4789*t3569;
  t5017 = 0. + t5000 + t5008;
  t1393 = t661*t1380;
  t2273 = t1630*t2156;
  t2665 = t2348*t2617;
  t2673 = 0. + t1393 + t2273 + t2665;
  t5174 = -1.*t661*t3866;
  t5178 = -1.*t1630*t3934;
  t5187 = -1.*t2348*t3974;
  t5206 = 0. + t5174 + t5178 + t5187;
  t5216 = -1.*t661*t4530;
  t5217 = -1.*t1630*t4579;
  t5226 = -1.*t2348*t4630;
  t5234 = 0. + t5216 + t5217 + t5226;
  t5353 = -0.994522*t3866;
  t5363 = 0.104528*t3974;
  t5371 = 0. + t5353 + t5363;
  t5394 = -0.994522*t4530;
  t5396 = 0.104528*t4630;
  t5400 = 0. + t5394 + t5396;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00697*(0. - 1.*t2673*t2679 + t2796*(0. + t2819*t3457 + t3562*t3569));
  p_output1[10]=0.007*t4489 - 0.00002*t4841;
  p_output1[11]=-0.00002*t4489 + 0.00067*t4841;
  p_output1[12]=0.00697*(0. + t2819*t3562 - 1.*t3457*t3569);
  p_output1[13]=0.007*t4998 - 0.00002*t5017;
  p_output1[14]=-0.00002*t4998 + 0.00067*t5017;
  p_output1[15]=0.00697*t2673;
  p_output1[16]=0.007*t3988 - 0.00002*t4657;
  p_output1[17]=-0.00002*t3988 + 0.00067*t4657;
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
  p_output1[72]=0.00697*(0. - 1.*t1630*t2156 - 1.*t2348*t2617 - 1.*t1380*t661);
  p_output1[73]=0.007*t5206 - 0.00002*t5234;
  p_output1[74]=-0.00002*t5206 + 0.00067*t5234;
  p_output1[75]=0.00697*(0. - 0.994522*t1380 + 0.104528*t2617);
  p_output1[76]=0.007*t5371 - 0.00002*t5400;
  p_output1[77]=-0.00002*t5371 + 0.00067*t5400;
  p_output1[78]=-6.139705719830357e-9;
  p_output1[79]=-0.000019996802757479972;
  p_output1[80]=0.0006700009956279001;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jdq_AMBody_right_shoulder_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
