/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_hip_flexion_left_src.h"

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
  double t387;
  double t365;
  double t392;
  double t367;
  double t396;
  double t302;
  double t304;
  double t361;
  double t362;
  double t453;
  double t469;
  double t477;
  double t369;
  double t407;
  double t410;
  double t484;
  double t298;
  double t299;
  double t301;
  double t417;
  double t496;
  double t498;
  double t582;
  double t596;
  double t604;
  double t669;
  double t680;
  double t1036;
  double t1037;
  double t1076;
  double t1084;
  double t1090;
  double t1104;
  double t1110;
  double t1162;
  double t1201;
  double t1203;
  double t554;
  double t570;
  double t576;
  double t640;
  double t682;
  double t686;
  double t692;
  double t729;
  double t1210;
  double t785;
  double t835;
  double t836;
  double t848;
  double t849;
  double t878;
  double t884;
  double t1008;
  double t1719;
  double t1720;
  double t1721;
  double t1682;
  double t1691;
  double t1694;
  double t753;
  double t763;
  double t1702;
  double t1772;
  double t1779;
  double t1849;
  double t1873;
  double t1903;
  double t1228;
  double t1232;
  double t1288;
  double t1325;
  double t2143;
  double t2199;
  double t2314;
  double t2315;
  double t1800;
  double t1938;
  double t1993;
  double t2018;
  double t1334;
  double t1362;
  double t2080;
  double t2091;
  double t2094;
  double t2099;
  double t1367;
  double t1375;
  double t1514;
  double t1534;
  double t1547;
  double t1581;
  double t2667;
  double t2763;
  double t2772;
  double t2801;
  double t2804;
  double t2808;
  double t3372;
  double t3388;
  double t3413;
  double t3415;
  double t2781;
  double t2832;
  double t2834;
  double t2943;
  double t3175;
  double t3178;
  double t3284;
  double t3334;
  double t738;
  double t1026;
  double t1235;
  double t1271;
  double t1332;
  double t1366;
  double t1401;
  double t1411;
  double t1455;
  double t1538;
  double t1542;
  double t1600;
  double t1603;
  double t2078;
  double t2110;
  double t2322;
  double t2340;
  double t2391;
  double t2398;
  double t2401;
  double t2436;
  double t2517;
  double t2518;
  double t2592;
  double t2593;
  double t2607;
  double t3045;
  double t3349;
  double t3467;
  double t3547;
  double t3620;
  double t3761;
  double t3812;
  double t3882;
  double t3883;
  double t4005;
  double t4022;
  double t4175;
  double t4219;
  double t4962;
  double t4988;
  double t5009;
  double t5016;
  double t5035;
  double t5086;
  double t5126;
  double t5178;
  double t5180;
  double t5189;
  double t5198;
  double t5205;
  double t5213;
  double t5222;
  double t5272;
  double t5281;
  double t5299;
  double t5303;
  double t5317;
  double t5333;
  double t5336;
  double t5349;
  double t5360;
  double t5372;
  double t5379;
  double t5396;
  double t5412;
  double t5430;
  double t5432;
  double t5445;
  t387 = Cos(var1[3]);
  t365 = Cos(var1[5]);
  t392 = Sin(var1[4]);
  t367 = Sin(var1[3]);
  t396 = Sin(var1[5]);
  t302 = Cos(var1[7]);
  t304 = -1.*t302;
  t361 = 1. + t304;
  t362 = Cos(var1[6]);
  t453 = t387*t365*t392;
  t469 = t367*t396;
  t477 = t453 + t469;
  t369 = -1.*t365*t367;
  t407 = t387*t392*t396;
  t410 = t369 + t407;
  t484 = Sin(var1[6]);
  t298 = Cos(var1[8]);
  t299 = -1.*t298;
  t301 = 1. + t299;
  t417 = t362*t410;
  t496 = -1.*t477*t484;
  t498 = t417 + t496;
  t582 = t362*t477;
  t596 = t410*t484;
  t604 = t582 + t596;
  t669 = Cos(var1[4]);
  t680 = Sin(var1[7]);
  t1036 = -1.000000637725*t361;
  t1037 = 1. + t1036;
  t1076 = t387*t669*t1037;
  t1084 = -0.930418*t680;
  t1090 = 0. + t1084;
  t1104 = t498*t1090;
  t1110 = -0.366501*t680;
  t1162 = 0. + t1110;
  t1201 = t604*t1162;
  t1203 = t1076 + t1104 + t1201;
  t554 = -0.340999127418*t361*t498;
  t570 = -0.134322983001*t361;
  t576 = 1. + t570;
  t640 = t576*t604;
  t682 = 0.366501*t680;
  t686 = 0. + t682;
  t692 = t387*t669*t686;
  t729 = t554 + t640 + t692;
  t1210 = Sin(var1[8]);
  t785 = -0.8656776547239999*t361;
  t835 = 1. + t785;
  t836 = t835*t498;
  t848 = -0.340999127418*t361*t604;
  t849 = 0.930418*t680;
  t878 = 0. + t849;
  t884 = t387*t669*t878;
  t1008 = t836 + t848 + t884;
  t1719 = t365*t367*t392;
  t1720 = -1.*t387*t396;
  t1721 = t1719 + t1720;
  t1682 = t387*t365;
  t1691 = t367*t392*t396;
  t1694 = t1682 + t1691;
  t753 = -0.134322983001*t301;
  t763 = 1. + t753;
  t1702 = t362*t1694;
  t1772 = -1.*t1721*t484;
  t1779 = t1702 + t1772;
  t1849 = t362*t1721;
  t1873 = t1694*t484;
  t1903 = t1849 + t1873;
  t1228 = -0.366501*t1210;
  t1232 = 0. + t1228;
  t1288 = -1.000000637725*t301;
  t1325 = 1. + t1288;
  t2143 = t669*t1037*t367;
  t2199 = t1779*t1090;
  t2314 = t1903*t1162;
  t2315 = t2143 + t2199 + t2314;
  t1800 = -0.340999127418*t361*t1779;
  t1938 = t576*t1903;
  t1993 = t669*t367*t686;
  t2018 = t1800 + t1938 + t1993;
  t1334 = -0.930418*t1210;
  t1362 = 0. + t1334;
  t2080 = t835*t1779;
  t2091 = -0.340999127418*t361*t1903;
  t2094 = t669*t367*t878;
  t2099 = t2080 + t2091 + t2094;
  t1367 = 0.366501*t1210;
  t1375 = 0. + t1367;
  t1514 = -0.8656776547239999*t301;
  t1534 = 1. + t1514;
  t1547 = 0.930418*t1210;
  t1581 = 0. + t1547;
  t2667 = t669*t362*t396;
  t2763 = -1.*t669*t365*t484;
  t2772 = t2667 + t2763;
  t2801 = t669*t365*t362;
  t2804 = t669*t396*t484;
  t2808 = t2801 + t2804;
  t3372 = -1.*t1037*t392;
  t3388 = t2772*t1090;
  t3413 = t2808*t1162;
  t3415 = t3372 + t3388 + t3413;
  t2781 = -0.340999127418*t361*t2772;
  t2832 = t576*t2808;
  t2834 = -1.*t392*t686;
  t2943 = t2781 + t2832 + t2834;
  t3175 = t835*t2772;
  t3178 = -0.340999127418*t361*t2808;
  t3284 = -1.*t392*t878;
  t3334 = t3175 + t3178 + t3284;
  t738 = 0.340999127418*t301*t729;
  t1026 = t763*t1008;
  t1235 = t1203*t1232;
  t1271 = t738 + t1026 + t1235;
  t1332 = t1325*t1203;
  t1366 = t729*t1362;
  t1401 = t1008*t1375;
  t1411 = t1332 + t1366 + t1401;
  t1455 = 0.707107*t1411;
  t1538 = t1534*t729;
  t1542 = 0.340999127418*t301*t1008;
  t1600 = t1203*t1581;
  t1603 = t1538 + t1542 + t1600;
  t2078 = 0.340999127418*t301*t2018;
  t2110 = t763*t2099;
  t2322 = t2315*t1232;
  t2340 = t2078 + t2110 + t2322;
  t2391 = t1325*t2315;
  t2398 = t2018*t1362;
  t2401 = t2099*t1375;
  t2436 = t2391 + t2398 + t2401;
  t2517 = 0.707107*t2436;
  t2518 = t1534*t2018;
  t2592 = 0.340999127418*t301*t2099;
  t2593 = t2315*t1581;
  t2607 = t2518 + t2592 + t2593;
  t3045 = 0.340999127418*t301*t2943;
  t3349 = t763*t3334;
  t3467 = t3415*t1232;
  t3547 = t3045 + t3349 + t3467;
  t3620 = t1325*t3415;
  t3761 = t2943*t1362;
  t3812 = t3334*t1375;
  t3882 = t3620 + t3761 + t3812;
  t3883 = 0.707107*t3882;
  t4005 = t1534*t2943;
  t4022 = 0.340999127418*t301*t3334;
  t4175 = t3415*t1581;
  t4219 = t4005 + t4022 + t4175;
  t4962 = -1.*t362;
  t4988 = 1. + t4962;
  t5009 = 0.091*t4988;
  t5016 = 0. + t5009;
  t5035 = 0.091*t484;
  t5086 = 0. + t5035;
  t5126 = -0.04500040093286238*t361;
  t5178 = 0.07877663122399998*t1090;
  t5180 = 0.031030906668*t1162;
  t5189 = 0. + t5126 + t5178 + t5180;
  t5198 = -3.2909349868922137e-7*var1[7];
  t5205 = 0.03103092645718495*t361;
  t5213 = -0.045000372235*t686;
  t5222 = t5198 + t5205 + t5213;
  t5272 = 1.296332362046933e-7*var1[7];
  t5281 = 0.07877668146182712*t361;
  t5299 = -0.045000372235*t878;
  t5303 = t5272 + t5281 + t5299;
  t5317 = 3.2909349868922137e-7*var1[8];
  t5333 = 0.055653945343889656*t301;
  t5336 = -0.045000372235*t1232;
  t5349 = t5317 + t5333 + t5336;
  t5360 = -0.04500040093286238*t301;
  t5372 = -0.141285834136*t1362;
  t5379 = 0.055653909852*t1375;
  t5396 = 0. + t5360 + t5372 + t5379;
  t5412 = 1.296332362046933e-7*var1[8];
  t5430 = -0.14128592423750855*t301;
  t5432 = -0.045000372235*t1581;
  t5445 = t5412 + t5430 + t5432;
  p_output1[0]=0.259155*t1271 + t1455 - 0.657905*t1603;
  p_output1[1]=0.259155*t2340 + t2517 - 0.657905*t2607;
  p_output1[2]=0.259155*t3547 + t3883 - 0.657905*t4219;
  p_output1[3]=0.;
  p_output1[4]=-0.259155*t1271 + t1455 + 0.657905*t1603;
  p_output1[5]=-0.259155*t2340 + t2517 + 0.657905*t2607;
  p_output1[6]=-0.259155*t3547 + t3883 + 0.657905*t4219;
  p_output1[7]=0.;
  p_output1[8]=-0.930418*t1271 - 0.366501*t1603;
  p_output1[9]=-0.930418*t2340 - 0.366501*t2607;
  p_output1[10]=-0.930418*t3547 - 0.366501*t4219;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.138152*t1271 - 0.045*t1411 - 0.108789*t1603 + t410*t5016 + t477*t5086 + t498*t5303 + t1008*t5349 + t1203*t5396 + t5222*t604 + t387*t5189*t669 + t5445*t729 + var1[0];
  p_output1[13]=0. + 0.138152*t2340 - 0.045*t2436 - 0.108789*t2607 + t1694*t5016 + t1721*t5086 + t1903*t5222 + t1779*t5303 + t2099*t5349 + t2315*t5396 + t2018*t5445 + t367*t5189*t669 + var1[1];
  p_output1[14]=0. + 0.138152*t3547 - 0.045*t3882 - 0.108789*t4219 - 1.*t392*t5189 + t2808*t5222 + t2772*t5303 + t3334*t5349 + t3415*t5396 + t2943*t5445 + t396*t5016*t669 + t365*t5086*t669 + var1[2];
  p_output1[15]=1.;
}



void T_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
