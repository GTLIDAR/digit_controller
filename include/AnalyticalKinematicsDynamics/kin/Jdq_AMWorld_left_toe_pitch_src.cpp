/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:59:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_left_toe_pitch_src.h"

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
  double t730;
  double t687;
  double t736;
  double t694;
  double t748;
  double t628;
  double t660;
  double t678;
  double t681;
  double t842;
  double t898;
  double t946;
  double t718;
  double t769;
  double t796;
  double t955;
  double t569;
  double t588;
  double t598;
  double t835;
  double t970;
  double t1058;
  double t1125;
  double t1153;
  double t1165;
  double t1173;
  double t1176;
  double t1383;
  double t1393;
  double t1408;
  double t1424;
  double t1437;
  double t1439;
  double t1441;
  double t1443;
  double t1452;
  double t1487;
  double t1064;
  double t1066;
  double t1076;
  double t1172;
  double t1194;
  double t1228;
  double t1242;
  double t1256;
  double t1524;
  double t1285;
  double t1300;
  double t1304;
  double t1326;
  double t1336;
  double t1338;
  double t1341;
  double t1349;
  double t377;
  double t477;
  double t507;
  double t28;
  double t1257;
  double t1265;
  double t1268;
  double t1361;
  double t1530;
  double t1533;
  double t1535;
  double t1538;
  double t1673;
  double t1742;
  double t1759;
  double t1769;
  double t1773;
  double t1778;
  double t1779;
  double t1784;
  double t1798;
  double t1828;
  double t1872;
  double t1910;
  double t1915;
  double t1932;
  double t1950;
  double t1964;
  double t1975;
  double t1976;
  double t2125;
  double t2485;
  double t2488;
  double t2489;
  double t1647;
  double t1682;
  double t1708;
  double t1895;
  double t1899;
  double t1909;
  double t2126;
  double t2137;
  double t2257;
  double t2266;
  double t2267;
  double t2268;
  double t2272;
  double t2416;
  double t2454;
  double t2475;
  double t2558;
  double t2562;
  double t2567;
  double t2572;
  double t2573;
  double t2583;
  double t2596;
  double t2602;
  double t2616;
  double t2622;
  double t2700;
  double t2719;
  double t2744;
  double t6;
  double t32;
  double t39;
  double t2166;
  double t2204;
  double t2239;
  double t2480;
  double t2524;
  double t2553;
  double t2632;
  double t2637;
  double t2745;
  double t2758;
  double t2765;
  double t2768;
  double t2771;
  double t2790;
  double t2805;
  double t2807;
  double t2897;
  double t2905;
  double t2939;
  double t2940;
  double t2972;
  double t2977;
  double t3006;
  double t3021;
  double t3058;
  double t3062;
  double t2875;
  double t2893;
  double t3040;
  double t3053;
  double t15;
  double t25;
  double t3206;
  double t3209;
  double t3213;
  double t3219;
  double t3238;
  double t3247;
  double t3267;
  double t3271;
  double t3284;
  double t3217;
  double t3252;
  double t3289;
  double t3293;
  double t3343;
  double t3364;
  double t3367;
  double t3371;
  double t3424;
  double t3429;
  double t3460;
  double t3468;
  double t3303;
  double t3413;
  double t3473;
  double t3480;
  double t3499;
  double t3503;
  double t3516;
  double t3538;
  double t3572;
  double t3621;
  double t3626;
  double t3629;
  double t3488;
  double t3555;
  double t3635;
  double t3668;
  double t3683;
  double t3685;
  double t3702;
  double t3728;
  double t3742;
  double t3746;
  double t3748;
  double t3777;
  double t3669;
  double t3741;
  double t3786;
  double t3788;
  double t3800;
  double t3831;
  double t3838;
  double t3839;
  double t2638;
  double t2839;
  double t3024;
  double t3032;
  double t3055;
  double t3071;
  double t3086;
  double t3088;
  double t4097;
  double t4098;
  double t4047;
  double t4050;
  double t4057;
  double t4080;
  double t4147;
  double t4148;
  double t4150;
  double t4159;
  double t4165;
  double t4167;
  double t4182;
  double t4183;
  double t4186;
  double t4189;
  double t4198;
  double t4229;
  double t4160;
  double t4185;
  double t4234;
  double t4235;
  double t4243;
  double t4273;
  double t4277;
  double t4292;
  double t4296;
  double t4299;
  double t4302;
  double t4303;
  double t4239;
  double t4295;
  double t4322;
  double t4323;
  double t4334;
  double t4345;
  double t4349;
  double t4352;
  double t4386;
  double t4390;
  double t4396;
  double t4397;
  double t4330;
  double t4358;
  double t4398;
  double t4401;
  double t4420;
  double t4428;
  double t4429;
  double t4433;
  double t4444;
  double t4447;
  double t4448;
  double t4450;
  double t4415;
  double t4435;
  double t4456;
  double t4458;
  double t4465;
  double t4468;
  double t4471;
  double t4472;
  double t4053;
  double t4093;
  double t4133;
  double t4134;
  double t4562;
  double t4563;
  double t4564;
  double t4566;
  double t4573;
  double t4574;
  double t4582;
  double t4584;
  double t4587;
  double t4591;
  double t4595;
  double t4597;
  double t4572;
  double t4585;
  double t4598;
  double t4605;
  double t4617;
  double t4632;
  double t4636;
  double t4641;
  double t4676;
  double t4690;
  double t4695;
  double t4696;
  double t4611;
  double t4673;
  double t4704;
  double t4705;
  double t4709;
  double t4711;
  double t4733;
  double t4734;
  double t4737;
  double t4742;
  double t4745;
  double t4746;
  double t4707;
  double t4736;
  double t4755;
  double t4776;
  double t4788;
  double t4806;
  double t4810;
  double t4818;
  double t4824;
  double t4825;
  double t4835;
  double t4836;
  double t4779;
  double t4819;
  double t4837;
  double t4839;
  double t4842;
  double t4845;
  double t4846;
  double t4850;
  double t4962;
  double t4963;
  double t4964;
  double t4940;
  double t4946;
  double t4951;
  double t4961;
  double t4970;
  double t4987;
  double t4992;
  double t4994;
  double t4995;
  double t5032;
  double t5040;
  double t5045;
  double t5050;
  double t4989;
  double t4997;
  double t5000;
  double t5009;
  double t5011;
  double t5015;
  double t5018;
  double t5023;
  double t5010;
  double t5027;
  double t5053;
  double t5057;
  double t5076;
  double t5079;
  double t5083;
  double t5084;
  double t5099;
  double t5106;
  double t5116;
  double t5117;
  double t5058;
  double t5090;
  double t5122;
  double t5125;
  double t5145;
  double t5157;
  double t5171;
  double t5177;
  double t5186;
  double t5187;
  double t5190;
  double t5196;
  double t5144;
  double t5185;
  double t5197;
  double t5199;
  double t5205;
  double t5207;
  double t5209;
  double t5217;
  double t5228;
  double t5237;
  double t5254;
  double t5272;
  double t3798;
  double t3841;
  double t3856;
  double t3864;
  double t3866;
  double t3883;
  double t3884;
  double t3891;
  double t3914;
  double t3937;
  double t3948;
  double t3970;
  double t3988;
  double t3996;
  double t4009;
  double t4024;
  double t5204;
  double t5227;
  double t5273;
  double t5274;
  double t5277;
  double t5279;
  double t5282;
  double t5298;
  double t4459;
  double t4473;
  double t4474;
  double t4475;
  double t4476;
  double t4482;
  double t4490;
  double t4491;
  double t4498;
  double t4499;
  double t4505;
  double t4507;
  double t4528;
  double t4530;
  double t4533;
  double t4534;
  double t5332;
  double t5333;
  double t5336;
  double t5339;
  double t4840;
  double t4858;
  double t4861;
  double t4869;
  double t4875;
  double t4876;
  double t4881;
  double t4882;
  double t4899;
  double t4900;
  double t4909;
  double t4912;
  double t4916;
  double t4917;
  double t4924;
  double t4927;
  double t5396;
  double t5397;
  double t5404;
  double t5409;
  double t5419;
  double t5420;
  double t5474;
  double t5475;
  double t5478;
  double t5482;
  double t5406;
  double t5424;
  double t5425;
  double t5428;
  double t5434;
  double t5435;
  double t5444;
  double t5455;
  double t5429;
  double t5461;
  double t5485;
  double t5489;
  double t5497;
  double t5499;
  double t5500;
  double t5505;
  double t5511;
  double t5512;
  double t5521;
  double t5526;
  double t5492;
  double t5508;
  double t5529;
  double t5533;
  double t5544;
  double t5547;
  double t5551;
  double t5552;
  double t5566;
  double t5572;
  double t5575;
  double t5583;
  double t5540;
  double t5564;
  double t5585;
  double t5597;
  double t5606;
  double t5607;
  double t5609;
  double t5612;
  double t5621;
  double t5627;
  double t5628;
  double t5629;
  double t5598;
  double t5619;
  double t5635;
  double t5638;
  double t5654;
  double t5655;
  double t5658;
  double t5659;
  double t5675;
  double t5678;
  double t5682;
  double t5697;
  double t3033;
  double t3089;
  double t3146;
  double t4038;
  double t4039;
  double t4143;
  double t4146;
  double t4540;
  double t4542;
  double t4546;
  double t4548;
  double t5275;
  double t5309;
  double t5311;
  double t5764;
  double t5766;
  double t5767;
  double t5329;
  double t5331;
  double t5341;
  double t5351;
  double t5770;
  double t5771;
  double t5772;
  double t5360;
  double t5371;
  double t5378;
  double t5386;
  double t5775;
  double t5776;
  double t5777;
  double t5643;
  double t5663;
  double t5664;
  double t5669;
  double t5673;
  double t5698;
  double t5708;
  double t5717;
  double t5749;
  double t5755;
  double t5758;
  double t5869;
  double t5872;
  double t5883;
  double t5885;
  double t5894;
  double t5896;
  double t5899;
  double t5900;
  double t5910;
  double t5911;
  double t5912;
  double t5915;
  double t5952;
  double t5958;
  double t5960;
  double t5964;
  double t5966;
  double t5974;
  double t5979;
  double t5981;
  double t5982;
  double t6012;
  double t6013;
  double t6014;
  double t6016;
  double t6023;
  double t6028;
  double t6037;
  double t6041;
  double t6043;
  double t6093;
  double t6095;
  double t6096;
  double t6104;
  double t6105;
  double t6106;
  double t6108;
  double t6109;
  double t6119;
  double t6154;
  double t6156;
  double t6160;
  double t6164;
  double t6165;
  double t6166;
  double t6169;
  double t6170;
  double t6174;
  t730 = Cos(var1[3]);
  t687 = Cos(var1[5]);
  t736 = Sin(var1[4]);
  t694 = Sin(var1[3]);
  t748 = Sin(var1[5]);
  t628 = Cos(var1[7]);
  t660 = -1.*t628;
  t678 = 1. + t660;
  t681 = Cos(var1[6]);
  t842 = t730*t687*t736;
  t898 = t694*t748;
  t946 = t842 + t898;
  t718 = -1.*t687*t694;
  t769 = t730*t736*t748;
  t796 = t718 + t769;
  t955 = Sin(var1[6]);
  t569 = Cos(var1[8]);
  t588 = -1.*t569;
  t598 = 1. + t588;
  t835 = t681*t796;
  t970 = -1.*t946*t955;
  t1058 = t835 + t970;
  t1125 = t681*t946;
  t1153 = t796*t955;
  t1165 = t1125 + t1153;
  t1173 = Cos(var1[4]);
  t1176 = Sin(var1[7]);
  t1383 = -1.000000637725*t678;
  t1393 = 1. + t1383;
  t1408 = t730*t1173*t1393;
  t1424 = -0.930418*t1176;
  t1437 = 0. + t1424;
  t1439 = t1058*t1437;
  t1441 = -0.366501*t1176;
  t1443 = 0. + t1441;
  t1452 = t1165*t1443;
  t1487 = t1408 + t1439 + t1452;
  t1064 = -0.340999127418*t678*t1058;
  t1066 = -0.134322983001*t678;
  t1076 = 1. + t1066;
  t1172 = t1076*t1165;
  t1194 = 0.366501*t1176;
  t1228 = 0. + t1194;
  t1242 = t730*t1173*t1228;
  t1256 = t1064 + t1172 + t1242;
  t1524 = Sin(var1[8]);
  t1285 = -0.8656776547239999*t678;
  t1300 = 1. + t1285;
  t1304 = t1300*t1058;
  t1326 = -0.340999127418*t678*t1165;
  t1336 = 0.930418*t1176;
  t1338 = 0. + t1336;
  t1341 = t730*t1173*t1338;
  t1349 = t1304 + t1326 + t1341;
  t377 = Cos(var1[9]);
  t477 = -1.*t377;
  t507 = 1. + t477;
  t28 = Sin(var1[10]);
  t1257 = 0.340999127418*t598*t1256;
  t1265 = -0.134322983001*t598;
  t1268 = 1. + t1265;
  t1361 = t1268*t1349;
  t1530 = -0.366501*t1524;
  t1533 = 0. + t1530;
  t1535 = t1487*t1533;
  t1538 = t1257 + t1361 + t1535;
  t1673 = Sin(var1[9]);
  t1742 = -1.000000637725*t598;
  t1759 = 1. + t1742;
  t1769 = t1759*t1487;
  t1773 = -0.930418*t1524;
  t1778 = 0. + t1773;
  t1779 = t1256*t1778;
  t1784 = 0.366501*t1524;
  t1798 = 0. + t1784;
  t1828 = t1349*t1798;
  t1872 = t1769 + t1779 + t1828;
  t1910 = -0.8656776547239999*t598;
  t1915 = 1. + t1910;
  t1932 = t1915*t1256;
  t1950 = 0.340999127418*t598*t1349;
  t1964 = 0.930418*t1524;
  t1975 = 0. + t1964;
  t1976 = t1487*t1975;
  t2125 = t1932 + t1950 + t1976;
  t2485 = Cos(var1[10]);
  t2488 = -1.*t2485;
  t2489 = 1. + t2488;
  t1647 = 0.340999127418*t507*t1538;
  t1682 = -0.930418*t1673;
  t1708 = 0. + t1682;
  t1895 = t1708*t1872;
  t1899 = -0.8656776547239999*t507;
  t1909 = 1. + t1899;
  t2126 = t1909*t2125;
  t2137 = t1647 + t1895 + t2126;
  t2257 = -0.134322983001*t507;
  t2266 = 1. + t2257;
  t2267 = t2266*t1538;
  t2268 = 0.366501*t1673;
  t2272 = 0. + t2268;
  t2416 = t2272*t1872;
  t2454 = 0.340999127418*t507*t2125;
  t2475 = t2267 + t2416 + t2454;
  t2558 = -0.366501*t1673;
  t2562 = 0. + t2558;
  t2567 = t2562*t1538;
  t2572 = -1.000000637725*t507;
  t2573 = 1. + t2572;
  t2583 = t2573*t1872;
  t2596 = 0.930418*t1673;
  t2602 = 0. + t2596;
  t2616 = t2602*t2125;
  t2622 = t2567 + t2583 + t2616;
  t2700 = Cos(var1[11]);
  t2719 = -1.*t2700;
  t2744 = 1. + t2719;
  t6 = Sin(var1[11]);
  t32 = 0.930418*t28;
  t39 = 0. + t32;
  t2166 = t39*t2137;
  t2204 = -0.366501*t28;
  t2239 = 0. + t2204;
  t2480 = t2239*t2475;
  t2524 = -1.000000637725*t2489;
  t2553 = 1. + t2524;
  t2632 = t2553*t2622;
  t2637 = t2166 + t2480 + t2632;
  t2745 = -0.8656776547239999*t2489;
  t2758 = 1. + t2745;
  t2765 = t2758*t2137;
  t2768 = 0.340999127418*t2489*t2475;
  t2771 = -0.930418*t28;
  t2790 = 0. + t2771;
  t2805 = t2790*t2622;
  t2807 = t2765 + t2768 + t2805;
  t2897 = 0.340999127418*t2489*t2137;
  t2905 = -0.134322983001*t2489;
  t2939 = 1. + t2905;
  t2940 = t2939*t2475;
  t2972 = 0.366501*t28;
  t2977 = 0. + t2972;
  t3006 = t2977*t2622;
  t3021 = t2897 + t2940 + t3006;
  t3058 = -0.8656776547239999*t2744;
  t3062 = 1. + t3058;
  t2875 = -0.134322983001*t2744;
  t2893 = 1. + t2875;
  t3040 = -0.930418*t6;
  t3053 = 0. + t3040;
  t15 = 0.366501*t6;
  t25 = 0. + t15;
  t3206 = -0.366501*t3062;
  t3209 = -0.3172717261340007*t2744;
  t3213 = t3206 + t3209;
  t3219 = -0.930418*t2893;
  t3238 = -0.12497652119782442*t2744;
  t3247 = t3219 + t3238;
  t3267 = -0.366501*t3053;
  t3271 = -0.930418*t25;
  t3284 = t3267 + t3271;
  t3217 = t3213*t2790;
  t3252 = t3247*t2977;
  t3289 = t2553*t3284;
  t3293 = 0. + t3217 + t3252 + t3289;
  t3343 = 0.340999127418*t2489*t3213;
  t3364 = t2939*t3247;
  t3367 = t2239*t3284;
  t3371 = 0. + t3343 + t3364 + t3367;
  t3424 = t2758*t3213;
  t3429 = 0.340999127418*t2489*t3247;
  t3460 = t39*t3284;
  t3468 = 0. + t3424 + t3429 + t3460;
  t3303 = t2602*t3293;
  t3413 = 0.340999127418*t507*t3371;
  t3473 = t1909*t3468;
  t3480 = 0. + t3303 + t3413 + t3473;
  t3499 = t2562*t3293;
  t3503 = t2266*t3371;
  t3516 = 0.340999127418*t507*t3468;
  t3538 = 0. + t3499 + t3503 + t3516;
  t3572 = t2573*t3293;
  t3621 = t2272*t3371;
  t3626 = t1708*t3468;
  t3629 = 0. + t3572 + t3621 + t3626;
  t3488 = t1915*t3480;
  t3555 = 0.340999127418*t598*t3538;
  t3635 = t3629*t1778;
  t3668 = 0. + t3488 + t3555 + t3635;
  t3683 = 0.340999127418*t598*t3480;
  t3685 = t1268*t3538;
  t3702 = t3629*t1798;
  t3728 = 0. + t3683 + t3685 + t3702;
  t3742 = t1759*t3629;
  t3746 = t3538*t1533;
  t3748 = t3480*t1975;
  t3777 = 0. + t3742 + t3746 + t3748;
  t3669 = -0.340999127418*t678*t3668;
  t3741 = t1300*t3728;
  t3786 = t1437*t3777;
  t3788 = 0. + t3669 + t3741 + t3786;
  t3800 = t1076*t3668;
  t3831 = -0.340999127418*t678*t3728;
  t3838 = t1443*t3777;
  t3839 = 0. + t3800 + t3831 + t3838;
  t2638 = t25*t2637;
  t2839 = 0.340999127418*t2744*t2807;
  t3024 = t2893*t3021;
  t3032 = t2638 + t2839 + t3024;
  t3055 = t3053*t2637;
  t3071 = t3062*t2807;
  t3086 = 0.340999127418*t2744*t3021;
  t3088 = t3055 + t3071 + t3086;
  t4097 = -0.366501*t6;
  t4098 = 0. + t4097;
  t4047 = -1.000000637725*t2744;
  t4050 = 1. + t4047;
  t4057 = 0.930418*t6;
  t4080 = 0. + t4057;
  t4147 = -0.294604*t2893;
  t4148 = 0.2550318833994125*t2744;
  t4150 = -0.594863*t4098;
  t4159 = t4147 + t4148 + t4150;
  t4165 = -0.594863*t4050;
  t4167 = 0.747896*t3053;
  t4182 = -0.294604*t25;
  t4183 = t4165 + t4167 + t4182;
  t4186 = 0.747896*t3062;
  t4189 = -0.10045970693385246*t2744;
  t4198 = -0.594863*t4080;
  t4229 = t4186 + t4189 + t4198;
  t4160 = 0.340999127418*t2489*t4159;
  t4185 = t39*t4183;
  t4234 = t2758*t4229;
  t4235 = 0. + t4160 + t4185 + t4234;
  t4243 = t2939*t4159;
  t4273 = t2239*t4183;
  t4277 = 0.340999127418*t2489*t4229;
  t4292 = 0. + t4243 + t4273 + t4277;
  t4296 = t2977*t4159;
  t4299 = t2553*t4183;
  t4302 = t2790*t4229;
  t4303 = 0. + t4296 + t4299 + t4302;
  t4239 = 0.340999127418*t507*t4235;
  t4295 = t2266*t4292;
  t4322 = t2562*t4303;
  t4323 = 0. + t4239 + t4295 + t4322;
  t4334 = t1909*t4235;
  t4345 = 0.340999127418*t507*t4292;
  t4349 = t2602*t4303;
  t4352 = 0. + t4334 + t4345 + t4349;
  t4386 = t1708*t4235;
  t4390 = t2272*t4292;
  t4396 = t2573*t4303;
  t4397 = 0. + t4386 + t4390 + t4396;
  t4330 = 0.340999127418*t598*t4323;
  t4358 = t1915*t4352;
  t4398 = t4397*t1778;
  t4401 = 0. + t4330 + t4358 + t4398;
  t4420 = t1268*t4323;
  t4428 = 0.340999127418*t598*t4352;
  t4429 = t4397*t1798;
  t4433 = 0. + t4420 + t4428 + t4429;
  t4444 = t1759*t4397;
  t4447 = t4323*t1533;
  t4448 = t4352*t1975;
  t4450 = 0. + t4444 + t4447 + t4448;
  t4415 = -0.340999127418*t678*t4401;
  t4435 = t1300*t4433;
  t4456 = t1437*t4450;
  t4458 = 0. + t4415 + t4435 + t4456;
  t4465 = t1076*t4401;
  t4468 = -0.340999127418*t678*t4433;
  t4471 = t1443*t4450;
  t4472 = 0. + t4465 + t4468 + t4471;
  t4053 = t4050*t2637;
  t4093 = t4080*t2807;
  t4133 = t4098*t3021;
  t4134 = t4053 + t4093 + t4133;
  t4562 = -0.218018*t2893;
  t4563 = 0.18873312805116788*t2744;
  t4564 = 0.803828*t4098;
  t4566 = t4562 + t4563 + t4564;
  t4573 = 0.803828*t4050;
  t4574 = 0.553471*t3053;
  t4582 = -0.218018*t25;
  t4584 = t4573 + t4574 + t4582;
  t4587 = 0.553471*t3062;
  t4591 = -0.07434394776141752*t2744;
  t4595 = 0.803828*t4080;
  t4597 = t4587 + t4591 + t4595;
  t4572 = 0.340999127418*t2489*t4566;
  t4585 = t39*t4584;
  t4598 = t2758*t4597;
  t4605 = 0. + t4572 + t4585 + t4598;
  t4617 = t2939*t4566;
  t4632 = t2239*t4584;
  t4636 = 0.340999127418*t2489*t4597;
  t4641 = 0. + t4617 + t4632 + t4636;
  t4676 = t2977*t4566;
  t4690 = t2553*t4584;
  t4695 = t2790*t4597;
  t4696 = 0. + t4676 + t4690 + t4695;
  t4611 = 0.340999127418*t507*t4605;
  t4673 = t2266*t4641;
  t4704 = t2562*t4696;
  t4705 = 0. + t4611 + t4673 + t4704;
  t4709 = t1909*t4605;
  t4711 = 0.340999127418*t507*t4641;
  t4733 = t2602*t4696;
  t4734 = 0. + t4709 + t4711 + t4733;
  t4737 = t1708*t4605;
  t4742 = t2272*t4641;
  t4745 = t2573*t4696;
  t4746 = 0. + t4737 + t4742 + t4745;
  t4707 = 0.340999127418*t598*t4705;
  t4736 = t1915*t4734;
  t4755 = t4746*t1778;
  t4776 = 0. + t4707 + t4736 + t4755;
  t4788 = t1268*t4705;
  t4806 = 0.340999127418*t598*t4734;
  t4810 = t4746*t1798;
  t4818 = 0. + t4788 + t4806 + t4810;
  t4824 = t1759*t4746;
  t4825 = t4705*t1533;
  t4835 = t4734*t1975;
  t4836 = 0. + t4824 + t4825 + t4835;
  t4779 = -0.340999127418*t678*t4776;
  t4819 = t1300*t4818;
  t4837 = t1437*t4836;
  t4839 = 0. + t4779 + t4819 + t4837;
  t4842 = t1076*t4776;
  t4845 = -0.340999127418*t678*t4818;
  t4846 = t1443*t4836;
  t4850 = 0. + t4842 + t4845 + t4846;
  t4962 = t687*t694*t736;
  t4963 = -1.*t730*t748;
  t4964 = t4962 + t4963;
  t4940 = t730*t687;
  t4946 = t694*t736*t748;
  t4951 = t4940 + t4946;
  t4961 = t681*t4951;
  t4970 = -1.*t4964*t955;
  t4987 = t4961 + t4970;
  t4992 = t681*t4964;
  t4994 = t4951*t955;
  t4995 = t4992 + t4994;
  t5032 = t1173*t1393*t694;
  t5040 = t4987*t1437;
  t5045 = t4995*t1443;
  t5050 = t5032 + t5040 + t5045;
  t4989 = -0.340999127418*t678*t4987;
  t4997 = t1076*t4995;
  t5000 = t1173*t694*t1228;
  t5009 = t4989 + t4997 + t5000;
  t5011 = t1300*t4987;
  t5015 = -0.340999127418*t678*t4995;
  t5018 = t1173*t694*t1338;
  t5023 = t5011 + t5015 + t5018;
  t5010 = 0.340999127418*t598*t5009;
  t5027 = t1268*t5023;
  t5053 = t5050*t1533;
  t5057 = t5010 + t5027 + t5053;
  t5076 = t1759*t5050;
  t5079 = t5009*t1778;
  t5083 = t5023*t1798;
  t5084 = t5076 + t5079 + t5083;
  t5099 = t1915*t5009;
  t5106 = 0.340999127418*t598*t5023;
  t5116 = t5050*t1975;
  t5117 = t5099 + t5106 + t5116;
  t5058 = 0.340999127418*t507*t5057;
  t5090 = t1708*t5084;
  t5122 = t1909*t5117;
  t5125 = t5058 + t5090 + t5122;
  t5145 = t2266*t5057;
  t5157 = t2272*t5084;
  t5171 = 0.340999127418*t507*t5117;
  t5177 = t5145 + t5157 + t5171;
  t5186 = t2562*t5057;
  t5187 = t2573*t5084;
  t5190 = t2602*t5117;
  t5196 = t5186 + t5187 + t5190;
  t5144 = t39*t5125;
  t5185 = t2239*t5177;
  t5197 = t2553*t5196;
  t5199 = t5144 + t5185 + t5197;
  t5205 = t2758*t5125;
  t5207 = 0.340999127418*t2489*t5177;
  t5209 = t2790*t5196;
  t5217 = t5205 + t5207 + t5209;
  t5228 = 0.340999127418*t2489*t5125;
  t5237 = t2939*t5177;
  t5254 = t2977*t5196;
  t5272 = t5228 + t5237 + t5254;
  t3798 = -1.*t955*t3788;
  t3841 = t681*t3839;
  t3856 = 0. + t3798 + t3841;
  t3864 = t687*t3856;
  t3866 = t681*t3788;
  t3883 = t955*t3839;
  t3884 = 0. + t3866 + t3883;
  t3891 = t748*t3884;
  t3914 = 0. + t3864 + t3891;
  t3937 = t1173*t3914;
  t3948 = t1228*t3668;
  t3970 = t1338*t3728;
  t3988 = t1393*t3777;
  t3996 = 0. + t3948 + t3970 + t3988;
  t4009 = -1.*t736*t3996;
  t4024 = 0. + t3937 + t4009;
  t5204 = t25*t5199;
  t5227 = 0.340999127418*t2744*t5217;
  t5273 = t2893*t5272;
  t5274 = t5204 + t5227 + t5273;
  t5277 = t3053*t5199;
  t5279 = t3062*t5217;
  t5282 = 0.340999127418*t2744*t5272;
  t5298 = t5277 + t5279 + t5282;
  t4459 = -1.*t955*t4458;
  t4473 = t681*t4472;
  t4474 = 0. + t4459 + t4473;
  t4475 = t687*t4474;
  t4476 = t681*t4458;
  t4482 = t955*t4472;
  t4490 = 0. + t4476 + t4482;
  t4491 = t748*t4490;
  t4498 = 0. + t4475 + t4491;
  t4499 = t1173*t4498;
  t4505 = t1228*t4401;
  t4507 = t1338*t4433;
  t4528 = t1393*t4450;
  t4530 = 0. + t4505 + t4507 + t4528;
  t4533 = -1.*t736*t4530;
  t4534 = 0. + t4499 + t4533;
  t5332 = t4050*t5199;
  t5333 = t4080*t5217;
  t5336 = t4098*t5272;
  t5339 = t5332 + t5333 + t5336;
  t4840 = -1.*t955*t4839;
  t4858 = t681*t4850;
  t4861 = 0. + t4840 + t4858;
  t4869 = t687*t4861;
  t4875 = t681*t4839;
  t4876 = t955*t4850;
  t4881 = 0. + t4875 + t4876;
  t4882 = t748*t4881;
  t4899 = 0. + t4869 + t4882;
  t4900 = t1173*t4899;
  t4909 = t1228*t4776;
  t4912 = t1338*t4818;
  t4916 = t1393*t4836;
  t4917 = 0. + t4909 + t4912 + t4916;
  t4924 = -1.*t736*t4917;
  t4927 = 0. + t4900 + t4924;
  t5396 = t1173*t681*t748;
  t5397 = -1.*t1173*t687*t955;
  t5404 = t5396 + t5397;
  t5409 = t1173*t687*t681;
  t5419 = t1173*t748*t955;
  t5420 = t5409 + t5419;
  t5474 = -1.*t1393*t736;
  t5475 = t5404*t1437;
  t5478 = t5420*t1443;
  t5482 = t5474 + t5475 + t5478;
  t5406 = -0.340999127418*t678*t5404;
  t5424 = t1076*t5420;
  t5425 = -1.*t736*t1228;
  t5428 = t5406 + t5424 + t5425;
  t5434 = t1300*t5404;
  t5435 = -0.340999127418*t678*t5420;
  t5444 = -1.*t736*t1338;
  t5455 = t5434 + t5435 + t5444;
  t5429 = 0.340999127418*t598*t5428;
  t5461 = t1268*t5455;
  t5485 = t5482*t1533;
  t5489 = t5429 + t5461 + t5485;
  t5497 = t1759*t5482;
  t5499 = t5428*t1778;
  t5500 = t5455*t1798;
  t5505 = t5497 + t5499 + t5500;
  t5511 = t1915*t5428;
  t5512 = 0.340999127418*t598*t5455;
  t5521 = t5482*t1975;
  t5526 = t5511 + t5512 + t5521;
  t5492 = 0.340999127418*t507*t5489;
  t5508 = t1708*t5505;
  t5529 = t1909*t5526;
  t5533 = t5492 + t5508 + t5529;
  t5544 = t2266*t5489;
  t5547 = t2272*t5505;
  t5551 = 0.340999127418*t507*t5526;
  t5552 = t5544 + t5547 + t5551;
  t5566 = t2562*t5489;
  t5572 = t2573*t5505;
  t5575 = t2602*t5526;
  t5583 = t5566 + t5572 + t5575;
  t5540 = t39*t5533;
  t5564 = t2239*t5552;
  t5585 = t2553*t5583;
  t5597 = t5540 + t5564 + t5585;
  t5606 = t2758*t5533;
  t5607 = 0.340999127418*t2489*t5552;
  t5609 = t2790*t5583;
  t5612 = t5606 + t5607 + t5609;
  t5621 = 0.340999127418*t2489*t5533;
  t5627 = t2939*t5552;
  t5628 = t2977*t5583;
  t5629 = t5621 + t5627 + t5628;
  t5598 = t25*t5597;
  t5619 = 0.340999127418*t2744*t5612;
  t5635 = t2893*t5629;
  t5638 = t5598 + t5619 + t5635;
  t5654 = t3053*t5597;
  t5655 = t3062*t5612;
  t5658 = 0.340999127418*t2744*t5629;
  t5659 = t5654 + t5655 + t5658;
  t5675 = t4050*t5597;
  t5678 = t4080*t5612;
  t5682 = t4098*t5629;
  t5697 = t5675 + t5678 + t5682;
  t3033 = -0.930418*t3032;
  t3089 = -0.366501*t3088;
  t3146 = t3033 + t3089;
  t4038 = -0.294604*t3032;
  t4039 = 0.747896*t3088;
  t4143 = -0.594863*t4134;
  t4146 = t4038 + t4039 + t4143;
  t4540 = -0.218018*t3032;
  t4542 = 0.553471*t3088;
  t4546 = 0.803828*t4134;
  t4548 = t4540 + t4542 + t4546;
  t5275 = -0.930418*t5274;
  t5309 = -0.366501*t5298;
  t5311 = t5275 + t5309;
  t5764 = -1.*t748*t3856;
  t5766 = t687*t3884;
  t5767 = 0. + t5764 + t5766;
  t5329 = -0.294604*t5274;
  t5331 = 0.747896*t5298;
  t5341 = -0.594863*t5339;
  t5351 = t5329 + t5331 + t5341;
  t5770 = -1.*t748*t4474;
  t5771 = t687*t4490;
  t5772 = 0. + t5770 + t5771;
  t5360 = -0.218018*t5274;
  t5371 = 0.553471*t5298;
  t5378 = 0.803828*t5339;
  t5386 = t5360 + t5371 + t5378;
  t5775 = -1.*t748*t4861;
  t5776 = t687*t4881;
  t5777 = 0. + t5775 + t5776;
  t5643 = -0.930418*t5638;
  t5663 = -0.366501*t5659;
  t5664 = t5643 + t5663;
  t5669 = -0.294604*t5638;
  t5673 = 0.747896*t5659;
  t5698 = -0.594863*t5697;
  t5708 = t5669 + t5673 + t5698;
  t5717 = -0.218018*t5638;
  t5749 = 0.553471*t5659;
  t5755 = 0.803828*t5697;
  t5758 = t5717 + t5749 + t5755;
  t5869 = -1.*t1228*t3668;
  t5872 = -1.*t1338*t3728;
  t5883 = -1.*t1393*t3777;
  t5885 = 0. + t5869 + t5872 + t5883;
  t5894 = -1.*t1228*t4401;
  t5896 = -1.*t1338*t4433;
  t5899 = -1.*t1393*t4450;
  t5900 = 0. + t5894 + t5896 + t5899;
  t5910 = -1.*t1228*t4776;
  t5911 = -1.*t1338*t4818;
  t5912 = -1.*t1393*t4836;
  t5915 = 0. + t5910 + t5911 + t5912;
  t5952 = -0.930418*t3668;
  t5958 = 0.366501*t3728;
  t5960 = 0. + t5952 + t5958;
  t5964 = -0.930418*t4401;
  t5966 = 0.366501*t4433;
  t5974 = 0. + t5964 + t5966;
  t5979 = -0.930418*t4776;
  t5981 = 0.366501*t4818;
  t5982 = 0. + t5979 + t5981;
  t6012 = 0.366501*t3480;
  t6013 = 0.930418*t3538;
  t6014 = 0. + t6012 + t6013;
  t6016 = 0.930418*t4323;
  t6023 = 0.366501*t4352;
  t6028 = 0. + t6016 + t6023;
  t6037 = 0.930418*t4705;
  t6041 = 0.366501*t4734;
  t6043 = 0. + t6037 + t6041;
  t6093 = -0.930418*t3371;
  t6095 = -0.366501*t3468;
  t6096 = 0. + t6093 + t6095;
  t6104 = -0.366501*t4235;
  t6105 = -0.930418*t4292;
  t6106 = 0. + t6104 + t6105;
  t6108 = -0.366501*t4605;
  t6109 = -0.930418*t4641;
  t6119 = 0. + t6108 + t6109;
  t6154 = -0.366501*t3213;
  t6156 = -0.930418*t3247;
  t6160 = 0. + t6154 + t6156;
  t6164 = -0.930418*t4159;
  t6165 = -0.366501*t4229;
  t6166 = 0. + t6164 + t6165;
  t6169 = -0.930418*t4566;
  t6170 = -0.366501*t4597;
  t6174 = 0. + t6169 + t6170;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00001*t3146*t4024 + 0.00001*t4146*t4534 + 0.00001*t4548*t4927;
  p_output1[10]=0.00001*t4024*t5311 + 0.00001*t4534*t5351 + 0.00001*t4927*t5386;
  p_output1[11]=0.00001*t4024*t5664 + 0.00001*t4534*t5708 + 0.00001*t4927*t5758;
  p_output1[12]=0.00001*t3146*t5767 + 0.00001*t4146*t5772 + 0.00001*t4548*t5777;
  p_output1[13]=0.00001*t5311*t5767 + 0.00001*t5351*t5772 + 0.00001*t5386*t5777;
  p_output1[14]=0.00001*t5664*t5767 + 0.00001*t5708*t5772 + 0.00001*t5758*t5777;
  p_output1[15]=0.00001*t3146*t3996 + 0.00001*t4146*t4530 + 0.00001*t4548*t4917;
  p_output1[16]=0.00001*t3996*t5311 + 0.00001*t4530*t5351 + 0.00001*t4917*t5386;
  p_output1[17]=0.00001*t3996*t5664 + 0.00001*t4530*t5708 + 0.00001*t4917*t5758;
  p_output1[18]=0.00001*t3146*t5885 + 0.00001*t4146*t5900 + 0.00001*t4548*t5915;
  p_output1[19]=0.00001*t5311*t5885 + 0.00001*t5351*t5900 + 0.00001*t5386*t5915;
  p_output1[20]=0.00001*t5664*t5885 + 0.00001*t5708*t5900 + 0.00001*t5758*t5915;
  p_output1[21]=0.00001*t3146*t5960 + 0.00001*t4146*t5974 + 0.00001*t4548*t5982;
  p_output1[22]=0.00001*t5311*t5960 + 0.00001*t5351*t5974 + 0.00001*t5386*t5982;
  p_output1[23]=0.00001*t5664*t5960 + 0.00001*t5708*t5974 + 0.00001*t5758*t5982;
  p_output1[24]=0.00001*t3146*t6014 + 0.00001*t4146*t6028 + 0.00001*t4548*t6043;
  p_output1[25]=0.00001*t5311*t6014 + 0.00001*t5351*t6028 + 0.00001*t5386*t6043;
  p_output1[26]=0.00001*t5664*t6014 + 0.00001*t5708*t6028 + 0.00001*t5758*t6043;
  p_output1[27]=0.00001*t3146*t6096 + 0.00001*t4146*t6106 + 0.00001*t4548*t6119;
  p_output1[28]=0.00001*t5311*t6096 + 0.00001*t5351*t6106 + 0.00001*t5386*t6119;
  p_output1[29]=0.00001*t5664*t6096 + 0.00001*t5708*t6106 + 0.00001*t5758*t6119;
  p_output1[30]=0.00001*t3146*t6160 + 0.00001*t4146*t6166 + 0.00001*t4548*t6174;
  p_output1[31]=0.00001*t5311*t6160 + 0.00001*t5351*t6166 + 0.00001*t5386*t6174;
  p_output1[32]=0.00001*t5664*t6160 + 0.00001*t5708*t6166 + 0.00001*t5758*t6174;
  p_output1[33]=0.00001000000637725*t3146 + 2.3257599990333946e-12*t4146 + 1.9655299995924306e-12*t4548;
  p_output1[34]=0.00001000000637725*t5311 + 2.3257599990333946e-12*t5351 + 1.9655299995924306e-12*t5386;
  p_output1[35]=0.00001000000637725*t5664 + 2.3257599990333946e-12*t5708 + 1.9655299995924306e-12*t5758;
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
}



void Jdq_AMWorld_left_toe_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
