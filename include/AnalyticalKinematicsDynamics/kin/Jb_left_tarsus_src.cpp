/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:57:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_left_tarsus_src.h"

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
  double t762;
  double t803;
  double t805;
  double t1041;
  double t666;
  double t699;
  double t700;
  double t359;
  double t424;
  double t431;
  double t824;
  double t896;
  double t926;
  double t1031;
  double t1129;
  double t1132;
  double t1144;
  double t1149;
  double t1217;
  double t1309;
  double t1315;
  double t1385;
  double t1395;
  double t1416;
  double t1422;
  double t1423;
  double t1424;
  double t1450;
  double t1480;
  double t1503;
  double t1520;
  double t1614;
  double t1647;
  double t1661;
  double t1694;
  double t1716;
  double t1804;
  double t185;
  double t278;
  double t352;
  double t1182;
  double t1237;
  double t1291;
  double t1487;
  double t1488;
  double t1495;
  double t1846;
  double t1899;
  double t1927;
  double t1932;
  double t1947;
  double t1972;
  double t1987;
  double t1989;
  double t2002;
  double t2033;
  double t2133;
  double t2149;
  double t2241;
  double t2248;
  double t2291;
  double t2313;
  double t2333;
  double t2341;
  double t2378;
  double t2384;
  double t2397;
  double t554;
  double t581;
  double t1907;
  double t2045;
  double t2436;
  double t2462;
  double t2463;
  double t2473;
  double t2535;
  double t2542;
  double t2546;
  double t2548;
  double t2571;
  double t2583;
  double t2586;
  double t2587;
  double t2627;
  double t2663;
  double t2751;
  double t2761;
  double t2786;
  double t2793;
  double t2794;
  double t2795;
  double t2806;
  double t2824;
  double t2828;
  double t2925;
  double t2474;
  double t2475;
  double t2481;
  double t2626;
  double t2633;
  double t2650;
  double t2851;
  double t2859;
  double t183;
  double t2951;
  double t3024;
  double t3028;
  double t3043;
  double t3062;
  double t3063;
  double t3065;
  double t3076;
  double t3118;
  double t2910;
  double t3096;
  double t3106;
  double t102;
  double t3137;
  double t3163;
  double t3229;
  double t52;
  double t3821;
  double t3842;
  double t3897;
  double t3998;
  double t4052;
  double t4055;
  double t4066;
  double t4079;
  double t4097;
  double t4156;
  double t4164;
  double t4174;
  double t4016;
  double t4091;
  double t4176;
  double t4185;
  double t4190;
  double t4205;
  double t4210;
  double t4258;
  double t4285;
  double t4302;
  double t4307;
  double t4338;
  double t4187;
  double t4273;
  double t4348;
  double t4373;
  double t4445;
  double t4487;
  double t4493;
  double t4494;
  double t4533;
  double t4542;
  double t4554;
  double t4557;
  double t4444;
  double t4527;
  double t4571;
  double t4587;
  double t4617;
  double t4624;
  double t4625;
  double t4639;
  double t3283;
  double t3300;
  double t4609;
  double t4667;
  double t4674;
  double t4683;
  double t4684;
  double t4700;
  double t3485;
  double t3493;
  double t3550;
  double t3661;
  double t3670;
  double t3710;
  double t3722;
  double t5004;
  double t5010;
  double t5017;
  double t5064;
  double t5073;
  double t5081;
  double t5099;
  double t5106;
  double t5109;
  double t5055;
  double t5089;
  double t5136;
  double t5188;
  double t5216;
  double t5235;
  double t5238;
  double t5278;
  double t5283;
  double t5285;
  double t5298;
  double t5342;
  double t5192;
  double t5279;
  double t5389;
  double t5401;
  double t5420;
  double t5436;
  double t5487;
  double t5502;
  double t5517;
  double t5518;
  double t5520;
  double t5527;
  double t5411;
  double t5511;
  double t5542;
  double t5557;
  double t5580;
  double t5584;
  double t5586;
  double t5595;
  double t5564;
  double t5600;
  double t5610;
  double t5653;
  double t5654;
  double t5681;
  double t3117;
  double t3237;
  double t3264;
  double t3328;
  double t3421;
  double t3469;
  double t3481;
  double t3561;
  double t3701;
  double t3747;
  double t3757;
  double t3759;
  double t3782;
  double t4682;
  double t4732;
  double t4771;
  double t4807;
  double t4850;
  double t4865;
  double t4871;
  double t4889;
  double t4910;
  double t4932;
  double t4955;
  double t4977;
  double t4978;
  double t5637;
  double t5683;
  double t5685;
  double t5692;
  double t5703;
  double t5709;
  double t5713;
  double t5719;
  double t5722;
  double t5724;
  double t5725;
  double t5735;
  double t5744;
  double t5984;
  double t5994;
  double t6000;
  double t6008;
  double t6057;
  double t6060;
  double t6066;
  double t6070;
  double t6083;
  double t6090;
  double t6100;
  double t6105;
  double t6106;
  double t6112;
  double t6116;
  double t6117;
  double t6127;
  double t6132;
  double t6136;
  double t5942;
  double t5955;
  double t5965;
  double t6065;
  double t6111;
  double t6139;
  double t6144;
  double t6162;
  double t6163;
  double t6164;
  double t6177;
  double t6187;
  double t6194;
  double t6211;
  double t6232;
  double t6239;
  double t6240;
  double t6246;
  double t6255;
  double t6259;
  double t6261;
  double t5915;
  double t5932;
  double t6155;
  double t6219;
  double t6228;
  double t6267;
  double t6272;
  double t6277;
  double t6290;
  double t6302;
  double t6304;
  double t6308;
  double t6309;
  double t6311;
  double t6313;
  double t6316;
  double t6323;
  double t6339;
  double t6340;
  double t6341;
  double t6351;
  double t5897;
  double t5901;
  double t5909;
  double t6273;
  double t6312;
  double t6377;
  double t6385;
  double t6396;
  double t6406;
  double t6408;
  double t6424;
  double t6425;
  double t6431;
  double t6433;
  double t5894;
  double t6394;
  double t6439;
  double t6452;
  double t6474;
  double t6486;
  double t6496;
  double t6506;
  double t6507;
  double t6511;
  double t6535;
  double t6540;
  double t6544;
  double t6555;
  double t6581;
  double t6582;
  double t6593;
  double t6599;
  double t6612;
  double t6614;
  double t5835;
  double t5841;
  double t5845;
  double t5880;
  double t5890;
  double t5891;
  double t6461;
  double t6518;
  double t6526;
  double t6549;
  double t6616;
  double t6628;
  double t6639;
  double t6657;
  double t6660;
  double t5827;
  double t5830;
  double t5834;
  double t6677;
  double t6530;
  double t6736;
  double t6714;
  double t6854;
  double t6805;
  double t6904;
  double t6884;
  double t6942;
  double t6924;
  double t7025;
  double t6990;
  double t7348;
  double t7349;
  double t7351;
  double t7354;
  double t7358;
  double t7359;
  double t7362;
  double t7373;
  double t7406;
  double t7407;
  double t7408;
  double t7409;
  double t7414;
  double t7415;
  double t7417;
  double t7418;
  double t7500;
  double t7501;
  double t7503;
  double t7506;
  double t7519;
  double t7521;
  double t7522;
  double t7524;
  double t7579;
  double t7582;
  double t7587;
  double t7588;
  double t7593;
  double t7595;
  double t7604;
  double t7606;
  double t7665;
  double t7673;
  double t7678;
  double t7680;
  double t7690;
  double t7696;
  double t7700;
  double t7701;
  double t7730;
  double t7733;
  double t7737;
  double t7738;
  double t7742;
  double t7746;
  double t7749;
  double t7751;
  double t7827;
  double t7829;
  double t7831;
  double t7833;
  double t7836;
  double t7837;
  double t7838;
  double t7842;
  double t7871;
  double t7873;
  double t7877;
  double t7882;
  double t7888;
  double t7892;
  double t7895;
  double t7897;
  double t7937;
  double t7938;
  double t7939;
  double t7940;
  double t7951;
  double t7954;
  double t7955;
  double t7962;
  t762 = Cos(var1[10]);
  t803 = -1.*t762;
  t805 = 1. + t803;
  t1041 = Sin(var1[10]);
  t666 = Cos(var1[9]);
  t699 = -1.*t666;
  t700 = 1. + t699;
  t359 = Cos(var1[8]);
  t424 = -1.*t359;
  t431 = 1. + t424;
  t824 = -0.134322983001*t805;
  t896 = 1. + t824;
  t926 = 0.194216*t896;
  t1031 = -0.16812859677606265*t805;
  t1129 = -0.366501*t1041;
  t1132 = 0. + t1129;
  t1144 = 0.848048*t1132;
  t1149 = t926 + t1031 + t1144;
  t1217 = Sin(var1[9]);
  t1309 = -1.000000637725*t805;
  t1315 = 1. + t1309;
  t1385 = 0.848048*t1315;
  t1395 = -0.930418*t1041;
  t1416 = 0. + t1395;
  t1422 = -0.493047*t1416;
  t1423 = 0.366501*t1041;
  t1424 = 0. + t1423;
  t1450 = 0.194216*t1424;
  t1480 = t1385 + t1422 + t1450;
  t1503 = -0.8656776547239999*t805;
  t1520 = 1. + t1503;
  t1614 = -0.493047*t1520;
  t1647 = 0.06622748653061429*t805;
  t1661 = 0.930418*t1041;
  t1694 = 0. + t1661;
  t1716 = 0.848048*t1694;
  t1804 = t1614 + t1647 + t1716;
  t185 = Cos(var1[7]);
  t278 = -1.*t185;
  t352 = 1. + t278;
  t1182 = 0.340999127418*t700*t1149;
  t1237 = 0.930418*t1217;
  t1291 = 0. + t1237;
  t1487 = t1291*t1480;
  t1488 = -0.8656776547239999*t700;
  t1495 = 1. + t1488;
  t1846 = t1495*t1804;
  t1899 = 0. + t1182 + t1487 + t1846;
  t1927 = -0.134322983001*t700;
  t1932 = 1. + t1927;
  t1947 = t1932*t1149;
  t1972 = -0.366501*t1217;
  t1987 = 0. + t1972;
  t1989 = t1987*t1480;
  t2002 = 0.340999127418*t700*t1804;
  t2033 = 0. + t1947 + t1989 + t2002;
  t2133 = 0.366501*t1217;
  t2149 = 0. + t2133;
  t2241 = t2149*t1149;
  t2248 = -1.000000637725*t700;
  t2291 = 1. + t2248;
  t2313 = t2291*t1480;
  t2333 = -0.930418*t1217;
  t2341 = 0. + t2333;
  t2378 = t2341*t1804;
  t2384 = 0. + t2241 + t2313 + t2378;
  t2397 = Sin(var1[8]);
  t554 = -0.8656776547239999*t431;
  t581 = 1. + t554;
  t1907 = t581*t1899;
  t2045 = 0.340999127418*t431*t2033;
  t2436 = -0.930418*t2397;
  t2462 = 0. + t2436;
  t2463 = t2384*t2462;
  t2473 = 0. + t1907 + t2045 + t2463;
  t2535 = 0.340999127418*t431*t1899;
  t2542 = -0.134322983001*t431;
  t2546 = 1. + t2542;
  t2548 = t2546*t2033;
  t2571 = 0.366501*t2397;
  t2583 = 0. + t2571;
  t2586 = t2384*t2583;
  t2587 = 0. + t2535 + t2548 + t2586;
  t2627 = Sin(var1[7]);
  t2663 = -1.000000637725*t431;
  t2751 = 1. + t2663;
  t2761 = t2751*t2384;
  t2786 = -0.366501*t2397;
  t2793 = 0. + t2786;
  t2794 = t2033*t2793;
  t2795 = 0.930418*t2397;
  t2806 = 0. + t2795;
  t2824 = t1899*t2806;
  t2828 = 0. + t2761 + t2794 + t2824;
  t2925 = Cos(var1[6]);
  t2474 = -0.340999127418*t352*t2473;
  t2475 = -0.8656776547239999*t352;
  t2481 = 1. + t2475;
  t2626 = t2481*t2587;
  t2633 = -0.930418*t2627;
  t2650 = 0. + t2633;
  t2851 = t2650*t2828;
  t2859 = 0. + t2474 + t2626 + t2851;
  t183 = Sin(var1[6]);
  t2951 = -0.134322983001*t352;
  t3024 = 1. + t2951;
  t3028 = t3024*t2473;
  t3043 = -0.340999127418*t352*t2587;
  t3062 = -0.366501*t2627;
  t3063 = 0. + t3062;
  t3065 = t3063*t2828;
  t3076 = 0. + t3028 + t3043 + t3065;
  t3118 = Cos(var1[5]);
  t2910 = -1.*t183*t2859;
  t3096 = t2925*t3076;
  t3106 = 0. + t2910 + t3096;
  t102 = Sin(var1[5]);
  t3137 = t2925*t2859;
  t3163 = t183*t3076;
  t3229 = 0. + t3137 + t3163;
  t52 = Sin(var1[3]);
  t3821 = -0.310811*t896;
  t3842 = 0.2690616104987713*t805;
  t3897 = 0.529919*t1132;
  t3998 = t3821 + t3842 + t3897;
  t4052 = 0.529919*t1315;
  t4055 = 0.789039*t1416;
  t4066 = -0.310811*t1424;
  t4079 = t4052 + t4055 + t4066;
  t4097 = 0.789039*t1520;
  t4156 = -0.105986279791916*t805;
  t4164 = 0.529919*t1694;
  t4174 = t4097 + t4156 + t4164;
  t4016 = 0.340999127418*t700*t3998;
  t4091 = t1291*t4079;
  t4176 = t1495*t4174;
  t4185 = 0. + t4016 + t4091 + t4176;
  t4190 = t1932*t3998;
  t4205 = t1987*t4079;
  t4210 = 0.340999127418*t700*t4174;
  t4258 = 0. + t4190 + t4205 + t4210;
  t4285 = t2149*t3998;
  t4302 = t2291*t4079;
  t4307 = t2341*t4174;
  t4338 = 0. + t4285 + t4302 + t4307;
  t4187 = t581*t4185;
  t4273 = 0.340999127418*t431*t4258;
  t4348 = t4338*t2462;
  t4373 = 0. + t4187 + t4273 + t4348;
  t4445 = 0.340999127418*t431*t4185;
  t4487 = t2546*t4258;
  t4493 = t4338*t2583;
  t4494 = 0. + t4445 + t4487 + t4493;
  t4533 = t2751*t4338;
  t4542 = t4258*t2793;
  t4554 = t4185*t2806;
  t4557 = 0. + t4533 + t4542 + t4554;
  t4444 = -0.340999127418*t352*t4373;
  t4527 = t2481*t4494;
  t4571 = t2650*t4557;
  t4587 = 0. + t4444 + t4527 + t4571;
  t4617 = t3024*t4373;
  t4624 = -0.340999127418*t352*t4494;
  t4625 = t3063*t4557;
  t4639 = 0. + t4617 + t4624 + t4625;
  t3283 = Cos(var1[3]);
  t3300 = Sin(var1[4]);
  t4609 = -1.*t183*t4587;
  t4667 = t2925*t4639;
  t4674 = 0. + t4609 + t4667;
  t4683 = t2925*t4587;
  t4684 = t183*t4639;
  t4700 = 0. + t4683 + t4684;
  t3485 = Cos(var1[4]);
  t3493 = 0.366501*t2627;
  t3550 = 0. + t3493;
  t3661 = 0.930418*t2627;
  t3670 = 0. + t3661;
  t3710 = -1.000000637725*t352;
  t3722 = 1. + t3710;
  t5004 = -0.366501*t1520;
  t5010 = -0.3172717261340007*t805;
  t5017 = t5004 + t5010;
  t5064 = -0.930418*t896;
  t5073 = -0.12497652119782442*t805;
  t5081 = t5064 + t5073;
  t5099 = -0.366501*t1416;
  t5106 = -0.930418*t1424;
  t5109 = t5099 + t5106;
  t5055 = 0.340999127418*t700*t5017;
  t5089 = t1932*t5081;
  t5136 = t1987*t5109;
  t5188 = 0. + t5055 + t5089 + t5136;
  t5216 = t1495*t5017;
  t5235 = 0.340999127418*t700*t5081;
  t5238 = t1291*t5109;
  t5278 = 0. + t5216 + t5235 + t5238;
  t5283 = t5017*t2341;
  t5285 = t5081*t2149;
  t5298 = t2291*t5109;
  t5342 = 0. + t5283 + t5285 + t5298;
  t5192 = 0.340999127418*t431*t5188;
  t5279 = t581*t5278;
  t5389 = t5342*t2462;
  t5401 = 0. + t5192 + t5279 + t5389;
  t5420 = t2546*t5188;
  t5436 = 0.340999127418*t431*t5278;
  t5487 = t5342*t2583;
  t5502 = 0. + t5420 + t5436 + t5487;
  t5517 = t2751*t5342;
  t5518 = t5188*t2793;
  t5520 = t5278*t2806;
  t5527 = 0. + t5517 + t5518 + t5520;
  t5411 = -0.340999127418*t352*t5401;
  t5511 = t2481*t5502;
  t5542 = t2650*t5527;
  t5557 = 0. + t5411 + t5511 + t5542;
  t5580 = t3024*t5401;
  t5584 = -0.340999127418*t352*t5502;
  t5586 = t3063*t5527;
  t5595 = 0. + t5580 + t5584 + t5586;
  t5564 = -1.*t183*t5557;
  t5600 = t2925*t5595;
  t5610 = 0. + t5564 + t5600;
  t5653 = t2925*t5557;
  t5654 = t183*t5595;
  t5681 = 0. + t5653 + t5654;
  t3117 = -1.*t102*t3106;
  t3237 = t3118*t3229;
  t3264 = 0. + t3117 + t3237;
  t3328 = t3118*t3106;
  t3421 = t102*t3229;
  t3469 = 0. + t3328 + t3421;
  t3481 = t3300*t3469;
  t3561 = t3550*t2473;
  t3701 = t3670*t2587;
  t3747 = t3722*t2828;
  t3757 = 0. + t3561 + t3701 + t3747;
  t3759 = t3485*t3757;
  t3782 = 0. + t3481 + t3759;
  t4682 = -1.*t102*t4674;
  t4732 = t3118*t4700;
  t4771 = 0. + t4682 + t4732;
  t4807 = t3118*t4674;
  t4850 = t102*t4700;
  t4865 = 0. + t4807 + t4850;
  t4871 = t3300*t4865;
  t4889 = t3550*t4373;
  t4910 = t3670*t4494;
  t4932 = t3722*t4557;
  t4955 = 0. + t4889 + t4910 + t4932;
  t4977 = t3485*t4955;
  t4978 = 0. + t4871 + t4977;
  t5637 = -1.*t102*t5610;
  t5683 = t3118*t5681;
  t5685 = 0. + t5637 + t5683;
  t5692 = t3118*t5610;
  t5703 = t102*t5681;
  t5709 = 0. + t5692 + t5703;
  t5713 = t3300*t5709;
  t5719 = t3550*t5401;
  t5722 = t3670*t5502;
  t5724 = t3722*t5527;
  t5725 = 0. + t5719 + t5722 + t5724;
  t5735 = t3485*t5725;
  t5744 = 0. + t5713 + t5735;
  t5984 = 5.7930615939377813e-8*var1[10];
  t5994 = 0.319547*t896;
  t6000 = 0.03367262212822231*t805;
  t6008 = -0.277485*t1132;
  t6057 = -0.262809976934*t1424;
  t6060 = t5984 + t5994 + t6000 + t6008 + t6057;
  t6066 = -0.277485*t1315;
  t6070 = -0.26281014453449253*t805;
  t6083 = -0.58342*t1416;
  t6090 = 0.23261818470000004*t1132;
  t6100 = 0.319547*t1424;
  t6105 = -0.5905363046000001*t1694;
  t6106 = 0. + t6066 + t6070 + t6083 + t6090 + t6100 + t6105;
  t6112 = 2.281945176511838e-8*var1[10];
  t6116 = -0.58342*t1520;
  t6117 = -0.48157143303072514*t805;
  t6127 = -0.262809976934*t1416;
  t6132 = -0.277485*t1694;
  t6136 = t6112 + t6116 + t6117 + t6127 + t6132;
  t5942 = -6.295460977284962e-8*var1[9];
  t5955 = -0.22023473313910558*t700;
  t5965 = 0.039853013046*t2341;
  t6065 = 0.340999127418*t700*t6060;
  t6111 = t1291*t6106;
  t6139 = t1495*t6136;
  t6144 = t5942 + t5955 + t5965 + t6065 + t6111 + t6139;
  t6162 = -1.5981976069815686e-7*var1[9];
  t6163 = 0.08675267452931407*t700;
  t6164 = 0.039853013046*t2149;
  t6177 = t1932*t6060;
  t6187 = t1987*t6106;
  t6194 = 0.340999127418*t700*t6136;
  t6211 = t6162 + t6163 + t6164 + t6177 + t6187 + t6194;
  t6232 = 0.039853038461262744*t700;
  t6239 = 0.086752619205*t1987;
  t6240 = -0.22023459268999998*t1291;
  t6246 = t2149*t6060;
  t6255 = t2291*t6106;
  t6259 = t2341*t6136;
  t6261 = 0. + t6232 + t6239 + t6240 + t6246 + t6255 + t6259;
  t5915 = 3.2909349868922137e-7*var1[8];
  t5932 = 0.055653945343889656*t431;
  t6155 = 0.340999127418*t431*t6144;
  t6219 = t2546*t6211;
  t6228 = -0.045000372235*t2793;
  t6267 = t6261*t2583;
  t6272 = t5915 + t5932 + t6155 + t6219 + t6228 + t6267;
  t6277 = 1.296332362046933e-7*var1[8];
  t6290 = -0.14128592423750855*t431;
  t6302 = t581*t6144;
  t6304 = 0.340999127418*t431*t6211;
  t6308 = t6261*t2462;
  t6309 = -0.045000372235*t2806;
  t6311 = t6277 + t6290 + t6302 + t6304 + t6308 + t6309;
  t6313 = -0.04500040093286238*t431;
  t6316 = t2751*t6261;
  t6323 = -0.141285834136*t2462;
  t6339 = t6211*t2793;
  t6340 = 0.055653909852*t2583;
  t6341 = t6144*t2806;
  t6351 = 0. + t6313 + t6316 + t6323 + t6339 + t6340 + t6341;
  t5897 = 1.296332362046933e-7*var1[7];
  t5901 = 0.07877668146182712*t352;
  t5909 = -0.045000372235*t3670;
  t6273 = t2481*t6272;
  t6312 = -0.340999127418*t352*t6311;
  t6377 = t2650*t6351;
  t6385 = t5897 + t5901 + t5909 + t6273 + t6312 + t6377;
  t6396 = -3.2909349868922137e-7*var1[7];
  t6406 = 0.03103092645718495*t352;
  t6408 = -0.045000372235*t3550;
  t6424 = -0.340999127418*t352*t6272;
  t6425 = t3024*t6311;
  t6431 = t3063*t6351;
  t6433 = t6396 + t6406 + t6408 + t6424 + t6425 + t6431;
  t5894 = 0.091*t183;
  t6394 = -1.*t183*t6385;
  t6439 = t2925*t6433;
  t6452 = 0. + t5894 + t6394 + t6439;
  t6474 = -1.*t2925;
  t6486 = 1. + t6474;
  t6496 = 0.091*t6486;
  t6506 = t2925*t6385;
  t6507 = t183*t6433;
  t6511 = 0. + t6496 + t6506 + t6507;
  t6535 = t3118*t6452;
  t6540 = t102*t6511;
  t6544 = 0. + t6535 + t6540;
  t6555 = -0.04500040093286238*t352;
  t6581 = 0.07877663122399998*t2650;
  t6582 = 0.031030906668*t3063;
  t6593 = t3670*t6272;
  t6599 = t3550*t6311;
  t6612 = t3722*t6351;
  t6614 = 0. + t6555 + t6581 + t6582 + t6593 + t6599 + t6612;
  t5835 = t3485*t4865;
  t5841 = -1.*t3300*t4955;
  t5845 = 0. + t5835 + t5841;
  t5880 = t3485*t5709;
  t5890 = -1.*t3300*t5725;
  t5891 = 0. + t5880 + t5890;
  t6461 = -1.*t102*t6452;
  t6518 = t3118*t6511;
  t6526 = 0. + t6461 + t6518;
  t6549 = t3300*t6544;
  t6616 = t3485*t6614;
  t6628 = 0. + t6549 + t6616;
  t6639 = t3485*t6544;
  t6657 = -1.*t3300*t6614;
  t6660 = 0. + t6639 + t6657;
  t5827 = t3485*t3469;
  t5830 = -1.*t3300*t3757;
  t5834 = 0. + t5827 + t5830;
  t6677 = t5685*t6526;
  t6530 = -1.*t6526*t4771;
  t6736 = -1.*t5685*t6526;
  t6714 = t6526*t3264;
  t6854 = t6526*t4771;
  t6805 = -1.*t6526*t3264;
  t6904 = -1.*t6614*t4955;
  t6884 = t5725*t6614;
  t6942 = t6614*t3757;
  t6924 = -1.*t5725*t6614;
  t7025 = -1.*t6614*t3757;
  t6990 = t6614*t4955;
  t7348 = -1.*t6272*t4494;
  t7349 = -1.*t4373*t6311;
  t7351 = -1.*t6351*t4557;
  t7354 = t7348 + t7349 + t7351;
  t7358 = t5502*t6272;
  t7359 = t5401*t6311;
  t7362 = t5527*t6351;
  t7373 = t7358 + t7359 + t7362;
  t7406 = t6272*t2587;
  t7407 = t2473*t6311;
  t7408 = t6351*t2828;
  t7409 = t7406 + t7407 + t7408;
  t7414 = -1.*t5502*t6272;
  t7415 = -1.*t5401*t6311;
  t7417 = -1.*t5527*t6351;
  t7418 = t7414 + t7415 + t7417;
  t7500 = -1.*t6272*t2587;
  t7501 = -1.*t2473*t6311;
  t7503 = -1.*t6351*t2828;
  t7506 = t7500 + t7501 + t7503;
  t7519 = t6272*t4494;
  t7521 = t4373*t6311;
  t7522 = t6351*t4557;
  t7524 = t7519 + t7521 + t7522;
  t7579 = -1.*t6144*t4185;
  t7582 = -1.*t6211*t4258;
  t7587 = -1.*t6261*t4338;
  t7588 = t7579 + t7582 + t7587;
  t7593 = t5278*t6144;
  t7595 = t5188*t6211;
  t7604 = t5342*t6261;
  t7606 = t7593 + t7595 + t7604;
  t7665 = t6144*t1899;
  t7673 = t6211*t2033;
  t7678 = t6261*t2384;
  t7680 = t7665 + t7673 + t7678;
  t7690 = -1.*t5278*t6144;
  t7696 = -1.*t5188*t6211;
  t7700 = -1.*t5342*t6261;
  t7701 = t7690 + t7696 + t7700;
  t7730 = -1.*t6144*t1899;
  t7733 = -1.*t6211*t2033;
  t7737 = -1.*t6261*t2384;
  t7738 = t7730 + t7733 + t7737;
  t7742 = t6144*t4185;
  t7746 = t6211*t4258;
  t7749 = t6261*t4338;
  t7751 = t7742 + t7746 + t7749;
  t7827 = -1.*t3998*t6060;
  t7829 = -1.*t4079*t6106;
  t7831 = -1.*t6136*t4174;
  t7833 = t7827 + t7829 + t7831;
  t7836 = t5081*t6060;
  t7837 = t5109*t6106;
  t7838 = t5017*t6136;
  t7842 = t7836 + t7837 + t7838;
  t7871 = t1149*t6060;
  t7873 = t1480*t6106;
  t7877 = t6136*t1804;
  t7882 = t7871 + t7873 + t7877;
  t7888 = -1.*t5081*t6060;
  t7892 = -1.*t5109*t6106;
  t7895 = -1.*t5017*t6136;
  t7897 = t7888 + t7892 + t7895;
  t7937 = -1.*t1149*t6060;
  t7938 = -1.*t1480*t6106;
  t7939 = -1.*t6136*t1804;
  t7940 = t7937 + t7938 + t7939;
  t7951 = t3998*t6060;
  t7954 = t4079*t6106;
  t7955 = t6136*t4174;
  t7962 = t7951 + t7954 + t7955;
  p_output1[0]=0. + t3283*t3782 - 1.*t3264*t52;
  p_output1[1]=0. + t3283*t4978 - 1.*t4771*t52;
  p_output1[2]=0. - 1.*t52*t5685 + t3283*t5744;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t3264*t3283 + t3782*t52;
  p_output1[7]=0. + t3283*t4771 + t4978*t52;
  p_output1[8]=0. + t3283*t5685 + t52*t5744;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5834;
  p_output1[13]=t5845;
  p_output1[14]=t5891;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5891*(t6530 - 1.*t4978*t6628 - 1.*t5845*t6660) + t5845*(t5744*t6628 + t5891*t6660 + t6677);
  p_output1[19]=t5891*(t3782*t6628 + t5834*t6660 + t6714) + t5834*(-1.*t5744*t6628 - 1.*t5891*t6660 + t6736);
  p_output1[20]=t5845*(-1.*t3782*t6628 - 1.*t5834*t6660 + t6805) + t5834*(t4978*t6628 + t5845*t6660 + t6854);
  p_output1[21]=t5834;
  p_output1[22]=t5845;
  p_output1[23]=t5891;
  p_output1[24]=t4771*(t5709*t6544 + t6677 + t6884) + t5685*(t6530 - 1.*t4865*t6544 + t6904);
  p_output1[25]=t3264*(-1.*t5709*t6544 + t6736 + t6924) + t5685*(t3469*t6544 + t6714 + t6942);
  p_output1[26]=t3264*(t4865*t6544 + t6854 + t6990) + t4771*(-1.*t3469*t6544 + t6805 + t7025);
  p_output1[27]=t3264;
  p_output1[28]=t4771;
  p_output1[29]=t5685;
  p_output1[30]=t4955*(t5610*t6452 + t5681*t6511 + t6884) + t5725*(-1.*t4674*t6452 - 1.*t4700*t6511 + t6904);
  p_output1[31]=t3757*(-1.*t5610*t6452 - 1.*t5681*t6511 + t6924) + t5725*(t3106*t6452 + t3229*t6511 + t6942);
  p_output1[32]=t3757*(t4674*t6452 + t4700*t6511 + t6990) + t4955*(-1.*t3106*t6452 - 1.*t3229*t6511 + t7025);
  p_output1[33]=t3757;
  p_output1[34]=t4955;
  p_output1[35]=t5725;
  p_output1[36]=0.091*t3076 - 1.*t4955*(t5557*t6385 + t5595*t6433 + t6884) - 1.*t5725*(-1.*t4587*t6385 - 1.*t4639*t6433 + t6904);
  p_output1[37]=0.091*t4639 - 1.*t3757*(-1.*t5557*t6385 - 1.*t5595*t6433 + t6924) - 1.*t5725*(t2859*t6385 + t3076*t6433 + t6942);
  p_output1[38]=0.091*t5595 - 1.*t3757*(t4587*t6385 + t4639*t6433 + t6990) - 1.*t4955*(-1.*t2859*t6385 - 1.*t3076*t6433 + t7025);
  p_output1[39]=0. - 1.*t2473*t3550 - 1.*t2587*t3670 - 1.*t2828*t3722;
  p_output1[40]=0. - 1.*t3550*t4373 - 1.*t3670*t4494 - 1.*t3722*t4557;
  p_output1[41]=0. - 1.*t3550*t5401 - 1.*t3670*t5502 - 1.*t3722*t5527;
  p_output1[42]=-0.016493*t2473 - 0.041869*t2587 - 0.084668*t2828 - 0.930418*(t5401*t7354 + t4373*t7373) + 0.366501*(t5502*t7354 + t4494*t7373);
  p_output1[43]=-0.016493*t4373 - 0.041869*t4494 - 0.084668*t4557 - 0.930418*(t5401*t7409 + t2473*t7418) + 0.366501*(t5502*t7409 + t2587*t7418);
  p_output1[44]=-0.016493*t5401 - 0.041869*t5502 - 0.084668*t5527 - 0.930418*(t4373*t7506 + t2473*t7524) + 0.366501*(t4494*t7506 + t2587*t7524);
  p_output1[45]=0. - 0.930418*t2473 + 0.366501*t2587;
  p_output1[46]=0. - 0.930418*t4373 + 0.366501*t4494;
  p_output1[47]=0. - 0.930418*t5401 + 0.366501*t5502;
  p_output1[48]=-0.041869*t1899 + 0.016493*t2033 + 0.151852*t2384 + 0.366501*(t5278*t7588 + t4185*t7606) + 0.930418*(t5188*t7588 + t4258*t7606);
  p_output1[49]=-0.041869*t4185 + 0.016493*t4258 + 0.151852*t4338 + 0.366501*(t5278*t7680 + t1899*t7701) + 0.930418*(t5188*t7680 + t2033*t7701);
  p_output1[50]=0.016493*t5188 - 0.041869*t5278 + 0.151852*t5342 + 0.366501*(t4185*t7738 + t1899*t7751) + 0.930418*(t4258*t7738 + t2033*t7751);
  p_output1[51]=0. + 0.366501*t1899 + 0.930418*t2033;
  p_output1[52]=0. + 0.366501*t4185 + 0.930418*t4258;
  p_output1[53]=0. + 0.930418*t5188 + 0.366501*t5278;
  p_output1[54]=0.014606*t1149 - 0.236705*t1480 - 0.03708*t1804 - 0.930418*(t5081*t7833 + t3998*t7842) - 0.366501*(t5017*t7833 + t4174*t7842);
  p_output1[55]=0.014606*t3998 - 0.236705*t4079 - 0.03708*t4174 - 0.930418*(t5081*t7882 + t1149*t7897) - 0.366501*(t5017*t7882 + t1804*t7897);
  p_output1[56]=-0.03708*t5017 + 0.014606*t5081 - 0.236705*t5109 - 0.930418*(t3998*t7940 + t1149*t7962) - 0.366501*(t4174*t7940 + t1804*t7962);
  p_output1[57]=0. - 0.930418*t1149 - 0.366501*t1804;
  p_output1[58]=0. - 0.930418*t3998 - 0.366501*t4174;
  p_output1[59]=0. - 0.366501*t5017 - 0.930418*t5081;
  p_output1[60]=0.029180550801402028;
  p_output1[61]=0.0009300172267206197;
  p_output1[62]=-2.3749145060258936e-7;
  p_output1[63]=1.5625900004478943e-7;
  p_output1[64]=5.664589999843095e-7;
  p_output1[65]=1.000000637725;
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
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
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



void Jb_left_tarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
