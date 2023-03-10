/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_hip_rotation_right_src.h"

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
  double t590;
  double t1372;
  double t1127;
  double t1725;
  double t1434;
  double t1472;
  double t1729;
  double t1851;
  double t1952;
  double t883;
  double t2298;
  double t1257;
  double t1347;
  double t2292;
  double t2338;
  double t2360;
  double t2416;
  double t2427;
  double t2491;
  double t2742;
  double t2747;
  double t2751;
  double t112;
  double t2732;
  double t2814;
  double t2825;
  double t2639;
  double t428;
  double t471;
  double t479;
  double t508;
  double t3128;
  double t3130;
  double t3161;
  double t3231;
  double t3271;
  double t3275;
  double t3010;
  double t3020;
  double t3299;
  double t3768;
  double t3785;
  double t3788;
  double t3895;
  double t3897;
  double t3916;
  double t3883;
  double t3926;
  double t3934;
  double t3850;
  double t4152;
  double t4171;
  double t4181;
  double t4275;
  double t4284;
  double t4294;
  double t1529;
  double t1738;
  double t1782;
  double t1983;
  double t2055;
  double t2100;
  double t2404;
  double t2502;
  double t2538;
  double t4549;
  double t4557;
  double t2649;
  double t2682;
  double t4473;
  double t4478;
  double t2856;
  double t2887;
  double t2909;
  double t4464;
  double t4469;
  double t3200;
  double t3372;
  double t3387;
  double t3404;
  double t3415;
  double t4520;
  double t4544;
  double t3561;
  double t3564;
  double t3584;
  double t3600;
  double t3612;
  double t3631;
  double t4681;
  double t3789;
  double t3814;
  double t3868;
  double t3871;
  double t3968;
  double t3979;
  double t3982;
  double t4088;
  double t4099;
  double t4193;
  double t4196;
  double t4237;
  double t4308;
  double t4319;
  double t4322;
  double t4359;
  double t4366;
  double t4375;
  double t4384;
  double t4388;
  double t4398;
  double t4470;
  double t4472;
  double t4489;
  double t4507;
  double t4546;
  double t4559;
  double t4561;
  double t4573;
  double t4616;
  double t4620;
  double t4626;
  double t4650;
  double t4653;
  double t4656;
  double t4684;
  double t4691;
  double t4707;
  double t4710;
  double t4716;
  double t4757;
  double t4788;
  double t4797;
  double t4804;
  double t4807;
  double t4817;
  double t4818;
  double t4828;
  double t4895;
  double t4911;
  double t4920;
  double t4923;
  double t4944;
  double t4952;
  double t4968;
  double t4981;
  double t5019;
  double t5023;
  double t5030;
  double t5051;
  double t5053;
  double t5062;
  double t5075;
  double t5083;
  double t5098;
  double t5099;
  double t5102;
  double t5115;
  double t5121;
  double t5128;
  double t5130;
  double t5164;
  double t5175;
  double t5180;
  double t5192;
  double t5198;
  double t5200;
  double t5268;
  double t5274;
  double t5278;
  double t5301;
  double t5324;
  double t5330;
  double t5354;
  double t5361;
  double t5364;
  double t5371;
  double t5378;
  double t5379;
  double t5380;
  double t5389;
  double t5454;
  double t5467;
  double t5469;
  double t5476;
  double t5477;
  double t5478;
  double t5505;
  double t5517;
  double t5519;
  double t5525;
  double t5527;
  double t5533;
  double t5578;
  double t5606;
  double t5625;
  double t5626;
  double t5632;
  double t5661;
  double t5673;
  double t5697;
  double t5738;
  double t5748;
  double t5750;
  double t5751;
  double t5764;
  double t5766;
  double t5775;
  double t5802;
  double t6243;
  double t6244;
  double t6254;
  double t6255;
  double t6224;
  double t6225;
  double t6299;
  double t6307;
  double t6311;
  double t6315;
  double t6263;
  double t6280;
  double t6283;
  double t6284;
  double t6229;
  double t6230;
  double t6234;
  double t6236;
  double t6512;
  double t6515;
  double t6516;
  double t6522;
  double t6540;
  double t6546;
  double t6559;
  double t6561;
  double t6570;
  t590 = Cos(var1[3]);
  t1372 = Cos(var1[4]);
  t1127 = Sin(var1[18]);
  t1725 = Cos(var1[17]);
  t1434 = Cos(var1[5]);
  t1472 = Sin(var1[17]);
  t1729 = Sin(var1[5]);
  t1851 = 0.366501*t1127;
  t1952 = 0. + t1851;
  t883 = Sin(var1[4]);
  t2298 = Sin(var1[3]);
  t1257 = -0.930418*t1127;
  t1347 = 0. + t1257;
  t2292 = t590*t1434*t883;
  t2338 = t2298*t1729;
  t2360 = t2292 + t2338;
  t2416 = t1434*t2298;
  t2427 = -1.*t590*t883*t1729;
  t2491 = t2416 + t2427;
  t2742 = -1.*t1434*t2298;
  t2747 = t590*t883*t1729;
  t2751 = t2742 + t2747;
  t112 = Cos(var1[18]);
  t2732 = -1.*t1472*t2360;
  t2814 = t1725*t2751;
  t2825 = t2732 + t2814;
  t2639 = t1725*t2360;
  t428 = -1.*t112;
  t471 = 1. + t428;
  t479 = -1.000000637725*t471;
  t508 = 1. + t479;
  t3128 = -1.*t1434*t2298*t883;
  t3130 = t590*t1729;
  t3161 = t3128 + t3130;
  t3231 = -1.*t590*t1434;
  t3271 = -1.*t2298*t883*t1729;
  t3275 = t3231 + t3271;
  t3010 = t1472*t2751;
  t3020 = t2639 + t3010;
  t3299 = t1725*t3275;
  t3768 = t1434*t2298*t883;
  t3785 = -1.*t590*t1729;
  t3788 = t3768 + t3785;
  t3895 = t590*t1434;
  t3897 = t2298*t883*t1729;
  t3916 = t3895 + t3897;
  t3883 = -1.*t1472*t3788;
  t3926 = t1725*t3916;
  t3934 = t3883 + t3926;
  t3850 = t1725*t3788;
  t4152 = -1.*t1372*t1434*t1472;
  t4171 = t1725*t1372*t1729;
  t4181 = t4152 + t4171;
  t4275 = t1725*t1372*t1434;
  t4284 = t1372*t1472*t1729;
  t4294 = t4275 + t4284;
  t1529 = -1.*t590*t1372*t1434*t1472;
  t1738 = t1725*t590*t1372*t1729;
  t1782 = t1529 + t1738;
  t1983 = t1725*t590*t1372*t1434;
  t2055 = t590*t1372*t1472*t1729;
  t2100 = t1983 + t2055;
  t2404 = t1472*t2360;
  t2502 = t1725*t2491;
  t2538 = t2404 + t2502;
  t4549 = -0.8656776547239999*t471;
  t4557 = 1. + t4549;
  t2649 = -1.*t1472*t2491;
  t2682 = t2639 + t2649;
  t4473 = -0.134322983001*t471;
  t4478 = 1. + t4473;
  t2856 = -1.*t1725*t2360;
  t2887 = -1.*t1472*t2751;
  t2909 = t2856 + t2887;
  t4464 = -0.366501*t1127;
  t4469 = 0. + t4464;
  t3200 = -1.*t1472*t3161;
  t3372 = t3200 + t3299;
  t3387 = t1725*t3161;
  t3404 = t1472*t3275;
  t3415 = t3387 + t3404;
  t4520 = 0.930418*t1127;
  t4544 = 0. + t4520;
  t3561 = -1.*t1372*t1434*t1472*t2298;
  t3564 = t1725*t1372*t2298*t1729;
  t3584 = t3561 + t3564;
  t3600 = t1725*t1372*t1434*t2298;
  t3612 = t1372*t1472*t2298*t1729;
  t3631 = t3600 + t3612;
  t4681 = 0.340999127418*t471*t2825;
  t3789 = t1472*t3788;
  t3814 = t3789 + t3299;
  t3868 = -1.*t1472*t3275;
  t3871 = t3850 + t3868;
  t3968 = -1.*t1725*t3788;
  t3979 = -1.*t1472*t3916;
  t3982 = t3968 + t3979;
  t4088 = t1472*t3916;
  t4099 = t3850 + t4088;
  t4193 = -1.*t1725*t1372*t1434;
  t4196 = -1.*t1372*t1472*t1729;
  t4237 = t4193 + t4196;
  t4308 = t1372*t1434*t1472;
  t4319 = -1.*t1725*t1372*t1729;
  t4322 = t4308 + t4319;
  t4359 = t1434*t1472*t883;
  t4366 = -1.*t1725*t883*t1729;
  t4375 = t4359 + t4366;
  t4384 = -1.*t1725*t1434*t883;
  t4388 = -1.*t1472*t883*t1729;
  t4398 = t4384 + t4388;
  t4470 = -1.*t590*t4469*t883;
  t4472 = 0.340999127418*t471*t1782;
  t4489 = t4478*t2100;
  t4507 = t4470 + t4472 + t4489;
  t4546 = -1.*t590*t4544*t883;
  t4559 = t4557*t1782;
  t4561 = 0.340999127418*t471*t2100;
  t4573 = t4546 + t4559 + t4561;
  t4616 = 0.340999127418*t471*t2538;
  t4620 = t4557*t2682;
  t4626 = t4616 + t4620;
  t4650 = t4478*t2538;
  t4653 = 0.340999127418*t471*t2682;
  t4656 = t4650 + t4653;
  t4684 = t4557*t2909;
  t4691 = t4681 + t4684;
  t4707 = t4478*t2825;
  t4710 = 0.340999127418*t471*t2909;
  t4716 = t4707 + t4710;
  t4757 = -0.366501*t112*t590*t1372;
  t4788 = 0.340999127418*t1127*t2825;
  t4797 = -0.134322983001*t1127*t3020;
  t4804 = t4757 + t4788 + t4797;
  t4807 = 0.930418*t112*t590*t1372;
  t4817 = -0.8656776547239999*t1127*t2825;
  t4818 = 0.340999127418*t1127*t3020;
  t4828 = t4807 + t4817 + t4818;
  t4895 = -1.*t1372*t4469*t2298;
  t4911 = 0.340999127418*t471*t3372;
  t4920 = t4478*t3415;
  t4923 = t4895 + t4911 + t4920;
  t4944 = -1.*t1372*t4544*t2298;
  t4952 = t4557*t3372;
  t4968 = 0.340999127418*t471*t3415;
  t4981 = t4944 + t4952 + t4968;
  t5019 = -1.*t4469*t2298*t883;
  t5023 = 0.340999127418*t471*t3584;
  t5030 = t4478*t3631;
  t5051 = t5019 + t5023 + t5030;
  t5053 = -1.*t4544*t2298*t883;
  t5062 = t4557*t3584;
  t5075 = 0.340999127418*t471*t3631;
  t5083 = t5053 + t5062 + t5075;
  t5098 = t590*t1372*t4469;
  t5099 = t4478*t3020;
  t5102 = t5098 + t4681 + t5099;
  t5115 = t590*t1372*t4544;
  t5121 = t4557*t2825;
  t5128 = 0.340999127418*t471*t3020;
  t5130 = t5115 + t5121 + t5128;
  t5164 = 0.340999127418*t471*t3814;
  t5175 = t4557*t3871;
  t5180 = t5164 + t5175;
  t5192 = t4478*t3814;
  t5198 = 0.340999127418*t471*t3871;
  t5200 = t5192 + t5198;
  t5268 = 0.340999127418*t471*t3934;
  t5274 = t4557*t3982;
  t5278 = t5268 + t5274;
  t5301 = t4478*t3934;
  t5324 = 0.340999127418*t471*t3982;
  t5330 = t5301 + t5324;
  t5354 = -0.366501*t112*t1372*t2298;
  t5361 = 0.340999127418*t1127*t3934;
  t5364 = -0.134322983001*t1127*t4099;
  t5371 = t5354 + t5361 + t5364;
  t5378 = 0.930418*t112*t1372*t2298;
  t5379 = -0.8656776547239999*t1127*t3934;
  t5380 = 0.340999127418*t1127*t4099;
  t5389 = t5378 + t5379 + t5380;
  t5454 = 0.340999127418*t471*t4181;
  t5467 = t4557*t4237;
  t5469 = t5454 + t5467;
  t5476 = t4478*t4181;
  t5477 = 0.340999127418*t471*t4237;
  t5478 = t5476 + t5477;
  t5505 = 0.340999127418*t471*t4322;
  t5517 = t4557*t4294;
  t5519 = t5505 + t5517;
  t5525 = t4478*t4322;
  t5527 = 0.340999127418*t471*t4294;
  t5533 = t5525 + t5527;
  t5578 = 0.366501*t112*t883;
  t5606 = 0.340999127418*t1127*t4181;
  t5625 = -0.134322983001*t1127*t4294;
  t5626 = t5578 + t5606 + t5625;
  t5632 = -0.930418*t112*t883;
  t5661 = -0.8656776547239999*t1127*t4181;
  t5673 = 0.340999127418*t1127*t4294;
  t5697 = t5632 + t5661 + t5673;
  t5738 = -1.*t1372*t4469;
  t5748 = 0.340999127418*t471*t4375;
  t5750 = t4478*t4398;
  t5751 = t5738 + t5748 + t5750;
  t5764 = -1.*t1372*t4544;
  t5766 = t4557*t4375;
  t5775 = 0.340999127418*t471*t4398;
  t5802 = t5764 + t5766 + t5775;
  t6243 = -1.*t1725;
  t6244 = 1. + t6243;
  t6254 = -0.091*t6244;
  t6255 = 0. + t6254;
  t6224 = -0.091*t1472;
  t6225 = 0. + t6224;
  t6299 = 3.2909349868922137e-7*var1[18];
  t6307 = 0.03103092645718495*t471;
  t6311 = -0.045000372235*t4469;
  t6315 = t6299 + t6307 + t6311;
  t6263 = 1.296332362046933e-7*var1[18];
  t6280 = -0.07877668146182712*t471;
  t6283 = -0.045000372235*t4544;
  t6284 = t6263 + t6280 + t6283;
  t6229 = -0.04500040093286238*t471;
  t6230 = -0.07877663122399998*t1347;
  t6234 = 0.031030906668*t1952;
  t6236 = 0. + t6229 + t6230 + t6234;
  t6512 = 0.0846680539949003*t112;
  t6515 = -0.04500040093286238*t1127;
  t6516 = t6512 + t6515;
  t6522 = -0.04186915633414423*t112;
  t6540 = -0.07877668146182712*t1127;
  t6546 = 1.296332362046933e-7 + t6522 + t6540;
  t6559 = 0.016492681424499736*t112;
  t6561 = 0.03103092645718495*t1127;
  t6570 = 3.2909349868922137e-7 + t6559 + t6561;
  p_output1[0]=(-1.*t1347*t3372 - 1.*t1952*t3415 + t1372*t2298*t508)*var2[3] + (-1.*t1347*t1782 - 1.*t1952*t2100 + t508*t590*t883)*var2[4] + (-1.*t1952*t2538 - 1.*t1347*t2682)*var2[5] + (-1.*t1952*t2825 - 1.*t1347*t2909)*var2[17] + (0.930418*t112*t2825 - 0.366501*t112*t3020 + 1.000000637725*t1127*t1372*t590)*var2[18];
  p_output1[1]=(-1.*t1347*t2825 - 1.*t1952*t3020 - 1.*t1372*t508*t590)*var2[3] + (-1.*t1347*t3584 - 1.*t1952*t3631 + t2298*t508*t883)*var2[4] + (-1.*t1952*t3814 - 1.*t1347*t3871)*var2[5] + (-1.*t1952*t3934 - 1.*t1347*t3982)*var2[17] + (1.000000637725*t1127*t1372*t2298 + 0.930418*t112*t3934 - 0.366501*t112*t4099)*var2[18];
  p_output1[2]=(-1.*t1347*t4375 - 1.*t1952*t4398 + t1372*t508)*var2[4] + (-1.*t1347*t4294 - 1.*t1952*t4322)*var2[5] + (-1.*t1952*t4181 - 1.*t1347*t4237)*var2[17] + (0.930418*t112*t4181 - 0.366501*t112*t4294 - 1.000000637725*t1127*t883)*var2[18];
  p_output1[3]=0;
  p_output1[4]=(-0.366501*t4923 + 0.930418*t4981)*var2[3] + (-0.366501*t4507 + 0.930418*t4573)*var2[4] + (0.930418*t4626 - 0.366501*t4656)*var2[5] + (0.930418*t4691 - 0.366501*t4716)*var2[17] + (-0.366501*t4804 + 0.930418*t4828)*var2[18];
  p_output1[5]=(-0.366501*t5102 + 0.930418*t5130)*var2[3] + (-0.366501*t5051 + 0.930418*t5083)*var2[4] + (0.930418*t5180 - 0.366501*t5200)*var2[5] + (0.930418*t5278 - 0.366501*t5330)*var2[17] + (-0.366501*t5371 + 0.930418*t5389)*var2[18];
  p_output1[6]=(-0.366501*t5751 + 0.930418*t5802)*var2[4] + (0.930418*t5519 - 0.366501*t5533)*var2[5] + (0.930418*t5469 - 0.366501*t5478)*var2[17] + (-0.366501*t5626 + 0.930418*t5697)*var2[18];
  p_output1[7]=0;
  p_output1[8]=(-0.930418*t4923 - 0.366501*t4981)*var2[3] + (-0.930418*t4507 - 0.366501*t4573)*var2[4] + (-0.366501*t4626 - 0.930418*t4656)*var2[5] + (-0.366501*t4691 - 0.930418*t4716)*var2[17] + (-0.930418*t4804 - 0.366501*t4828)*var2[18];
  p_output1[9]=(-0.930418*t5102 - 0.366501*t5130)*var2[3] + (-0.930418*t5051 - 0.366501*t5083)*var2[4] + (-0.366501*t5180 - 0.930418*t5200)*var2[5] + (-0.366501*t5278 - 0.930418*t5330)*var2[17] + (-0.930418*t5371 - 0.366501*t5389)*var2[18];
  p_output1[10]=(-0.930418*t5751 - 0.366501*t5802)*var2[4] + (-0.366501*t5519 - 0.930418*t5533)*var2[5] + (-0.366501*t5469 - 0.930418*t5478)*var2[17] + (-0.930418*t5626 - 0.366501*t5697)*var2[18];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.046986*t4923 - 0.109508*t4981 - 0.045*(t1347*t3372 + t1952*t3415 - 1.*t1372*t2298*t508) + t3161*t6225 - 1.*t1372*t2298*t6236 + t3275*t6255 + t3372*t6284 + t3415*t6315)*var2[3] + (-0.046986*t4507 - 0.109508*t4573 + t1372*t1434*t590*t6225 + t1372*t1729*t590*t6255 + t1782*t6284 + t2100*t6315 - 1.*t590*t6236*t883 - 0.045*(t1347*t1782 + t1952*t2100 - 1.*t508*t590*t883))*var2[4] + (-0.045*(t1952*t2538 + t1347*t2682) - 0.109508*t4626 - 0.046986*t4656 + t2491*t6225 + t2360*t6255 + t2682*t6284 + t2538*t6315)*var2[5] + (-0.091*t1725*t2360 - 0.091*t1472*t2751 - 0.045*(t1952*t2825 + t1347*t2909) - 0.109508*t4691 - 0.046986*t4716 + t2909*t6284 + t2825*t6315)*var2[17] + (-0.046986*t4804 - 0.109508*t4828 - 0.045*(-0.930418*t112*t2825 + 0.366501*t112*t3020 - 1.000000637725*t1127*t1372*t590) + t1372*t590*t6516 + t2825*t6546 + t3020*t6570)*var2[18];
  p_output1[13]=var2[1] + (-0.046986*t5102 - 0.109508*t5130 - 0.045*(t1347*t2825 + t1952*t3020 + t1372*t508*t590) + t2360*t6225 + t1372*t590*t6236 + t2751*t6255 + t2825*t6284 + t3020*t6315)*var2[3] + (-0.046986*t5051 - 0.109508*t5083 + t1372*t1434*t2298*t6225 + t1372*t1729*t2298*t6255 + t3584*t6284 + t3631*t6315 - 1.*t2298*t6236*t883 - 0.045*(t1347*t3584 + t1952*t3631 - 1.*t2298*t508*t883))*var2[4] + (-0.045*(t1952*t3814 + t1347*t3871) - 0.109508*t5180 - 0.046986*t5200 + t3275*t6225 + t3788*t6255 + t3871*t6284 + t3814*t6315)*var2[5] + (-0.091*t1725*t3788 - 0.091*t1472*t3916 - 0.045*(t1952*t3934 + t1347*t3982) - 0.109508*t5278 - 0.046986*t5330 + t3982*t6284 + t3934*t6315)*var2[17] + (-0.045*(-1.000000637725*t1127*t1372*t2298 - 0.930418*t112*t3934 + 0.366501*t112*t4099) - 0.046986*t5371 - 0.109508*t5389 + t1372*t2298*t6516 + t3934*t6546 + t4099*t6570)*var2[18];
  p_output1[14]=var2[2] + (-0.045*(t1347*t4375 + t1952*t4398 - 1.*t1372*t508) - 0.046986*t5751 - 0.109508*t5802 - 1.*t1372*t6236 + t4375*t6284 + t4398*t6315 - 1.*t1434*t6225*t883 - 1.*t1729*t6255*t883)*var2[4] + (-0.045*(t1347*t4294 + t1952*t4322) - 0.109508*t5519 - 0.046986*t5533 - 1.*t1372*t1729*t6225 + t1372*t1434*t6255 + t4294*t6284 + t4322*t6315)*var2[5] + (-0.091*t1372*t1434*t1725 - 0.091*t1372*t1472*t1729 - 0.045*(t1952*t4181 + t1347*t4237) - 0.109508*t5469 - 0.046986*t5478 + t4237*t6284 + t4181*t6315)*var2[17] + (-0.046986*t5626 - 0.109508*t5697 + t4181*t6546 + t4294*t6570 - 1.*t6516*t883 - 0.045*(-0.930418*t112*t4181 + 0.366501*t112*t4294 + 1.000000637725*t1127*t883))*var2[18];
  p_output1[15]=0;
}



void dT_hip_rotation_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
