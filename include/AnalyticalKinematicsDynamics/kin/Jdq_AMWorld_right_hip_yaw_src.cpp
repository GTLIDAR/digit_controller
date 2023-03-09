/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_right_hip_yaw_src.h"

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
  double t940;
  double t1052;
  double t969;
  double t1004;
  double t750;
  double t1061;
  double t1127;
  double t266;
  double t278;
  double t291;
  double t552;
  double t1861;
  double t609;
  double t531;
  double t1504;
  double t2010;
  double t1990;
  double t2011;
  double t2097;
  double t2270;
  double t2304;
  double t2324;
  double t3422;
  double t3438;
  double t3442;
  double t3475;
  double t3529;
  double t3070;
  double t3079;
  double t3153;
  double t3307;
  double t3317;
  double t4004;
  double t4053;
  double t3893;
  double t3908;
  double t3944;
  double t2215;
  double t2357;
  double t2486;
  double t2739;
  double t2758;
  double t2900;
  double t2976;
  double t3023;
  double t3032;
  double t3068;
  double t3332;
  double t3533;
  double t3534;
  double t3544;
  double t3552;
  double t3586;
  double t3591;
  double t3641;
  double t3646;
  double t3648;
  double t3649;
  double t3760;
  double t3786;
  double t3866;
  double t3888;
  double t3984;
  double t4062;
  double t4067;
  double t4103;
  double t4123;
  double t4140;
  double t4159;
  double t4165;
  double t4183;
  double t4211;
  double t4226;
  double t4325;
  double t4377;
  double t4390;
  double t4400;
  double t4484;
  double t4580;
  double t4594;
  double t4596;
  double t489;
  double t529;
  double t542;
  double t1013;
  double t1200;
  double t1223;
  double t1227;
  double t1242;
  double t1259;
  double t1480;
  double t1533;
  double t1641;
  double t1679;
  double t1695;
  double t1728;
  double t1759;
  double t1883;
  double t1958;
  double t2518;
  double t2732;
  double t5040;
  double t5049;
  double t5081;
  double t5118;
  double t5142;
  double t5226;
  double t3687;
  double t4256;
  double t4285;
  double t5101;
  double t5233;
  double t5265;
  double t5365;
  double t5407;
  double t5420;
  double t4665;
  double t4738;
  double t4782;
  double t5460;
  double t5544;
  double t5580;
  double t5586;
  double t5593;
  double t5602;
  double t5630;
  double t5642;
  double t5879;
  double t5919;
  double t5950;
  double t5995;
  double t6001;
  double t6006;
  double t6032;
  double t6068;
  double t6069;
  double t6076;
  double t6080;
  double t6088;
  double t6093;
  double t6100;
  double t1881;
  double t2505;
  double t2924;
  double t2930;
  double t4468;
  double t4611;
  double t4612;
  double t6214;
  double t6229;
  double t6244;
  double t6254;
  double t6269;
  double t6273;
  double t4812;
  double t4842;
  double t4863;
  double t6182;
  double t6186;
  double t6200;
  double t5014;
  double t5284;
  double t5435;
  double t5447;
  double t6250;
  double t6290;
  double t6296;
  double t5588;
  double t5661;
  double t5666;
  double t6347;
  double t6357;
  double t6364;
  double t5694;
  double t5695;
  double t5731;
  double t5765;
  double t5986;
  double t6015;
  double t6029;
  double t6078;
  double t6114;
  double t6118;
  double t6162;
  double t6166;
  double t6168;
  double t6440;
  double t6461;
  double t6462;
  double t6464;
  double t6470;
  double t6471;
  double t6543;
  double t6550;
  double t6551;
  double t6561;
  double t6574;
  double t6576;
  double t6529;
  double t6555;
  double t6587;
  double t6596;
  double t6612;
  double t6628;
  double t6633;
  t940 = Sin(var1[18]);
  t1052 = Sin(var1[17]);
  t969 = -0.366501*t940;
  t1004 = 0. + t969;
  t750 = Cos(var1[17]);
  t1061 = 0.930418*t940;
  t1127 = 0. + t1061;
  t266 = Cos(var1[18]);
  t278 = -1.*t266;
  t291 = 1. + t278;
  t552 = Cos(var1[4]);
  t1861 = Cos(var1[3]);
  t609 = Cos(var1[5]);
  t531 = Sin(var1[4]);
  t1504 = Sin(var1[5]);
  t2010 = Sin(var1[3]);
  t1990 = t1861*t609*t531;
  t2011 = t2010*t1504;
  t2097 = t1990 + t2011;
  t2270 = -1.*t609*t2010;
  t2304 = t1861*t531*t1504;
  t2324 = t2270 + t2304;
  t3422 = -0.8656776547239999*t291;
  t3438 = 1. + t3422;
  t3442 = -0.366501*t3438;
  t3475 = -0.3172717261340007*t291;
  t3529 = t3442 + t3475;
  t3070 = -0.134322983001*t291;
  t3079 = 1. + t3070;
  t3153 = -0.930418*t3079;
  t3307 = -0.12497652119782442*t291;
  t3317 = t3153 + t3307;
  t4004 = 0.930418*t3438;
  t4053 = t4004 + t3307;
  t3893 = -0.366501*t3079;
  t3908 = 0.3172717261340007*t291;
  t3944 = t3893 + t3908;
  t2215 = -1.*t1052*t2097;
  t2357 = t750*t2324;
  t2486 = t2215 + t2357;
  t2739 = t750*t2097;
  t2758 = t1052*t2324;
  t2900 = t2739 + t2758;
  t2976 = -0.930418*t1004;
  t3023 = -0.366501*t1127;
  t3032 = 0. + t2976 + t3023;
  t3068 = -1.*t3032*t531;
  t3332 = t750*t3317;
  t3533 = -1.*t3529*t1052;
  t3534 = 0. + t3332 + t3533;
  t3544 = t609*t3534;
  t3552 = t750*t3529;
  t3586 = t3317*t1052;
  t3591 = 0. + t3552 + t3586;
  t3641 = t3591*t1504;
  t3646 = 0. + t3544 + t3641;
  t3648 = t552*t3646;
  t3649 = 0. + t3068 + t3648;
  t3760 = -0.366501*t1004;
  t3786 = 0.930418*t1127;
  t3866 = 0. + t3760 + t3786;
  t3888 = -1.*t3866*t531;
  t3984 = t750*t3944;
  t4062 = -1.*t4053*t1052;
  t4067 = 0. + t3984 + t4062;
  t4103 = t609*t4067;
  t4123 = t750*t4053;
  t4140 = t3944*t1052;
  t4159 = 0. + t4123 + t4140;
  t4165 = t4159*t1504;
  t4183 = 0. + t4103 + t4165;
  t4211 = t552*t4183;
  t4226 = 0. + t3888 + t4211;
  t4325 = t1861*t552*t1004;
  t4377 = 0.340999127418*t291*t2486;
  t4390 = t3079*t2900;
  t4400 = t4325 + t4377 + t4390;
  t4484 = t1861*t552*t1127;
  t4580 = t3438*t2486;
  t4594 = 0.340999127418*t291*t2900;
  t4596 = t4484 + t4580 + t4594;
  t489 = 1.000000637725*t291;
  t529 = -1. + t489;
  t542 = -1.*t529*t531;
  t1013 = t750*t1004;
  t1200 = -1.*t1052*t1127;
  t1223 = t1013 + t1200;
  t1227 = t609*t1223;
  t1242 = t1052*t1004;
  t1259 = t750*t1127;
  t1480 = t1242 + t1259;
  t1533 = t1480*t1504;
  t1641 = t1227 + t1533;
  t1679 = t552*t1641;
  t1695 = t542 + t1679;
  t1728 = -1.000000637725*t291;
  t1759 = 1. + t1728;
  t1883 = -0.930418*t940;
  t1958 = 0. + t1883;
  t2518 = 0.366501*t940;
  t2732 = 0. + t2518;
  t5040 = t609*t2010*t531;
  t5049 = -1.*t1861*t1504;
  t5081 = t5040 + t5049;
  t5118 = t1861*t609;
  t5142 = t2010*t531*t1504;
  t5226 = t5118 + t5142;
  t3687 = 0.00077*t3649;
  t4256 = -0.00005*t4226;
  t4285 = t3687 + t4256;
  t5101 = -1.*t1052*t5081;
  t5233 = t750*t5226;
  t5265 = t5101 + t5233;
  t5365 = t750*t5081;
  t5407 = t1052*t5226;
  t5420 = t5365 + t5407;
  t4665 = -0.00005*t3649;
  t4738 = 0.00193*t4226;
  t4782 = t4665 + t4738;
  t5460 = t552*t1004*t2010;
  t5544 = 0.340999127418*t291*t5265;
  t5580 = t3079*t5420;
  t5586 = t5460 + t5544 + t5580;
  t5593 = t552*t1127*t2010;
  t5602 = t3438*t5265;
  t5630 = 0.340999127418*t291*t5420;
  t5642 = t5593 + t5602 + t5630;
  t5879 = -1.*t552*t609*t1052;
  t5919 = t750*t552*t1504;
  t5950 = t5879 + t5919;
  t5995 = t750*t552*t609;
  t6001 = t552*t1052*t1504;
  t6006 = t5995 + t6001;
  t6032 = -1.*t1004*t531;
  t6068 = 0.340999127418*t291*t5950;
  t6069 = t3079*t6006;
  t6076 = t6032 + t6068 + t6069;
  t6080 = -1.*t1127*t531;
  t6088 = t3438*t5950;
  t6093 = 0.340999127418*t291*t6006;
  t6100 = t6080 + t6088 + t6093;
  t1881 = -1.*t1759*t1861*t552;
  t2505 = -1.*t1958*t2486;
  t2924 = -1.*t2732*t2900;
  t2930 = t1881 + t2505 + t2924;
  t4468 = -0.930418*t4400;
  t4611 = -0.366501*t4596;
  t4612 = t4468 + t4611;
  t6214 = t609*t3591;
  t6229 = -1.*t3534*t1504;
  t6244 = 0. + t6214 + t6229;
  t6254 = t609*t4159;
  t6269 = -1.*t4067*t1504;
  t6273 = 0. + t6254 + t6269;
  t4812 = -0.366501*t4400;
  t4842 = 0.930418*t4596;
  t4863 = t4812 + t4842;
  t6182 = t609*t1480;
  t6186 = -1.*t1223*t1504;
  t6200 = t6182 + t6186;
  t5014 = -1.*t1759*t552*t2010;
  t5284 = -1.*t1958*t5265;
  t5435 = -1.*t2732*t5420;
  t5447 = t5014 + t5284 + t5435;
  t6250 = 0.00077*t6244;
  t6290 = -0.00005*t6273;
  t6296 = t6250 + t6290;
  t5588 = -0.930418*t5586;
  t5661 = -0.366501*t5642;
  t5666 = t5588 + t5661;
  t6347 = -0.00005*t6244;
  t6357 = 0.00193*t6273;
  t6364 = t6347 + t6357;
  t5694 = -0.366501*t5586;
  t5695 = 0.930418*t5642;
  t5731 = t5694 + t5695;
  t5765 = t1759*t531;
  t5986 = -1.*t1958*t5950;
  t6015 = -1.*t2732*t6006;
  t6029 = t5765 + t5986 + t6015;
  t6078 = -0.930418*t6076;
  t6114 = -0.366501*t6100;
  t6118 = t6078 + t6114;
  t6162 = -0.366501*t6076;
  t6166 = 0.930418*t6100;
  t6168 = t6162 + t6166;
  t6440 = 0.00077*t3032;
  t6461 = -0.00005*t3866;
  t6462 = t6440 + t6461;
  t6464 = -0.00005*t3032;
  t6470 = 0.00193*t3866;
  t6471 = t6464 + t6470;
  t6543 = 0.366501*t1004;
  t6550 = -0.930418*t1127;
  t6551 = 0. + t6543 + t6550;
  t6561 = 0.930418*t1004;
  t6574 = 0.366501*t1127;
  t6576 = 0. + t6561 + t6574;
  t6529 = 1. + t1728;
  t6555 = -0.00005*t6551;
  t6587 = 0.00077*t6576;
  t6596 = t6555 + t6587;
  t6612 = 0.00193*t6551;
  t6628 = -0.00005*t6576;
  t6633 = t6612 + t6628;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00163*t1695*t2930 + t4285*t4612 + t4782*t4863;
  p_output1[10]=0.00163*t1695*t5447 + t4285*t5666 + t4782*t5731;
  p_output1[11]=0.00163*t1695*t6029 + t4285*t6118 + t4782*t6168;
  p_output1[12]=0.00163*t2930*t6200 + t4612*t6296 + t4863*t6364;
  p_output1[13]=0.00163*t5447*t6200 + t5666*t6296 + t5731*t6364;
  p_output1[14]=0.00163*t6029*t6200 + t6118*t6296 + t6168*t6364;
  p_output1[15]=0.00163*t2930*t529 + t4612*t6462 + t4863*t6471;
  p_output1[16]=0.00163*t529*t5447 + t5666*t6462 + t5731*t6471;
  p_output1[17]=0.00163*t529*t6029 + t6118*t6462 + t6168*t6471;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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
  p_output1[51]=0.00163*t2930*t6529 + t4612*t6596 + t4863*t6633;
  p_output1[52]=0.00163*t5447*t6529 + t5666*t6596 + t5731*t6633;
  p_output1[53]=0.00163*t6029*t6529 + t6118*t6596 + t6168*t6633;
  p_output1[54]=0.0007700004910482499*t4612 - 0.00005000003188625*t4863;
  p_output1[55]=0.0007700004910482499*t5666 - 0.00005000003188625*t5731;
  p_output1[56]=0.0007700004910482499*t6118 - 0.00005000003188625*t6168;
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



void Jdq_AMWorld_right_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
