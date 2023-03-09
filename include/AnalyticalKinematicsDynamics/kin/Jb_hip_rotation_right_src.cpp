/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_hip_rotation_right_src.h"

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
  double t415;
  double t703;
  double t443;
  double t596;
  double t201;
  double t719;
  double t766;
  double t83;
  double t1069;
  double t1107;
  double t1196;
  double t631;
  double t776;
  double t994;
  double t1271;
  double t65;
  double t1769;
  double t1925;
  double t1979;
  double t2933;
  double t2964;
  double t2970;
  double t2974;
  double t3072;
  double t2496;
  double t2605;
  double t2709;
  double t2750;
  double t2775;
  double t1761;
  double t2189;
  double t2211;
  double t3300;
  double t3333;
  double t3337;
  double t2901;
  double t3095;
  double t3109;
  double t4134;
  double t4135;
  double t3790;
  double t3830;
  double t3831;
  double t4295;
  double t4310;
  double t4325;
  double t4081;
  double t4244;
  double t4263;
  double t1004;
  double t1345;
  double t1423;
  double t2092;
  double t2172;
  double t2199;
  double t2216;
  double t2247;
  double t2368;
  double t2372;
  double t2373;
  double t3219;
  double t3347;
  double t3420;
  double t3464;
  double t3481;
  double t3532;
  double t3542;
  double t3551;
  double t3584;
  double t3590;
  double t3628;
  double t3730;
  double t4284;
  double t4374;
  double t4419;
  double t4455;
  double t4473;
  double t4484;
  double t4501;
  double t4566;
  double t4587;
  double t4611;
  double t4613;
  double t4672;
  double t5105;
  double t5115;
  double t5118;
  double t5155;
  double t5156;
  double t5164;
  double t5170;
  double t5187;
  double t5192;
  double t5274;
  double t5280;
  double t5289;
  double t5336;
  double t5346;
  double t5367;
  double t5374;
  double t5379;
  double t5395;
  double t5403;
  double t5119;
  double t5123;
  double t5129;
  double t5416;
  double t5419;
  double t5456;
  double t5459;
  double t5133;
  double t5152;
  double t5153;
  double t5286;
  double t5404;
  double t5409;
  double t5464;
  double t5466;
  double t5467;
  double t5473;
  double t5474;
  double t5477;
  double t5478;
  double t5483;
  double t5493;
  double t5498;
  double t5511;
  double t5518;
  double t5415;
  double t5460;
  double t5462;
  double t5494;
  double t5521;
  double t5522;
  double t5535;
  double t5537;
  double t5541;
  double t4966;
  double t5035;
  double t5092;
  double t5463;
  double t5557;
  double t5596;
  double t5623;
  double t5664;
  double t5689;
  double t5753;
  double t5734;
  double t5774;
  double t5797;
  double t5823;
  double t5851;
  double t5985;
  double t5976;
  double t6028;
  t415 = Sin(var1[18]);
  t703 = Cos(var1[17]);
  t443 = -0.366501*t415;
  t596 = 0. + t443;
  t201 = Sin(var1[17]);
  t719 = 0.930418*t415;
  t766 = 0. + t719;
  t83 = Cos(var1[5]);
  t1069 = t703*t596;
  t1107 = -1.*t201*t766;
  t1196 = t1069 + t1107;
  t631 = t201*t596;
  t776 = t703*t766;
  t994 = t631 + t776;
  t1271 = Sin(var1[5]);
  t65 = Sin(var1[3]);
  t1769 = Cos(var1[18]);
  t1925 = -1.*t1769;
  t1979 = 1. + t1925;
  t2933 = -0.134322983001*t1979;
  t2964 = 1. + t2933;
  t2970 = -0.366501*t2964;
  t2974 = 0.3172717261340007*t1979;
  t3072 = t2970 + t2974;
  t2496 = -0.8656776547239999*t1979;
  t2605 = 1. + t2496;
  t2709 = 0.930418*t2605;
  t2750 = -0.12497652119782442*t1979;
  t2775 = t2709 + t2750;
  t1761 = Cos(var1[3]);
  t2189 = Cos(var1[4]);
  t2211 = Sin(var1[4]);
  t3300 = t703*t3072;
  t3333 = -1.*t2775*t201;
  t3337 = 0. + t3300 + t3333;
  t2901 = t703*t2775;
  t3095 = t3072*t201;
  t3109 = 0. + t2901 + t3095;
  t4134 = -0.930418*t2964;
  t4135 = t4134 + t2750;
  t3790 = -0.366501*t2605;
  t3830 = -0.3172717261340007*t1979;
  t3831 = t3790 + t3830;
  t4295 = t703*t4135;
  t4310 = -1.*t3831*t201;
  t4325 = 0. + t4295 + t4310;
  t4081 = t703*t3831;
  t4244 = t4135*t201;
  t4263 = 0. + t4081 + t4244;
  t1004 = t83*t994;
  t1345 = -1.*t1196*t1271;
  t1423 = t1004 + t1345;
  t2092 = 1.000000637725*t1979;
  t2172 = -1. + t2092;
  t2199 = t2172*t2189;
  t2216 = t83*t1196;
  t2247 = t994*t1271;
  t2368 = t2216 + t2247;
  t2372 = t2211*t2368;
  t2373 = t2199 + t2372;
  t3219 = t83*t3109;
  t3347 = -1.*t3337*t1271;
  t3420 = 0. + t3219 + t3347;
  t3464 = -0.366501*t596;
  t3481 = 0.930418*t766;
  t3532 = 0. + t3464 + t3481;
  t3542 = t2189*t3532;
  t3551 = t83*t3337;
  t3584 = t3109*t1271;
  t3590 = 0. + t3551 + t3584;
  t3628 = t2211*t3590;
  t3730 = 0. + t3542 + t3628;
  t4284 = t83*t4263;
  t4374 = -1.*t4325*t1271;
  t4419 = 0. + t4284 + t4374;
  t4455 = -0.930418*t596;
  t4473 = -0.366501*t766;
  t4484 = 0. + t4455 + t4473;
  t4501 = t2189*t4484;
  t4566 = t83*t4325;
  t4587 = t4263*t1271;
  t4611 = 0. + t4566 + t4587;
  t4613 = t2211*t4611;
  t4672 = 0. + t4501 + t4613;
  t5105 = -1.*t3532*t2211;
  t5115 = t2189*t3590;
  t5118 = 0. + t5105 + t5115;
  t5155 = 3.2909349868922137e-7*var1[18];
  t5156 = -0.046986*t2964;
  t5164 = -0.0063112059881053895*t1979;
  t5170 = -0.045000372235*t596;
  t5187 = 0.366501*t415;
  t5192 = 0. + t5187;
  t5274 = -0.045*t5192;
  t5280 = t5155 + t5156 + t5164 + t5170 + t5274;
  t5289 = 1.296332362046933e-7*var1[18];
  t5336 = -0.109508*t2605;
  t5346 = -0.09479886646268927*t1979;
  t5367 = -0.930418*t415;
  t5374 = 0. + t5367;
  t5379 = -0.045*t5374;
  t5395 = -0.045000372235*t766;
  t5403 = t5289 + t5336 + t5346 + t5379 + t5395;
  t5119 = -1.*t4484*t2211;
  t5123 = t2189*t4611;
  t5129 = 0. + t5119 + t5123;
  t5416 = -0.091*t201;
  t5419 = t703*t5280;
  t5456 = -1.*t201*t5403;
  t5459 = 0. + t5416 + t5419 + t5456;
  t5133 = -1.*t703;
  t5152 = 1. + t5133;
  t5153 = -0.091*t5152;
  t5286 = t201*t5280;
  t5404 = t703*t5403;
  t5409 = 0. + t5153 + t5286 + t5404;
  t5464 = -1.000000637725*t1979;
  t5466 = 1. + t5464;
  t5467 = -0.045*t5466;
  t5473 = -0.04500040093286238*t1979;
  t5474 = -0.07877663122399998*t5374;
  t5477 = -0.046986*t596;
  t5478 = 0.031030906668*t5192;
  t5483 = -0.109508*t766;
  t5493 = 0. + t5467 + t5473 + t5474 + t5477 + t5478 + t5483;
  t5498 = t83*t5459;
  t5511 = t5409*t1271;
  t5518 = 0. + t5498 + t5511;
  t5415 = t83*t5409;
  t5460 = -1.*t5459*t1271;
  t5462 = 0. + t5415 + t5460;
  t5494 = -1.*t5493*t2211;
  t5521 = t2189*t5518;
  t5522 = 0. + t5494 + t5521;
  t5535 = t2189*t5493;
  t5537 = t2211*t5518;
  t5541 = 0. + t5535 + t5537;
  t4966 = -1.*t2172*t2211;
  t5035 = t2189*t2368;
  t5092 = t4966 + t5035;
  t5463 = t4419*t5462;
  t5557 = -1.*t3420*t5462;
  t5596 = -1.*t4419*t5462;
  t5623 = t5462*t1423;
  t5664 = t3420*t5462;
  t5689 = -1.*t5462*t1423;
  t5753 = -1.*t5493*t3532;
  t5734 = t4484*t5493;
  t5774 = -1.*t4484*t5493;
  t5797 = t2172*t5493;
  t5823 = t5493*t3532;
  t5851 = -1.*t2172*t5493;
  t5985 = t4455 + t4473;
  t5976 = t3464 + t3481;
  t6028 = -1. + t2092;
  p_output1[0]=t1761*t2373 - 1.*t1423*t65;
  p_output1[1]=0. + t1761*t3730 - 1.*t3420*t65;
  p_output1[2]=0. + t1761*t4672 - 1.*t4419*t65;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1423*t1761 + t2373*t65;
  p_output1[7]=0. + t1761*t3420 + t3730*t65;
  p_output1[8]=0. + t1761*t4419 + t4672*t65;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5092;
  p_output1[13]=t5118;
  p_output1[14]=t5129;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5118*(t5463 + t5129*t5522 + t4672*t5541) + t5129*(-1.*t5118*t5522 - 1.*t3730*t5541 + t5557);
  p_output1[19]=t5092*(-1.*t5129*t5522 - 1.*t4672*t5541 + t5596) + t5129*(t5092*t5522 + t2373*t5541 + t5623);
  p_output1[20]=t5092*(t5118*t5522 + t3730*t5541 + t5664) + t5118*(-1.*t5092*t5522 - 1.*t2373*t5541 + t5689);
  p_output1[21]=t5092;
  p_output1[22]=t5118;
  p_output1[23]=t5129;
  p_output1[24]=t3420*(t5463 + t4611*t5518 + t5734) + t4419*(-1.*t3590*t5518 + t5557 + t5753);
  p_output1[25]=t1423*(-1.*t4611*t5518 + t5596 + t5774) + t4419*(t2368*t5518 + t5623 + t5797);
  p_output1[26]=t1423*(t3590*t5518 + t5664 + t5823) + t3420*(-1.*t2368*t5518 + t5689 + t5851);
  p_output1[27]=t1423;
  p_output1[28]=t3420;
  p_output1[29]=t4419;
  p_output1[30]=t3532*(t4263*t5409 + t4325*t5459 + t5734) + t4484*(-1.*t3109*t5409 - 1.*t3337*t5459 + t5753);
  p_output1[31]=t2172*(-1.*t4263*t5409 - 1.*t4325*t5459 + t5774) + t4484*(t1196*t5459 + t5797 + t5409*t994);
  p_output1[32]=t2172*(t3109*t5409 + t3337*t5459 + t5823) + t3532*(-1.*t1196*t5459 + t5851 - 1.*t5409*t994);
  p_output1[33]=t2172;
  p_output1[34]=t3532;
  p_output1[35]=t4484;
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
  p_output1[102]=-0.091*t596 - 1.*(-1.*t3072*t5280 - 1.*t2775*t5403 - 1.*t5493*t5976)*t5985 - 1.*t5976*(t4135*t5280 + t3831*t5403 + t5493*t5985);
  p_output1[103]=-0.091*t3072 - 1.*(-1.*t4135*t5280 - 1.*t3831*t5403 - 1.*t5493*t5985)*t6028 - 1.*t5985*(t5280*t596 + t5493*t6028 + t5403*t766);
  p_output1[104]=-0.091*t4135 - 1.*(t3072*t5280 + t2775*t5403 + t5493*t5976)*t6028 - 1.*t5976*(-1.*t5280*t596 - 1.*t5493*t6028 - 1.*t5403*t766);
  p_output1[105]=1. + t5464;
  p_output1[106]=0. + 0.366501*t596 - 0.930418*t766;
  p_output1[107]=0. + 0.930418*t596 + 0.366501*t766;
  p_output1[108]=-1.4764722830462595e-7;
  p_output1[109]=-3.43537375005476e-7;
  p_output1[110]=-3.5370499999916316e-7;
  p_output1[111]=0.;
  p_output1[112]=0.;
  p_output1[113]=1.000000637725;
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



void Jb_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
