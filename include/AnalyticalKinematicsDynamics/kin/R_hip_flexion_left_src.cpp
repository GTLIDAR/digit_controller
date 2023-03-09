/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left_src.h"

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
  double t1422;
  double t1264;
  double t1455;
  double t1271;
  double t1575;
  double t331;
  double t1000;
  double t1057;
  double t1260;
  double t1891;
  double t1901;
  double t1914;
  double t1380;
  double t1603;
  double t1694;
  double t1977;
  double t109;
  double t112;
  double t113;
  double t1848;
  double t2143;
  double t2199;
  double t2578;
  double t2585;
  double t2592;
  double t2631;
  double t2641;
  double t3415;
  double t3497;
  double t3586;
  double t3696;
  double t3761;
  double t3770;
  double t3980;
  double t4005;
  double t4078;
  double t4142;
  double t2401;
  double t2436;
  double t2499;
  double t2593;
  double t2699;
  double t2730;
  double t2750;
  double t2781;
  double t4169;
  double t2943;
  double t2989;
  double t2993;
  double t3029;
  double t3045;
  double t3148;
  double t3151;
  double t3205;
  double t5317;
  double t5349;
  double t5351;
  double t5281;
  double t5299;
  double t5303;
  double t2941;
  double t2942;
  double t5316;
  double t5372;
  double t5379;
  double t5402;
  double t5407;
  double t5412;
  double t4175;
  double t4219;
  double t4348;
  double t4517;
  double t5561;
  double t5562;
  double t5573;
  double t5574;
  double t5396;
  double t5430;
  double t5432;
  double t5498;
  double t4739;
  double t4767;
  double t5524;
  double t5530;
  double t5535;
  double t5536;
  double t4880;
  double t4927;
  double t5086;
  double t5145;
  double t5198;
  double t5205;
  double t5734;
  double t5735;
  double t5740;
  double t5747;
  double t5748;
  double t5750;
  double t5786;
  double t5787;
  double t5792;
  double t5793;
  double t5746;
  double t5751;
  double t5761;
  double t5763;
  double t5767;
  double t5770;
  double t5772;
  double t5775;
  double t2922;
  double t3413;
  double t4250;
  double t4286;
  double t4634;
  double t4771;
  double t5016;
  double t5032;
  double t5035;
  double t5180;
  double t5193;
  double t5213;
  double t5251;
  double t5514;
  double t5544;
  double t5583;
  double t5585;
  double t5601;
  double t5602;
  double t5638;
  double t5652;
  double t5662;
  double t5678;
  double t5686;
  double t5700;
  double t5713;
  double t5766;
  double t5776;
  double t5795;
  double t5798;
  double t5802;
  double t5818;
  double t5827;
  double t5828;
  double t5831;
  double t5841;
  double t5849;
  double t5852;
  double t5853;
  t1422 = Cos(var1[3]);
  t1264 = Cos(var1[5]);
  t1455 = Sin(var1[4]);
  t1271 = Sin(var1[3]);
  t1575 = Sin(var1[5]);
  t331 = Cos(var1[7]);
  t1000 = -1.*t331;
  t1057 = 1. + t1000;
  t1260 = Cos(var1[6]);
  t1891 = t1422*t1264*t1455;
  t1901 = t1271*t1575;
  t1914 = t1891 + t1901;
  t1380 = -1.*t1264*t1271;
  t1603 = t1422*t1455*t1575;
  t1694 = t1380 + t1603;
  t1977 = Sin(var1[6]);
  t109 = Cos(var1[8]);
  t112 = -1.*t109;
  t113 = 1. + t112;
  t1848 = t1260*t1694;
  t2143 = -1.*t1914*t1977;
  t2199 = t1848 + t2143;
  t2578 = t1260*t1914;
  t2585 = t1694*t1977;
  t2592 = t2578 + t2585;
  t2631 = Cos(var1[4]);
  t2641 = Sin(var1[7]);
  t3415 = -1.000000637725*t1057;
  t3497 = 1. + t3415;
  t3586 = t1422*t2631*t3497;
  t3696 = -0.930418*t2641;
  t3761 = 0. + t3696;
  t3770 = t2199*t3761;
  t3980 = -0.366501*t2641;
  t4005 = 0. + t3980;
  t4078 = t2592*t4005;
  t4142 = t3586 + t3770 + t4078;
  t2401 = -0.340999127418*t1057*t2199;
  t2436 = -0.134322983001*t1057;
  t2499 = 1. + t2436;
  t2593 = t2499*t2592;
  t2699 = 0.366501*t2641;
  t2730 = 0. + t2699;
  t2750 = t1422*t2631*t2730;
  t2781 = t2401 + t2593 + t2750;
  t4169 = Sin(var1[8]);
  t2943 = -0.8656776547239999*t1057;
  t2989 = 1. + t2943;
  t2993 = t2989*t2199;
  t3029 = -0.340999127418*t1057*t2592;
  t3045 = 0.930418*t2641;
  t3148 = 0. + t3045;
  t3151 = t1422*t2631*t3148;
  t3205 = t2993 + t3029 + t3151;
  t5317 = t1264*t1271*t1455;
  t5349 = -1.*t1422*t1575;
  t5351 = t5317 + t5349;
  t5281 = t1422*t1264;
  t5299 = t1271*t1455*t1575;
  t5303 = t5281 + t5299;
  t2941 = -0.134322983001*t113;
  t2942 = 1. + t2941;
  t5316 = t1260*t5303;
  t5372 = -1.*t5351*t1977;
  t5379 = t5316 + t5372;
  t5402 = t1260*t5351;
  t5407 = t5303*t1977;
  t5412 = t5402 + t5407;
  t4175 = -0.366501*t4169;
  t4219 = 0. + t4175;
  t4348 = -1.000000637725*t113;
  t4517 = 1. + t4348;
  t5561 = t2631*t3497*t1271;
  t5562 = t5379*t3761;
  t5573 = t5412*t4005;
  t5574 = t5561 + t5562 + t5573;
  t5396 = -0.340999127418*t1057*t5379;
  t5430 = t2499*t5412;
  t5432 = t2631*t1271*t2730;
  t5498 = t5396 + t5430 + t5432;
  t4739 = -0.930418*t4169;
  t4767 = 0. + t4739;
  t5524 = t2989*t5379;
  t5530 = -0.340999127418*t1057*t5412;
  t5535 = t2631*t1271*t3148;
  t5536 = t5524 + t5530 + t5535;
  t4880 = 0.366501*t4169;
  t4927 = 0. + t4880;
  t5086 = -0.8656776547239999*t113;
  t5145 = 1. + t5086;
  t5198 = 0.930418*t4169;
  t5205 = 0. + t5198;
  t5734 = t2631*t1260*t1575;
  t5735 = -1.*t2631*t1264*t1977;
  t5740 = t5734 + t5735;
  t5747 = t2631*t1264*t1260;
  t5748 = t2631*t1575*t1977;
  t5750 = t5747 + t5748;
  t5786 = -1.*t3497*t1455;
  t5787 = t5740*t3761;
  t5792 = t5750*t4005;
  t5793 = t5786 + t5787 + t5792;
  t5746 = -0.340999127418*t1057*t5740;
  t5751 = t2499*t5750;
  t5761 = -1.*t1455*t2730;
  t5763 = t5746 + t5751 + t5761;
  t5767 = t2989*t5740;
  t5770 = -0.340999127418*t1057*t5750;
  t5772 = -1.*t1455*t3148;
  t5775 = t5767 + t5770 + t5772;
  t2922 = 0.340999127418*t113*t2781;
  t3413 = t2942*t3205;
  t4250 = t4142*t4219;
  t4286 = t2922 + t3413 + t4250;
  t4634 = t4517*t4142;
  t4771 = t2781*t4767;
  t5016 = t3205*t4927;
  t5032 = t4634 + t4771 + t5016;
  t5035 = 0.707107*t5032;
  t5180 = t5145*t2781;
  t5193 = 0.340999127418*t113*t3205;
  t5213 = t4142*t5205;
  t5251 = t5180 + t5193 + t5213;
  t5514 = 0.340999127418*t113*t5498;
  t5544 = t2942*t5536;
  t5583 = t5574*t4219;
  t5585 = t5514 + t5544 + t5583;
  t5601 = t4517*t5574;
  t5602 = t5498*t4767;
  t5638 = t5536*t4927;
  t5652 = t5601 + t5602 + t5638;
  t5662 = 0.707107*t5652;
  t5678 = t5145*t5498;
  t5686 = 0.340999127418*t113*t5536;
  t5700 = t5574*t5205;
  t5713 = t5678 + t5686 + t5700;
  t5766 = 0.340999127418*t113*t5763;
  t5776 = t2942*t5775;
  t5795 = t5793*t4219;
  t5798 = t5766 + t5776 + t5795;
  t5802 = t4517*t5793;
  t5818 = t5763*t4767;
  t5827 = t5775*t4927;
  t5828 = t5802 + t5818 + t5827;
  t5831 = 0.707107*t5828;
  t5841 = t5145*t5763;
  t5849 = 0.340999127418*t113*t5775;
  t5852 = t5793*t5205;
  t5853 = t5841 + t5849 + t5852;
  p_output1[0]=0.259155*t4286 + t5035 - 0.657905*t5251;
  p_output1[1]=0.259155*t5585 + t5662 - 0.657905*t5713;
  p_output1[2]=0.259155*t5798 + t5831 - 0.657905*t5853;
  p_output1[3]=-0.259155*t4286 + t5035 + 0.657905*t5251;
  p_output1[4]=-0.259155*t5585 + t5662 + 0.657905*t5713;
  p_output1[5]=-0.259155*t5798 + t5831 + 0.657905*t5853;
  p_output1[6]=-0.930418*t4286 - 0.366501*t5251;
  p_output1[7]=-0.930418*t5585 - 0.366501*t5713;
  p_output1[8]=-0.930418*t5798 - 0.366501*t5853;
}



void R_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
