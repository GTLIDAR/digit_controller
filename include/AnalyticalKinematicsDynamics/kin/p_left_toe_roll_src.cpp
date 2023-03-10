/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:05:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_toe_roll_src.h"

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
  double t868;
  double t605;
  double t893;
  double t657;
  double t898;
  double t1361;
  double t25;
  double t1063;
  double t1088;
  double t1165;
  double t829;
  double t927;
  double t1024;
  double t1172;
  double t1304;
  double t1324;
  double t1341;
  double t1870;
  double t1872;
  double t1932;
  double t1647;
  double t1682;
  double t1690;
  double t1280;
  double t1779;
  double t1798;
  double t2622;
  double t2632;
  double t2699;
  double t2110;
  double t2112;
  double t1408;
  double t1411;
  double t1443;
  double t1452;
  double t3024;
  double t3032;
  double t3045;
  double t3086;
  double t3146;
  double t3206;
  double t2726;
  double t2765;
  double t2768;
  double t2771;
  double t2787;
  double t2798;
  double t3209;
  double t2938;
  double t2940;
  double t2972;
  double t2977;
  double t3006;
  double t3007;
  double t2558;
  double t2583;
  double t2616;
  double t2305;
  double t2807;
  double t2808;
  double t2838;
  double t3021;
  double t3213;
  double t3217;
  double t3219;
  double t3238;
  double t3293;
  double t3364;
  double t3367;
  double t3370;
  double t3371;
  double t3385;
  double t3394;
  double t3404;
  double t3413;
  double t3460;
  double t3480;
  double t3541;
  double t3547;
  double t3555;
  double t3572;
  double t3634;
  double t3685;
  double t3702;
  double t3707;
  double t3948;
  double t3970;
  double t4033;
  double t3247;
  double t3343;
  double t3359;
  double t3503;
  double t3516;
  double t3538;
  double t3720;
  double t3746;
  double t3800;
  double t3831;
  double t3838;
  double t3839;
  double t3891;
  double t3914;
  double t3937;
  double t3942;
  double t4057;
  double t4080;
  double t4093;
  double t4097;
  double t4098;
  double t4133;
  double t4134;
  double t4143;
  double t4147;
  double t4148;
  double t4183;
  double t4186;
  double t4210;
  double t2148;
  double t2149;
  double t2152;
  double t2166;
  double t2204;
  double t2306;
  double t2362;
  double t3748;
  double t3750;
  double t3786;
  double t3944;
  double t4046;
  double t4053;
  double t4150;
  double t4159;
  double t4243;
  double t4277;
  double t4292;
  double t4295;
  double t4296;
  double t4299;
  double t4302;
  double t4303;
  double t4326;
  double t4352;
  double t4358;
  double t4378;
  double t4386;
  double t4397;
  double t4398;
  double t4402;
  double t2239;
  double t2272;
  double t4182;
  double t4312;
  double t4322;
  double t4323;
  double t4415;
  double t4420;
  double t4444;
  double t4447;
  double t4465;
  double t4468;
  double t4471;
  double t4472;
  double t4473;
  double t4475;
  double t2155;
  double t4491;
  double t4498;
  double t4499;
  double t4505;
  double t4507;
  double t4528;
  double t4532;
  double t4534;
  double t4536;
  double t4538;
  double t4564;
  double t4429;
  double t4574;
  double t4566;
  double t4709;
  double t4591;
  double t4617;
  double t4779;
  double t4435;
  double t4690;
  double t2175;
  double t28;
  double t369;
  double t564;
  double t594;
  double t1218;
  double t1220;
  double t1349;
  double t1439;
  double t1487;
  double t1538;
  double t5254;
  double t5272;
  double t5273;
  double t5207;
  double t5209;
  double t5228;
  double t1708;
  double t1769;
  double t1807;
  double t1810;
  double t1950;
  double t1964;
  double t2125;
  double t2126;
  double t2197;
  double t5329;
  double t5331;
  double t5332;
  double t5277;
  double t5309;
  double t5311;
  double t5388;
  double t5396;
  double t5404;
  double t5406;
  double t5336;
  double t5339;
  double t5341;
  double t5351;
  double t5360;
  double t5371;
  double t5378;
  double t5386;
  double t5359;
  double t5387;
  double t5409;
  double t5419;
  double t5424;
  double t5428;
  double t5429;
  double t5434;
  double t5451;
  double t5455;
  double t5461;
  double t5475;
  double t5420;
  double t5435;
  double t5477;
  double t5478;
  double t5482;
  double t5485;
  double t5489;
  double t5492;
  double t5499;
  double t5500;
  double t5505;
  double t5508;
  double t4436;
  double t5479;
  double t5497;
  double t5511;
  double t5512;
  double t5526;
  double t5529;
  double t5533;
  double t5540;
  double t5547;
  double t5551;
  double t5552;
  double t5564;
  double t4482;
  double t4490;
  double t4548;
  double t4562;
  double t5521;
  double t5544;
  double t5566;
  double t5572;
  double t4572;
  double t5583;
  double t5585;
  double t5588;
  double t5597;
  double t4582;
  double t5606;
  double t5607;
  double t5609;
  double t5612;
  double t4592;
  double t4597;
  double t4598;
  double t4632;
  double t4676;
  double t4683;
  double t4696;
  double t4707;
  double t4711;
  double t4733;
  double t4734;
  double t4742;
  double t4745;
  double t4746;
  double t4755;
  double t4788;
  double t4799;
  double t4802;
  double t4810;
  double t4819;
  double t4835;
  double t4837;
  double t4842;
  double t4845;
  double t4846;
  double t4858;
  double t4869;
  double t4875;
  double t4876;
  double t4882;
  double t4899;
  double t4900;
  double t4909;
  double t4916;
  double t4927;
  double t4934;
  double t4935;
  double t4946;
  double t4951;
  double t4961;
  double t4962;
  double t4989;
  double t4992;
  double t4994;
  double t4995;
  double t5000;
  double t5004;
  double t5009;
  double t5010;
  double t5023;
  double t5027;
  double t5032;
  double t5040;
  double t5050;
  double t5053;
  double t5076;
  double t5079;
  double t5086;
  double t5090;
  double t5099;
  double t5106;
  double t5122;
  double t5143;
  double t5145;
  double t5157;
  double t5174;
  double t5177;
  double t5185;
  double t5187;
  double t5193;
  double t5196;
  double t5197;
  double t5199;
  double t5791;
  double t5792;
  double t5793;
  double t5781;
  double t5782;
  double t5785;
  double t5823;
  double t5835;
  double t5840;
  double t5844;
  double t5801;
  double t5802;
  double t5803;
  double t5806;
  double t5810;
  double t5811;
  double t5814;
  double t5820;
  double t5809;
  double t5822;
  double t5851;
  double t5852;
  double t5859;
  double t5866;
  double t5868;
  double t5885;
  double t5893;
  double t5900;
  double t5908;
  double t5914;
  double t5853;
  double t5888;
  double t5915;
  double t5917;
  double t5919;
  double t5923;
  double t5924;
  double t5926;
  double t5934;
  double t5935;
  double t5936;
  double t5944;
  double t5918;
  double t5932;
  double t5947;
  double t5948;
  double t5958;
  double t5960;
  double t5962;
  double t5964;
  double t5974;
  double t5975;
  double t5979;
  double t5981;
  double t5952;
  double t5966;
  double t5983;
  double t5985;
  double t5995;
  double t5998;
  double t6000;
  double t6006;
  double t6012;
  double t6013;
  double t6014;
  double t6015;
  t868 = Cos(var1[3]);
  t605 = Cos(var1[5]);
  t893 = Sin(var1[4]);
  t657 = Sin(var1[3]);
  t898 = Sin(var1[5]);
  t1361 = Sin(var1[7]);
  t25 = Cos(var1[6]);
  t1063 = t868*t605*t893;
  t1088 = t657*t898;
  t1165 = t1063 + t1088;
  t829 = -1.*t605*t657;
  t927 = t868*t893*t898;
  t1024 = t829 + t927;
  t1172 = Sin(var1[6]);
  t1304 = Cos(var1[7]);
  t1324 = -1.*t1304;
  t1341 = 1. + t1324;
  t1870 = t25*t1024;
  t1872 = -1.*t1165*t1172;
  t1932 = t1870 + t1872;
  t1647 = t25*t1165;
  t1682 = t1024*t1172;
  t1690 = t1647 + t1682;
  t1280 = Cos(var1[4]);
  t1779 = 0.366501*t1361;
  t1798 = 0. + t1779;
  t2622 = Cos(var1[8]);
  t2632 = -1.*t2622;
  t2699 = 1. + t2632;
  t2110 = 0.930418*t1361;
  t2112 = 0. + t2110;
  t1408 = -0.930418*t1361;
  t1411 = 0. + t1408;
  t1443 = -0.366501*t1361;
  t1452 = 0. + t1443;
  t3024 = -1.000000637725*t1341;
  t3032 = 1. + t3024;
  t3045 = t868*t1280*t3032;
  t3086 = t1932*t1411;
  t3146 = t1690*t1452;
  t3206 = t3045 + t3086 + t3146;
  t2726 = -0.340999127418*t1341*t1932;
  t2765 = -0.134322983001*t1341;
  t2768 = 1. + t2765;
  t2771 = t2768*t1690;
  t2787 = t868*t1280*t1798;
  t2798 = t2726 + t2771 + t2787;
  t3209 = Sin(var1[8]);
  t2938 = -0.8656776547239999*t1341;
  t2940 = 1. + t2938;
  t2972 = t2940*t1932;
  t2977 = -0.340999127418*t1341*t1690;
  t3006 = t868*t1280*t2112;
  t3007 = t2972 + t2977 + t3006;
  t2558 = Cos(var1[9]);
  t2583 = -1.*t2558;
  t2616 = 1. + t2583;
  t2305 = Sin(var1[10]);
  t2807 = 0.340999127418*t2699*t2798;
  t2808 = -0.134322983001*t2699;
  t2838 = 1. + t2808;
  t3021 = t2838*t3007;
  t3213 = -0.366501*t3209;
  t3217 = 0. + t3213;
  t3219 = t3206*t3217;
  t3238 = t2807 + t3021 + t3219;
  t3293 = Sin(var1[9]);
  t3364 = -1.000000637725*t2699;
  t3367 = 1. + t3364;
  t3370 = t3367*t3206;
  t3371 = -0.930418*t3209;
  t3385 = 0. + t3371;
  t3394 = t2798*t3385;
  t3404 = 0.366501*t3209;
  t3413 = 0. + t3404;
  t3460 = t3007*t3413;
  t3480 = t3370 + t3394 + t3460;
  t3541 = -0.8656776547239999*t2699;
  t3547 = 1. + t3541;
  t3555 = t3547*t2798;
  t3572 = 0.340999127418*t2699*t3007;
  t3634 = 0.930418*t3209;
  t3685 = 0. + t3634;
  t3702 = t3206*t3685;
  t3707 = t3555 + t3572 + t3702;
  t3948 = Cos(var1[10]);
  t3970 = -1.*t3948;
  t4033 = 1. + t3970;
  t3247 = 0.340999127418*t2616*t3238;
  t3343 = -0.930418*t3293;
  t3359 = 0. + t3343;
  t3503 = t3359*t3480;
  t3516 = -0.8656776547239999*t2616;
  t3538 = 1. + t3516;
  t3720 = t3538*t3707;
  t3746 = t3247 + t3503 + t3720;
  t3800 = -0.134322983001*t2616;
  t3831 = 1. + t3800;
  t3838 = t3831*t3238;
  t3839 = 0.366501*t3293;
  t3891 = 0. + t3839;
  t3914 = t3891*t3480;
  t3937 = 0.340999127418*t2616*t3707;
  t3942 = t3838 + t3914 + t3937;
  t4057 = -0.366501*t3293;
  t4080 = 0. + t4057;
  t4093 = t4080*t3238;
  t4097 = -1.000000637725*t2616;
  t4098 = 1. + t4097;
  t4133 = t4098*t3480;
  t4134 = 0.930418*t3293;
  t4143 = 0. + t4134;
  t4147 = t4143*t3707;
  t4148 = t4093 + t4133 + t4147;
  t4183 = Cos(var1[11]);
  t4186 = -1.*t4183;
  t4210 = 1. + t4186;
  t2148 = Cos(var1[12]);
  t2149 = -1.*t2148;
  t2152 = 1. + t2149;
  t2166 = Sin(var1[12]);
  t2204 = Sin(var1[11]);
  t2306 = 0.930418*t2305;
  t2362 = 0. + t2306;
  t3748 = t2362*t3746;
  t3750 = -0.366501*t2305;
  t3786 = 0. + t3750;
  t3944 = t3786*t3942;
  t4046 = -1.000000637725*t4033;
  t4053 = 1. + t4046;
  t4150 = t4053*t4148;
  t4159 = t3748 + t3944 + t4150;
  t4243 = -0.8656776547239999*t4033;
  t4277 = 1. + t4243;
  t4292 = t4277*t3746;
  t4295 = 0.340999127418*t4033*t3942;
  t4296 = -0.930418*t2305;
  t4299 = 0. + t4296;
  t4302 = t4299*t4148;
  t4303 = t4292 + t4295 + t4302;
  t4326 = 0.340999127418*t4033*t3746;
  t4352 = -0.134322983001*t4033;
  t4358 = 1. + t4352;
  t4378 = t4358*t3942;
  t4386 = 0.366501*t2305;
  t4397 = 0. + t4386;
  t4398 = t4397*t4148;
  t4402 = t4326 + t4378 + t4398;
  t2239 = 0.366501*t2204;
  t2272 = 0. + t2239;
  t4182 = t2272*t4159;
  t4312 = 0.340999127418*t4210*t4303;
  t4322 = -0.134322983001*t4210;
  t4323 = 1. + t4322;
  t4415 = t4323*t4402;
  t4420 = t4182 + t4312 + t4415;
  t4444 = -0.930418*t2204;
  t4447 = 0. + t4444;
  t4465 = t4447*t4159;
  t4468 = -0.8656776547239999*t4210;
  t4471 = 1. + t4468;
  t4472 = t4471*t4303;
  t4473 = 0.340999127418*t4210*t4402;
  t4475 = t4465 + t4472 + t4473;
  t2155 = -0.175248972904*t2152;
  t4491 = -1.000000637725*t4210;
  t4498 = 1. + t4491;
  t4499 = t4498*t4159;
  t4505 = 0.930418*t2204;
  t4507 = 0. + t4505;
  t4528 = t4507*t4303;
  t4532 = -0.366501*t2204;
  t4534 = 0. + t4532;
  t4536 = t4534*t4402;
  t4538 = t4499 + t4528 + t4536;
  t4564 = -0.120666640478*t2152;
  t4429 = 0.444895486988*t2152;
  t4574 = -0.553471*t2166;
  t4566 = 0.803828*t2166;
  t4709 = 0.120666640478*t2152;
  t4591 = -0.803828*t2166;
  t4617 = -0.218018*t2166;
  t4779 = -0.444895486988*t2152;
  t4435 = 0.218018*t2166;
  t4690 = 0.175248972904*t2152;
  t2175 = 0.553471*t2166;
  t28 = -1.*t25;
  t369 = 1. + t28;
  t564 = 0.091*t369;
  t594 = 0. + t564;
  t1218 = 0.091*t1172;
  t1220 = 0. + t1218;
  t1349 = -0.04500040093286238*t1341;
  t1439 = 0.07877663122399998*t1411;
  t1487 = 0.031030906668*t1452;
  t1538 = 0. + t1349 + t1439 + t1487;
  t5254 = t605*t657*t893;
  t5272 = -1.*t868*t898;
  t5273 = t5254 + t5272;
  t5207 = t868*t605;
  t5209 = t657*t893*t898;
  t5228 = t5207 + t5209;
  t1708 = -3.2909349868922137e-7*var1[7];
  t1769 = 0.03103092645718495*t1341;
  t1807 = -0.045000372235*t1798;
  t1810 = t1708 + t1769 + t1807;
  t1950 = 1.296332362046933e-7*var1[7];
  t1964 = 0.07877668146182712*t1341;
  t2125 = -0.045000372235*t2112;
  t2126 = t1950 + t1964 + t2125;
  t2197 = t2155 + t2175;
  t5329 = t25*t5228;
  t5331 = -1.*t5273*t1172;
  t5332 = t5329 + t5331;
  t5277 = t25*t5273;
  t5309 = t5228*t1172;
  t5311 = t5277 + t5309;
  t5388 = t1280*t3032*t657;
  t5396 = t5332*t1411;
  t5404 = t5311*t1452;
  t5406 = t5388 + t5396 + t5404;
  t5336 = -0.340999127418*t1341*t5332;
  t5339 = t2768*t5311;
  t5341 = t1280*t657*t1798;
  t5351 = t5336 + t5339 + t5341;
  t5360 = t2940*t5332;
  t5371 = -0.340999127418*t1341*t5311;
  t5378 = t1280*t657*t2112;
  t5386 = t5360 + t5371 + t5378;
  t5359 = 0.340999127418*t2699*t5351;
  t5387 = t2838*t5386;
  t5409 = t5406*t3217;
  t5419 = t5359 + t5387 + t5409;
  t5424 = t3367*t5406;
  t5428 = t5351*t3385;
  t5429 = t5386*t3413;
  t5434 = t5424 + t5428 + t5429;
  t5451 = t3547*t5351;
  t5455 = 0.340999127418*t2699*t5386;
  t5461 = t5406*t3685;
  t5475 = t5451 + t5455 + t5461;
  t5420 = 0.340999127418*t2616*t5419;
  t5435 = t3359*t5434;
  t5477 = t3538*t5475;
  t5478 = t5420 + t5435 + t5477;
  t5482 = t3831*t5419;
  t5485 = t3891*t5434;
  t5489 = 0.340999127418*t2616*t5475;
  t5492 = t5482 + t5485 + t5489;
  t5499 = t4080*t5419;
  t5500 = t4098*t5434;
  t5505 = t4143*t5475;
  t5508 = t5499 + t5500 + t5505;
  t4436 = t4429 + t4435;
  t5479 = t2362*t5478;
  t5497 = t3786*t5492;
  t5511 = t4053*t5508;
  t5512 = t5479 + t5497 + t5511;
  t5526 = t4277*t5478;
  t5529 = 0.340999127418*t4033*t5492;
  t5533 = t4299*t5508;
  t5540 = t5526 + t5529 + t5533;
  t5547 = 0.340999127418*t4033*t5478;
  t5551 = t4358*t5492;
  t5552 = t4397*t5508;
  t5564 = t5547 + t5551 + t5552;
  t4482 = -0.353861996165*t2152;
  t4490 = 1. + t4482;
  t4548 = -0.952469601425*t2152;
  t4562 = 1. + t4548;
  t5521 = t2272*t5512;
  t5544 = 0.340999127418*t4210*t5540;
  t5566 = t4323*t5564;
  t5572 = t5521 + t5544 + t5566;
  t4572 = t4564 + t4566;
  t5583 = t4447*t5512;
  t5585 = t4471*t5540;
  t5588 = 0.340999127418*t4210*t5564;
  t5597 = t5583 + t5585 + t5588;
  t4582 = t2155 + t4574;
  t5606 = t4498*t5512;
  t5607 = t4507*t5540;
  t5609 = t4534*t5564;
  t5612 = t5606 + t5607 + t5609;
  t4592 = t4564 + t4591;
  t4597 = -0.693671301908*t2152;
  t4598 = 1. + t4597;
  t4632 = t4429 + t4617;
  t4676 = 2.838136523330542e-8*var1[12];
  t4683 = 0.2845150083511607*t2152;
  t4696 = t4690 + t4574;
  t4707 = 0.44503472296900004*t4696;
  t4711 = t4709 + t4566;
  t4733 = -0.5286755231320001*t4711;
  t4734 = t4676 + t4683 + t4707 + t4733;
  t4742 = -7.20503013377005e-8*var1[12];
  t4745 = -0.3667270384178674*t2152;
  t4746 = t4709 + t4591;
  t4755 = 0.29871295412*t4746;
  t4788 = t4779 + t4617;
  t4799 = 0.44503472296900004*t4788;
  t4802 = t4742 + t4745 + t4755 + t4799;
  t4810 = -1.0464152525368286e-7*var1[12];
  t4819 = 0.15748087543254813*t2152;
  t4835 = t4779 + t4435;
  t4837 = -0.5286755231320001*t4835;
  t4842 = t4690 + t2175;
  t4845 = 0.29871295412*t4842;
  t4846 = t4810 + t4819 + t4837 + t4845;
  t4858 = 0.06199697675299678*t4210;
  t4869 = 0.324290713329*t4534;
  t4875 = -0.823260828522*t4507;
  t4876 = 0. + t4858 + t4869 + t4875;
  t4882 = 2.95447451120871e-8*var1[11];
  t4899 = -0.8232613535360118*t4210;
  t4900 = 0.061996937216*t4447;
  t4909 = t4882 + t4899 + t4900;
  t4916 = 7.500378623168247e-8*var1[11];
  t4927 = 0.32429092013729516*t4210;
  t4934 = 0.061996937216*t2272;
  t4935 = t4916 + t4927 + t4934;
  t4946 = 2.281945176511838e-8*var1[10];
  t4951 = -0.5905366811997648*t4033;
  t4961 = -0.262809976934*t4299;
  t4962 = t4946 + t4951 + t4961;
  t4989 = 5.7930615939377813e-8*var1[10];
  t4992 = 0.23261833304643187*t4033;
  t4994 = -0.262809976934*t4397;
  t4995 = t4989 + t4992 + t4994;
  t5000 = -0.26281014453449253*t4033;
  t5004 = 0.23261818470000004*t3786;
  t5009 = -0.5905363046000001*t2362;
  t5010 = 0. + t5000 + t5004 + t5009;
  t5023 = 3.2909349868922137e-7*var1[8];
  t5027 = 0.055653945343889656*t2699;
  t5032 = -0.045000372235*t3217;
  t5040 = t5023 + t5027 + t5032;
  t5050 = -1.5981976069815686e-7*var1[9];
  t5053 = 0.08675267452931407*t2616;
  t5076 = 0.039853013046*t3891;
  t5079 = t5050 + t5053 + t5076;
  t5086 = -0.04500040093286238*t2699;
  t5090 = -0.141285834136*t3385;
  t5099 = 0.055653909852*t3413;
  t5106 = 0. + t5086 + t5090 + t5099;
  t5122 = 0.039853038461262744*t2616;
  t5143 = 0.086752619205*t4080;
  t5145 = -0.22023459268999998*t4143;
  t5157 = 0. + t5122 + t5143 + t5145;
  t5174 = 1.296332362046933e-7*var1[8];
  t5177 = -0.14128592423750855*t2699;
  t5185 = -0.045000372235*t3685;
  t5187 = t5174 + t5177 + t5185;
  t5193 = -6.295460977284962e-8*var1[9];
  t5196 = -0.22023473313910558*t2616;
  t5197 = 0.039853013046*t3359;
  t5199 = t5193 + t5196 + t5197;
  t5791 = t1280*t25*t898;
  t5792 = -1.*t1280*t605*t1172;
  t5793 = t5791 + t5792;
  t5781 = t1280*t605*t25;
  t5782 = t1280*t898*t1172;
  t5785 = t5781 + t5782;
  t5823 = -1.*t3032*t893;
  t5835 = t5793*t1411;
  t5840 = t5785*t1452;
  t5844 = t5823 + t5835 + t5840;
  t5801 = -0.340999127418*t1341*t5793;
  t5802 = t2768*t5785;
  t5803 = -1.*t893*t1798;
  t5806 = t5801 + t5802 + t5803;
  t5810 = t2940*t5793;
  t5811 = -0.340999127418*t1341*t5785;
  t5814 = -1.*t893*t2112;
  t5820 = t5810 + t5811 + t5814;
  t5809 = 0.340999127418*t2699*t5806;
  t5822 = t2838*t5820;
  t5851 = t5844*t3217;
  t5852 = t5809 + t5822 + t5851;
  t5859 = t3367*t5844;
  t5866 = t5806*t3385;
  t5868 = t5820*t3413;
  t5885 = t5859 + t5866 + t5868;
  t5893 = t3547*t5806;
  t5900 = 0.340999127418*t2699*t5820;
  t5908 = t5844*t3685;
  t5914 = t5893 + t5900 + t5908;
  t5853 = 0.340999127418*t2616*t5852;
  t5888 = t3359*t5885;
  t5915 = t3538*t5914;
  t5917 = t5853 + t5888 + t5915;
  t5919 = t3831*t5852;
  t5923 = t3891*t5885;
  t5924 = 0.340999127418*t2616*t5914;
  t5926 = t5919 + t5923 + t5924;
  t5934 = t4080*t5852;
  t5935 = t4098*t5885;
  t5936 = t4143*t5914;
  t5944 = t5934 + t5935 + t5936;
  t5918 = t2362*t5917;
  t5932 = t3786*t5926;
  t5947 = t4053*t5944;
  t5948 = t5918 + t5932 + t5947;
  t5958 = t4277*t5917;
  t5960 = 0.340999127418*t4033*t5926;
  t5962 = t4299*t5944;
  t5964 = t5958 + t5960 + t5962;
  t5974 = 0.340999127418*t4033*t5917;
  t5975 = t4358*t5926;
  t5979 = t4397*t5944;
  t5981 = t5974 + t5975 + t5979;
  t5952 = t2272*t5948;
  t5966 = 0.340999127418*t4210*t5964;
  t5983 = t4323*t5981;
  t5985 = t5952 + t5966 + t5983;
  t5995 = t4447*t5948;
  t5998 = t4471*t5964;
  t6000 = 0.340999127418*t4210*t5981;
  t6006 = t5995 + t5998 + t6000;
  t6012 = t4498*t5948;
  t6013 = t4507*t5964;
  t6014 = t4534*t5981;
  t6015 = t6012 + t6013 + t6014;
  p_output1[0]=0. + t1165*t1220 + t1690*t1810 + t1932*t2126 + 0.060052*(t2197*t4420 + t4436*t4475 + t4490*t4538) + 0.415942*(t4420*t4562 + t4475*t4572 + t4538*t4582) - 0.826251*(t4420*t4592 + t4475*t4598 + t4538*t4632) + t4420*t4734 + t4475*t4802 + t4538*t4846 + t4159*t4876 + t4303*t4909 + t4402*t4935 + t3746*t4962 + t3942*t4995 + t4148*t5010 + t3007*t5040 + t3238*t5079 + t3206*t5106 + t3480*t5157 + t2798*t5187 + t3707*t5199 + t1024*t594 + t1280*t1538*t868 + var1[0];
  p_output1[1]=0. + t1220*t5273 + t1810*t5311 + t2126*t5332 + t5187*t5351 + t5040*t5386 + t5106*t5406 + t5079*t5419 + t5157*t5434 + t5199*t5475 + t4962*t5478 + t4995*t5492 + t5010*t5508 + t4876*t5512 + t4909*t5540 + t4935*t5564 + t4734*t5572 + t4802*t5597 + t4846*t5612 + 0.060052*(t2197*t5572 + t4436*t5597 + t4490*t5612) + 0.415942*(t4562*t5572 + t4572*t5597 + t4582*t5612) - 0.826251*(t4592*t5572 + t4598*t5597 + t4632*t5612) + t5228*t594 + t1280*t1538*t657 + var1[1];
  p_output1[2]=0. + t1810*t5785 + t2126*t5793 + t5187*t5806 + t5040*t5820 + t5106*t5844 + t5079*t5852 + t5157*t5885 + t5199*t5914 + t4962*t5917 + t4995*t5926 + t5010*t5944 + t4876*t5948 + t4909*t5964 + t4935*t5981 + t4734*t5985 + t4802*t6006 + t4846*t6015 + 0.060052*(t2197*t5985 + t4436*t6006 + t4490*t6015) + 0.415942*(t4562*t5985 + t4572*t6006 + t4582*t6015) - 0.826251*(t4592*t5985 + t4598*t6006 + t4632*t6015) + t1220*t1280*t605 - 1.*t1538*t893 + t1280*t594*t898 + var1[2];
}



void p_left_toe_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
