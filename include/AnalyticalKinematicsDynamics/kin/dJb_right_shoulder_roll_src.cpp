/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_right_shoulder_roll_src.h"

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
  double t453;
  double t487;
  double t445;
  double t455;
  double t515;
  double t518;
  double t530;
  double t1001;
  double t84;
  double t1319;
  double t1367;
  double t1368;
  double t1508;
  double t532;
  double t756;
  double t865;
  double t1167;
  double t1850;
  double t1866;
  double t1021;
  double t1026;
  double t364;
  double t1623;
  double t1652;
  double t2589;
  double t2630;
  double t2635;
  double t1452;
  double t1497;
  double t2455;
  double t1658;
  double t1899;
  double t1910;
  double t1924;
  double t2006;
  double t2169;
  double t2190;
  double t2312;
  double t2664;
  double t2699;
  double t2810;
  double t2828;
  double t2865;
  double t3150;
  double t3153;
  double t3353;
  double t3434;
  double t3486;
  double t3611;
  double t3619;
  double t4344;
  double t4351;
  double t4361;
  double t4365;
  double t4388;
  double t4400;
  double t4423;
  double t4426;
  double t4427;
  double t4463;
  double t4509;
  double t4510;
  double t4521;
  double t4538;
  double t4541;
  double t4542;
  double t4562;
  double t4564;
  double t4576;
  double t4577;
  double t4584;
  double t4602;
  double t4502;
  double t4610;
  double t4613;
  double t4641;
  double t4643;
  double t4648;
  double t4492;
  double t4495;
  double t4692;
  double t4701;
  double t4904;
  double t4632;
  double t4661;
  double t4665;
  double t4721;
  double t5136;
  double t5143;
  double t5145;
  double t5125;
  double t4739;
  double t4753;
  double t4774;
  double t5256;
  double t5258;
  double t5269;
  double t5272;
  double t5277;
  double t4969;
  double t4978;
  double t4979;
  double t5504;
  double t5507;
  double t5519;
  double t5520;
  double t5555;
  double t5556;
  double t5559;
  double t5564;
  double t4231;
  double t4247;
  double t4255;
  double t4268;
  double t4272;
  double t4282;
  double t4298;
  double t4315;
  double t4343;
  double t5596;
  double t5607;
  double t5641;
  double t5643;
  double t5473;
  double t5485;
  double t5763;
  double t5768;
  double t5528;
  double t5535;
  double t5791;
  double t5794;
  t453 = Cos(var1[24]);
  t487 = Sin(var1[24]);
  t445 = Cos(var1[5]);
  t455 = 0.984808*t453;
  t515 = 0.173648*t487;
  t518 = t455 + t515;
  t530 = t445*t518;
  t1001 = Sin(var1[5]);
  t84 = Cos(var1[3]);
  t1319 = 0.173648*t453;
  t1367 = -0.984808*t487;
  t1368 = t1319 + t1367;
  t1508 = Sin(var1[4]);
  t532 = -0.173648*t453;
  t756 = 0.984808*t487;
  t865 = t532 + t756;
  t1167 = Sin(var1[3]);
  t1850 = t445*t865;
  t1866 = -1.*t518*t1001;
  t1021 = t865*t1001;
  t1026 = 0. + t530 + t1021;
  t364 = Cos(var1[4]);
  t1623 = t445*t1368;
  t1652 = t518*t1001;
  t2589 = -0.984808*t453;
  t2630 = -0.173648*t487;
  t2635 = t2589 + t2630;
  t1452 = -1.*t1368*t1001;
  t1497 = t530 + t1452;
  t2455 = 0. + t1623 + t1652;
  t1658 = t1623 + t1652;
  t1899 = t1850 + t1866;
  t1910 = -1.*t445*t518;
  t1924 = -1.*t865*t1001;
  t2006 = t1910 + t1924;
  t2169 = 0. + t1850 + t1866;
  t2190 = t1508*t1026;
  t2312 = 0. + t2190;
  t2664 = t445*t2635;
  t2699 = t1368*t1001;
  t2810 = t2664 + t2699;
  t2828 = -1.*t2635*t1001;
  t2865 = t1623 + t2828;
  t3150 = -1.*t445*t1368;
  t3153 = t3150 + t1866;
  t3353 = 0. + t530 + t1452;
  t3434 = t1508*t2455;
  t3486 = 0. + t3434;
  t3611 = -1.*t364;
  t3619 = 0. + t3611;
  t4344 = -0.0031100000000000017*t453;
  t4351 = -0.0005589999999999762*t487;
  t4361 = t4344 + t4351;
  t4365 = t445*t4361;
  t4388 = 0.0005589999999999762*t453;
  t4400 = -0.0031100000000000017*t487;
  t4423 = t4388 + t4400;
  t4426 = t4423*t1001;
  t4427 = t4365 + t4426;
  t4463 = 0. + t1508;
  t4509 = -1.*t453;
  t4510 = 1. + t4509;
  t4521 = 0.4*t4510;
  t4538 = 0.400559*t453;
  t4541 = 0. + t4521 + t4538 + t4400;
  t4542 = t445*t4541;
  t4562 = -0.12*t4510;
  t4564 = -0.11689*t453;
  t4576 = 0.0005589999999999762*t487;
  t4577 = 0. + t4562 + t4564 + t4576;
  t4584 = t4577*t1001;
  t4602 = 0. + t4542 + t4584;
  t4502 = 0.02441*t1508;
  t4610 = t364*t4602;
  t4613 = 0. + t4502 + t4610;
  t4641 = -0.02441*t364;
  t4643 = t1508*t4602;
  t4648 = 0. + t4641 + t4643;
  t4492 = t364*t2455;
  t4495 = 0. + t4492;
  t4692 = t445*t4577;
  t4701 = -1.*t4541*t1001;
  t4904 = t4692 + t4701;
  t4632 = t4463*t4613;
  t4661 = t3619*t4648;
  t4665 = 0. + t4632 + t4661;
  t4721 = 0. + t4692 + t4701;
  t5136 = 0.02441*t364;
  t5143 = -1.*t1508*t4602;
  t5145 = t5136 + t5143;
  t5125 = t4502 + t4610;
  t4739 = t445*t4423;
  t4753 = -1.*t4361*t1001;
  t4774 = t4739 + t4753;
  t5256 = t364*t1026;
  t5258 = 0. + t5256;
  t5269 = -1.*t4463*t4613;
  t5272 = -1.*t3619*t4648;
  t5277 = 0. + t5269 + t5272;
  t4969 = -1.*t445*t4541;
  t4978 = -1.*t4577*t1001;
  t4979 = t4969 + t4978;
  t5504 = t3353*t4721;
  t5507 = t4613*t4495;
  t5519 = t4648*t3486;
  t5520 = t5504 + t5507 + t5519;
  t5555 = -1.*t4721*t2169;
  t5556 = -1.*t4613*t5258;
  t5559 = -1.*t4648*t2312;
  t5564 = t5555 + t5556 + t5559;
  t4231 = var2[5]*t364*t1899;
  t4247 = var2[24]*t364*t1658;
  t4255 = -1.*var2[4]*t1508*t1026;
  t4268 = t4231 + t4247 + t4255;
  t4272 = var2[5]*t364*t1497;
  t4282 = var2[24]*t364*t2810;
  t4298 = -1.*var2[4]*t1508*t2455;
  t4315 = t4272 + t4282 + t4298;
  t4343 = var2[4]*t364;
  t5596 = t2865*t4721;
  t5607 = t3353*t4774;
  t5641 = -1.*t1497*t4721;
  t5643 = -1.*t4774*t2169;
  t5473 = t3353*t4979;
  t5485 = t4721*t3153;
  t5763 = t4602*t2455;
  t5768 = 0. + t5504 + t5763;
  t5528 = -1.*t4979*t2169;
  t5535 = -1.*t4721*t2006;
  t5791 = -1.*t4602*t1026;
  t5794 = 0. + t5555 + t5791;
  p_output1[0]=(-1.*t1167*t2312 - 1.*t2169*t84)*var2[3] + t1026*t364*t84*var2[4] + (-1.*t1167*t2006 + t1508*t1899*t84)*var2[5] + (-1.*t1167*t1497 + t1508*t1658*t84)*var2[24];
  p_output1[1]=(-1.*t1167*t3486 - 1.*t3353*t84)*var2[3] + t2455*t364*t84*var2[4] + (-1.*t1167*t3153 + t1497*t1508*t84)*var2[5] + (-1.*t1167*t2865 + t1508*t2810*t84)*var2[24];
  p_output1[2]=-1.*t1167*t3619*var2[3] + t1508*t84*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1167*t2169 + t2312*t84)*var2[3] + t1026*t1167*t364*var2[4] + (t1167*t1508*t1899 + t2006*t84)*var2[5] + (t1167*t1508*t1658 + t1497*t84)*var2[24];
  p_output1[7]=(-1.*t1167*t3353 + t3486*t84)*var2[3] + t1167*t2455*t364*var2[4] + (t1167*t1497*t1508 + t3153*t84)*var2[5] + (t1167*t1508*t2810 + t2865*t84)*var2[24];
  p_output1[8]=t3619*t84*var2[3] + t1167*t1508*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4268;
  p_output1[13]=t4315;
  p_output1[14]=t4343;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t1508*t2455*t4665 + t364*(-1.*t4495*t4613 - 1.*t3486*t4648 - 1.*t3353*t4721) + t4495*(t364*t4613 + t1508*t4648 + t3619*t5125 + t4463*t5145) + t4463*(t1508*t2455*t4613 - 1.*t2455*t364*t4648 - 1.*t3486*t5125 - 1.*t4495*t5145))*var2[4] + (t1497*t364*t4665 + t4495*(t1508*t3619*t4904 + t364*t4463*t4904) + t4463*(-1.*t1497*t364*t4613 - 1.*t1497*t1508*t4648 - 1.*t3153*t4721 - 1.*t1508*t3486*t4904 - 1.*t364*t4495*t4904 - 1.*t3353*t4979))*var2[5] + ((t1508*t3619*t4427 + t364*t4427*t4463)*t4495 + t2810*t364*t4665 + t4463*(-1.*t1508*t3486*t4427 - 1.*t364*t4427*t4495 - 1.*t2810*t364*t4613 - 1.*t1508*t2810*t4648 - 1.*t2865*t4721 - 1.*t3353*t4774))*var2[24];
  p_output1[19]=((-1.*t364*t4613 - 1.*t1508*t4648 - 1.*t3619*t5125 - 1.*t4463*t5145)*t5258 + t364*(t2312*t4648 + t2169*t4721 + t4613*t5258) + t4463*(-1.*t1026*t1508*t4613 + t1026*t364*t4648 + t2312*t5125 + t5145*t5258) - 1.*t1026*t1508*t5277)*var2[4] + ((-1.*t1508*t3619*t4904 - 1.*t364*t4463*t4904)*t5258 + t4463*(t1899*t364*t4613 + t1508*t1899*t4648 + t2006*t4721 + t1508*t2312*t4904 + t2169*t4979 + t364*t4904*t5258) + t1899*t364*t5277)*var2[5] + ((-1.*t1508*t3619*t4427 - 1.*t364*t4427*t4463)*t5258 + t4463*(t1508*t2312*t4427 + t1658*t364*t4613 + t1508*t1658*t4648 + t1497*t4721 + t2169*t4774 + t364*t4427*t5258) + t1658*t364*t5277)*var2[24];
  p_output1[20]=((-1.*t1508*t2455*t4613 + t2455*t364*t4648 + t3486*t5125 + t4495*t5145)*t5258 + t4495*(t1026*t1508*t4613 - 1.*t1026*t364*t4648 - 1.*t2312*t5125 - 1.*t5145*t5258) - 1.*t1026*t1508*t5520 - 1.*t1508*t2455*t5564)*var2[4] + (t5258*(t1497*t364*t4613 + t1497*t1508*t4648 + t1508*t3486*t4904 + t364*t4495*t4904 + t5473 + t5485) + t1899*t364*t5520 + t4495*(-1.*t1899*t364*t4613 - 1.*t1508*t1899*t4648 - 1.*t1508*t2312*t4904 - 1.*t364*t4904*t5258 + t5528 + t5535) + t1497*t364*t5564)*var2[5] + (t1658*t364*t5520 + t2810*t364*t5564 + t5258*(t1508*t3486*t4427 + t364*t4427*t4495 + t2810*t364*t4613 + t1508*t2810*t4648 + t5596 + t5607) + t4495*(-1.*t1508*t2312*t4427 - 1.*t1658*t364*t4613 - 1.*t1508*t1658*t4648 - 1.*t364*t4427*t5258 + t5641 + t5643))*var2[24];
  p_output1[21]=t4268;
  p_output1[22]=t4315;
  p_output1[23]=t4343;
  p_output1[24]=0.02441*t3153*var2[5] + 0.02441*t2865*var2[24];
  p_output1[25]=-0.02441*t2006*var2[5] - 0.02441*t1497*var2[24];
  p_output1[26]=(t2169*(t1497*t4602 + t2455*t4904 + t5473 + t5485) + t3353*(-1.*t1899*t4602 - 1.*t1026*t4904 + t5528 + t5535) + t2006*t5768 + t3153*t5794)*var2[5] + (t2169*(t2455*t4427 + t2810*t4602 + t5596 + t5607) + t3353*(-1.*t1026*t4427 - 1.*t1658*t4602 + t5641 + t5643) + t1497*t5768 + t2865*t5794)*var2[24];
  p_output1[27]=t2006*var2[5] + t1497*var2[24];
  p_output1[28]=t3153*var2[5] + t2865*var2[24];
  p_output1[29]=0;
  p_output1[30]=-1.*(-1.*t1368*t4361 - 1.*t2635*t4541 - 1.*t1368*t4577 - 1.*t4423*t518)*var2[24];
  p_output1[31]=-1.*(t1368*t4541 + t4361*t518 + t4577*t518 + t4423*t865)*var2[24];
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
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void dJb_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
