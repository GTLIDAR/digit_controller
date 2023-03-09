/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_left_hip_yaw_src.h"

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
  double t181;
  double t464;
  double t467;
  double t162;
  double t873;
  double t913;
  double t948;
  double t950;
  double t997;
  double t650;
  double t759;
  double t796;
  double t805;
  double t814;
  double t1018;
  double t1693;
  double t52;
  double t71;
  double t1203;
  double t2336;
  double t2444;
  double t2465;
  double t2173;
  double t2202;
  double t1647;
  double t1788;
  double t1864;
  double t1881;
  double t2012;
  double t3137;
  double t3076;
  double t3322;
  double t3370;
  double t3385;
  double t3119;
  double t3215;
  double t3253;
  double t3292;
  double t3443;
  double t3470;
  double t3553;
  double t3582;
  double t3585;
  double t828;
  double t1086;
  double t1176;
  double t1199;
  double t1300;
  double t1331;
  double t1386;
  double t1404;
  double t1484;
  double t1535;
  double t1871;
  double t2023;
  double t2033;
  double t2041;
  double t2056;
  double t2216;
  double t2541;
  double t2544;
  double t2567;
  double t2612;
  double t2694;
  double t2701;
  double t2723;
  double t2758;
  double t2759;
  double t2844;
  double t2868;
  double t2964;
  double t3026;
  double t3032;
  double t3539;
  double t3595;
  double t3598;
  double t3629;
  double t3734;
  double t3825;
  double t3828;
  double t3840;
  double t2064;
  double t3048;
  double t3072;
  double t4808;
  double t4826;
  double t4838;
  double t4723;
  double t4731;
  double t4734;
  double t4798;
  double t4846;
  double t4937;
  double t4981;
  double t5013;
  double t5024;
  double t3939;
  double t4035;
  double t4062;
  double t4978;
  double t5064;
  double t5075;
  double t5090;
  double t5133;
  double t5174;
  double t5201;
  double t5221;
  double t4175;
  double t4178;
  double t4194;
  double t4245;
  double t4249;
  double t4268;
  double t4287;
  double t4290;
  double t4294;
  double t4297;
  double t4315;
  double t4330;
  double t4443;
  double t4467;
  double t4472;
  double t4487;
  double t4508;
  double t4534;
  double t4572;
  double t4574;
  double t5832;
  double t5853;
  double t5856;
  double t5894;
  double t5902;
  double t5911;
  double t5871;
  double t5920;
  double t5925;
  double t5929;
  double t5942;
  double t5953;
  double t5998;
  double t6002;
  double t3673;
  double t3886;
  double t3891;
  double t6448;
  double t6450;
  double t6460;
  double t6475;
  double t6492;
  double t6504;
  double t4071;
  double t4081;
  double t4096;
  double t4505;
  double t4567;
  double t4591;
  double t4673;
  double t6472;
  double t6515;
  double t6529;
  double t5100;
  double t5294;
  double t5384;
  double t6542;
  double t6545;
  double t6560;
  double t5402;
  double t5431;
  double t5447;
  double t6595;
  double t6615;
  double t6616;
  double t5518;
  double t5555;
  double t5623;
  double t5628;
  double t5938;
  double t6061;
  double t6073;
  double t6228;
  double t6229;
  double t6238;
  double t6278;
  double t6293;
  double t6343;
  double t6390;
  double t6705;
  double t6728;
  double t6738;
  double t6752;
  double t6764;
  double t6776;
  double t6892;
  double t6912;
  double t6914;
  double t6919;
  double t6923;
  double t6928;
  double t6917;
  double t6929;
  double t6935;
  double t6941;
  double t6967;
  double t6979;
  double t6991;
  t181 = Cos(var1[7]);
  t464 = -1.*t181;
  t467 = 1. + t464;
  t162 = Cos(var1[6]);
  t873 = -0.134322983001*t467;
  t913 = 1. + t873;
  t948 = -0.930418*t913;
  t950 = -0.12497652119782442*t467;
  t997 = t948 + t950;
  t650 = -0.8656776547239999*t467;
  t759 = 1. + t650;
  t796 = 0.366501*t759;
  t805 = 0.3172717261340007*t467;
  t814 = t796 + t805;
  t1018 = Sin(var1[6]);
  t1693 = Sin(var1[7]);
  t52 = Cos(var1[4]);
  t71 = Sin(var1[5]);
  t1203 = Cos(var1[5]);
  t2336 = 0.366501*t913;
  t2444 = -0.3172717261340007*t467;
  t2465 = t2336 + t2444;
  t2173 = 0.930418*t759;
  t2202 = t2173 + t950;
  t1647 = Sin(var1[4]);
  t1788 = 0.366501*t1693;
  t1864 = 0. + t1788;
  t1881 = 0.930418*t1693;
  t2012 = 0. + t1881;
  t3137 = Cos(var1[3]);
  t3076 = Sin(var1[3]);
  t3322 = t3137*t1203*t1647;
  t3370 = t3076*t71;
  t3385 = t3322 + t3370;
  t3119 = -1.*t1203*t3076;
  t3215 = t3137*t1647*t71;
  t3253 = t3119 + t3215;
  t3292 = t162*t3253;
  t3443 = -1.*t3385*t1018;
  t3470 = t3292 + t3443;
  t3553 = t162*t3385;
  t3582 = t3253*t1018;
  t3585 = t3553 + t3582;
  t828 = t162*t814;
  t1086 = t997*t1018;
  t1176 = 0. + t828 + t1086;
  t1199 = t71*t1176;
  t1300 = t162*t997;
  t1331 = -1.*t814*t1018;
  t1386 = 0. + t1300 + t1331;
  t1404 = t1203*t1386;
  t1484 = 0. + t1199 + t1404;
  t1535 = t52*t1484;
  t1871 = -0.930418*t1864;
  t2023 = 0.366501*t2012;
  t2033 = 0. + t1871 + t2023;
  t2041 = -1.*t1647*t2033;
  t2056 = 0. + t1535 + t2041;
  t2216 = t162*t2202;
  t2541 = t2465*t1018;
  t2544 = 0. + t2216 + t2541;
  t2567 = t71*t2544;
  t2612 = t162*t2465;
  t2694 = -1.*t2202*t1018;
  t2701 = 0. + t2612 + t2694;
  t2723 = t1203*t2701;
  t2758 = 0. + t2567 + t2723;
  t2759 = t52*t2758;
  t2844 = 0.366501*t1864;
  t2868 = 0.930418*t2012;
  t2964 = 0. + t2844 + t2868;
  t3026 = -1.*t1647*t2964;
  t3032 = 0. + t2759 + t3026;
  t3539 = -0.340999127418*t467*t3470;
  t3595 = t913*t3585;
  t3598 = t3137*t52*t1864;
  t3629 = t3539 + t3595 + t3598;
  t3734 = t759*t3470;
  t3825 = -0.340999127418*t467*t3585;
  t3828 = t3137*t52*t2012;
  t3840 = t3734 + t3825 + t3828;
  t2064 = 0.00077*t2056;
  t3048 = 0.00005*t3032;
  t3072 = t2064 + t3048;
  t4808 = t1203*t3076*t1647;
  t4826 = -1.*t3137*t71;
  t4838 = t4808 + t4826;
  t4723 = t3137*t1203;
  t4731 = t3076*t1647*t71;
  t4734 = t4723 + t4731;
  t4798 = t162*t4734;
  t4846 = -1.*t4838*t1018;
  t4937 = t4798 + t4846;
  t4981 = t162*t4838;
  t5013 = t4734*t1018;
  t5024 = t4981 + t5013;
  t3939 = 0.00005*t2056;
  t4035 = 0.00193*t3032;
  t4062 = t3939 + t4035;
  t4978 = -0.340999127418*t467*t4937;
  t5064 = t913*t5024;
  t5075 = t52*t3076*t1864;
  t5090 = t4978 + t5064 + t5075;
  t5133 = t759*t4937;
  t5174 = -0.340999127418*t467*t5024;
  t5201 = t52*t3076*t2012;
  t5221 = t5133 + t5174 + t5201;
  t4175 = 1.000000637725*t467;
  t4178 = -1. + t4175;
  t4194 = -1.*t4178*t1647;
  t4245 = t1018*t1864;
  t4249 = t162*t2012;
  t4268 = t4245 + t4249;
  t4287 = t71*t4268;
  t4290 = t162*t1864;
  t4294 = -1.*t1018*t2012;
  t4297 = t4290 + t4294;
  t4315 = t1203*t4297;
  t4330 = t4287 + t4315;
  t4443 = t52*t4330;
  t4467 = t4194 + t4443;
  t4472 = -1.000000637725*t467;
  t4487 = 1. + t4472;
  t4508 = -0.930418*t1693;
  t4534 = 0. + t4508;
  t4572 = -0.366501*t1693;
  t4574 = 0. + t4572;
  t5832 = t52*t162*t71;
  t5853 = -1.*t52*t1203*t1018;
  t5856 = t5832 + t5853;
  t5894 = t52*t1203*t162;
  t5902 = t52*t71*t1018;
  t5911 = t5894 + t5902;
  t5871 = -0.340999127418*t467*t5856;
  t5920 = t913*t5911;
  t5925 = -1.*t1647*t1864;
  t5929 = t5871 + t5920 + t5925;
  t5942 = t759*t5856;
  t5953 = -0.340999127418*t467*t5911;
  t5998 = -1.*t1647*t2012;
  t6002 = t5942 + t5953 + t5998;
  t3673 = -0.930418*t3629;
  t3886 = 0.366501*t3840;
  t3891 = t3673 + t3886;
  t6448 = t1203*t2544;
  t6450 = -1.*t71*t2701;
  t6460 = 0. + t6448 + t6450;
  t6475 = t1203*t1176;
  t6492 = -1.*t71*t1386;
  t6504 = 0. + t6475 + t6492;
  t4071 = 0.366501*t3629;
  t4081 = 0.930418*t3840;
  t4096 = t4071 + t4081;
  t4505 = -1.*t3137*t52*t4487;
  t4567 = -1.*t3470*t4534;
  t4591 = -1.*t3585*t4574;
  t4673 = t4505 + t4567 + t4591;
  t6472 = 0.00005*t6460;
  t6515 = 0.00077*t6504;
  t6529 = t6472 + t6515;
  t5100 = -0.930418*t5090;
  t5294 = 0.366501*t5221;
  t5384 = t5100 + t5294;
  t6542 = 0.00193*t6460;
  t6545 = 0.00005*t6504;
  t6560 = t6542 + t6545;
  t5402 = 0.366501*t5090;
  t5431 = 0.930418*t5221;
  t5447 = t5402 + t5431;
  t6595 = t1203*t4268;
  t6615 = -1.*t71*t4297;
  t6616 = t6595 + t6615;
  t5518 = -1.*t52*t4487*t3076;
  t5555 = -1.*t4937*t4534;
  t5623 = -1.*t5024*t4574;
  t5628 = t5518 + t5555 + t5623;
  t5938 = -0.930418*t5929;
  t6061 = 0.366501*t6002;
  t6073 = t5938 + t6061;
  t6228 = 0.366501*t5929;
  t6229 = 0.930418*t6002;
  t6238 = t6228 + t6229;
  t6278 = t4487*t1647;
  t6293 = -1.*t5856*t4534;
  t6343 = -1.*t5911*t4574;
  t6390 = t6278 + t6293 + t6343;
  t6705 = 0.00077*t2033;
  t6728 = 0.00005*t2964;
  t6738 = t6705 + t6728;
  t6752 = 0.00005*t2033;
  t6764 = 0.00193*t2964;
  t6776 = t6752 + t6764;
  t6892 = -0.366501*t1864;
  t6912 = -0.930418*t2012;
  t6914 = 0. + t6892 + t6912;
  t6919 = 0.930418*t1864;
  t6923 = -0.366501*t2012;
  t6928 = 0. + t6919 + t6923;
  t6917 = 0.00005*t6914;
  t6929 = 0.00077*t6928;
  t6935 = t6917 + t6929;
  t6941 = 0.00193*t6914;
  t6967 = 0.00005*t6928;
  t6979 = t6941 + t6967;
  t6991 = 1. + t4472;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3072*t3891 + t4062*t4096 + 0.00163*t4467*t4673;
  p_output1[10]=t3072*t5384 + t4062*t5447 + 0.00163*t4467*t5628;
  p_output1[11]=t3072*t6073 + t4062*t6238 + 0.00163*t4467*t6390;
  p_output1[12]=t3891*t6529 + t4096*t6560 + 0.00163*t4673*t6616;
  p_output1[13]=t5384*t6529 + t5447*t6560 + 0.00163*t5628*t6616;
  p_output1[14]=t6073*t6529 + t6238*t6560 + 0.00163*t6390*t6616;
  p_output1[15]=0.00163*t4178*t4673 + t3891*t6738 + t4096*t6776;
  p_output1[16]=0.00163*t4178*t5628 + t5384*t6738 + t5447*t6776;
  p_output1[17]=0.00163*t4178*t6390 + t6073*t6738 + t6238*t6776;
  p_output1[18]=t3891*t6935 + t4096*t6979 + 0.00163*t4673*t6991;
  p_output1[19]=t5384*t6935 + t5447*t6979 + 0.00163*t5628*t6991;
  p_output1[20]=t6073*t6935 + t6238*t6979 + 0.00163*t6390*t6991;
  p_output1[21]=0.0007700004910482499*t3891 + 0.00005000003188625*t4096;
  p_output1[22]=0.0007700004910482499*t5384 + 0.00005000003188625*t5447;
  p_output1[23]=0.0007700004910482499*t6073 + 0.00005000003188625*t6238;
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



void Jdq_AMWorld_left_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
