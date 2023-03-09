/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_right_hip_roll_src.h"

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
  double t838;
  double t128;
  double t191;
  double t781;
  double t1066;
  double t1811;
  double t786;
  double t832;
  double t2896;
  double t965;
  double t1353;
  double t1357;
  double t1505;
  double t1527;
  double t3090;
  double t3120;
  double t3187;
  double t3297;
  double t3347;
  double t3403;
  double t3681;
  double t3690;
  double t3695;
  double t3703;
  double t3713;
  double t3779;
  double t4181;
  double t4231;
  double t4253;
  double t4811;
  double t4883;
  double t4884;
  double t3501;
  double t5135;
  double t5160;
  double t5174;
  double t3955;
  double t3976;
  double t3991;
  double t4373;
  double t4661;
  double t4702;
  double t4731;
  double t4736;
  double t4753;
  double t4778;
  double t857;
  double t968;
  double t1885;
  double t1962;
  double t1991;
  double t2068;
  double t2107;
  double t2126;
  double t2344;
  double t2447;
  double t2480;
  double t2648;
  double t2901;
  double t4580;
  double t4608;
  double t4622;
  double t4734;
  double t4803;
  double t4806;
  double t5397;
  double t5580;
  double t5587;
  double t5591;
  double t5602;
  double t5613;
  double t5628;
  double t5629;
  double t5633;
  double t5281;
  double t5008;
  double t5040;
  double t5058;
  double t3281;
  double t3422;
  double t3448;
  double t3518;
  double t3520;
  double t3530;
  double t3575;
  double t3601;
  double t3602;
  double t4154;
  double t4254;
  double t4295;
  double t4297;
  double t4299;
  double t4312;
  double t4444;
  double t4448;
  double t4471;
  double t4473;
  double t5895;
  double t5899;
  double t5913;
  double t5927;
  double t5936;
  double t5939;
  double t5940;
  double t5944;
  double t4900;
  double t4929;
  double t4935;
  double t4989;
  double t5006;
  double t5074;
  double t5111;
  double t6469;
  double t6472;
  double t6478;
  double t4087;
  double t5399;
  double t5417;
  double t5431;
  double t5436;
  double t5444;
  double t5452;
  double t6130;
  double t6161;
  double t6173;
  double t6194;
  double t6198;
  double t6213;
  double t6215;
  double t6216;
  double t6217;
  double t6221;
  double t6261;
  double t6266;
  double t6283;
  double t6286;
  double t6290;
  double t6294;
  double t6296;
  double t6313;
  double t6314;
  double t6317;
  double t6320;
  double t5502;
  double t5505;
  double t5506;
  double t5518;
  double t5528;
  double t5553;
  double t5557;
  double t5561;
  double t6395;
  double t6399;
  double t6412;
  double t6413;
  double t6414;
  double t6415;
  double t6416;
  double t5341;
  double t5358;
  double t5361;
  double t3698;
  double t3780;
  double t4036;
  double t4040;
  double t4091;
  double t4109;
  double t4121;
  double t5770;
  double t5810;
  double t5831;
  double t5849;
  double t5853;
  double t5857;
  double t5861;
  double t5862;
  double t5122;
  double t5191;
  double t5306;
  double t5307;
  double t5336;
  double t5380;
  double t5382;
  double t6479;
  double t6490;
  double t6494;
  double t6517;
  double t6523;
  double t6533;
  double t6536;
  double t6537;
  double t6538;
  double t6540;
  double t6569;
  double t6570;
  double t6571;
  double t6583;
  double t6585;
  double t6586;
  double t6589;
  double t6597;
  double t6600;
  double t6603;
  double t6604;
  double t6326;
  double t6327;
  double t6331;
  double t6347;
  double t6351;
  double t6353;
  double t6362;
  double t6363;
  double t6367;
  double t6369;
  double t6371;
  t838 = Sin(var1[3]);
  t128 = Cos(var1[4]);
  t191 = Cos(var1[5]);
  t781 = Sin(var1[17]);
  t1066 = Cos(var1[17]);
  t1811 = Sin(var1[5]);
  t786 = -0.091*t781;
  t832 = 0. + t786;
  t2896 = Cos(var1[3]);
  t965 = Sin(var1[4]);
  t1353 = -1.*t1066;
  t1357 = 1. + t1353;
  t1505 = -0.091*t1357;
  t1527 = 0. + t1505;
  t3090 = -1.*t2896*t191*t965;
  t3120 = -1.*t838*t1811;
  t3187 = t3090 + t3120;
  t3297 = t191*t838;
  t3347 = -1.*t2896*t965*t1811;
  t3403 = t3297 + t3347;
  t3681 = -1.*t191*t838*t965;
  t3690 = t2896*t1811;
  t3695 = t3681 + t3690;
  t3703 = -1.*t2896*t191;
  t3713 = -1.*t838*t965*t1811;
  t3779 = t3703 + t3713;
  t4181 = t2896*t191;
  t4231 = t838*t965*t1811;
  t4253 = t4181 + t4231;
  t4811 = t2896*t191*t965;
  t4883 = t838*t1811;
  t4884 = t4811 + t4883;
  t3501 = t1066*t3403;
  t5135 = -1.*t191*t838;
  t5160 = t2896*t965*t1811;
  t5174 = t5135 + t5160;
  t3955 = -1.*t781*t3695;
  t3976 = t1066*t3779;
  t3991 = t3955 + t3976;
  t4373 = t1066*t3695;
  t4661 = -1.*t2896*t128*t191*t781;
  t4702 = t1066*t2896*t128*t1811;
  t4731 = t4661 + t4702;
  t4736 = t1066*t2896*t128*t191;
  t4753 = t2896*t128*t781*t1811;
  t4778 = t4736 + t4753;
  t857 = -1.*t128*t191*t832*t838;
  t968 = -0.03244*t838*t965;
  t1885 = -1.*t1527*t128*t838*t1811;
  t1962 = t128*t191*t781*t838;
  t1991 = -1.*t1066*t128*t838*t1811;
  t2068 = t1962 + t1991;
  t2107 = -0.091945*t2068;
  t2126 = -1.*t1066*t128*t191*t838;
  t2344 = -1.*t128*t781*t838*t1811;
  t2447 = t2126 + t2344;
  t2480 = -0.001745*t2447;
  t2648 = t857 + t968 + t1885 + t2107 + t2480;
  t2901 = 0.03244*t2896*t128;
  t4580 = t2896*t128*t191*t832;
  t4608 = 0.03244*t2896*t965;
  t4622 = t1527*t2896*t128*t1811;
  t4734 = -0.091945*t4731;
  t4803 = -0.001745*t4778;
  t4806 = t4580 + t4608 + t4622 + t4734 + t4803;
  t5397 = 0.03244*t128*t838;
  t5580 = t1527*t2896*t128*t191;
  t5587 = -1.*t2896*t128*t832*t1811;
  t5591 = t2896*t128*t191*t781;
  t5602 = -1.*t1066*t2896*t128*t1811;
  t5613 = t5591 + t5602;
  t5628 = -0.001745*t5613;
  t5629 = -0.091945*t4778;
  t5633 = t5580 + t5587 + t5628 + t5629;
  t5281 = -1.*t781*t4884;
  t5008 = t1066*t4884;
  t5040 = -1.*t781*t3403;
  t5058 = t5008 + t5040;
  t3281 = t832*t3187;
  t3422 = t1527*t3403;
  t3448 = -1.*t781*t3187;
  t3518 = t3448 + t3501;
  t3520 = -0.091945*t3518;
  t3530 = t1066*t3187;
  t3575 = t781*t3403;
  t3601 = t3530 + t3575;
  t3602 = -0.001745*t3601;
  t4154 = t1527*t3695;
  t4254 = t832*t4253;
  t4295 = t781*t3695;
  t4297 = t1066*t4253;
  t4299 = t4295 + t4297;
  t4312 = -0.001745*t4299;
  t4444 = -1.*t781*t4253;
  t4448 = t4373 + t4444;
  t4471 = -0.091945*t4448;
  t4473 = t4154 + t4254 + t4312 + t4471;
  t5895 = t1527*t128*t191*t838;
  t5899 = -1.*t128*t832*t838*t1811;
  t5913 = -0.001745*t2068;
  t5927 = t1066*t128*t191*t838;
  t5936 = t128*t781*t838*t1811;
  t5939 = t5927 + t5936;
  t5940 = -0.091945*t5939;
  t5944 = t5895 + t5899 + t5913 + t5940;
  t4900 = t1527*t4884;
  t4929 = t832*t3403;
  t4935 = t781*t4884;
  t4989 = t4935 + t3501;
  t5006 = -0.001745*t4989;
  t5074 = -0.091945*t5058;
  t5111 = t4900 + t4929 + t5006 + t5074;
  t6469 = t191*t838*t965;
  t6472 = -1.*t2896*t1811;
  t6478 = t6469 + t6472;
  t4087 = -1.*t781*t3779;
  t5399 = t832*t3695;
  t5417 = t1527*t3779;
  t5431 = -0.091945*t3991;
  t5436 = t781*t3779;
  t5444 = t4373 + t5436;
  t5452 = -0.001745*t5444;
  t6130 = -1.*t128*t191*t832;
  t6161 = -1.*t1527*t128*t1811;
  t6173 = t128*t191*t781;
  t6194 = -1.*t1066*t128*t1811;
  t6198 = t6173 + t6194;
  t6213 = -0.091945*t6198;
  t6215 = -1.*t1066*t128*t191;
  t6216 = -1.*t128*t781*t1811;
  t6217 = t6215 + t6216;
  t6221 = -0.001745*t6217;
  t6261 = -1.*t1527*t191*t965;
  t6266 = t832*t965*t1811;
  t6283 = -1.*t191*t781*t965;
  t6286 = t1066*t965*t1811;
  t6290 = t6283 + t6286;
  t6294 = -0.001745*t6290;
  t6296 = -1.*t1066*t191*t965;
  t6313 = -1.*t781*t965*t1811;
  t6314 = t6296 + t6313;
  t6317 = -0.091945*t6314;
  t6320 = t6261 + t6266 + t6294 + t6317;
  t5502 = -0.091*t1066*t2896*t128*t191;
  t5505 = -0.091*t2896*t128*t781*t1811;
  t5506 = -0.001745*t4731;
  t5518 = -1.*t1066*t2896*t128*t191;
  t5528 = -1.*t2896*t128*t781*t1811;
  t5553 = t5518 + t5528;
  t5557 = -0.091945*t5553;
  t5561 = t5502 + t5505 + t5506 + t5557;
  t6395 = -0.091*t781*t4884;
  t6399 = -0.091*t1066*t3403;
  t6412 = -1.*t1066*t3403;
  t6413 = t5281 + t6412;
  t6414 = -0.091945*t6413;
  t6415 = -0.001745*t5058;
  t6416 = t6395 + t6399 + t6414 + t6415;
  t5341 = -1.*t1066*t4884;
  t5358 = -1.*t781*t5174;
  t5361 = t5341 + t5358;
  t3698 = -0.091*t1066*t3695;
  t3780 = -0.091*t781*t3779;
  t4036 = -0.001745*t3991;
  t4040 = -1.*t1066*t3695;
  t4091 = t4040 + t4087;
  t4109 = -0.091945*t4091;
  t4121 = t3698 + t3780 + t4036 + t4109;
  t5770 = -0.091*t1066*t128*t191*t838;
  t5810 = -0.091*t128*t781*t838*t1811;
  t5831 = -1.*t128*t191*t781*t838;
  t5849 = t1066*t128*t838*t1811;
  t5853 = t5831 + t5849;
  t5857 = -0.001745*t5853;
  t5861 = -0.091945*t2447;
  t5862 = t5770 + t5810 + t5857 + t5861;
  t5122 = -0.091*t1066*t4884;
  t5191 = -0.091*t781*t5174;
  t5306 = t1066*t5174;
  t5307 = t5281 + t5306;
  t5336 = -0.001745*t5307;
  t5380 = -0.091945*t5361;
  t5382 = t5122 + t5191 + t5336 + t5380;
  t6479 = -0.091*t781*t6478;
  t6490 = -0.091*t1066*t3779;
  t6494 = -1.*t781*t6478;
  t6517 = -1.*t1066*t3779;
  t6523 = t6494 + t6517;
  t6533 = -0.091945*t6523;
  t6536 = t1066*t6478;
  t6537 = t6536 + t4087;
  t6538 = -0.001745*t6537;
  t6540 = t6479 + t6490 + t6533 + t6538;
  t6569 = -0.091*t128*t191*t781;
  t6570 = 0.091*t1066*t128*t1811;
  t6571 = -1.*t128*t191*t781;
  t6583 = t1066*t128*t1811;
  t6585 = t6571 + t6583;
  t6586 = -0.091945*t6585;
  t6589 = t1066*t128*t191;
  t6597 = t128*t781*t1811;
  t6600 = t6589 + t6597;
  t6603 = -0.001745*t6600;
  t6604 = t6569 + t6570 + t6586 + t6603;
  t6326 = 0.091*t1066*t191*t965;
  t6327 = 0.091*t781*t965*t1811;
  t6331 = t191*t781*t965;
  t6347 = -1.*t1066*t965*t1811;
  t6351 = t6331 + t6347;
  t6353 = -0.001745*t6351;
  t6362 = t1066*t191*t965;
  t6363 = t781*t965*t1811;
  t6367 = t6362 + t6363;
  t6369 = -0.091945*t6367;
  t6371 = t6326 + t6327 + t6353 + t6369;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2901 + t3281 + t3422 + t3520 + t3602)*var2[3] + t2648*var2[4] + t4473*var2[5] + t4121*var2[17];
  p_output1[10]=(t5397 + t5399 + t5417 + t5431 + t5452)*var2[3] + t4806*var2[4] + t5111*var2[5] + t5382*var2[17];
  p_output1[11]=0;
  p_output1[12]=t2648*var2[3] + (t2901 - 1.*t1527*t1811*t2896*t965 - 1.*t191*t2896*t832*t965 - 0.001745*(-1.*t1066*t191*t2896*t965 - 1.*t1811*t2896*t781*t965) - 0.091945*(-1.*t1066*t1811*t2896*t965 + t191*t2896*t781*t965))*var2[4] + t5633*var2[5] + t5561*var2[17];
  p_output1[13]=t4806*var2[3] + (t5397 - 1.*t1527*t1811*t838*t965 - 1.*t191*t832*t838*t965 - 0.001745*(-1.*t1066*t191*t838*t965 - 1.*t1811*t781*t838*t965) - 0.091945*(-1.*t1066*t1811*t838*t965 + t191*t781*t838*t965))*var2[4] + t5944*var2[5] + t5862*var2[17];
  p_output1[14]=(t6130 + t6161 + t6213 + t6221 - 0.03244*t965)*var2[4] + t6320*var2[5] + t6371*var2[17];
  p_output1[15]=t4473*var2[3] + t5633*var2[4] + (t3281 + t3422 + t3520 + t3602)*var2[5] + t6416*var2[17];
  p_output1[16]=t5111*var2[3] + t5944*var2[4] + (t5399 + t5417 + t5431 + t5452)*var2[5] + t6540*var2[17];
  p_output1[17]=t6320*var2[4] + (t6130 + t6161 + t6213 + t6221)*var2[5] + t6604*var2[17];
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
  p_output1[51]=t4121*var2[3] + t5561*var2[4] + t6416*var2[5] + (-0.091*t1066*t5174 - 0.091945*(t4935 - 1.*t1066*t5174) - 0.001745*t5361 + 0.091*t4884*t781)*var2[17];
  p_output1[52]=t5382*var2[3] + t5862*var2[4] + t6540*var2[5] + (-0.091*t1066*t4253 - 0.001745*(t4444 - 1.*t1066*t6478) + 0.091*t6478*t781 - 0.091945*(-1.*t1066*t4253 + t6478*t781))*var2[17];
  p_output1[53]=t6371*var2[4] + t6604*var2[5] + (-0.091*t1066*t128*t1811 + t6213 + t6221 + 0.091*t128*t191*t781)*var2[17];
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



void dJp_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
