/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_left_shoulder_pitch_src.h"

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
  double t25;
  double t743;
  double t755;
  double t881;
  double t563;
  double t1438;
  double t1462;
  double t1477;
  double t1494;
  double t1576;
  double t1029;
  double t1145;
  double t1146;
  double t1191;
  double t1209;
  double t1600;
  double t64;
  double t128;
  double t186;
  double t243;
  double t354;
  double t500;
  double t514;
  double t2445;
  double t2447;
  double t2464;
  double t2481;
  double t2525;
  double t2527;
  double t2580;
  double t2581;
  double t2611;
  double t2681;
  double t2686;
  double t2697;
  double t2096;
  double t3061;
  double t3210;
  double t3204;
  double t3238;
  double t3353;
  double t3386;
  double t3388;
  double t3389;
  double t3359;
  double t3390;
  double t3427;
  double t3488;
  double t3560;
  double t3596;
  double t149;
  double t273;
  double t304;
  double t499;
  double t1332;
  double t1669;
  double t1764;
  double t1773;
  double t1774;
  double t1848;
  double t2087;
  double t2141;
  double t2168;
  double t2172;
  double t2204;
  double t2218;
  double t2236;
  double t2290;
  double t2355;
  double t2363;
  double t2387;
  double t2418;
  double t2529;
  double t2754;
  double t2757;
  double t2771;
  double t2834;
  double t2835;
  double t2846;
  double t2914;
  double t2941;
  double t2943;
  double t3004;
  double t4227;
  double t4230;
  double t4235;
  double t4240;
  double t3063;
  double t3470;
  double t3772;
  double t3826;
  double t3856;
  double t3858;
  double t3887;
  double t3913;
  double t4063;
  double t4181;
  double t4217;
  double t4233;
  double t4247;
  double t4252;
  double t4266;
  double t4305;
  double t4332;
  double t4335;
  double t4386;
  double t4416;
  double t4464;
  double t4512;
  double t4599;
  double t4605;
  double t4671;
  double t4675;
  double t4683;
  double t4747;
  double t2217;
  double t3020;
  double t3040;
  double t5135;
  double t5145;
  double t5149;
  double t5170;
  double t5174;
  double t5177;
  double t5150;
  double t5216;
  double t5225;
  double t5232;
  double t5256;
  double t5261;
  double t3980;
  double t4047;
  double t4574;
  double t4591;
  double t5001;
  double t5229;
  double t5273;
  double t5276;
  double t5321;
  double t5331;
  double t5334;
  double t5335;
  double t4864;
  double t4924;
  double t4925;
  double t5353;
  double t5367;
  double t5433;
  double t5457;
  double t5460;
  double t5462;
  double t5570;
  double t5602;
  double t5624;
  double t5627;
  double t5634;
  double t5649;
  double t5554;
  double t5625;
  double t5657;
  double t5668;
  double t5727;
  double t5764;
  double t5785;
  double t5851;
  double t5945;
  double t5959;
  double t6035;
  double t6135;
  double t6137;
  double t6150;
  double t3842;
  double t3941;
  double t3963;
  double t6195;
  double t6196;
  double t6201;
  double t6211;
  double t6218;
  double t6225;
  double t4769;
  double t4832;
  double t6265;
  double t6281;
  double t6286;
  double t4931;
  double t4957;
  double t6202;
  double t6235;
  double t6243;
  double t5284;
  double t5342;
  double t5346;
  double t6257;
  double t6261;
  double t6301;
  double t6304;
  double t5471;
  double t5472;
  double t6314;
  double t6316;
  double t6321;
  double t5481;
  double t5488;
  double t5684;
  double t5896;
  double t5916;
  double t6151;
  double t6164;
  double t6172;
  double t6173;
  double t6397;
  double t6401;
  double t6405;
  double t6408;
  double t6411;
  double t6412;
  double t6416;
  double t6421;
  double t6446;
  double t6451;
  double t6508;
  double t6509;
  double t6512;
  double t6515;
  double t6521;
  double t6522;
  double t6540;
  double t6513;
  double t6528;
  double t6532;
  double t6552;
  double t6554;
  double t6557;
  double t6564;
  double t6569;
  double t6575;
  double t6578;
  t25 = Sin(var1[14]);
  t743 = Cos(var1[14]);
  t755 = -1.*t743;
  t881 = 1. + t755;
  t563 = Cos(var1[13]);
  t1438 = -0.010926102783999999*t881;
  t1462 = 1. + t1438;
  t1477 = -0.994522*t1462;
  t1494 = -0.010866249592949247*t881;
  t1576 = t1477 + t1494;
  t1029 = -0.9890740084840001*t881;
  t1145 = 1. + t1029;
  t1146 = -0.104528*t1145;
  t1191 = -0.10338592795881554*t881;
  t1209 = t1146 + t1191;
  t1600 = Sin(var1[13]);
  t64 = -0.104528*t25;
  t128 = 0. + t64;
  t186 = 0.994522*t25;
  t243 = 0. + t186;
  t354 = Sin(var1[4]);
  t500 = Cos(var1[4]);
  t514 = Cos(var1[5]);
  t2445 = 0.703234*t1145;
  t2447 = -0.007683655156165408*t881;
  t2464 = -0.994522*t25;
  t2481 = 0. + t2464;
  t2525 = -0.707107*t2481;
  t2527 = t2445 + t2447 + t2525;
  t2580 = -0.073913*t1462;
  t2581 = 0.07310496868062215*t881;
  t2611 = 0.104528*t25;
  t2681 = 0. + t2611;
  t2686 = -0.707107*t2681;
  t2697 = t2580 + t2581 + t2686;
  t2096 = Sin(var1[5]);
  t3061 = Cos(var1[3]);
  t3210 = Sin(var1[3]);
  t3204 = t3061*t514*t354;
  t3238 = t3210*t2096;
  t3353 = t3204 + t3238;
  t3386 = -1.*t514*t3210;
  t3388 = t3061*t354*t2096;
  t3389 = t3386 + t3388;
  t3359 = -1.*t1600*t3353;
  t3390 = t563*t3389;
  t3427 = t3359 + t3390;
  t3488 = t563*t3353;
  t3560 = t1600*t3389;
  t3596 = t3488 + t3560;
  t149 = -0.994522*t128;
  t273 = -0.104528*t243;
  t304 = 0. + t149 + t273;
  t499 = -1.*t304*t354;
  t1332 = t563*t1209;
  t1669 = -1.*t1576*t1600;
  t1764 = 0. + t1332 + t1669;
  t1773 = t514*t1764;
  t1774 = t563*t1576;
  t1848 = t1209*t1600;
  t2087 = 0. + t1774 + t1848;
  t2141 = t2087*t2096;
  t2168 = 0. + t1773 + t2141;
  t2172 = t500*t2168;
  t2204 = 0. + t499 + t2172;
  t2218 = -1.0000001112680001*t881;
  t2236 = 1. + t2218;
  t2290 = -0.707107*t2236;
  t2355 = -0.073913*t128;
  t2363 = 0.703234*t243;
  t2387 = 0. + t2290 + t2355 + t2363;
  t2418 = -1.*t2387*t354;
  t2529 = t563*t2527;
  t2754 = -1.*t1600*t2697;
  t2757 = 0. + t2529 + t2754;
  t2771 = t514*t2757;
  t2834 = t1600*t2527;
  t2835 = t563*t2697;
  t2846 = 0. + t2834 + t2835;
  t2914 = t2846*t2096;
  t2941 = 0. + t2771 + t2914;
  t2943 = t500*t2941;
  t3004 = 0. + t2418 + t2943;
  t4227 = 0.707107*t2481;
  t4230 = t2445 + t2447 + t4227;
  t4235 = 0.707107*t2681;
  t4240 = t2580 + t2581 + t4235;
  t3063 = t3061*t500*t243;
  t3470 = 0.103955395616*t881*t3427;
  t3772 = t1145*t3596;
  t3826 = t3063 + t3470 + t3772;
  t3856 = t3061*t500*t128;
  t3858 = t1462*t3427;
  t3887 = 0.103955395616*t881*t3596;
  t3913 = t3856 + t3858 + t3887;
  t4063 = 0.707107*t2236;
  t4181 = 0. + t4063 + t2355 + t2363;
  t4217 = -1.*t4181*t354;
  t4233 = t563*t4230;
  t4247 = -1.*t1600*t4240;
  t4252 = 0. + t4233 + t4247;
  t4266 = t514*t4252;
  t4305 = t1600*t4230;
  t4332 = t563*t4240;
  t4335 = 0. + t4305 + t4332;
  t4386 = t4335*t2096;
  t4416 = 0. + t4266 + t4386;
  t4464 = t500*t4416;
  t4512 = 0. + t4217 + t4464;
  t4599 = 0.703234*t3826;
  t4605 = -0.073913*t3913;
  t4671 = t2236*t3061*t500;
  t4675 = t2681*t3427;
  t4683 = t2481*t3596;
  t4747 = t4671 + t4675 + t4683;
  t2217 = 0.00578*t2204;
  t3020 = -0.00205*t3004;
  t3040 = t2217 + t3020;
  t5135 = t514*t3210*t354;
  t5145 = -1.*t3061*t2096;
  t5149 = t5135 + t5145;
  t5170 = t3061*t514;
  t5174 = t3210*t354*t2096;
  t5177 = t5170 + t5174;
  t5150 = -1.*t1600*t5149;
  t5216 = t563*t5177;
  t5225 = t5150 + t5216;
  t5232 = t563*t5149;
  t5256 = t1600*t5177;
  t5261 = t5232 + t5256;
  t3980 = -0.00205*t2204;
  t4047 = 0.00209*t3004;
  t4574 = -0.00001*t4512;
  t4591 = t3980 + t4047 + t4574;
  t5001 = t500*t243*t3210;
  t5229 = 0.103955395616*t881*t5225;
  t5273 = t1145*t5261;
  t5276 = t5001 + t5229 + t5273;
  t5321 = t500*t128*t3210;
  t5331 = t1462*t5225;
  t5334 = 0.103955395616*t881*t5261;
  t5335 = t5321 + t5331 + t5334;
  t4864 = -0.00001*t3004;
  t4924 = 0.00676*t4512;
  t4925 = t4864 + t4924;
  t5353 = 0.703234*t5276;
  t5367 = -0.073913*t5335;
  t5433 = t2236*t500*t3210;
  t5457 = t2681*t5225;
  t5460 = t2481*t5261;
  t5462 = t5433 + t5457 + t5460;
  t5570 = -1.*t500*t514*t1600;
  t5602 = t563*t500*t2096;
  t5624 = t5570 + t5602;
  t5627 = t563*t500*t514;
  t5634 = t500*t1600*t2096;
  t5649 = t5627 + t5634;
  t5554 = -1.*t243*t354;
  t5625 = 0.103955395616*t881*t5624;
  t5657 = t1145*t5649;
  t5668 = t5554 + t5625 + t5657;
  t5727 = -1.*t128*t354;
  t5764 = t1462*t5624;
  t5785 = 0.103955395616*t881*t5649;
  t5851 = t5727 + t5764 + t5785;
  t5945 = 0.703234*t5668;
  t5959 = -0.073913*t5851;
  t6035 = -1.*t2236*t354;
  t6135 = t2681*t5624;
  t6137 = t2481*t5649;
  t6150 = t6035 + t6135 + t6137;
  t3842 = -0.104528*t3826;
  t3941 = -0.994522*t3913;
  t3963 = t3842 + t3941;
  t6195 = t514*t2087;
  t6196 = -1.*t1764*t2096;
  t6201 = 0. + t6195 + t6196;
  t6211 = t514*t2846;
  t6218 = -1.*t2757*t2096;
  t6225 = 0. + t6211 + t6218;
  t4769 = -0.707107*t4747;
  t4832 = t4599 + t4605 + t4769;
  t6265 = t514*t4335;
  t6281 = -1.*t4252*t2096;
  t6286 = 0. + t6265 + t6281;
  t4931 = 0.707107*t4747;
  t4957 = t4599 + t4605 + t4931;
  t6202 = 0.00578*t6201;
  t6235 = -0.00205*t6225;
  t6243 = t6202 + t6235;
  t5284 = -0.104528*t5276;
  t5342 = -0.994522*t5335;
  t5346 = t5284 + t5342;
  t6257 = -0.00205*t6201;
  t6261 = 0.00209*t6225;
  t6301 = -0.00001*t6286;
  t6304 = t6257 + t6261 + t6301;
  t5471 = -0.707107*t5462;
  t5472 = t5353 + t5367 + t5471;
  t6314 = -0.00001*t6225;
  t6316 = 0.00676*t6286;
  t6321 = t6314 + t6316;
  t5481 = 0.707107*t5462;
  t5488 = t5353 + t5367 + t5481;
  t5684 = -0.104528*t5668;
  t5896 = -0.994522*t5851;
  t5916 = t5684 + t5896;
  t6151 = -0.707107*t6150;
  t6164 = t5945 + t5959 + t6151;
  t6172 = 0.707107*t6150;
  t6173 = t5945 + t5959 + t6172;
  t6397 = 0.00578*t304;
  t6401 = -0.00205*t2387;
  t6405 = t6397 + t6401;
  t6408 = -0.00205*t304;
  t6411 = 0.00209*t2387;
  t6412 = -0.00001*t4181;
  t6416 = t6408 + t6411 + t6412;
  t6421 = -0.00001*t2387;
  t6446 = 0.00676*t4181;
  t6451 = t6421 + t6446;
  t6508 = 0.073913*t128;
  t6509 = -0.703234*t243;
  t6512 = 0. + t4063 + t6508 + t6509;
  t6515 = 0.994522*t128;
  t6521 = 0.104528*t243;
  t6522 = 0. + t6515 + t6521;
  t6540 = 0. + t2290 + t6508 + t6509;
  t6513 = -0.00205*t6512;
  t6528 = 0.00578*t6522;
  t6532 = t6513 + t6528;
  t6552 = -0.00001*t6540;
  t6554 = 0.00209*t6512;
  t6557 = -0.00205*t6522;
  t6564 = t6552 + t6554 + t6557;
  t6569 = 0.00676*t6540;
  t6575 = -0.00001*t6512;
  t6578 = t6569 + t6575;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3040*t3963 + t4591*t4832 + t4925*t4957;
  p_output1[10]=t3040*t5346 + t4591*t5472 + t4925*t5488;
  p_output1[11]=t3040*t5916 + t4591*t6164 + t4925*t6173;
  p_output1[12]=t3963*t6243 + t4832*t6304 + t4957*t6321;
  p_output1[13]=t5346*t6243 + t5472*t6304 + t5488*t6321;
  p_output1[14]=t5916*t6243 + t6164*t6304 + t6173*t6321;
  p_output1[15]=t3963*t6405 + t4832*t6416 + t4957*t6451;
  p_output1[16]=t5346*t6405 + t5472*t6416 + t5488*t6451;
  p_output1[17]=t5916*t6405 + t6164*t6416 + t6173*t6451;
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
  p_output1[39]=t3963*t6532 + t4832*t6564 + t4957*t6578;
  p_output1[40]=t5346*t6532 + t5472*t6564 + t5488*t6578;
  p_output1[41]=t5916*t6532 + t6164*t6564 + t6173*t6578;
  p_output1[42]=-0.0057799996980093405*t3963 + 0.0020499992691486806*t4832 - 3.1119795000297823e-9*t4957;
  p_output1[43]=-0.0057799996980093405*t5346 + 0.0020499992691486806*t5472 - 3.1119795000297823e-9*t5488;
  p_output1[44]=-0.0057799996980093405*t5916 + 0.0020499992691486806*t6164 - 3.1119795000297823e-9*t6173;
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



void Jdq_AMWorld_left_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
