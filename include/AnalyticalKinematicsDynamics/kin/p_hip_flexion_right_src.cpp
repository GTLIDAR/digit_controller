/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_right_src.h"

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
  double t684;
  double t119;
  double t1689;
  double t1987;
  double t1752;
  double t2040;
  double t283;
  double t436;
  double t528;
  double t1091;
  double t1879;
  double t2176;
  double t2210;
  double t2251;
  double t2503;
  double t2526;
  double t2535;
  double t239;
  double t3418;
  double t3422;
  double t3047;
  double t3106;
  double t3305;
  double t3782;
  double t3799;
  double t3806;
  double t3976;
  double t3996;
  double t4060;
  double t4093;
  double t2806;
  double t2841;
  double t714;
  double t841;
  double t852;
  double t890;
  double t4840;
  double t4969;
  double t4291;
  double t4329;
  double t4421;
  double t4468;
  double t4475;
  double t4554;
  double t4784;
  double t4797;
  double t4657;
  double t4678;
  double t4724;
  double t4726;
  double t4732;
  double t4749;
  double t4988;
  double t5023;
  double t5051;
  double t5152;
  double t5159;
  double t5164;
  double t4142;
  double t4145;
  double t4597;
  double t4600;
  double t635;
  double t851;
  double t900;
  double t962;
  double t1140;
  double t1471;
  double t2320;
  double t2338;
  double t2452;
  double t2456;
  double t2715;
  double t2791;
  double t2917;
  double t3011;
  double t5525;
  double t5536;
  double t5537;
  double t5625;
  double t5673;
  double t5694;
  double t3351;
  double t3387;
  double t3519;
  double t3663;
  double t3966;
  double t4061;
  double t4165;
  double t4231;
  double t5699;
  double t5713;
  double t5735;
  double t5757;
  double t5766;
  double t5768;
  double t4579;
  double t4586;
  double t4614;
  double t4628;
  double t4757;
  double t4800;
  double t4978;
  double t4984;
  double t5779;
  double t5801;
  double t5828;
  double t5853;
  double t5873;
  double t5883;
  double t5896;
  double t5898;
  double t5198;
  double t5246;
  double t5921;
  double t5931;
  double t5936;
  double t5937;
  double t5303;
  double t5340;
  double t5467;
  double t5469;
  double t6076;
  double t6084;
  double t6089;
  double t6102;
  double t6111;
  double t6128;
  double t6142;
  double t6146;
  double t6155;
  double t6160;
  double t6166;
  double t6167;
  double t6169;
  double t6171;
  double t6175;
  double t6179;
  double t6190;
  double t6196;
  t684 = Sin(var1[18]);
  t119 = Cos(var1[3]);
  t1689 = Cos(var1[5]);
  t1987 = Sin(var1[3]);
  t1752 = Sin(var1[4]);
  t2040 = Sin(var1[5]);
  t283 = Cos(var1[18]);
  t436 = -1.*t283;
  t528 = 1. + t436;
  t1091 = Sin(var1[17]);
  t1879 = t119*t1689*t1752;
  t2176 = t1987*t2040;
  t2210 = t1879 + t2176;
  t2251 = Cos(var1[17]);
  t2503 = -1.*t1689*t1987;
  t2526 = t119*t1752*t2040;
  t2535 = t2503 + t2526;
  t239 = Cos(var1[4]);
  t3418 = -0.366501*t684;
  t3422 = 0. + t3418;
  t3047 = -1.*t1091*t2210;
  t3106 = t2251*t2535;
  t3305 = t3047 + t3106;
  t3782 = t2251*t2210;
  t3799 = t1091*t2535;
  t3806 = t3782 + t3799;
  t3976 = Cos(var1[19]);
  t3996 = -1.*t3976;
  t4060 = 1. + t3996;
  t4093 = Sin(var1[19]);
  t2806 = 0.930418*t684;
  t2841 = 0. + t2806;
  t714 = -0.930418*t684;
  t841 = 0. + t714;
  t852 = 0.366501*t684;
  t890 = 0. + t852;
  t4840 = 0.930418*t4093;
  t4969 = 0. + t4840;
  t4291 = t119*t239*t3422;
  t4329 = 0.340999127418*t528*t3305;
  t4421 = -0.134322983001*t528;
  t4468 = 1. + t4421;
  t4475 = t4468*t3806;
  t4554 = t4291 + t4329 + t4475;
  t4784 = 0.366501*t4093;
  t4797 = 0. + t4784;
  t4657 = t119*t239*t2841;
  t4678 = -0.8656776547239999*t528;
  t4724 = 1. + t4678;
  t4726 = t4724*t3305;
  t4732 = 0.340999127418*t528*t3806;
  t4749 = t4657 + t4726 + t4732;
  t4988 = -1.000000637725*t528;
  t5023 = 1. + t4988;
  t5051 = t5023*t119*t239;
  t5152 = t841*t3305;
  t5159 = t890*t3806;
  t5164 = t5051 + t5152 + t5159;
  t4142 = -0.930418*t4093;
  t4145 = 0. + t4142;
  t4597 = -0.366501*t4093;
  t4600 = 0. + t4597;
  t635 = -0.04500040093286238*t528;
  t851 = -0.07877663122399998*t841;
  t900 = 0.031030906668*t890;
  t962 = 0. + t635 + t851 + t900;
  t1140 = -0.091*t1091;
  t1471 = 0. + t1140;
  t2320 = -1.*t2251;
  t2338 = 1. + t2320;
  t2452 = -0.091*t2338;
  t2456 = 0. + t2452;
  t2715 = 1.296332362046933e-7*var1[18];
  t2791 = -0.07877668146182712*t528;
  t2917 = -0.045000372235*t2841;
  t3011 = t2715 + t2791 + t2917;
  t5525 = t1689*t1987*t1752;
  t5536 = -1.*t119*t2040;
  t5537 = t5525 + t5536;
  t5625 = t119*t1689;
  t5673 = t1987*t1752*t2040;
  t5694 = t5625 + t5673;
  t3351 = 3.2909349868922137e-7*var1[18];
  t3387 = 0.03103092645718495*t528;
  t3519 = -0.045000372235*t3422;
  t3663 = t3351 + t3387 + t3519;
  t3966 = -1.296332362046933e-7*var1[19];
  t4061 = -0.14128592423750855*t4060;
  t4165 = -0.045000372235*t4145;
  t4231 = t3966 + t4061 + t4165;
  t5699 = -1.*t1091*t5537;
  t5713 = t2251*t5694;
  t5735 = t5699 + t5713;
  t5757 = t2251*t5537;
  t5766 = t1091*t5694;
  t5768 = t5757 + t5766;
  t4579 = 3.2909349868922137e-7*var1[19];
  t4586 = -0.055653945343889656*t4060;
  t4614 = -0.045000372235*t4600;
  t4628 = t4579 + t4586 + t4614;
  t4757 = -0.04500040093286238*t4060;
  t4800 = -0.055653909852*t4797;
  t4978 = -0.141285834136*t4969;
  t4984 = 0. + t4757 + t4800 + t4978;
  t5779 = t239*t3422*t1987;
  t5801 = 0.340999127418*t528*t5735;
  t5828 = t4468*t5768;
  t5853 = t5779 + t5801 + t5828;
  t5873 = t239*t2841*t1987;
  t5883 = t4724*t5735;
  t5896 = 0.340999127418*t528*t5768;
  t5898 = t5873 + t5883 + t5896;
  t5198 = -1.000000637725*t4060;
  t5246 = 1. + t5198;
  t5921 = t5023*t239*t1987;
  t5931 = t841*t5735;
  t5936 = t890*t5768;
  t5937 = t5921 + t5931 + t5936;
  t5303 = -0.8656776547239999*t4060;
  t5340 = 1. + t5303;
  t5467 = -0.134322983001*t4060;
  t5469 = 1. + t5467;
  t6076 = -1.*t239*t1689*t1091;
  t6084 = t2251*t239*t2040;
  t6089 = t6076 + t6084;
  t6102 = t2251*t239*t1689;
  t6111 = t239*t1091*t2040;
  t6128 = t6102 + t6111;
  t6142 = -1.*t3422*t1752;
  t6146 = 0.340999127418*t528*t6089;
  t6155 = t4468*t6128;
  t6160 = t6142 + t6146 + t6155;
  t6166 = -1.*t2841*t1752;
  t6167 = t4724*t6089;
  t6169 = 0.340999127418*t528*t6128;
  t6171 = t6166 + t6167 + t6169;
  t6175 = -1.*t5023*t1752;
  t6179 = t841*t6089;
  t6190 = t890*t6128;
  t6196 = t6175 + t6179 + t6190;
  p_output1[0]=0. + t1471*t2210 + t2456*t2535 + t3011*t3305 + t3663*t3806 + t4231*t4554 + t4628*t4749 + t4984*t5164 - 0.045*(t4749*t4797 + t4554*t4969 + t5164*t5246) - 0.108789*(-0.340999127418*t4060*t4749 + t4145*t5164 + t4554*t5340) - 0.138152*(-0.340999127418*t4060*t4554 + t4600*t5164 + t4749*t5469) + t119*t239*t962 + var1[0];
  p_output1[1]=0. + t1471*t5537 + t2456*t5694 + t3011*t5735 + t3663*t5768 + t4231*t5853 + t4628*t5898 + t4984*t5937 - 0.108789*(t5340*t5853 - 0.340999127418*t4060*t5898 + t4145*t5937) - 0.138152*(-0.340999127418*t4060*t5853 + t5469*t5898 + t4600*t5937) - 0.045*(t4969*t5853 + t4797*t5898 + t5246*t5937) + t1987*t239*t962 + var1[1];
  p_output1[2]=0. + t1471*t1689*t239 + t2040*t239*t2456 + t3011*t6089 + t3663*t6128 + t4231*t6160 + t4628*t6171 + t4984*t6196 - 0.108789*(t5340*t6160 - 0.340999127418*t4060*t6171 + t4145*t6196) - 0.138152*(-0.340999127418*t4060*t6160 + t5469*t6171 + t4600*t6196) - 0.045*(t4969*t6160 + t4797*t6171 + t5246*t6196) - 1.*t1752*t962 + var1[2];
}



void p_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
