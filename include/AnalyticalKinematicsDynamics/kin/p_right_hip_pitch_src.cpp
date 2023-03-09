/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_hip_pitch_src.h"

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
  double t746;
  double t84;
  double t1910;
  double t2302;
  double t1986;
  double t2364;
  double t428;
  double t695;
  double t717;
  double t1636;
  double t2218;
  double t2365;
  double t2376;
  double t2518;
  double t3448;
  double t3457;
  double t3475;
  double t294;
  double t3964;
  double t4036;
  double t3786;
  double t3893;
  double t3908;
  double t4140;
  double t4154;
  double t4159;
  double t4193;
  double t4262;
  double t4285;
  double t4372;
  double t3586;
  double t3591;
  double t750;
  double t769;
  double t1027;
  double t1227;
  double t5337;
  double t5402;
  double t4594;
  double t4738;
  double t4775;
  double t4782;
  double t4812;
  double t4842;
  double t5225;
  double t5226;
  double t5040;
  double t5058;
  double t5068;
  double t5118;
  double t5140;
  double t5142;
  double t5460;
  double t5518;
  double t5544;
  double t5580;
  double t5586;
  double t5602;
  double t4377;
  double t4468;
  double t4872;
  double t4873;
  double t726;
  double t992;
  double t1242;
  double t1259;
  double t1681;
  double t1702;
  double t3187;
  double t3245;
  double t3307;
  double t3317;
  double t3527;
  double t3552;
  double t3641;
  double t3746;
  double t6168;
  double t6172;
  double t6177;
  double t6182;
  double t6200;
  double t6206;
  double t3920;
  double t3961;
  double t4123;
  double t4125;
  double t4183;
  double t4325;
  double t4484;
  double t4580;
  double t6273;
  double t6290;
  double t6347;
  double t6384;
  double t6385;
  double t6397;
  double t4863;
  double t4867;
  double t5027;
  double t5033;
  double t5224;
  double t5233;
  double t5447;
  double t5459;
  double t6411;
  double t6413;
  double t6417;
  double t6419;
  double t6421;
  double t6437;
  double t6440;
  double t6454;
  double t5731;
  double t5741;
  double t6462;
  double t6463;
  double t6464;
  double t6470;
  double t5924;
  double t6040;
  double t6086;
  double t6088;
  double t6596;
  double t6612;
  double t6628;
  double t6653;
  double t6665;
  double t6666;
  double t6675;
  double t6676;
  double t6678;
  double t6679;
  double t6683;
  double t6685;
  double t6699;
  double t6700;
  double t6703;
  double t6708;
  double t6720;
  double t6724;
  t746 = Sin(var1[18]);
  t84 = Cos(var1[3]);
  t1910 = Cos(var1[5]);
  t2302 = Sin(var1[3]);
  t1986 = Sin(var1[4]);
  t2364 = Sin(var1[5]);
  t428 = Cos(var1[18]);
  t695 = -1.*t428;
  t717 = 1. + t695;
  t1636 = Sin(var1[17]);
  t2218 = t84*t1910*t1986;
  t2365 = t2302*t2364;
  t2376 = t2218 + t2365;
  t2518 = Cos(var1[17]);
  t3448 = -1.*t1910*t2302;
  t3457 = t84*t1986*t2364;
  t3475 = t3448 + t3457;
  t294 = Cos(var1[4]);
  t3964 = -0.366501*t746;
  t4036 = 0. + t3964;
  t3786 = -1.*t1636*t2376;
  t3893 = t2518*t3475;
  t3908 = t3786 + t3893;
  t4140 = t2518*t2376;
  t4154 = t1636*t3475;
  t4159 = t4140 + t4154;
  t4193 = Cos(var1[19]);
  t4262 = -1.*t4193;
  t4285 = 1. + t4262;
  t4372 = Sin(var1[19]);
  t3586 = 0.930418*t746;
  t3591 = 0. + t3586;
  t750 = -0.930418*t746;
  t769 = 0. + t750;
  t1027 = 0.366501*t746;
  t1227 = 0. + t1027;
  t5337 = 0.930418*t4372;
  t5402 = 0. + t5337;
  t4594 = t84*t294*t4036;
  t4738 = 0.340999127418*t717*t3908;
  t4775 = -0.134322983001*t717;
  t4782 = 1. + t4775;
  t4812 = t4782*t4159;
  t4842 = t4594 + t4738 + t4812;
  t5225 = 0.366501*t4372;
  t5226 = 0. + t5225;
  t5040 = t84*t294*t3591;
  t5058 = -0.8656776547239999*t717;
  t5068 = 1. + t5058;
  t5118 = t5068*t3908;
  t5140 = 0.340999127418*t717*t4159;
  t5142 = t5040 + t5118 + t5140;
  t5460 = -1.000000637725*t717;
  t5518 = 1. + t5460;
  t5544 = t5518*t84*t294;
  t5580 = t769*t3908;
  t5586 = t1227*t4159;
  t5602 = t5544 + t5580 + t5586;
  t4377 = -0.930418*t4372;
  t4468 = 0. + t4377;
  t4872 = -0.366501*t4372;
  t4873 = 0. + t4872;
  t726 = -0.04500040093286238*t717;
  t992 = -0.07877663122399998*t769;
  t1242 = 0.031030906668*t1227;
  t1259 = 0. + t726 + t992 + t1242;
  t1681 = -0.091*t1636;
  t1702 = 0. + t1681;
  t3187 = -1.*t2518;
  t3245 = 1. + t3187;
  t3307 = -0.091*t3245;
  t3317 = 0. + t3307;
  t3527 = 1.296332362046933e-7*var1[18];
  t3552 = -0.07877668146182712*t717;
  t3641 = -0.045000372235*t3591;
  t3746 = t3527 + t3552 + t3641;
  t6168 = t1910*t2302*t1986;
  t6172 = -1.*t84*t2364;
  t6177 = t6168 + t6172;
  t6182 = t84*t1910;
  t6200 = t2302*t1986*t2364;
  t6206 = t6182 + t6200;
  t3920 = 3.2909349868922137e-7*var1[18];
  t3961 = 0.03103092645718495*t717;
  t4123 = -0.045000372235*t4036;
  t4125 = t3920 + t3961 + t4123;
  t4183 = -1.296332362046933e-7*var1[19];
  t4325 = -0.14128592423750855*t4285;
  t4484 = -0.045000372235*t4468;
  t4580 = t4183 + t4325 + t4484;
  t6273 = -1.*t1636*t6177;
  t6290 = t2518*t6206;
  t6347 = t6273 + t6290;
  t6384 = t2518*t6177;
  t6385 = t1636*t6206;
  t6397 = t6384 + t6385;
  t4863 = 3.2909349868922137e-7*var1[19];
  t4867 = -0.055653945343889656*t4285;
  t5027 = -0.045000372235*t4873;
  t5033 = t4863 + t4867 + t5027;
  t5224 = -0.04500040093286238*t4285;
  t5233 = -0.055653909852*t5226;
  t5447 = -0.141285834136*t5402;
  t5459 = 0. + t5224 + t5233 + t5447;
  t6411 = t294*t4036*t2302;
  t6413 = 0.340999127418*t717*t6347;
  t6417 = t4782*t6397;
  t6419 = t6411 + t6413 + t6417;
  t6421 = t294*t3591*t2302;
  t6437 = t5068*t6347;
  t6440 = 0.340999127418*t717*t6397;
  t6454 = t6421 + t6437 + t6440;
  t5731 = -1.000000637725*t4285;
  t5741 = 1. + t5731;
  t6462 = t5518*t294*t2302;
  t6463 = t769*t6347;
  t6464 = t1227*t6397;
  t6470 = t6462 + t6463 + t6464;
  t5924 = -0.8656776547239999*t4285;
  t6040 = 1. + t5924;
  t6086 = -0.134322983001*t4285;
  t6088 = 1. + t6086;
  t6596 = -1.*t294*t1910*t1636;
  t6612 = t2518*t294*t2364;
  t6628 = t6596 + t6612;
  t6653 = t2518*t294*t1910;
  t6665 = t294*t1636*t2364;
  t6666 = t6653 + t6665;
  t6675 = -1.*t4036*t1986;
  t6676 = 0.340999127418*t717*t6628;
  t6678 = t4782*t6666;
  t6679 = t6675 + t6676 + t6678;
  t6683 = -1.*t3591*t1986;
  t6685 = t5068*t6628;
  t6699 = 0.340999127418*t717*t6666;
  t6700 = t6683 + t6685 + t6699;
  t6703 = -1.*t5518*t1986;
  t6708 = t769*t6628;
  t6720 = t1227*t6666;
  t6724 = t6703 + t6708 + t6720;
  p_output1[0]=0. + t1702*t2376 + t3317*t3475 + t3746*t3908 + t4125*t4159 + t4580*t4842 + t5033*t5142 + t5459*t5602 - 0.001824*(t5142*t5226 + t4842*t5402 + t5602*t5741) - 0.134034*(-0.340999127418*t4285*t5142 + t4468*t5602 + t4842*t6040) - 0.189863*(-0.340999127418*t4285*t4842 + t4873*t5602 + t5142*t6088) + t1259*t294*t84 + var1[0];
  p_output1[1]=0. + t1259*t2302*t294 + t1702*t6177 + t3317*t6206 + t3746*t6347 + t4125*t6397 + t4580*t6419 + t5033*t6454 + t5459*t6470 - 0.134034*(t6040*t6419 - 0.340999127418*t4285*t6454 + t4468*t6470) - 0.189863*(-0.340999127418*t4285*t6419 + t6088*t6454 + t4873*t6470) - 0.001824*(t5402*t6419 + t5226*t6454 + t5741*t6470) + var1[1];
  p_output1[2]=0. - 1.*t1259*t1986 + t1702*t1910*t294 + t2364*t294*t3317 + t3746*t6628 + t4125*t6666 + t4580*t6679 + t5033*t6700 + t5459*t6724 - 0.134034*(t6040*t6679 - 0.340999127418*t4285*t6700 + t4468*t6724) - 0.189863*(-0.340999127418*t4285*t6679 + t6088*t6700 + t4873*t6724) - 0.001824*(t5402*t6679 + t5226*t6700 + t5741*t6724) + var1[2];
}



void p_right_hip_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
