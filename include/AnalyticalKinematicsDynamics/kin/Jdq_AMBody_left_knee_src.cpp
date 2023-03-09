/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:57:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_knee_src.h"

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
  double t728;
  double t845;
  double t869;
  double t1104;
  double t1119;
  double t1191;
  double t1366;
  double t507;
  double t578;
  double t649;
  double t1260;
  double t1269;
  double t1293;
  double t1338;
  double t1354;
  double t963;
  double t1004;
  double t1007;
  double t1083;
  double t1102;
  double t1367;
  double t1371;
  double t1377;
  double t1489;
  double t1583;
  double t1593;
  double t1594;
  double t1596;
  double t1220;
  double t1225;
  double t1231;
  double t1355;
  double t1642;
  double t1676;
  double t1813;
  double t1817;
  double t1978;
  double t1988;
  double t1995;
  double t1999;
  double t2027;
  double t2044;
  double t2054;
  double t2089;
  double t2207;
  double t2274;
  double t2278;
  double t2318;
  double t2326;
  double t2379;
  double t2416;
  double t2425;
  double t2504;
  double t2523;
  double t2529;
  double t2647;
  double t1824;
  double t1908;
  double t1945;
  double t2109;
  double t2229;
  double t2260;
  double t2531;
  double t2595;
  double t90;
  double t2654;
  double t2680;
  double t2702;
  double t2728;
  double t2729;
  double t2747;
  double t2748;
  double t2749;
  double t10;
  double t79;
  double t3374;
  double t3383;
  double t3390;
  double t3391;
  double t3395;
  double t3400;
  double t3448;
  double t3483;
  double t3498;
  double t3518;
  double t3520;
  double t3617;
  double t3643;
  double t3644;
  double t3658;
  double t3666;
  double t3680;
  double t3705;
  double t3420;
  double t3618;
  double t3741;
  double t3743;
  double t3801;
  double t3808;
  double t3815;
  double t3841;
  double t3849;
  double t3850;
  double t3851;
  double t3854;
  double t2836;
  double t3745;
  double t3847;
  double t3878;
  double t3879;
  double t3931;
  double t3950;
  double t3952;
  double t3961;
  double t2939;
  double t3000;
  double t3003;
  double t3149;
  double t3185;
  double t3234;
  double t3240;
  double t4121;
  double t4132;
  double t4153;
  double t4154;
  double t4194;
  double t4198;
  double t4144;
  double t4159;
  double t4204;
  double t4236;
  double t4249;
  double t4250;
  double t4261;
  double t4262;
  double t4268;
  double t4318;
  double t4336;
  double t4349;
  double t4247;
  double t4263;
  double t4391;
  double t4396;
  double t4406;
  double t4429;
  double t4452;
  double t4455;
  double t2613;
  double t2756;
  double t2788;
  double t2792;
  double t2843;
  double t2852;
  double t2862;
  double t2916;
  double t2924;
  double t2933;
  double t3071;
  double t3205;
  double t3246;
  double t3250;
  double t3256;
  double t3298;
  double t3908;
  double t3993;
  double t4004;
  double t4010;
  double t4034;
  double t4038;
  double t4049;
  double t4062;
  double t4069;
  double t4073;
  double t4080;
  double t4087;
  double t4094;
  double t4096;
  double t4099;
  double t4107;
  double t4397;
  double t4459;
  double t4476;
  double t4485;
  double t4497;
  double t4502;
  double t4504;
  double t4509;
  double t4522;
  double t4524;
  double t4526;
  double t4529;
  double t4530;
  double t4532;
  double t4546;
  double t4548;
  double t4733;
  double t4750;
  double t4754;
  double t4776;
  double t4781;
  double t4784;
  double t4801;
  double t4802;
  double t4809;
  double t5045;
  double t5051;
  double t5058;
  double t5061;
  double t5077;
  double t5080;
  double t5095;
  double t5100;
  double t5121;
  double t5127;
  double t5130;
  double t5131;
  double t5186;
  double t5187;
  double t5190;
  double t5210;
  double t5212;
  double t5218;
  double t5222;
  double t5224;
  double t5225;
  double t5290;
  double t5291;
  double t5305;
  double t5320;
  double t5332;
  double t5333;
  double t5353;
  double t5354;
  double t5357;
  t728 = Cos(var1[9]);
  t845 = -1.*t728;
  t869 = 1. + t845;
  t1104 = Cos(var1[8]);
  t1119 = -1.*t1104;
  t1191 = 1. + t1119;
  t1366 = Sin(var1[9]);
  t507 = Cos(var1[7]);
  t578 = -1.*t507;
  t649 = 1. + t578;
  t1260 = -0.134322983001*t869;
  t1269 = 1. + t1260;
  t1293 = -0.930418*t1269;
  t1338 = -0.12497652119782442*t869;
  t1354 = t1293 + t1338;
  t963 = -0.8656776547239999*t869;
  t1004 = 1. + t963;
  t1007 = -0.366501*t1004;
  t1083 = -0.3172717261340007*t869;
  t1102 = t1007 + t1083;
  t1367 = -0.930418*t1366;
  t1371 = 0. + t1367;
  t1377 = -0.366501*t1371;
  t1489 = 0.366501*t1366;
  t1583 = 0. + t1489;
  t1593 = -0.930418*t1583;
  t1594 = t1377 + t1593;
  t1596 = Sin(var1[8]);
  t1220 = -0.8656776547239999*t1191;
  t1225 = 1. + t1220;
  t1231 = t1102*t1225;
  t1355 = 0.340999127418*t1354*t1191;
  t1642 = -0.930418*t1596;
  t1676 = 0. + t1642;
  t1813 = t1594*t1676;
  t1817 = 0. + t1231 + t1355 + t1813;
  t1978 = -0.134322983001*t1191;
  t1988 = 1. + t1978;
  t1995 = t1354*t1988;
  t1999 = 0.340999127418*t1102*t1191;
  t2027 = 0.366501*t1596;
  t2044 = 0. + t2027;
  t2054 = t1594*t2044;
  t2089 = 0. + t1995 + t1999 + t2054;
  t2207 = Sin(var1[7]);
  t2274 = -1.000000637725*t1191;
  t2278 = 1. + t2274;
  t2318 = t2278*t1594;
  t2326 = -0.366501*t1596;
  t2379 = 0. + t2326;
  t2416 = t1354*t2379;
  t2425 = 0.930418*t1596;
  t2504 = 0. + t2425;
  t2523 = t1102*t2504;
  t2529 = 0. + t2318 + t2416 + t2523;
  t2647 = Cos(var1[6]);
  t1824 = -0.340999127418*t649*t1817;
  t1908 = -0.8656776547239999*t649;
  t1945 = 1. + t1908;
  t2109 = t1945*t2089;
  t2229 = -0.930418*t2207;
  t2260 = 0. + t2229;
  t2531 = t2260*t2529;
  t2595 = 0. + t1824 + t2109 + t2531;
  t90 = Sin(var1[6]);
  t2654 = -0.134322983001*t649;
  t2680 = 1. + t2654;
  t2702 = t2680*t1817;
  t2728 = -0.340999127418*t649*t2089;
  t2729 = -0.366501*t2207;
  t2747 = 0. + t2729;
  t2748 = t2747*t2529;
  t2749 = 0. + t2702 + t2728 + t2748;
  t10 = Cos(var1[4]);
  t79 = Cos(var1[5]);
  t3374 = 0.259155*t1269;
  t3383 = -0.22434503092393926*t869;
  t3390 = -0.366501*t1366;
  t3391 = 0. + t3390;
  t3395 = -0.707107*t3391;
  t3400 = t3374 + t3383 + t3395;
  t3448 = -0.657905*t1004;
  t3483 = 0.0883716288660118*t869;
  t3498 = 0.930418*t1366;
  t3518 = 0. + t3498;
  t3520 = -0.707107*t3518;
  t3617 = t3448 + t3483 + t3520;
  t3643 = -1.000000637725*t869;
  t3644 = 1. + t3643;
  t3658 = -0.707107*t3644;
  t3666 = -0.657905*t1371;
  t3680 = 0.259155*t1583;
  t3705 = t3658 + t3666 + t3680;
  t3420 = 0.340999127418*t1191*t3400;
  t3618 = t1225*t3617;
  t3741 = t3705*t1676;
  t3743 = 0. + t3420 + t3618 + t3741;
  t3801 = t1988*t3400;
  t3808 = 0.340999127418*t1191*t3617;
  t3815 = t3705*t2044;
  t3841 = 0. + t3801 + t3808 + t3815;
  t3849 = t2278*t3705;
  t3850 = t3400*t2379;
  t3851 = t3617*t2504;
  t3854 = 0. + t3849 + t3850 + t3851;
  t2836 = Sin(var1[5]);
  t3745 = -0.340999127418*t649*t3743;
  t3847 = t1945*t3841;
  t3878 = t2260*t3854;
  t3879 = 0. + t3745 + t3847 + t3878;
  t3931 = t2680*t3743;
  t3950 = -0.340999127418*t649*t3841;
  t3952 = t2747*t3854;
  t3961 = 0. + t3931 + t3950 + t3952;
  t2939 = Sin(var1[4]);
  t3000 = 0.366501*t2207;
  t3003 = 0. + t3000;
  t3149 = 0.930418*t2207;
  t3185 = 0. + t3149;
  t3234 = -1.000000637725*t649;
  t3240 = 1. + t3234;
  t4121 = 0.707107*t3391;
  t4132 = t3374 + t3383 + t4121;
  t4153 = 0.707107*t3518;
  t4154 = t3448 + t3483 + t4153;
  t4194 = 0.707107*t3644;
  t4198 = t4194 + t3666 + t3680;
  t4144 = 0.340999127418*t1191*t4132;
  t4159 = t1225*t4154;
  t4204 = t4198*t1676;
  t4236 = 0. + t4144 + t4159 + t4204;
  t4249 = t1988*t4132;
  t4250 = 0.340999127418*t1191*t4154;
  t4261 = t4198*t2044;
  t4262 = 0. + t4249 + t4250 + t4261;
  t4268 = t2278*t4198;
  t4318 = t4132*t2379;
  t4336 = t4154*t2504;
  t4349 = 0. + t4268 + t4318 + t4336;
  t4247 = -0.340999127418*t649*t4236;
  t4263 = t1945*t4262;
  t4391 = t2260*t4349;
  t4396 = 0. + t4247 + t4263 + t4391;
  t4406 = t2680*t4236;
  t4429 = -0.340999127418*t649*t4262;
  t4452 = t2747*t4349;
  t4455 = 0. + t4406 + t4429 + t4452;
  t2613 = -1.*t90*t2595;
  t2756 = t2647*t2749;
  t2788 = 0. + t2613 + t2756;
  t2792 = t79*t2788;
  t2843 = t2647*t2595;
  t2852 = t90*t2749;
  t2862 = 0. + t2843 + t2852;
  t2916 = t2836*t2862;
  t2924 = 0. + t2792 + t2916;
  t2933 = t10*t2924;
  t3071 = t3003*t1817;
  t3205 = t3185*t2089;
  t3246 = t3240*t2529;
  t3250 = 0. + t3071 + t3205 + t3246;
  t3256 = -1.*t2939*t3250;
  t3298 = 0. + t2933 + t3256;
  t3908 = -1.*t90*t3879;
  t3993 = t2647*t3961;
  t4004 = 0. + t3908 + t3993;
  t4010 = t79*t4004;
  t4034 = t2647*t3879;
  t4038 = t90*t3961;
  t4049 = 0. + t4034 + t4038;
  t4062 = t2836*t4049;
  t4069 = 0. + t4010 + t4062;
  t4073 = t10*t4069;
  t4080 = t3003*t3743;
  t4087 = t3185*t3841;
  t4094 = t3240*t3854;
  t4096 = 0. + t4080 + t4087 + t4094;
  t4099 = -1.*t2939*t4096;
  t4107 = 0. + t4073 + t4099;
  t4397 = -1.*t90*t4396;
  t4459 = t2647*t4455;
  t4476 = 0. + t4397 + t4459;
  t4485 = t79*t4476;
  t4497 = t2647*t4396;
  t4502 = t90*t4455;
  t4504 = 0. + t4497 + t4502;
  t4509 = t2836*t4504;
  t4522 = 0. + t4485 + t4509;
  t4524 = t10*t4522;
  t4526 = t3003*t4236;
  t4529 = t3185*t4262;
  t4530 = t3240*t4349;
  t4532 = 0. + t4526 + t4529 + t4530;
  t4546 = -1.*t2939*t4532;
  t4548 = 0. + t4524 + t4546;
  t4733 = -1.*t2836*t2788;
  t4750 = t79*t2862;
  t4754 = 0. + t4733 + t4750;
  t4776 = -1.*t2836*t4004;
  t4781 = t79*t4049;
  t4784 = 0. + t4776 + t4781;
  t4801 = -1.*t2836*t4476;
  t4802 = t79*t4504;
  t4809 = 0. + t4801 + t4802;
  t5045 = -1.*t3003*t1817;
  t5051 = -1.*t3185*t2089;
  t5058 = -1.*t3240*t2529;
  t5061 = 0. + t5045 + t5051 + t5058;
  t5077 = -1.*t3003*t3743;
  t5080 = -1.*t3185*t3841;
  t5095 = -1.*t3240*t3854;
  t5100 = 0. + t5077 + t5080 + t5095;
  t5121 = -1.*t3003*t4236;
  t5127 = -1.*t3185*t4262;
  t5130 = -1.*t3240*t4349;
  t5131 = 0. + t5121 + t5127 + t5130;
  t5186 = -0.930418*t1817;
  t5187 = 0.366501*t2089;
  t5190 = 0. + t5186 + t5187;
  t5210 = -0.930418*t3743;
  t5212 = 0.366501*t3841;
  t5218 = 0. + t5210 + t5212;
  t5222 = -0.930418*t4236;
  t5224 = 0.366501*t4262;
  t5225 = 0. + t5222 + t5224;
  t5290 = 0.366501*t1102;
  t5291 = 0.930418*t1354;
  t5305 = 0. + t5290 + t5291;
  t5320 = 0.930418*t3400;
  t5332 = 0.366501*t3617;
  t5333 = 0. + t5320 + t5332;
  t5353 = 0.930418*t4132;
  t5354 = 0.366501*t4154;
  t5357 = 0. + t5353 + t5354;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000309*t3298 + 0.004296*t4107 + 0.001393*t4548;
  p_output1[10]=0.00004*t3298 + 0.001393*t4107 + 0.036157*t4548;
  p_output1[11]=0.038903*t3298 + 0.000309*t4107 + 0.00004*t4548;
  p_output1[12]=0.000309*t4754 + 0.004296*t4784 + 0.001393*t4809;
  p_output1[13]=0.00004*t4754 + 0.001393*t4784 + 0.036157*t4809;
  p_output1[14]=0.038903*t4754 + 0.000309*t4784 + 0.00004*t4809;
  p_output1[15]=0.000309*t3250 + 0.004296*t4096 + 0.001393*t4532;
  p_output1[16]=0.00004*t3250 + 0.001393*t4096 + 0.036157*t4532;
  p_output1[17]=0.038903*t3250 + 0.000309*t4096 + 0.00004*t4532;
  p_output1[18]=0.000309*t5061 + 0.004296*t5100 + 0.001393*t5131;
  p_output1[19]=0.00004*t5061 + 0.001393*t5100 + 0.036157*t5131;
  p_output1[20]=0.038903*t5061 + 0.000309*t5100 + 0.00004*t5131;
  p_output1[21]=0.000309*t5190 + 0.004296*t5218 + 0.001393*t5225;
  p_output1[22]=0.00004*t5190 + 0.001393*t5218 + 0.036157*t5225;
  p_output1[23]=0.038903*t5190 + 0.000309*t5218 + 0.00004*t5225;
  p_output1[24]=0.000309*t5305 + 0.004296*t5333 + 0.001393*t5357;
  p_output1[25]=0.00004*t5305 + 0.001393*t5333 + 0.036157*t5357;
  p_output1[26]=0.038903*t5305 + 0.000309*t5333 + 0.00004*t5357;
  p_output1[27]=0.00030900226566275997;
  p_output1[28]=0.000040013679252249944;
  p_output1[29]=0.03890302493631731;
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



void Jdq_AMBody_left_knee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
