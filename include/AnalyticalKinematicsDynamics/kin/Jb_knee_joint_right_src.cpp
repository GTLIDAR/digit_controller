/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_knee_joint_right_src.h"

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
  double t465;
  double t479;
  double t646;
  double t387;
  double t708;
  double t1358;
  double t1416;
  double t1526;
  double t650;
  double t656;
  double t699;
  double t704;
  double t748;
  double t750;
  double t770;
  double t834;
  double t896;
  double t1016;
  double t1022;
  double t1098;
  double t1179;
  double t1187;
  double t1309;
  double t1325;
  double t1642;
  double t1682;
  double t1690;
  double t1733;
  double t1736;
  double t1740;
  double t1741;
  double t1772;
  double t1797;
  double t1829;
  double t1921;
  double t1988;
  double t2034;
  double t329;
  double t423;
  double t427;
  double t842;
  double t847;
  double t887;
  double t1338;
  double t1556;
  double t1620;
  double t1874;
  double t1878;
  double t2037;
  double t2039;
  double t2057;
  double t2160;
  double t2161;
  double t2168;
  double t2177;
  double t2184;
  double t2334;
  double t2343;
  double t2368;
  double t2383;
  double t2387;
  double t2391;
  double t2419;
  double t2426;
  double t2629;
  double t363;
  double t366;
  double t1917;
  double t2214;
  double t2227;
  double t2295;
  double t2501;
  double t2575;
  double t306;
  double t2643;
  double t2667;
  double t2690;
  double t2703;
  double t2733;
  double t2748;
  double t2784;
  double t2809;
  double t253;
  double t2944;
  double t2977;
  double t2993;
  double t2592;
  double t2841;
  double t2851;
  double t3015;
  double t108;
  double t3529;
  double t3552;
  double t3592;
  double t3630;
  double t3636;
  double t3637;
  double t3683;
  double t3747;
  double t3753;
  double t3606;
  double t3641;
  double t3773;
  double t3791;
  double t3860;
  double t3874;
  double t3894;
  double t3908;
  double t3915;
  double t3967;
  double t3974;
  double t3985;
  double t3817;
  double t3913;
  double t3995;
  double t4003;
  double t4014;
  double t4022;
  double t4040;
  double t4092;
  double t3221;
  double t3227;
  double t3238;
  double t3264;
  double t3294;
  double t3303;
  double t3364;
  double t3415;
  double t3450;
  double t4153;
  double t4159;
  double t4160;
  double t4004;
  double t4101;
  double t4123;
  double t4360;
  double t4366;
  double t4387;
  double t4406;
  double t4466;
  double t4476;
  double t4509;
  double t4522;
  double t4530;
  double t4404;
  double t4488;
  double t4534;
  double t4548;
  double t4585;
  double t4606;
  double t4687;
  double t4708;
  double t4731;
  double t4736;
  double t4772;
  double t4801;
  double t4555;
  double t4722;
  double t4802;
  double t4806;
  double t4829;
  double t4832;
  double t4848;
  double t4849;
  double t4894;
  double t4926;
  double t4934;
  double t4822;
  double t4858;
  double t4867;
  double t2853;
  double t3084;
  double t3098;
  double t3280;
  double t3345;
  double t3436;
  double t3442;
  double t3447;
  double t3470;
  double t3474;
  double t3485;
  double t3487;
  double t3490;
  double t4143;
  double t4198;
  double t4201;
  double t4209;
  double t4251;
  double t4265;
  double t4275;
  double t4280;
  double t4286;
  double t4324;
  double t4326;
  double t4339;
  double t4348;
  double t4870;
  double t4939;
  double t4966;
  double t4998;
  double t5043;
  double t5050;
  double t5065;
  double t5081;
  double t5093;
  double t5096;
  double t5097;
  double t5111;
  double t5118;
  double t5193;
  double t5217;
  double t5218;
  double t5354;
  double t5368;
  double t5385;
  double t5386;
  double t5394;
  double t5413;
  double t5424;
  double t5428;
  double t5437;
  double t5450;
  double t5456;
  double t5460;
  double t5467;
  double t5471;
  double t5473;
  double t5480;
  double t5494;
  double t5504;
  double t5507;
  double t5312;
  double t5315;
  double t5327;
  double t5416;
  double t5469;
  double t5512;
  double t5533;
  double t5549;
  double t5552;
  double t5558;
  double t5562;
  double t5574;
  double t5583;
  double t5584;
  double t5600;
  double t5607;
  double t5613;
  double t5614;
  double t5615;
  double t5618;
  double t5619;
  double t5281;
  double t5287;
  double t5311;
  double t5540;
  double t5586;
  double t5623;
  double t5637;
  double t5650;
  double t5657;
  double t5662;
  double t5665;
  double t5680;
  double t5690;
  double t5693;
  double t5219;
  double t5220;
  double t5234;
  double t5716;
  double t5718;
  double t5721;
  double t5728;
  double t5245;
  double t5262;
  double t5274;
  double t5638;
  double t5694;
  double t5710;
  double t5745;
  double t5747;
  double t5754;
  double t5762;
  double t5764;
  double t5774;
  double t5776;
  double t5788;
  double t5790;
  double t5792;
  double t5715;
  double t5736;
  double t5737;
  double t5778;
  double t5795;
  double t5797;
  double t5815;
  double t5826;
  double t5842;
  double t5175;
  double t5184;
  double t5185;
  double t5741;
  double t5853;
  double t5889;
  double t5929;
  double t5967;
  double t5983;
  double t6019;
  double t6011;
  double t6064;
  double t6056;
  double t6089;
  double t6076;
  double t6469;
  double t6475;
  double t6495;
  double t6503;
  double t6516;
  double t6518;
  double t6519;
  double t6530;
  double t6584;
  double t6591;
  double t6603;
  double t6610;
  double t6626;
  double t6630;
  double t6631;
  double t6634;
  double t6722;
  double t6749;
  double t6759;
  double t6760;
  double t6770;
  double t6774;
  double t6791;
  double t6801;
  double t6959;
  double t6960;
  double t6961;
  double t6970;
  double t6974;
  double t6977;
  double t6983;
  double t6997;
  double t7039;
  double t7040;
  double t7041;
  double t7044;
  double t7047;
  double t7050;
  double t7053;
  double t7069;
  double t7118;
  double t7119;
  double t7122;
  double t7123;
  double t7126;
  double t7131;
  double t7133;
  double t7144;
  t465 = Cos(var1[20]);
  t479 = -1.*t465;
  t646 = 1. + t479;
  t387 = Sin(var1[19]);
  t708 = Sin(var1[20]);
  t1358 = Cos(var1[19]);
  t1416 = -1.*t1358;
  t1526 = 1. + t1416;
  t650 = -0.8656776547239999*t646;
  t656 = 1. + t650;
  t699 = -0.657905*t656;
  t704 = 0.0883716288660118*t646;
  t748 = -0.930418*t708;
  t750 = 0. + t748;
  t770 = -0.707107*t750;
  t834 = t699 + t704 + t770;
  t896 = -0.134322983001*t646;
  t1016 = 1. + t896;
  t1022 = -0.259155*t1016;
  t1098 = 0.22434503092393926*t646;
  t1179 = -0.366501*t708;
  t1187 = 0. + t1179;
  t1309 = -0.707107*t1187;
  t1325 = t1022 + t1098 + t1309;
  t1642 = -1.000000637725*t646;
  t1682 = 1. + t1642;
  t1690 = -0.707107*t1682;
  t1733 = 0.366501*t708;
  t1736 = 0. + t1733;
  t1740 = -0.259155*t1736;
  t1741 = 0.930418*t708;
  t1772 = 0. + t1741;
  t1797 = -0.657905*t1772;
  t1829 = t1690 + t1740 + t1797;
  t1921 = Cos(var1[18]);
  t1988 = -1.*t1921;
  t2034 = 1. + t1988;
  t329 = Sin(var1[18]);
  t423 = -0.930418*t387;
  t427 = 0. + t423;
  t842 = t427*t834;
  t847 = -0.366501*t387;
  t887 = 0. + t847;
  t1338 = t887*t1325;
  t1556 = -1.000000637725*t1526;
  t1620 = 1. + t1556;
  t1874 = t1620*t1829;
  t1878 = 0. + t842 + t1338 + t1874;
  t2037 = -0.340999127418*t1526*t834;
  t2039 = -0.134322983001*t1526;
  t2057 = 1. + t2039;
  t2160 = t2057*t1325;
  t2161 = 0.366501*t387;
  t2168 = 0. + t2161;
  t2177 = t2168*t1829;
  t2184 = 0. + t2037 + t2160 + t2177;
  t2334 = -0.8656776547239999*t1526;
  t2343 = 1. + t2334;
  t2368 = t2343*t834;
  t2383 = -0.340999127418*t1526*t1325;
  t2387 = 0.930418*t387;
  t2391 = 0. + t2387;
  t2419 = t2391*t1829;
  t2426 = 0. + t2368 + t2383 + t2419;
  t2629 = Cos(var1[17]);
  t363 = 0.366501*t329;
  t366 = 0. + t363;
  t1917 = t366*t1878;
  t2214 = 0.340999127418*t2034*t2184;
  t2227 = -0.134322983001*t2034;
  t2295 = 1. + t2227;
  t2501 = t2295*t2426;
  t2575 = 0. + t1917 + t2214 + t2501;
  t306 = Sin(var1[17]);
  t2643 = -0.930418*t329;
  t2667 = 0. + t2643;
  t2690 = t2667*t1878;
  t2703 = -0.8656776547239999*t2034;
  t2733 = 1. + t2703;
  t2748 = t2733*t2184;
  t2784 = 0.340999127418*t2034*t2426;
  t2809 = 0. + t2690 + t2748 + t2784;
  t253 = Cos(var1[5]);
  t2944 = t2629*t2575;
  t2977 = -1.*t306*t2809;
  t2993 = 0. + t2944 + t2977;
  t2592 = t306*t2575;
  t2841 = t2629*t2809;
  t2851 = 0. + t2592 + t2841;
  t3015 = Sin(var1[5]);
  t108 = Sin(var1[3]);
  t3529 = 0.657905*t656;
  t3552 = -0.0883716288660118*t646;
  t3592 = t3529 + t3552 + t770;
  t3630 = 0.259155*t1016;
  t3636 = -0.22434503092393926*t646;
  t3637 = t3630 + t3636 + t1309;
  t3683 = 0.259155*t1736;
  t3747 = 0.657905*t1772;
  t3753 = t1690 + t3683 + t3747;
  t3606 = t427*t3592;
  t3641 = t887*t3637;
  t3773 = t1620*t3753;
  t3791 = 0. + t3606 + t3641 + t3773;
  t3860 = -0.340999127418*t1526*t3592;
  t3874 = t2057*t3637;
  t3894 = t2168*t3753;
  t3908 = 0. + t3860 + t3874 + t3894;
  t3915 = t2343*t3592;
  t3967 = -0.340999127418*t1526*t3637;
  t3974 = t2391*t3753;
  t3985 = 0. + t3915 + t3967 + t3974;
  t3817 = t366*t3791;
  t3913 = 0.340999127418*t2034*t3908;
  t3995 = t2295*t3985;
  t4003 = 0. + t3817 + t3913 + t3995;
  t4014 = t2667*t3791;
  t4022 = t2733*t3908;
  t4040 = 0.340999127418*t2034*t3985;
  t4092 = 0. + t4014 + t4022 + t4040;
  t3221 = Cos(var1[3]);
  t3227 = Cos(var1[4]);
  t3238 = -1.000000637725*t2034;
  t3264 = 1. + t3238;
  t3294 = 0.930418*t329;
  t3303 = 0. + t3294;
  t3364 = -0.366501*t329;
  t3415 = 0. + t3364;
  t3450 = Sin(var1[4]);
  t4153 = t2629*t4003;
  t4159 = -1.*t306*t4092;
  t4160 = 0. + t4153 + t4159;
  t4004 = t306*t4003;
  t4101 = t2629*t4092;
  t4123 = 0. + t4004 + t4101;
  t4360 = -0.366501*t656;
  t4366 = -0.3172717261340007*t646;
  t4387 = t4360 + t4366;
  t4406 = 0.930418*t1016;
  t4466 = 0.12497652119782442*t646;
  t4476 = t4406 + t4466;
  t4509 = 0.930418*t1736;
  t4522 = -0.366501*t1772;
  t4530 = t4509 + t4522;
  t4404 = t4387*t427;
  t4488 = t4476*t887;
  t4534 = t1620*t4530;
  t4548 = 0. + t4404 + t4488 + t4534;
  t4585 = -0.340999127418*t1526*t4387;
  t4606 = t2057*t4476;
  t4687 = t2168*t4530;
  t4708 = 0. + t4585 + t4606 + t4687;
  t4731 = t2343*t4387;
  t4736 = -0.340999127418*t1526*t4476;
  t4772 = t2391*t4530;
  t4801 = 0. + t4731 + t4736 + t4772;
  t4555 = t366*t4548;
  t4722 = 0.340999127418*t2034*t4708;
  t4802 = t2295*t4801;
  t4806 = 0. + t4555 + t4722 + t4802;
  t4829 = t2667*t4548;
  t4832 = t2733*t4708;
  t4848 = 0.340999127418*t2034*t4801;
  t4849 = 0. + t4829 + t4832 + t4848;
  t4894 = t2629*t4806;
  t4926 = -1.*t306*t4849;
  t4934 = 0. + t4894 + t4926;
  t4822 = t306*t4806;
  t4858 = t2629*t4849;
  t4867 = 0. + t4822 + t4858;
  t2853 = t253*t2851;
  t3084 = -1.*t2993*t3015;
  t3098 = 0. + t2853 + t3084;
  t3280 = t3264*t1878;
  t3345 = t3303*t2184;
  t3436 = t3415*t2426;
  t3442 = 0. + t3280 + t3345 + t3436;
  t3447 = t3227*t3442;
  t3470 = t253*t2993;
  t3474 = t2851*t3015;
  t3485 = 0. + t3470 + t3474;
  t3487 = t3450*t3485;
  t3490 = 0. + t3447 + t3487;
  t4143 = t253*t4123;
  t4198 = -1.*t4160*t3015;
  t4201 = 0. + t4143 + t4198;
  t4209 = t3264*t3791;
  t4251 = t3303*t3908;
  t4265 = t3415*t3985;
  t4275 = 0. + t4209 + t4251 + t4265;
  t4280 = t3227*t4275;
  t4286 = t253*t4160;
  t4324 = t4123*t3015;
  t4326 = 0. + t4286 + t4324;
  t4339 = t3450*t4326;
  t4348 = 0. + t4280 + t4339;
  t4870 = t253*t4867;
  t4939 = -1.*t4934*t3015;
  t4966 = 0. + t4870 + t4939;
  t4998 = t3264*t4548;
  t5043 = t3303*t4708;
  t5050 = t3415*t4801;
  t5065 = 0. + t4998 + t5043 + t5050;
  t5081 = t3227*t5065;
  t5093 = t253*t4934;
  t5096 = t4867*t3015;
  t5097 = 0. + t5093 + t5096;
  t5111 = t3450*t5097;
  t5118 = 0. + t5081 + t5111;
  t5193 = -1.*t4275*t3450;
  t5217 = t3227*t4326;
  t5218 = 0. + t5193 + t5217;
  t5354 = -1.5981976069815686e-7*var1[20];
  t5368 = -0.165064*t1016;
  t5385 = -0.022172213784128716*t646;
  t5386 = 0.039853*t1187;
  t5394 = 0.039853013046*t1736;
  t5413 = t5354 + t5368 + t5385 + t5386 + t5394;
  t5424 = 0.039853*t1682;
  t5428 = 0.039853038461262744*t646;
  t5437 = -0.22023459268999998*t750;
  t5450 = -0.086752619205*t1187;
  t5456 = -0.165064*t1736;
  t5460 = -0.189386*t1772;
  t5467 = 0. + t5424 + t5428 + t5437 + t5450 + t5456 + t5460;
  t5471 = 6.295460977284962e-8*var1[20];
  t5473 = -0.189386*t656;
  t5480 = -0.16394805317098082*t646;
  t5494 = 0.039853*t750;
  t5504 = 0.039853013046*t1772;
  t5507 = t5471 + t5473 + t5480 + t5494 + t5504;
  t5312 = -1.296332362046933e-7*var1[19];
  t5315 = -0.14128592423750855*t1526;
  t5327 = -0.045000372235*t427;
  t5416 = -0.340999127418*t1526*t5413;
  t5469 = t2391*t5467;
  t5512 = t2343*t5507;
  t5533 = t5312 + t5315 + t5327 + t5416 + t5469 + t5512;
  t5549 = 3.2909349868922137e-7*var1[19];
  t5552 = -0.055653945343889656*t1526;
  t5558 = -0.045000372235*t887;
  t5562 = t2057*t5413;
  t5574 = t2168*t5467;
  t5583 = -0.340999127418*t1526*t5507;
  t5584 = t5549 + t5552 + t5558 + t5562 + t5574 + t5583;
  t5600 = -0.04500040093286238*t1526;
  t5607 = -0.055653909852*t2168;
  t5613 = -0.141285834136*t2391;
  t5614 = t887*t5413;
  t5615 = t1620*t5467;
  t5618 = t427*t5507;
  t5619 = 0. + t5600 + t5607 + t5613 + t5614 + t5615 + t5618;
  t5281 = 1.296332362046933e-7*var1[18];
  t5287 = -0.07877668146182712*t2034;
  t5311 = -0.045000372235*t3303;
  t5540 = 0.340999127418*t2034*t5533;
  t5586 = t2733*t5584;
  t5623 = t2667*t5619;
  t5637 = t5281 + t5287 + t5311 + t5540 + t5586 + t5623;
  t5650 = 3.2909349868922137e-7*var1[18];
  t5657 = 0.03103092645718495*t2034;
  t5662 = -0.045000372235*t3415;
  t5665 = t2295*t5533;
  t5680 = 0.340999127418*t2034*t5584;
  t5690 = t366*t5619;
  t5693 = t5650 + t5657 + t5662 + t5665 + t5680 + t5690;
  t5219 = -1.*t5065*t3450;
  t5220 = t3227*t5097;
  t5234 = 0. + t5219 + t5220;
  t5716 = -0.091*t306;
  t5718 = -1.*t306*t5637;
  t5721 = t2629*t5693;
  t5728 = 0. + t5716 + t5718 + t5721;
  t5245 = -1.*t2629;
  t5262 = 1. + t5245;
  t5274 = -0.091*t5262;
  t5638 = t2629*t5637;
  t5694 = t306*t5693;
  t5710 = 0. + t5274 + t5638 + t5694;
  t5745 = -0.04500040093286238*t2034;
  t5747 = -0.07877663122399998*t2667;
  t5754 = 0.031030906668*t366;
  t5762 = t3415*t5533;
  t5764 = t3303*t5584;
  t5774 = t3264*t5619;
  t5776 = 0. + t5745 + t5747 + t5754 + t5762 + t5764 + t5774;
  t5788 = t253*t5728;
  t5790 = t5710*t3015;
  t5792 = 0. + t5788 + t5790;
  t5715 = t253*t5710;
  t5736 = -1.*t5728*t3015;
  t5737 = 0. + t5715 + t5736;
  t5778 = -1.*t5776*t3450;
  t5795 = t3227*t5792;
  t5797 = 0. + t5778 + t5795;
  t5815 = t3227*t5776;
  t5826 = t3450*t5792;
  t5842 = 0. + t5815 + t5826;
  t5175 = -1.*t3442*t3450;
  t5184 = t3227*t3485;
  t5185 = 0. + t5175 + t5184;
  t5741 = t4966*t5737;
  t5853 = -1.*t5737*t4201;
  t5889 = t3098*t5737;
  t5929 = -1.*t4966*t5737;
  t5967 = -1.*t3098*t5737;
  t5983 = t5737*t4201;
  t6019 = -1.*t5776*t4275;
  t6011 = t5065*t5776;
  t6064 = -1.*t5065*t5776;
  t6056 = t3442*t5776;
  t6089 = t5776*t4275;
  t6076 = -1.*t3442*t5776;
  t6469 = -1.*t5619*t3791;
  t6475 = -1.*t5584*t3908;
  t6495 = -1.*t5533*t3985;
  t6503 = t6469 + t6475 + t6495;
  t6516 = t4801*t5533;
  t6518 = t4708*t5584;
  t6519 = t4548*t5619;
  t6530 = t6516 + t6518 + t6519;
  t6584 = -1.*t4801*t5533;
  t6591 = -1.*t4708*t5584;
  t6603 = -1.*t4548*t5619;
  t6610 = t6584 + t6591 + t6603;
  t6626 = t2426*t5533;
  t6630 = t2184*t5584;
  t6631 = t1878*t5619;
  t6634 = t6626 + t6630 + t6631;
  t6722 = t5619*t3791;
  t6749 = t5584*t3908;
  t6759 = t5533*t3985;
  t6760 = t6722 + t6749 + t6759;
  t6770 = -1.*t2426*t5533;
  t6774 = -1.*t2184*t5584;
  t6791 = -1.*t1878*t5619;
  t6801 = t6770 + t6774 + t6791;
  t6959 = -1.*t3637*t5413;
  t6960 = -1.*t3592*t5507;
  t6961 = -1.*t5467*t3753;
  t6970 = t6959 + t6960 + t6961;
  t6974 = t4476*t5413;
  t6977 = t4530*t5467;
  t6983 = t4387*t5507;
  t6997 = t6974 + t6977 + t6983;
  t7039 = t1325*t5413;
  t7040 = t1829*t5467;
  t7041 = t834*t5507;
  t7044 = t7039 + t7040 + t7041;
  t7047 = -1.*t4476*t5413;
  t7050 = -1.*t4530*t5467;
  t7053 = -1.*t4387*t5507;
  t7069 = t7047 + t7050 + t7053;
  t7118 = -1.*t1325*t5413;
  t7119 = -1.*t1829*t5467;
  t7122 = -1.*t834*t5507;
  t7123 = t7118 + t7119 + t7122;
  t7126 = t3637*t5413;
  t7131 = t3592*t5507;
  t7133 = t5467*t3753;
  t7144 = t7126 + t7131 + t7133;
  p_output1[0]=0. - 1.*t108*t3098 + t3221*t3490;
  p_output1[1]=0. - 1.*t108*t4201 + t3221*t4348;
  p_output1[2]=0. - 1.*t108*t4966 + t3221*t5118;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t3098*t3221 + t108*t3490;
  p_output1[7]=0. + t3221*t4201 + t108*t4348;
  p_output1[8]=0. + t3221*t4966 + t108*t5118;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5185;
  p_output1[13]=t5218;
  p_output1[14]=t5234;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5218*(t5741 + t5234*t5797 + t5118*t5842) + t5234*(-1.*t5218*t5797 - 1.*t4348*t5842 + t5853);
  p_output1[19]=t5234*(t5185*t5797 + t3490*t5842 + t5889) + t5185*(-1.*t5234*t5797 - 1.*t5118*t5842 + t5929);
  p_output1[20]=t5218*(-1.*t5185*t5797 - 1.*t3490*t5842 + t5967) + t5185*(t5218*t5797 + t4348*t5842 + t5983);
  p_output1[21]=t5185;
  p_output1[22]=t5218;
  p_output1[23]=t5234;
  p_output1[24]=t4201*(t5741 + t5097*t5792 + t6011) + t4966*(-1.*t4326*t5792 + t5853 + t6019);
  p_output1[25]=t4966*(t3485*t5792 + t5889 + t6056) + t3098*(-1.*t5097*t5792 + t5929 + t6064);
  p_output1[26]=t4201*(-1.*t3485*t5792 + t5967 + t6076) + t3098*(t4326*t5792 + t5983 + t6089);
  p_output1[27]=t3098;
  p_output1[28]=t4201;
  p_output1[29]=t4966;
  p_output1[30]=t4275*(t4867*t5710 + t4934*t5728 + t6011) + t5065*(-1.*t4123*t5710 - 1.*t4160*t5728 + t6019);
  p_output1[31]=t5065*(t2851*t5710 + t2993*t5728 + t6056) + t3442*(-1.*t4867*t5710 - 1.*t4934*t5728 + t6064);
  p_output1[32]=t4275*(-1.*t2851*t5710 - 1.*t2993*t5728 + t6076) + t3442*(t4123*t5710 + t4160*t5728 + t6089);
  p_output1[33]=t3442;
  p_output1[34]=t4275;
  p_output1[35]=t5065;
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
  p_output1[102]=-0.091*t2575 - 1.*t4275*(t4849*t5637 + t4806*t5693 + t6011) - 1.*t5065*(-1.*t4092*t5637 - 1.*t4003*t5693 + t6019);
  p_output1[103]=-0.091*t4003 - 1.*t5065*(t2809*t5637 + t2575*t5693 + t6056) - 1.*t3442*(-1.*t4849*t5637 - 1.*t4806*t5693 + t6064);
  p_output1[104]=-0.091*t4806 - 1.*t4275*(-1.*t2809*t5637 - 1.*t2575*t5693 + t6076) - 1.*t3442*(t4092*t5637 + t4003*t5693 + t6089);
  p_output1[105]=0. - 1.*t1878*t3264 - 1.*t2184*t3303 - 1.*t2426*t3415;
  p_output1[106]=0. - 1.*t3264*t3791 - 1.*t3303*t3908 - 1.*t3415*t3985;
  p_output1[107]=0. - 1.*t3264*t4548 - 1.*t3303*t4708 - 1.*t3415*t4801;
  p_output1[108]=0.084668*t1878 - 0.041869*t2184 + 0.016493*t2426 - 0.366501*(t4708*t6503 + t3908*t6530) - 0.930418*(t4801*t6503 + t3985*t6530);
  p_output1[109]=0.084668*t3791 - 0.041869*t3908 + 0.016493*t3985 - 0.366501*(t2184*t6610 + t4708*t6634) - 0.930418*(t2426*t6610 + t4801*t6634);
  p_output1[110]=0.084668*t4548 - 0.041869*t4708 + 0.016493*t4801 - 0.366501*(t2184*t6760 + t3908*t6801) - 0.930418*(t2426*t6760 + t3985*t6801);
  p_output1[111]=0. - 0.366501*t2184 - 0.930418*t2426;
  p_output1[112]=0. - 0.366501*t3908 - 0.930418*t3985;
  p_output1[113]=0. - 0.366501*t4708 - 0.930418*t4801;
  p_output1[114]=0.016493*t1325 - 0.151852*t1829 + 0.366501*(t4387*t6970 + t3592*t6997) - 0.930418*(t4476*t6970 + t3637*t6997) + 0.041869*t834;
  p_output1[115]=0.041869*t3592 + 0.016493*t3637 - 0.151852*t3753 - 0.930418*(t4476*t7044 + t1325*t7069) + 0.366501*(t4387*t7044 + t7069*t834);
  p_output1[116]=0.041869*t4387 + 0.016493*t4476 - 0.151852*t4530 - 0.930418*(t3637*t7123 + t1325*t7144) + 0.366501*(t3592*t7123 + t7144*t834);
  p_output1[117]=0. - 0.930418*t1325 + 0.366501*t834;
  p_output1[118]=0. + 0.366501*t3592 - 0.930418*t3637;
  p_output1[119]=0. + 0.366501*t4387 - 0.930418*t4476;
  p_output1[120]=-4.499284959325056e-7;
  p_output1[121]=-4.857531045524e-7;
  p_output1[122]=-1.9226558521656667e-7;
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



void Jb_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
