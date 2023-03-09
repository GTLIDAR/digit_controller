/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_right_hip_yaw_src.h"

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
  double t98;
  double t567;
  double t1173;
  double t1927;
  double t2725;
  double t2476;
  double t2679;
  double t1904;
  double t2887;
  double t3249;
  double t1723;
  double t1729;
  double t1854;
  double t3573;
  double t3598;
  double t3679;
  double t2684;
  double t3275;
  double t3530;
  double t3870;
  double t1630;
  double t4116;
  double t4955;
  double t3988;
  double t5235;
  double t5232;
  double t5278;
  double t5286;
  double t5366;
  double t5384;
  double t5385;
  double t5869;
  double t5876;
  double t5883;
  double t5885;
  double t5889;
  double t5841;
  double t5844;
  double t5848;
  double t5851;
  double t5863;
  double t5747;
  double t5765;
  double t5766;
  double t5917;
  double t5932;
  double t5939;
  double t5864;
  double t5898;
  double t5912;
  double t6046;
  double t6074;
  double t6088;
  double t6032;
  double t6043;
  double t6015;
  double t6020;
  double t6021;
  double t6118;
  double t6122;
  double t6131;
  double t6045;
  double t6093;
  double t6105;
  double t5289;
  double t5452;
  double t5455;
  double t5661;
  double t5667;
  double t5677;
  double t5745;
  double t5789;
  double t5800;
  double t5807;
  double t5821;
  double t5833;
  double t5914;
  double t5945;
  double t5946;
  double t5950;
  double t5951;
  double t5955;
  double t5958;
  double t5960;
  double t5964;
  double t5973;
  double t5979;
  double t5981;
  double t5984;
  double t5986;
  double t5997;
  double t6008;
  double t6031;
  double t6114;
  double t6132;
  double t6144;
  double t6147;
  double t6155;
  double t6158;
  double t6162;
  double t6165;
  double t6168;
  double t6181;
  double t6182;
  double t6193;
  double t6206;
  double t6214;
  double t6215;
  double t6219;
  double t6229;
  double t6235;
  double t6240;
  double t6241;
  double t1682;
  double t1687;
  double t1742;
  double t3531;
  double t3911;
  double t3914;
  double t3925;
  double t4052;
  double t4159;
  double t4183;
  double t4225;
  double t4234;
  double t4336;
  double t4367;
  double t4600;
  double t4946;
  double t5010;
  double t5201;
  double t5586;
  double t5604;
  double t6318;
  double t6319;
  double t6322;
  double t6337;
  double t6347;
  double t6349;
  double t5983;
  double t6200;
  double t6203;
  double t6328;
  double t6350;
  double t6353;
  double t6358;
  double t6365;
  double t6377;
  double t6282;
  double t6283;
  double t6285;
  double t6393;
  double t6397;
  double t6398;
  double t6403;
  double t6419;
  double t6421;
  double t6424;
  double t6427;
  double t6466;
  double t6467;
  double t6468;
  double t6471;
  double t6476;
  double t6477;
  double t6493;
  double t6503;
  double t6505;
  double t6507;
  double t6513;
  double t6519;
  double t6520;
  double t6521;
  t98 = Cos(var1[18]);
  t567 = -1.*t98;
  t1173 = 1. + t567;
  t1927 = Sin(var1[18]);
  t2725 = Cos(var1[17]);
  t2476 = -0.366501*t1927;
  t2679 = 0. + t2476;
  t1904 = Sin(var1[17]);
  t2887 = 0.930418*t1927;
  t3249 = 0. + t2887;
  t1723 = 1.000000637725*t1173;
  t1729 = -1. + t1723;
  t1854 = Cos(var1[5]);
  t3573 = t2725*t2679;
  t3598 = -1.*t1904*t3249;
  t3679 = t3573 + t3598;
  t2684 = t1904*t2679;
  t3275 = t2725*t3249;
  t3530 = t2684 + t3275;
  t3870 = Sin(var1[5]);
  t1630 = -1.000000637725*t1173;
  t4116 = Cos(var1[4]);
  t4955 = Cos(var1[3]);
  t3988 = Sin(var1[4]);
  t5235 = Sin(var1[3]);
  t5232 = t4955*t1854*t3988;
  t5278 = t5235*t3870;
  t5286 = t5232 + t5278;
  t5366 = -1.*t1854*t5235;
  t5384 = t4955*t3988*t3870;
  t5385 = t5366 + t5384;
  t5869 = -0.134322983001*t1173;
  t5876 = 1. + t5869;
  t5883 = -0.930418*t5876;
  t5885 = -0.12497652119782442*t1173;
  t5889 = t5883 + t5885;
  t5841 = -0.8656776547239999*t1173;
  t5844 = 1. + t5841;
  t5848 = -0.366501*t5844;
  t5851 = -0.3172717261340007*t1173;
  t5863 = t5848 + t5851;
  t5747 = -0.930418*t2679;
  t5765 = -0.366501*t3249;
  t5766 = 0. + t5747 + t5765;
  t5917 = t2725*t5889;
  t5932 = -1.*t5863*t1904;
  t5939 = 0. + t5917 + t5932;
  t5864 = t2725*t5863;
  t5898 = t5889*t1904;
  t5912 = 0. + t5864 + t5898;
  t6046 = -0.366501*t5876;
  t6074 = 0.3172717261340007*t1173;
  t6088 = t6046 + t6074;
  t6032 = 0.930418*t5844;
  t6043 = t6032 + t5885;
  t6015 = -0.366501*t2679;
  t6020 = 0.930418*t3249;
  t6021 = 0. + t6015 + t6020;
  t6118 = t2725*t6088;
  t6122 = -1.*t6043*t1904;
  t6131 = 0. + t6118 + t6122;
  t6045 = t2725*t6043;
  t6093 = t6088*t1904;
  t6105 = 0. + t6045 + t6093;
  t5289 = -1.*t1904*t5286;
  t5452 = t2725*t5385;
  t5455 = t5289 + t5452;
  t5661 = t2725*t5286;
  t5667 = t1904*t5385;
  t5677 = t5661 + t5667;
  t5745 = 1.000000637725*var2[18];
  t5789 = var2[5]*t5766;
  t5800 = 0.930418*t2679;
  t5807 = 0.366501*t3249;
  t5821 = 0. + t5800 + t5807;
  t5833 = var2[17]*t5821;
  t5914 = t1854*t5912;
  t5945 = -1.*t5939*t3870;
  t5946 = 0. + t5914 + t5945;
  t5950 = var2[4]*t5946;
  t5951 = -1.*t5766*t3988;
  t5955 = t1854*t5939;
  t5958 = t5912*t3870;
  t5960 = 0. + t5955 + t5958;
  t5964 = t4116*t5960;
  t5973 = 0. + t5951 + t5964;
  t5979 = var2[3]*t5973;
  t5981 = t5745 + t5789 + t5833 + t5950 + t5979;
  t5984 = 0.366501*t2679;
  t5986 = -0.930418*t3249;
  t5997 = 0. + t5984 + t5986;
  t6008 = var2[17]*t5997;
  t6031 = var2[5]*t6021;
  t6114 = t1854*t6105;
  t6132 = -1.*t6131*t3870;
  t6144 = 0. + t6114 + t6132;
  t6147 = var2[4]*t6144;
  t6155 = -1.*t6021*t3988;
  t6158 = t1854*t6131;
  t6162 = t6105*t3870;
  t6165 = 0. + t6158 + t6162;
  t6168 = t4116*t6165;
  t6181 = 0. + t6155 + t6168;
  t6182 = var2[3]*t6181;
  t6193 = 0. + t6008 + t6031 + t6147 + t6182;
  t6206 = t4955*t4116*t2679;
  t6214 = 0.340999127418*t1173*t5455;
  t6215 = t5876*t5677;
  t6219 = t6206 + t6214 + t6215;
  t6229 = t4955*t4116*t3249;
  t6235 = t5844*t5455;
  t6240 = 0.340999127418*t1173*t5677;
  t6241 = t6229 + t6235 + t6240;
  t1682 = 1. + t1630;
  t1687 = var2[17]*t1682;
  t1742 = var2[5]*t1729;
  t3531 = t1854*t3530;
  t3911 = -1.*t3679*t3870;
  t3914 = t3531 + t3911;
  t3925 = var2[4]*t3914;
  t4052 = -1.*t1729*t3988;
  t4159 = t1854*t3679;
  t4183 = t3530*t3870;
  t4225 = t4159 + t4183;
  t4234 = t4116*t4225;
  t4336 = t4052 + t4234;
  t4367 = var2[3]*t4336;
  t4600 = 0. + t1687 + t1742 + t3925 + t4367;
  t4946 = 1. + t1630;
  t5010 = -0.930418*t1927;
  t5201 = 0. + t5010;
  t5586 = 0.366501*t1927;
  t5604 = 0. + t5586;
  t6318 = t1854*t5235*t3988;
  t6319 = -1.*t4955*t3870;
  t6322 = t6318 + t6319;
  t6337 = t4955*t1854;
  t6347 = t5235*t3988*t3870;
  t6349 = t6337 + t6347;
  t5983 = 0.00077*t5981;
  t6200 = -0.00005*t6193;
  t6203 = t5983 + t6200;
  t6328 = -1.*t1904*t6322;
  t6350 = t2725*t6349;
  t6353 = t6328 + t6350;
  t6358 = t2725*t6322;
  t6365 = t1904*t6349;
  t6377 = t6358 + t6365;
  t6282 = -0.00005*t5981;
  t6283 = 0.00193*t6193;
  t6285 = t6282 + t6283;
  t6393 = t4116*t2679*t5235;
  t6397 = 0.340999127418*t1173*t6353;
  t6398 = t5876*t6377;
  t6403 = t6393 + t6397 + t6398;
  t6419 = t4116*t3249*t5235;
  t6421 = t5844*t6353;
  t6424 = 0.340999127418*t1173*t6377;
  t6427 = t6419 + t6421 + t6424;
  t6466 = -1.*t4116*t1854*t1904;
  t6467 = t2725*t4116*t3870;
  t6468 = t6466 + t6467;
  t6471 = t2725*t4116*t1854;
  t6476 = t4116*t1904*t3870;
  t6477 = t6471 + t6476;
  t6493 = -1.*t2679*t3988;
  t6503 = 0.340999127418*t1173*t6468;
  t6505 = t5876*t6477;
  t6507 = t6493 + t6503 + t6505;
  t6513 = -1.*t3249*t3988;
  t6519 = t5844*t6468;
  t6520 = 0.340999127418*t1173*t6477;
  t6521 = t6513 + t6519 + t6520;
  p_output1[0]=0.00163*t4600*(-1.*t4116*t4946*t4955 - 1.*t5201*t5455 - 1.*t5604*t5677) + t6203*(-0.930418*t6219 - 0.366501*t6241) + (-0.366501*t6219 + 0.930418*t6241)*t6285;
  p_output1[1]=0.00163*t4600*(-1.*t4116*t4946*t5235 - 1.*t5201*t6353 - 1.*t5604*t6377) + t6203*(-0.930418*t6403 - 0.366501*t6427) + t6285*(-0.366501*t6403 + 0.930418*t6427);
  p_output1[2]=0.00163*t4600*(t3988*t4946 - 1.*t5201*t6468 - 1.*t5604*t6477) + t6203*(-0.930418*t6507 - 0.366501*t6521) + t6285*(-0.366501*t6507 + 0.930418*t6521);
}



void AMWorld_right_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
