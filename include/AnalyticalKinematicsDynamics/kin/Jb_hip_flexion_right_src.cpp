/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_hip_flexion_right_src.h"

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
  double t862;
  double t437;
  double t440;
  double t466;
  double t981;
  double t996;
  double t1022;
  double t268;
  double t707;
  double t755;
  double t853;
  double t879;
  double t890;
  double t897;
  double t902;
  double t920;
  double t954;
  double t958;
  double t1188;
  double t1209;
  double t1275;
  double t1289;
  double t1310;
  double t1349;
  double t1390;
  double t1413;
  double t1605;
  double t1633;
  double t1656;
  double t1665;
  double t1682;
  double t1713;
  double t1748;
  double t1767;
  double t1921;
  double t271;
  double t364;
  double t980;
  double t1458;
  double t1535;
  double t1564;
  double t1775;
  double t1817;
  double t185;
  double t1939;
  double t1990;
  double t1996;
  double t2108;
  double t2124;
  double t2130;
  double t2133;
  double t2151;
  double t145;
  double t2279;
  double t2355;
  double t2424;
  double t1908;
  double t2220;
  double t2267;
  double t2440;
  double t31;
  double t3004;
  double t3007;
  double t3100;
  double t3112;
  double t3182;
  double t3205;
  double t3037;
  double t3156;
  double t3210;
  double t3214;
  double t3248;
  double t3251;
  double t3253;
  double t3274;
  double t2531;
  double t2552;
  double t2556;
  double t2569;
  double t2654;
  double t2656;
  double t2665;
  double t2720;
  double t2749;
  double t3327;
  double t3341;
  double t3393;
  double t3222;
  double t3285;
  double t3295;
  double t3700;
  double t3733;
  double t3777;
  double t3807;
  double t3823;
  double t3829;
  double t3839;
  double t3851;
  double t3865;
  double t3799;
  double t3838;
  double t3881;
  double t3888;
  double t3900;
  double t3909;
  double t3932;
  double t3946;
  double t4139;
  double t4144;
  double t4146;
  double t3889;
  double t3957;
  double t4015;
  double t2278;
  double t2454;
  double t2496;
  double t2634;
  double t2664;
  double t2725;
  double t2734;
  double t2745;
  double t2757;
  double t2762;
  double t2804;
  double t2852;
  double t2861;
  double t3311;
  double t3414;
  double t3432;
  double t3449;
  double t3493;
  double t3505;
  double t3516;
  double t3559;
  double t3574;
  double t3652;
  double t3653;
  double t3664;
  double t3668;
  double t4080;
  double t4148;
  double t4154;
  double t4242;
  double t4264;
  double t4291;
  double t4361;
  double t4364;
  double t4379;
  double t4444;
  double t4463;
  double t4482;
  double t4485;
  double t4756;
  double t4764;
  double t4766;
  double t4929;
  double t4941;
  double t5042;
  double t5047;
  double t5058;
  double t5113;
  double t5183;
  double t5208;
  double t5243;
  double t5248;
  double t5256;
  double t5261;
  double t5273;
  double t5292;
  double t5307;
  double t5313;
  double t5332;
  double t5371;
  double t5375;
  double t4845;
  double t4913;
  double t4915;
  double t5136;
  double t5275;
  double t5379;
  double t5380;
  double t5427;
  double t5432;
  double t5452;
  double t5458;
  double t5460;
  double t5465;
  double t5472;
  double t4772;
  double t4781;
  double t4790;
  double t5561;
  double t5564;
  double t5566;
  double t5597;
  double t4793;
  double t4811;
  double t4819;
  double t5420;
  double t5488;
  double t5517;
  double t5654;
  double t5656;
  double t5676;
  double t5684;
  double t5701;
  double t5713;
  double t5726;
  double t5779;
  double t5784;
  double t5793;
  double t5547;
  double t5620;
  double t5636;
  double t5758;
  double t5796;
  double t5817;
  double t5825;
  double t5848;
  double t5865;
  double t4674;
  double t4726;
  double t4742;
  double t5653;
  double t5950;
  double t5971;
  double t6008;
  double t6052;
  double t6127;
  double t6167;
  double t6150;
  double t6203;
  double t6179;
  double t6232;
  double t6214;
  double t6737;
  double t6744;
  double t6747;
  double t6751;
  double t6764;
  double t6766;
  double t6767;
  double t6768;
  double t6807;
  double t6813;
  double t6821;
  double t6824;
  double t6829;
  double t6835;
  double t6837;
  double t6839;
  double t6881;
  double t6883;
  double t6885;
  double t6893;
  double t6896;
  double t6905;
  double t6911;
  double t6915;
  t862 = Sin(var1[19]);
  t437 = Cos(var1[19]);
  t440 = -1.*t437;
  t466 = 1. + t440;
  t981 = Cos(var1[18]);
  t996 = -1.*t981;
  t1022 = 1. + t996;
  t268 = Sin(var1[18]);
  t707 = -1.000000637725*t466;
  t755 = 1. + t707;
  t853 = 0.707107*t755;
  t879 = -0.930418*t862;
  t890 = 0. + t879;
  t897 = -0.657905*t890;
  t902 = -0.366501*t862;
  t920 = 0. + t902;
  t954 = -0.259155*t920;
  t958 = t853 + t897 + t954;
  t1188 = -0.134322983001*t466;
  t1209 = 1. + t1188;
  t1275 = -0.259155*t1209;
  t1289 = 0.22434503092393926*t466;
  t1310 = 0.366501*t862;
  t1349 = 0. + t1310;
  t1390 = 0.707107*t1349;
  t1413 = t1275 + t1289 + t1390;
  t1605 = -0.8656776547239999*t466;
  t1633 = 1. + t1605;
  t1656 = -0.657905*t1633;
  t1665 = 0.0883716288660118*t466;
  t1682 = 0.930418*t862;
  t1713 = 0. + t1682;
  t1748 = 0.707107*t1713;
  t1767 = t1656 + t1665 + t1748;
  t1921 = Cos(var1[17]);
  t271 = 0.366501*t268;
  t364 = 0. + t271;
  t980 = t364*t958;
  t1458 = 0.340999127418*t1022*t1413;
  t1535 = -0.134322983001*t1022;
  t1564 = 1. + t1535;
  t1775 = t1564*t1767;
  t1817 = 0. + t980 + t1458 + t1775;
  t185 = Sin(var1[17]);
  t1939 = -0.930418*t268;
  t1990 = 0. + t1939;
  t1996 = t1990*t958;
  t2108 = -0.8656776547239999*t1022;
  t2124 = 1. + t2108;
  t2130 = t2124*t1413;
  t2133 = 0.340999127418*t1022*t1767;
  t2151 = 0. + t1996 + t2130 + t2133;
  t145 = Cos(var1[5]);
  t2279 = t1921*t1817;
  t2355 = -1.*t185*t2151;
  t2424 = 0. + t2279 + t2355;
  t1908 = t185*t1817;
  t2220 = t1921*t2151;
  t2267 = 0. + t1908 + t2220;
  t2440 = Sin(var1[5]);
  t31 = Sin(var1[3]);
  t3004 = -0.707107*t755;
  t3007 = t3004 + t897 + t954;
  t3100 = -0.707107*t1349;
  t3112 = t1275 + t1289 + t3100;
  t3182 = -0.707107*t1713;
  t3205 = t1656 + t1665 + t3182;
  t3037 = t364*t3007;
  t3156 = 0.340999127418*t1022*t3112;
  t3210 = t1564*t3205;
  t3214 = 0. + t3037 + t3156 + t3210;
  t3248 = t1990*t3007;
  t3251 = t2124*t3112;
  t3253 = 0.340999127418*t1022*t3205;
  t3274 = 0. + t3248 + t3251 + t3253;
  t2531 = Cos(var1[3]);
  t2552 = Cos(var1[4]);
  t2556 = -1.000000637725*t1022;
  t2569 = 1. + t2556;
  t2654 = 0.930418*t268;
  t2656 = 0. + t2654;
  t2665 = -0.366501*t268;
  t2720 = 0. + t2665;
  t2749 = Sin(var1[4]);
  t3327 = t1921*t3214;
  t3341 = -1.*t185*t3274;
  t3393 = 0. + t3327 + t3341;
  t3222 = t185*t3214;
  t3285 = t1921*t3274;
  t3295 = 0. + t3222 + t3285;
  t3700 = -0.366501*t1633;
  t3733 = -0.3172717261340007*t466;
  t3777 = t3700 + t3733;
  t3807 = 0.930418*t1209;
  t3823 = 0.12497652119782442*t466;
  t3829 = t3807 + t3823;
  t3839 = -0.366501*t890;
  t3851 = 0.930418*t920;
  t3865 = t3839 + t3851;
  t3799 = 0.340999127418*t1022*t3777;
  t3838 = t2124*t3829;
  t3881 = t1990*t3865;
  t3888 = 0. + t3799 + t3838 + t3881;
  t3900 = t1564*t3777;
  t3909 = 0.340999127418*t1022*t3829;
  t3932 = t364*t3865;
  t3946 = 0. + t3900 + t3909 + t3932;
  t4139 = -1.*t185*t3888;
  t4144 = t1921*t3946;
  t4146 = 0. + t4139 + t4144;
  t3889 = t1921*t3888;
  t3957 = t185*t3946;
  t4015 = 0. + t3889 + t3957;
  t2278 = t145*t2267;
  t2454 = -1.*t2424*t2440;
  t2496 = 0. + t2278 + t2454;
  t2634 = t2569*t958;
  t2664 = t2656*t1413;
  t2725 = t2720*t1767;
  t2734 = 0. + t2634 + t2664 + t2725;
  t2745 = t2552*t2734;
  t2757 = t145*t2424;
  t2762 = t2267*t2440;
  t2804 = 0. + t2757 + t2762;
  t2852 = t2749*t2804;
  t2861 = 0. + t2745 + t2852;
  t3311 = t145*t3295;
  t3414 = -1.*t3393*t2440;
  t3432 = 0. + t3311 + t3414;
  t3449 = t2569*t3007;
  t3493 = t2656*t3112;
  t3505 = t2720*t3205;
  t3516 = 0. + t3449 + t3493 + t3505;
  t3559 = t2552*t3516;
  t3574 = t145*t3393;
  t3652 = t3295*t2440;
  t3653 = 0. + t3574 + t3652;
  t3664 = t2749*t3653;
  t3668 = 0. + t3559 + t3664;
  t4080 = t145*t4015;
  t4148 = -1.*t4146*t2440;
  t4154 = 0. + t4080 + t4148;
  t4242 = t3777*t2720;
  t4264 = t3829*t2656;
  t4291 = t2569*t3865;
  t4361 = 0. + t4242 + t4264 + t4291;
  t4364 = t2552*t4361;
  t4379 = t145*t4146;
  t4444 = t4015*t2440;
  t4463 = 0. + t4379 + t4444;
  t4482 = t2749*t4463;
  t4485 = 0. + t4364 + t4482;
  t4756 = -1.*t3516*t2749;
  t4764 = t2552*t3653;
  t4766 = 0. + t4756 + t4764;
  t4929 = 3.2909349868922137e-7*var1[19];
  t4941 = -0.138152*t1209;
  t5042 = -0.01855699127121286*t466;
  t5047 = -0.045000372235*t920;
  t5058 = -0.045*t1349;
  t5113 = t4929 + t4941 + t5042 + t5047 + t5058;
  t5183 = -0.045*t755;
  t5208 = -0.04500040093286238*t466;
  t5243 = -0.108789*t890;
  t5248 = -0.138152*t920;
  t5256 = -0.055653909852*t1349;
  t5261 = -0.141285834136*t1713;
  t5273 = 0. + t5183 + t5208 + t5243 + t5248 + t5256 + t5261;
  t5292 = -1.296332362046933e-7*var1[19];
  t5307 = -0.108789*t1633;
  t5313 = -0.09417621278645702*t466;
  t5332 = -0.045000372235*t890;
  t5371 = -0.045*t1713;
  t5375 = t5292 + t5307 + t5313 + t5332 + t5371;
  t4845 = 3.2909349868922137e-7*var1[18];
  t4913 = 0.03103092645718495*t1022;
  t4915 = -0.045000372235*t2720;
  t5136 = 0.340999127418*t1022*t5113;
  t5275 = t364*t5273;
  t5379 = t1564*t5375;
  t5380 = t4845 + t4913 + t4915 + t5136 + t5275 + t5379;
  t5427 = 1.296332362046933e-7*var1[18];
  t5432 = -0.07877668146182712*t1022;
  t5452 = -0.045000372235*t2656;
  t5458 = t2124*t5113;
  t5460 = t1990*t5273;
  t5465 = 0.340999127418*t1022*t5375;
  t5472 = t5427 + t5432 + t5452 + t5458 + t5460 + t5465;
  t4772 = -1.*t4361*t2749;
  t4781 = t2552*t4463;
  t4790 = 0. + t4772 + t4781;
  t5561 = -0.091*t185;
  t5564 = t1921*t5380;
  t5566 = -1.*t185*t5472;
  t5597 = 0. + t5561 + t5564 + t5566;
  t4793 = -1.*t1921;
  t4811 = 1. + t4793;
  t4819 = -0.091*t4811;
  t5420 = t185*t5380;
  t5488 = t1921*t5472;
  t5517 = 0. + t4819 + t5420 + t5488;
  t5654 = -0.04500040093286238*t1022;
  t5656 = -0.07877663122399998*t1990;
  t5676 = 0.031030906668*t364;
  t5684 = t2656*t5113;
  t5701 = t2569*t5273;
  t5713 = t2720*t5375;
  t5726 = 0. + t5654 + t5656 + t5676 + t5684 + t5701 + t5713;
  t5779 = t145*t5597;
  t5784 = t5517*t2440;
  t5793 = 0. + t5779 + t5784;
  t5547 = t145*t5517;
  t5620 = -1.*t5597*t2440;
  t5636 = 0. + t5547 + t5620;
  t5758 = -1.*t5726*t2749;
  t5796 = t2552*t5793;
  t5817 = 0. + t5758 + t5796;
  t5825 = t2552*t5726;
  t5848 = t2749*t5793;
  t5865 = 0. + t5825 + t5848;
  t4674 = -1.*t2734*t2749;
  t4726 = t2552*t2804;
  t4742 = 0. + t4674 + t4726;
  t5653 = t4154*t5636;
  t5950 = -1.*t3432*t5636;
  t5971 = -1.*t4154*t5636;
  t6008 = t5636*t2496;
  t6052 = t3432*t5636;
  t6127 = -1.*t5636*t2496;
  t6167 = -1.*t3516*t5726;
  t6150 = t4361*t5726;
  t6203 = t5726*t2734;
  t6179 = -1.*t4361*t5726;
  t6232 = -1.*t5726*t2734;
  t6214 = t3516*t5726;
  t6737 = -1.*t3112*t5113;
  t6744 = -1.*t3007*t5273;
  t6747 = -1.*t3205*t5375;
  t6751 = t6737 + t6744 + t6747;
  t6764 = t3829*t5113;
  t6766 = t3865*t5273;
  t6767 = t3777*t5375;
  t6768 = t6764 + t6766 + t6767;
  t6807 = t5113*t1413;
  t6813 = t958*t5273;
  t6821 = t5375*t1767;
  t6824 = t6807 + t6813 + t6821;
  t6829 = -1.*t3829*t5113;
  t6835 = -1.*t3865*t5273;
  t6837 = -1.*t3777*t5375;
  t6839 = t6829 + t6835 + t6837;
  t6881 = -1.*t5113*t1413;
  t6883 = -1.*t958*t5273;
  t6885 = -1.*t5375*t1767;
  t6893 = t6881 + t6883 + t6885;
  t6896 = t3112*t5113;
  t6905 = t3007*t5273;
  t6911 = t3205*t5375;
  t6915 = t6896 + t6905 + t6911;
  p_output1[0]=0. + t2531*t2861 - 1.*t2496*t31;
  p_output1[1]=0. - 1.*t31*t3432 + t2531*t3668;
  p_output1[2]=0. - 1.*t31*t4154 + t2531*t4485;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t2496*t2531 + t2861*t31;
  p_output1[7]=0. + t2531*t3432 + t31*t3668;
  p_output1[8]=0. + t2531*t4154 + t31*t4485;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4742;
  p_output1[13]=t4766;
  p_output1[14]=t4790;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4766*(t5653 + t4790*t5817 + t4485*t5865) + t4790*(-1.*t4766*t5817 - 1.*t3668*t5865 + t5950);
  p_output1[19]=t4742*(-1.*t4790*t5817 - 1.*t4485*t5865 + t5971) + t4790*(t4742*t5817 + t2861*t5865 + t6008);
  p_output1[20]=t4742*(t4766*t5817 + t3668*t5865 + t6052) + t4766*(-1.*t4742*t5817 - 1.*t2861*t5865 + t6127);
  p_output1[21]=t4742;
  p_output1[22]=t4766;
  p_output1[23]=t4790;
  p_output1[24]=t3432*(t5653 + t4463*t5793 + t6150) + t4154*(-1.*t3653*t5793 + t5950 + t6167);
  p_output1[25]=t2496*(-1.*t4463*t5793 + t5971 + t6179) + t4154*(t2804*t5793 + t6008 + t6203);
  p_output1[26]=t2496*(t3653*t5793 + t6052 + t6214) + t3432*(-1.*t2804*t5793 + t6127 + t6232);
  p_output1[27]=t2496;
  p_output1[28]=t3432;
  p_output1[29]=t4154;
  p_output1[30]=t3516*(t4015*t5517 + t4146*t5597 + t6150) + t4361*(-1.*t3295*t5517 - 1.*t3393*t5597 + t6167);
  p_output1[31]=t2734*(-1.*t4015*t5517 - 1.*t4146*t5597 + t6179) + t4361*(t2267*t5517 + t2424*t5597 + t6203);
  p_output1[32]=t2734*(t3295*t5517 + t3393*t5597 + t6214) + t3516*(-1.*t2267*t5517 - 1.*t2424*t5597 + t6232);
  p_output1[33]=t2734;
  p_output1[34]=t3516;
  p_output1[35]=t4361;
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
  p_output1[102]=-0.091*t1817 - 1.*t3516*(t3946*t5380 + t3888*t5472 + t6150) - 1.*t4361*(-1.*t3214*t5380 - 1.*t3274*t5472 + t6167);
  p_output1[103]=-0.091*t3214 - 1.*t2734*(-1.*t3946*t5380 - 1.*t3888*t5472 + t6179) - 1.*t4361*(t1817*t5380 + t2151*t5472 + t6203);
  p_output1[104]=-0.091*t3946 - 1.*t2734*(t3214*t5380 + t3274*t5472 + t6214) - 1.*t3516*(-1.*t1817*t5380 - 1.*t2151*t5472 + t6232);
  p_output1[105]=0. - 1.*t1413*t2656 - 1.*t1767*t2720 - 1.*t2569*t958;
  p_output1[106]=0. - 1.*t2569*t3007 - 1.*t2656*t3112 - 1.*t2720*t3205;
  p_output1[107]=0. - 1.*t2720*t3777 - 1.*t2656*t3829 - 1.*t2569*t3865;
  p_output1[108]=-0.041869*t1413 + 0.016493*t1767 - 0.366501*(t3829*t6751 + t3112*t6768) - 0.930418*(t3777*t6751 + t3205*t6768) + 0.084668*t958;
  p_output1[109]=0.084668*t3007 - 0.041869*t3112 + 0.016493*t3205 - 0.366501*(t3829*t6824 + t1413*t6839) - 0.930418*(t3777*t6824 + t1767*t6839);
  p_output1[110]=0.016493*t3777 - 0.041869*t3829 + 0.084668*t3865 - 0.366501*(t3112*t6893 + t1413*t6915) - 0.930418*(t3205*t6893 + t1767*t6915);
  p_output1[111]=0. - 0.366501*t1413 - 0.930418*t1767;
  p_output1[112]=0. - 0.366501*t3112 - 0.930418*t3205;
  p_output1[113]=0. - 0.930418*t3777 - 0.366501*t3829;
  p_output1[114]=-1.3540964544089817e-7;
  p_output1[115]=-3.2972577157508454e-7;
  p_output1[116]=3.305646759411973e-7;
  p_output1[117]=-3.6361499999859603e-7;
  p_output1[118]=-3.6361499999859603e-7;
  p_output1[119]=-1.000000637725;
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



void Jb_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
