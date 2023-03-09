/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_shoulder_yaw_src.h"

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
  double t543;
  double t201;
  double t959;
  double t962;
  double t1191;
  double t1493;
  double t1774;
  double t2050;
  double t1829;
  double t2087;
  double t318;
  double t393;
  double t398;
  double t1959;
  double t2238;
  double t2246;
  double t2570;
  double t2579;
  double t2580;
  double t3596;
  double t3616;
  double t3622;
  double t3826;
  double t210;
  double t3083;
  double t3180;
  double t2941;
  double t2943;
  double t2950;
  double t3238;
  double t3388;
  double t3389;
  double t3772;
  double t2771;
  double t2871;
  double t4464;
  double t4002;
  double t772;
  double t818;
  double t563;
  double t703;
  double t5170;
  double t4230;
  double t4233;
  double t4235;
  double t4266;
  double t4305;
  double t4332;
  double t4992;
  double t4735;
  double t4744;
  double t4747;
  double t4844;
  double t4877;
  double t4931;
  double t5225;
  double t5256;
  double t5261;
  double t5273;
  double t5276;
  double t5284;
  double t3887;
  double t5331;
  double t4047;
  double t5580;
  double t4599;
  double t5342;
  double t4512;
  double t414;
  double t712;
  double t824;
  double t836;
  double t1349;
  double t1661;
  double t1773;
  double t2464;
  double t2494;
  double t2525;
  double t2686;
  double t2701;
  double t2877;
  double t2914;
  double t6135;
  double t6150;
  double t6151;
  double t6167;
  double t6176;
  double t6178;
  double t3020;
  double t3063;
  double t3181;
  double t3204;
  double t3560;
  double t3632;
  double t3913;
  double t3956;
  double t4063;
  double t4222;
  double t4227;
  double t6195;
  double t6201;
  double t6202;
  double t6225;
  double t6235;
  double t6243;
  double t4416;
  double t4458;
  double t4574;
  double t4591;
  double t4605;
  double t4618;
  double t4671;
  double t4958;
  double t4969;
  double t5001;
  double t5135;
  double t5174;
  double t5177;
  double t5216;
  double t5334;
  double t6261;
  double t6265;
  double t6286;
  double t6301;
  double t5346;
  double t6306;
  double t6314;
  double t6321;
  double t6324;
  double t5397;
  double t5416;
  double t6335;
  double t6345;
  double t6350;
  double t6355;
  double t5488;
  double t5490;
  double t5602;
  double t5624;
  double t5668;
  double t5764;
  double t5785;
  double t5851;
  double t6500;
  double t6507;
  double t6508;
  double t6513;
  double t6515;
  double t6521;
  double t6532;
  double t6539;
  double t6540;
  double t6552;
  double t6557;
  double t6564;
  double t6565;
  double t6569;
  double t6578;
  double t6582;
  double t6590;
  double t6595;
  t543 = Sin(var1[14]);
  t201 = Cos(var1[3]);
  t959 = Cos(var1[13]);
  t962 = -1.*t959;
  t1191 = 1. + t962;
  t1493 = Sin(var1[13]);
  t1774 = Cos(var1[5]);
  t2050 = Sin(var1[3]);
  t1829 = Sin(var1[4]);
  t2087 = Sin(var1[5]);
  t318 = Cos(var1[14]);
  t393 = -1.*t318;
  t398 = 1. + t393;
  t1959 = t201*t1774*t1829;
  t2238 = t2050*t2087;
  t2246 = t1959 + t2238;
  t2570 = -1.*t1774*t2050;
  t2579 = t201*t1829*t2087;
  t2580 = t2570 + t2579;
  t3596 = Cos(var1[15]);
  t3616 = -1.*t3596;
  t3622 = 1. + t3616;
  t3826 = Sin(var1[15]);
  t210 = Cos(var1[4]);
  t3083 = 0.994522*t543;
  t3180 = 0. + t3083;
  t2941 = -1.*t1493*t2246;
  t2943 = t959*t2580;
  t2950 = t2941 + t2943;
  t3238 = t959*t2246;
  t3388 = t1493*t2580;
  t3389 = t3238 + t3388;
  t3772 = 0.051978134642000004*t3622;
  t2771 = -0.104528*t543;
  t2871 = 0. + t2771;
  t4464 = -0.05226439969100001*t3622;
  t4002 = 0.49726168403800003*t3622;
  t772 = 0.104528*t543;
  t818 = 0. + t772;
  t563 = -0.994522*t543;
  t703 = 0. + t563;
  t5170 = -0.073913*t3826;
  t4230 = t201*t210*t3180;
  t4233 = 0.103955395616*t398*t2950;
  t4235 = -0.9890740084840001*t398;
  t4266 = 1. + t4235;
  t4305 = t4266*t3389;
  t4332 = t4230 + t4233 + t4305;
  t4992 = -0.703234*t3826;
  t4735 = t201*t210*t2871;
  t4744 = -0.010926102783999999*t398;
  t4747 = 1. + t4744;
  t4844 = t4747*t2950;
  t4877 = 0.103955395616*t398*t3389;
  t4931 = t4735 + t4844 + t4877;
  t5225 = -1.0000001112680001*t398;
  t5256 = 1. + t5225;
  t5261 = t5256*t201*t210;
  t5273 = t818*t2950;
  t5276 = t703*t3389;
  t5284 = t5261 + t5273 + t5276;
  t3887 = -0.707107*t3826;
  t5331 = -0.49726168403800003*t3622;
  t4047 = 0.073913*t3826;
  t5580 = -0.051978134642000004*t3622;
  t4599 = 0.707107*t3826;
  t5342 = 0.05226439969100001*t3622;
  t4512 = 0.703234*t3826;
  t414 = -0.056500534356700764*t398;
  t712 = 0.38315650737400003*t703;
  t824 = -0.040271188976*t818;
  t836 = 0. + t414 + t712 + t824;
  t1349 = 0.4*t1191;
  t1661 = 0.12*t1493;
  t1773 = 0. + t1349 + t1661;
  t2464 = 0.12*t1191;
  t2494 = -0.4*t1493;
  t2525 = 0. + t2464 + t2494;
  t2686 = 1.1345904784751044e-7*var1[14];
  t2701 = -0.04027119345689465*t398;
  t2877 = -0.05650052807*t2871;
  t2914 = t2686 + t2701 + t2877;
  t6135 = t1774*t2050*t1829;
  t6150 = -1.*t201*t2087;
  t6151 = t6135 + t6150;
  t6167 = t201*t1774;
  t6176 = t2050*t1829*t2087;
  t6178 = t6167 + t6176;
  t3020 = 1.1924972351948546e-8*var1[14];
  t3063 = 0.38315655000705834*t398;
  t3181 = -0.05650052807*t3180;
  t3204 = t3020 + t3063 + t3181;
  t3560 = -1.5601527583902087e-7*var1[15];
  t3632 = 0.09582494577057615*t3622;
  t3913 = t3772 + t3887;
  t3956 = 0.231098203479*t3913;
  t4063 = t4002 + t4047;
  t4222 = 0.164383620275*t4063;
  t4227 = t3560 + t3632 + t3956 + t4222;
  t6195 = -1.*t1493*t6151;
  t6201 = t959*t6178;
  t6202 = t6195 + t6201;
  t6225 = t959*t6151;
  t6235 = t1493*t6178;
  t6243 = t6225 + t6235;
  t4416 = 1.639789470231751e-8*var1[15];
  t4458 = 0.22983603018311177*t3622;
  t4574 = t4464 + t4512;
  t4591 = 0.164383620275*t4574;
  t4605 = t3772 + t4599;
  t4618 = 0.18957839082800002*t4605;
  t4671 = t4416 + t4458 + t4591 + t4618;
  t4958 = 1.568745163810375e-7*var1[15];
  t4969 = 0.08219200580743281*t3622;
  t5001 = t4464 + t4992;
  t5135 = 0.231098203479*t5001;
  t5174 = t4002 + t5170;
  t5177 = 0.18957839082800002*t5174;
  t5216 = t4958 + t4969 + t5135 + t5177;
  t5334 = t5331 + t5170;
  t6261 = t210*t3180*t2050;
  t6265 = 0.103955395616*t398*t6202;
  t6286 = t4266*t6243;
  t6301 = t6261 + t6265 + t6286;
  t5346 = t5342 + t4992;
  t6306 = t210*t2871*t2050;
  t6314 = t4747*t6202;
  t6321 = 0.103955395616*t398*t6243;
  t6324 = t6306 + t6314 + t6321;
  t5397 = -0.500001190325*t3622;
  t5416 = 1. + t5397;
  t6335 = t5256*t210*t2050;
  t6345 = t818*t6202;
  t6350 = t703*t6243;
  t6355 = t6335 + t6345 + t6350;
  t5488 = -0.5054634410180001*t3622;
  t5490 = 1. + t5488;
  t5602 = t5580 + t3887;
  t5624 = t5331 + t4047;
  t5668 = t5580 + t4599;
  t5764 = -0.9945383682050002*t3622;
  t5785 = 1. + t5764;
  t5851 = t5342 + t4512;
  t6500 = -1.*t210*t1774*t1493;
  t6507 = t959*t210*t2087;
  t6508 = t6500 + t6507;
  t6513 = t959*t210*t1774;
  t6515 = t210*t1493*t2087;
  t6521 = t6513 + t6515;
  t6532 = -1.*t3180*t1829;
  t6539 = 0.103955395616*t398*t6508;
  t6540 = t4266*t6521;
  t6552 = t6532 + t6539 + t6540;
  t6557 = -1.*t2871*t1829;
  t6564 = t4747*t6508;
  t6565 = 0.103955395616*t398*t6521;
  t6569 = t6557 + t6564 + t6565;
  t6578 = -1.*t5256*t1829;
  t6582 = t818*t6508;
  t6590 = t703*t6521;
  t6595 = t6578 + t6582 + t6590;
  p_output1[0]=0. + t1773*t2246 + t2525*t2580 + t2914*t2950 + t3204*t3389 + t4227*t4332 + t4671*t4931 + t5216*t5284 + 0.140811*(t4332*t5334 + t4931*t5346 + t5284*t5416) + 0.213182*(t4332*t5490 + t4931*t5602 + t5284*t5624) + 0.230568*(t4332*t5668 + t4931*t5785 + t5284*t5851) + t201*t210*t836 + var1[0];
  p_output1[1]=0. + t1773*t6151 + t2525*t6178 + t2914*t6202 + t3204*t6243 + t4227*t6301 + t4671*t6324 + t5216*t6355 + 0.140811*(t5334*t6301 + t5346*t6324 + t5416*t6355) + 0.213182*(t5490*t6301 + t5602*t6324 + t5624*t6355) + 0.230568*(t5668*t6301 + t5785*t6324 + t5851*t6355) + t2050*t210*t836 + var1[1];
  p_output1[2]=0. + t1773*t1774*t210 + t2087*t210*t2525 + t2914*t6508 + t3204*t6521 + t4227*t6552 + t4671*t6569 + t5216*t6595 + 0.140811*(t5334*t6552 + t5346*t6569 + t5416*t6595) + 0.213182*(t5490*t6552 + t5602*t6569 + t5624*t6595) + 0.230568*(t5668*t6552 + t5785*t6569 + t5851*t6595) - 1.*t1829*t836 + var1[2];
}



void p_left_shoulder_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
