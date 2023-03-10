/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:10:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_right_knee_src.h"

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
  double t473;
  double t482;
  double t505;
  double t434;
  double t763;
  double t1263;
  double t1309;
  double t1327;
  double t541;
  double t673;
  double t674;
  double t730;
  double t777;
  double t896;
  double t928;
  double t946;
  double t980;
  double t990;
  double t1025;
  double t1042;
  double t1090;
  double t1151;
  double t1210;
  double t1215;
  double t1543;
  double t1559;
  double t1561;
  double t1574;
  double t1582;
  double t1587;
  double t1611;
  double t1644;
  double t1674;
  double t1676;
  double t1768;
  double t1844;
  double t1883;
  double t277;
  double t454;
  double t461;
  double t964;
  double t967;
  double t971;
  double t1256;
  double t1375;
  double t1409;
  double t1710;
  double t1718;
  double t1886;
  double t1897;
  double t1907;
  double t2006;
  double t2009;
  double t2014;
  double t2019;
  double t2027;
  double t2227;
  double t2228;
  double t2229;
  double t2248;
  double t2250;
  double t2272;
  double t2282;
  double t2285;
  double t2403;
  double t385;
  double t413;
  double t1752;
  double t2063;
  double t2097;
  double t2128;
  double t2339;
  double t2347;
  double t210;
  double t2450;
  double t2510;
  double t2513;
  double t2515;
  double t2516;
  double t2584;
  double t2593;
  double t2596;
  double t187;
  double t2684;
  double t2688;
  double t2703;
  double t2390;
  double t2623;
  double t2629;
  double t2805;
  double t88;
  double t3315;
  double t3318;
  double t3320;
  double t3343;
  double t3354;
  double t3356;
  double t3408;
  double t3410;
  double t3418;
  double t3326;
  double t3393;
  double t3422;
  double t3431;
  double t3470;
  double t3477;
  double t3478;
  double t3496;
  double t3517;
  double t3520;
  double t3531;
  double t3569;
  double t3462;
  double t3502;
  double t3582;
  double t3616;
  double t3707;
  double t3708;
  double t3714;
  double t3718;
  double t2891;
  double t2937;
  double t2943;
  double t2947;
  double t2956;
  double t2978;
  double t3045;
  double t3084;
  double t3160;
  double t3784;
  double t3801;
  double t3833;
  double t3617;
  double t3721;
  double t3737;
  double t4159;
  double t4186;
  double t4189;
  double t4206;
  double t4230;
  double t4261;
  double t4270;
  double t4271;
  double t4290;
  double t4199;
  double t4266;
  double t4297;
  double t4334;
  double t4445;
  double t4469;
  double t4489;
  double t4507;
  double t4553;
  double t4566;
  double t4568;
  double t4572;
  double t4359;
  double t4547;
  double t4597;
  double t4634;
  double t4657;
  double t4681;
  double t4776;
  double t4791;
  double t4821;
  double t4846;
  double t4865;
  double t4653;
  double t4798;
  double t4804;
  double t2652;
  double t2840;
  double t2848;
  double t2951;
  double t3026;
  double t3109;
  double t3110;
  double t3134;
  double t3245;
  double t3250;
  double t3257;
  double t3275;
  double t3287;
  double t3776;
  double t3835;
  double t3858;
  double t3874;
  double t3877;
  double t3960;
  double t3990;
  double t4001;
  double t4004;
  double t4005;
  double t4030;
  double t4038;
  double t4049;
  double t4812;
  double t4873;
  double t4878;
  double t4892;
  double t4900;
  double t4908;
  double t4909;
  double t4950;
  double t5025;
  double t5086;
  double t5181;
  double t5198;
  double t5217;
  double t5423;
  double t5437;
  double t5442;
  double t5570;
  double t5583;
  double t5592;
  double t5604;
  double t5637;
  double t5673;
  double t5691;
  double t5708;
  double t5718;
  double t5729;
  double t5744;
  double t5749;
  double t5768;
  double t5800;
  double t5812;
  double t5818;
  double t5904;
  double t5911;
  double t5915;
  double t5540;
  double t5541;
  double t5558;
  double t5678;
  double t5778;
  double t5921;
  double t5942;
  double t5953;
  double t5990;
  double t5995;
  double t5997;
  double t6047;
  double t6056;
  double t6083;
  double t6088;
  double t6151;
  double t6161;
  double t6176;
  double t6182;
  double t6196;
  double t6206;
  double t5521;
  double t5522;
  double t5536;
  double t5951;
  double t6086;
  double t6207;
  double t6231;
  double t6250;
  double t6254;
  double t6280;
  double t6288;
  double t6292;
  double t6305;
  double t6309;
  double t5470;
  double t5473;
  double t5482;
  double t6399;
  double t6400;
  double t6412;
  double t6425;
  double t5496;
  double t5515;
  double t5520;
  double t6245;
  double t6327;
  double t6346;
  double t6448;
  double t6453;
  double t6471;
  double t6477;
  double t6478;
  double t6479;
  double t6491;
  double t6496;
  double t6504;
  double t6540;
  double t6388;
  double t6438;
  double t6441;
  double t6492;
  double t6541;
  double t6545;
  double t6570;
  double t6574;
  double t6590;
  double t5362;
  double t5391;
  double t5406;
  double t6446;
  double t6627;
  double t6678;
  double t6730;
  double t6772;
  double t6803;
  double t6904;
  double t6865;
  double t6961;
  double t6950;
  double t7010;
  double t6981;
  double t7287;
  double t7289;
  double t7292;
  double t7293;
  double t7301;
  double t7303;
  double t7305;
  double t7307;
  double t7345;
  double t7346;
  double t7347;
  double t7348;
  double t7354;
  double t7358;
  double t7359;
  double t7361;
  double t7441;
  double t7442;
  double t7443;
  double t7452;
  double t7467;
  double t7469;
  double t7474;
  double t7478;
  double t7547;
  double t7554;
  double t7560;
  double t7570;
  double t7577;
  double t7610;
  double t7613;
  double t7623;
  double t7657;
  double t7658;
  double t7660;
  double t7664;
  double t7678;
  double t7680;
  double t7685;
  double t7688;
  double t7731;
  double t7732;
  double t7735;
  double t7736;
  double t7743;
  double t7744;
  double t7746;
  double t7747;
  t473 = Cos(var1[20]);
  t482 = -1.*t473;
  t505 = 1. + t482;
  t434 = Sin(var1[19]);
  t763 = Sin(var1[20]);
  t1263 = Cos(var1[19]);
  t1309 = -1.*t1263;
  t1327 = 1. + t1309;
  t541 = -0.8656776547239999*t505;
  t673 = 1. + t541;
  t674 = -0.657905*t673;
  t730 = 0.0883716288660118*t505;
  t777 = -0.930418*t763;
  t896 = 0. + t777;
  t928 = -0.707107*t896;
  t946 = t674 + t730 + t928;
  t980 = -0.134322983001*t505;
  t990 = 1. + t980;
  t1025 = -0.259155*t990;
  t1042 = 0.22434503092393926*t505;
  t1090 = -0.366501*t763;
  t1151 = 0. + t1090;
  t1210 = -0.707107*t1151;
  t1215 = t1025 + t1042 + t1210;
  t1543 = -1.000000637725*t505;
  t1559 = 1. + t1543;
  t1561 = -0.707107*t1559;
  t1574 = 0.366501*t763;
  t1582 = 0. + t1574;
  t1587 = -0.259155*t1582;
  t1611 = 0.930418*t763;
  t1644 = 0. + t1611;
  t1674 = -0.657905*t1644;
  t1676 = t1561 + t1587 + t1674;
  t1768 = Cos(var1[18]);
  t1844 = -1.*t1768;
  t1883 = 1. + t1844;
  t277 = Sin(var1[18]);
  t454 = -0.930418*t434;
  t461 = 0. + t454;
  t964 = t461*t946;
  t967 = -0.366501*t434;
  t971 = 0. + t967;
  t1256 = t971*t1215;
  t1375 = -1.000000637725*t1327;
  t1409 = 1. + t1375;
  t1710 = t1409*t1676;
  t1718 = 0. + t964 + t1256 + t1710;
  t1886 = -0.340999127418*t1327*t946;
  t1897 = -0.134322983001*t1327;
  t1907 = 1. + t1897;
  t2006 = t1907*t1215;
  t2009 = 0.366501*t434;
  t2014 = 0. + t2009;
  t2019 = t2014*t1676;
  t2027 = 0. + t1886 + t2006 + t2019;
  t2227 = -0.8656776547239999*t1327;
  t2228 = 1. + t2227;
  t2229 = t2228*t946;
  t2248 = -0.340999127418*t1327*t1215;
  t2250 = 0.930418*t434;
  t2272 = 0. + t2250;
  t2282 = t2272*t1676;
  t2285 = 0. + t2229 + t2248 + t2282;
  t2403 = Cos(var1[17]);
  t385 = 0.366501*t277;
  t413 = 0. + t385;
  t1752 = t413*t1718;
  t2063 = 0.340999127418*t1883*t2027;
  t2097 = -0.134322983001*t1883;
  t2128 = 1. + t2097;
  t2339 = t2128*t2285;
  t2347 = 0. + t1752 + t2063 + t2339;
  t210 = Sin(var1[17]);
  t2450 = -0.930418*t277;
  t2510 = 0. + t2450;
  t2513 = t2510*t1718;
  t2515 = -0.8656776547239999*t1883;
  t2516 = 1. + t2515;
  t2584 = t2516*t2027;
  t2593 = 0.340999127418*t1883*t2285;
  t2596 = 0. + t2513 + t2584 + t2593;
  t187 = Cos(var1[5]);
  t2684 = t2403*t2347;
  t2688 = -1.*t210*t2596;
  t2703 = 0. + t2684 + t2688;
  t2390 = t210*t2347;
  t2623 = t2403*t2596;
  t2629 = 0. + t2390 + t2623;
  t2805 = Sin(var1[5]);
  t88 = Sin(var1[3]);
  t3315 = 0.657905*t673;
  t3318 = -0.0883716288660118*t505;
  t3320 = t3315 + t3318 + t928;
  t3343 = 0.259155*t990;
  t3354 = -0.22434503092393926*t505;
  t3356 = t3343 + t3354 + t1210;
  t3408 = 0.259155*t1582;
  t3410 = 0.657905*t1644;
  t3418 = t1561 + t3408 + t3410;
  t3326 = t461*t3320;
  t3393 = t971*t3356;
  t3422 = t1409*t3418;
  t3431 = 0. + t3326 + t3393 + t3422;
  t3470 = -0.340999127418*t1327*t3320;
  t3477 = t1907*t3356;
  t3478 = t2014*t3418;
  t3496 = 0. + t3470 + t3477 + t3478;
  t3517 = t2228*t3320;
  t3520 = -0.340999127418*t1327*t3356;
  t3531 = t2272*t3418;
  t3569 = 0. + t3517 + t3520 + t3531;
  t3462 = t413*t3431;
  t3502 = 0.340999127418*t1883*t3496;
  t3582 = t2128*t3569;
  t3616 = 0. + t3462 + t3502 + t3582;
  t3707 = t2510*t3431;
  t3708 = t2516*t3496;
  t3714 = 0.340999127418*t1883*t3569;
  t3718 = 0. + t3707 + t3708 + t3714;
  t2891 = Cos(var1[3]);
  t2937 = Cos(var1[4]);
  t2943 = -1.000000637725*t1883;
  t2947 = 1. + t2943;
  t2956 = 0.930418*t277;
  t2978 = 0. + t2956;
  t3045 = -0.366501*t277;
  t3084 = 0. + t3045;
  t3160 = Sin(var1[4]);
  t3784 = t2403*t3616;
  t3801 = -1.*t210*t3718;
  t3833 = 0. + t3784 + t3801;
  t3617 = t210*t3616;
  t3721 = t2403*t3718;
  t3737 = 0. + t3617 + t3721;
  t4159 = -0.366501*t673;
  t4186 = -0.3172717261340007*t505;
  t4189 = t4159 + t4186;
  t4206 = 0.930418*t990;
  t4230 = 0.12497652119782442*t505;
  t4261 = t4206 + t4230;
  t4270 = 0.930418*t1582;
  t4271 = -0.366501*t1644;
  t4290 = t4270 + t4271;
  t4199 = t4189*t461;
  t4266 = t4261*t971;
  t4297 = t1409*t4290;
  t4334 = 0. + t4199 + t4266 + t4297;
  t4445 = -0.340999127418*t1327*t4189;
  t4469 = t1907*t4261;
  t4489 = t2014*t4290;
  t4507 = 0. + t4445 + t4469 + t4489;
  t4553 = t2228*t4189;
  t4566 = -0.340999127418*t1327*t4261;
  t4568 = t2272*t4290;
  t4572 = 0. + t4553 + t4566 + t4568;
  t4359 = t413*t4334;
  t4547 = 0.340999127418*t1883*t4507;
  t4597 = t2128*t4572;
  t4634 = 0. + t4359 + t4547 + t4597;
  t4657 = t2510*t4334;
  t4681 = t2516*t4507;
  t4776 = 0.340999127418*t1883*t4572;
  t4791 = 0. + t4657 + t4681 + t4776;
  t4821 = t2403*t4634;
  t4846 = -1.*t210*t4791;
  t4865 = 0. + t4821 + t4846;
  t4653 = t210*t4634;
  t4798 = t2403*t4791;
  t4804 = 0. + t4653 + t4798;
  t2652 = t187*t2629;
  t2840 = -1.*t2703*t2805;
  t2848 = 0. + t2652 + t2840;
  t2951 = t2947*t1718;
  t3026 = t2978*t2027;
  t3109 = t3084*t2285;
  t3110 = 0. + t2951 + t3026 + t3109;
  t3134 = t2937*t3110;
  t3245 = t187*t2703;
  t3250 = t2629*t2805;
  t3257 = 0. + t3245 + t3250;
  t3275 = t3160*t3257;
  t3287 = 0. + t3134 + t3275;
  t3776 = t187*t3737;
  t3835 = -1.*t3833*t2805;
  t3858 = 0. + t3776 + t3835;
  t3874 = t2947*t3431;
  t3877 = t2978*t3496;
  t3960 = t3084*t3569;
  t3990 = 0. + t3874 + t3877 + t3960;
  t4001 = t2937*t3990;
  t4004 = t187*t3833;
  t4005 = t3737*t2805;
  t4030 = 0. + t4004 + t4005;
  t4038 = t3160*t4030;
  t4049 = 0. + t4001 + t4038;
  t4812 = t187*t4804;
  t4873 = -1.*t4865*t2805;
  t4878 = 0. + t4812 + t4873;
  t4892 = t2947*t4334;
  t4900 = t2978*t4507;
  t4908 = t3084*t4572;
  t4909 = 0. + t4892 + t4900 + t4908;
  t4950 = t2937*t4909;
  t5025 = t187*t4865;
  t5086 = t4804*t2805;
  t5181 = 0. + t5025 + t5086;
  t5198 = t3160*t5181;
  t5217 = 0. + t4950 + t5198;
  t5423 = -1.*t3990*t3160;
  t5437 = t2937*t4030;
  t5442 = 0. + t5423 + t5437;
  t5570 = -1.5981976069815686e-7*var1[20];
  t5583 = -0.197083*t990;
  t5592 = 0.0068587469286027075*t505;
  t5604 = -0.010507*t1151;
  t5637 = 0.039853013046*t1582;
  t5673 = t5570 + t5583 + t5592 + t5604 + t5637;
  t5691 = -0.010507*t1559;
  t5708 = 0.039853038461262744*t505;
  t5718 = -0.22023459268999998*t896;
  t5729 = -0.086752619205*t1151;
  t5744 = -0.197083*t1582;
  t5749 = -0.274521*t1644;
  t5768 = 0. + t5691 + t5708 + t5718 + t5729 + t5744 + t5749;
  t5800 = 6.295460977284962e-8*var1[20];
  t5812 = -0.274521*t673;
  t5818 = -0.15302960211018388*t505;
  t5904 = -0.010507*t896;
  t5911 = 0.039853013046*t1644;
  t5915 = t5800 + t5812 + t5818 + t5904 + t5911;
  t5540 = -1.296332362046933e-7*var1[19];
  t5541 = -0.14128592423750855*t1327;
  t5558 = -0.045000372235*t461;
  t5678 = -0.340999127418*t1327*t5673;
  t5778 = t2272*t5768;
  t5921 = t2228*t5915;
  t5942 = t5540 + t5541 + t5558 + t5678 + t5778 + t5921;
  t5953 = 3.2909349868922137e-7*var1[19];
  t5990 = -0.055653945343889656*t1327;
  t5995 = -0.045000372235*t971;
  t5997 = t1907*t5673;
  t6047 = t2014*t5768;
  t6056 = -0.340999127418*t1327*t5915;
  t6083 = t5953 + t5990 + t5995 + t5997 + t6047 + t6056;
  t6088 = -0.04500040093286238*t1327;
  t6151 = -0.055653909852*t2014;
  t6161 = -0.141285834136*t2272;
  t6176 = t971*t5673;
  t6182 = t1409*t5768;
  t6196 = t461*t5915;
  t6206 = 0. + t6088 + t6151 + t6161 + t6176 + t6182 + t6196;
  t5521 = 1.296332362046933e-7*var1[18];
  t5522 = -0.07877668146182712*t1883;
  t5536 = -0.045000372235*t2978;
  t5951 = 0.340999127418*t1883*t5942;
  t6086 = t2516*t6083;
  t6207 = t2510*t6206;
  t6231 = t5521 + t5522 + t5536 + t5951 + t6086 + t6207;
  t6250 = 3.2909349868922137e-7*var1[18];
  t6254 = 0.03103092645718495*t1883;
  t6280 = -0.045000372235*t3084;
  t6288 = t2128*t5942;
  t6292 = 0.340999127418*t1883*t6083;
  t6305 = t413*t6206;
  t6309 = t6250 + t6254 + t6280 + t6288 + t6292 + t6305;
  t5470 = -1.*t4909*t3160;
  t5473 = t2937*t5181;
  t5482 = 0. + t5470 + t5473;
  t6399 = -0.091*t210;
  t6400 = -1.*t210*t6231;
  t6412 = t2403*t6309;
  t6425 = 0. + t6399 + t6400 + t6412;
  t5496 = -1.*t2403;
  t5515 = 1. + t5496;
  t5520 = -0.091*t5515;
  t6245 = t2403*t6231;
  t6327 = t210*t6309;
  t6346 = 0. + t5520 + t6245 + t6327;
  t6448 = -0.04500040093286238*t1883;
  t6453 = -0.07877663122399998*t2510;
  t6471 = 0.031030906668*t413;
  t6477 = t3084*t5942;
  t6478 = t2978*t6083;
  t6479 = t2947*t6206;
  t6491 = 0. + t6448 + t6453 + t6471 + t6477 + t6478 + t6479;
  t6496 = t187*t6425;
  t6504 = t6346*t2805;
  t6540 = 0. + t6496 + t6504;
  t6388 = t187*t6346;
  t6438 = -1.*t6425*t2805;
  t6441 = 0. + t6388 + t6438;
  t6492 = -1.*t6491*t3160;
  t6541 = t2937*t6540;
  t6545 = 0. + t6492 + t6541;
  t6570 = t2937*t6491;
  t6574 = t3160*t6540;
  t6590 = 0. + t6570 + t6574;
  t5362 = -1.*t3110*t3160;
  t5391 = t2937*t3257;
  t5406 = 0. + t5362 + t5391;
  t6446 = t4878*t6441;
  t6627 = -1.*t6441*t3858;
  t6678 = t2848*t6441;
  t6730 = -1.*t4878*t6441;
  t6772 = -1.*t2848*t6441;
  t6803 = t6441*t3858;
  t6904 = -1.*t6491*t3990;
  t6865 = t4909*t6491;
  t6961 = -1.*t4909*t6491;
  t6950 = t3110*t6491;
  t7010 = t6491*t3990;
  t6981 = -1.*t3110*t6491;
  t7287 = -1.*t6206*t3431;
  t7289 = -1.*t6083*t3496;
  t7292 = -1.*t5942*t3569;
  t7293 = t7287 + t7289 + t7292;
  t7301 = t4572*t5942;
  t7303 = t4507*t6083;
  t7305 = t4334*t6206;
  t7307 = t7301 + t7303 + t7305;
  t7345 = -1.*t4572*t5942;
  t7346 = -1.*t4507*t6083;
  t7347 = -1.*t4334*t6206;
  t7348 = t7345 + t7346 + t7347;
  t7354 = t2285*t5942;
  t7358 = t2027*t6083;
  t7359 = t1718*t6206;
  t7361 = t7354 + t7358 + t7359;
  t7441 = t6206*t3431;
  t7442 = t6083*t3496;
  t7443 = t5942*t3569;
  t7452 = t7441 + t7442 + t7443;
  t7467 = -1.*t2285*t5942;
  t7469 = -1.*t2027*t6083;
  t7474 = -1.*t1718*t6206;
  t7478 = t7467 + t7469 + t7474;
  t7547 = -1.*t3356*t5673;
  t7554 = -1.*t3320*t5915;
  t7560 = -1.*t5768*t3418;
  t7570 = t7547 + t7554 + t7560;
  t7577 = t4261*t5673;
  t7610 = t4290*t5768;
  t7613 = t4189*t5915;
  t7623 = t7577 + t7610 + t7613;
  t7657 = t1215*t5673;
  t7658 = t1676*t5768;
  t7660 = t946*t5915;
  t7664 = t7657 + t7658 + t7660;
  t7678 = -1.*t4261*t5673;
  t7680 = -1.*t4290*t5768;
  t7685 = -1.*t4189*t5915;
  t7688 = t7678 + t7680 + t7685;
  t7731 = -1.*t1215*t5673;
  t7732 = -1.*t1676*t5768;
  t7735 = -1.*t946*t5915;
  t7736 = t7731 + t7732 + t7735;
  t7743 = t3356*t5673;
  t7744 = t3320*t5915;
  t7746 = t5768*t3418;
  t7747 = t7743 + t7744 + t7746;
  p_output1[0]=0. + t2891*t3287 - 1.*t2848*t88;
  p_output1[1]=0. + t2891*t4049 - 1.*t3858*t88;
  p_output1[2]=0. + t2891*t5217 - 1.*t4878*t88;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t2848*t2891 + t3287*t88;
  p_output1[7]=0. + t2891*t3858 + t4049*t88;
  p_output1[8]=0. + t2891*t4878 + t5217*t88;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5406;
  p_output1[13]=t5442;
  p_output1[14]=t5482;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5442*(t6446 + t5482*t6545 + t5217*t6590) + t5482*(-1.*t5442*t6545 - 1.*t4049*t6590 + t6627);
  p_output1[19]=t5482*(t5406*t6545 + t3287*t6590 + t6678) + t5406*(-1.*t5482*t6545 - 1.*t5217*t6590 + t6730);
  p_output1[20]=t5442*(-1.*t5406*t6545 - 1.*t3287*t6590 + t6772) + t5406*(t5442*t6545 + t4049*t6590 + t6803);
  p_output1[21]=t5406;
  p_output1[22]=t5442;
  p_output1[23]=t5482;
  p_output1[24]=t3858*(t6446 + t5181*t6540 + t6865) + t4878*(-1.*t4030*t6540 + t6627 + t6904);
  p_output1[25]=t4878*(t3257*t6540 + t6678 + t6950) + t2848*(-1.*t5181*t6540 + t6730 + t6961);
  p_output1[26]=t3858*(-1.*t3257*t6540 + t6772 + t6981) + t2848*(t4030*t6540 + t6803 + t7010);
  p_output1[27]=t2848;
  p_output1[28]=t3858;
  p_output1[29]=t4878;
  p_output1[30]=t3990*(t4804*t6346 + t4865*t6425 + t6865) + t4909*(-1.*t3737*t6346 - 1.*t3833*t6425 + t6904);
  p_output1[31]=t4909*(t2629*t6346 + t2703*t6425 + t6950) + t3110*(-1.*t4804*t6346 - 1.*t4865*t6425 + t6961);
  p_output1[32]=t3990*(-1.*t2629*t6346 - 1.*t2703*t6425 + t6981) + t3110*(t3737*t6346 + t3833*t6425 + t7010);
  p_output1[33]=t3110;
  p_output1[34]=t3990;
  p_output1[35]=t4909;
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
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=-0.091*t2347 - 1.*t3990*(t4791*t6231 + t4634*t6309 + t6865) - 1.*t4909*(-1.*t3718*t6231 - 1.*t3616*t6309 + t6904);
  p_output1[103]=-0.091*t3616 - 1.*t4909*(t2596*t6231 + t2347*t6309 + t6950) - 1.*t3110*(-1.*t4791*t6231 - 1.*t4634*t6309 + t6961);
  p_output1[104]=-0.091*t4634 - 1.*t3990*(-1.*t2596*t6231 - 1.*t2347*t6309 + t6981) - 1.*t3110*(t3718*t6231 + t3616*t6309 + t7010);
  p_output1[105]=0. - 1.*t1718*t2947 - 1.*t2027*t2978 - 1.*t2285*t3084;
  p_output1[106]=0. - 1.*t2947*t3431 - 1.*t2978*t3496 - 1.*t3084*t3569;
  p_output1[107]=0. - 1.*t2947*t4334 - 1.*t2978*t4507 - 1.*t3084*t4572;
  p_output1[108]=0.084668*t1718 - 0.041869*t2027 + 0.016493*t2285 - 0.366501*(t4507*t7293 + t3496*t7307) - 0.930418*(t4572*t7293 + t3569*t7307);
  p_output1[109]=0.084668*t3431 - 0.041869*t3496 + 0.016493*t3569 - 0.366501*(t2027*t7348 + t4507*t7361) - 0.930418*(t2285*t7348 + t4572*t7361);
  p_output1[110]=0.084668*t4334 - 0.041869*t4507 + 0.016493*t4572 - 0.366501*(t2027*t7452 + t3496*t7478) - 0.930418*(t2285*t7452 + t3569*t7478);
  p_output1[111]=0. - 0.366501*t2027 - 0.930418*t2285;
  p_output1[112]=0. - 0.366501*t3496 - 0.930418*t3569;
  p_output1[113]=0. - 0.366501*t4507 - 0.930418*t4572;
  p_output1[114]=0.016493*t1215 - 0.151852*t1676 + 0.366501*(t4189*t7570 + t3320*t7623) - 0.930418*(t4261*t7570 + t3356*t7623) + 0.041869*t946;
  p_output1[115]=0.041869*t3320 + 0.016493*t3356 - 0.151852*t3418 - 0.930418*(t4261*t7664 + t1215*t7688) + 0.366501*(t4189*t7664 + t7688*t946);
  p_output1[116]=0.041869*t4189 + 0.016493*t4261 - 0.151852*t4290 - 0.930418*(t3356*t7736 + t1215*t7747) + 0.366501*(t3320*t7736 + t7747*t946);
  p_output1[117]=0. - 0.930418*t1215 + 0.366501*t946;
  p_output1[118]=0. + 0.366501*t3320 - 0.930418*t3356;
  p_output1[119]=0. + 0.366501*t4189 - 0.930418*t4261;
  p_output1[120]=0.028698285460329806;
  p_output1[121]=0.09991811209437904;
  p_output1[122]=-1.6636899144873568e-7;
  p_output1[123]=3.6361499999859603e-7;
  p_output1[124]=-3.6361499999859603e-7;
  p_output1[125]=1.000000637725;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void Jb_right_knee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
