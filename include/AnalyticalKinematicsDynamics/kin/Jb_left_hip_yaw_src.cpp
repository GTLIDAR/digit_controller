/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_left_hip_yaw_src.h"

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
  double t1148;
  double t1306;
  double t1158;
  double t1224;
  double t1057;
  double t1325;
  double t1350;
  double t1494;
  double t1297;
  double t1424;
  double t1464;
  double t1028;
  double t1532;
  double t1542;
  double t1547;
  double t1724;
  double t366;
  double t369;
  double t462;
  double t2122;
  double t2146;
  double t2169;
  double t2178;
  double t2185;
  double t1897;
  double t1916;
  double t2004;
  double t2006;
  double t2007;
  double t266;
  double t886;
  double t2090;
  double t2225;
  double t2261;
  double t2345;
  double t2369;
  double t2454;
  double t286;
  double t3149;
  double t3211;
  double t3022;
  double t3040;
  double t3066;
  double t3088;
  double t3262;
  double t3347;
  double t3426;
  double t3438;
  double t3459;
  double t546;
  double t691;
  double t844;
  double t1472;
  double t1602;
  double t1651;
  double t1667;
  double t1714;
  double t1747;
  double t1756;
  double t1827;
  double t2330;
  double t2476;
  double t2483;
  double t2608;
  double t2641;
  double t2656;
  double t2658;
  double t2741;
  double t2755;
  double t2774;
  double t2809;
  double t2824;
  double t3421;
  double t3502;
  double t3522;
  double t3636;
  double t3723;
  double t3768;
  double t3771;
  double t3780;
  double t3794;
  double t3821;
  double t3899;
  double t4100;
  double t4584;
  double t4619;
  double t4632;
  double t4678;
  double t4686;
  double t4701;
  double t4767;
  double t4851;
  double t4949;
  double t5000;
  double t5026;
  double t5079;
  double t5114;
  double t5197;
  double t5222;
  double t5232;
  double t4516;
  double t4533;
  double t4544;
  double t4933;
  double t5277;
  double t5290;
  double t5324;
  double t5329;
  double t5380;
  double t5392;
  double t5505;
  double t5514;
  double t5533;
  double t5561;
  double t5574;
  double t5598;
  double t5604;
  double t5627;
  double t5631;
  double t5648;
  double t5657;
  double t5663;
  double t4361;
  double t4404;
  double t4431;
  double t4432;
  double t4444;
  double t4497;
  double t5297;
  double t5437;
  double t5439;
  double t5558;
  double t5664;
  double t5666;
  double t5684;
  double t5685;
  double t5696;
  double t4326;
  double t4331;
  double t4351;
  double t5749;
  double t5465;
  double t5945;
  double t5866;
  double t6041;
  double t5973;
  double t6112;
  double t6098;
  double t6165;
  double t6146;
  double t6212;
  double t6180;
  double t6466;
  double t6452;
  double t6498;
  t1148 = Sin(var1[7]);
  t1306 = Cos(var1[6]);
  t1158 = 0.366501*t1148;
  t1224 = 0. + t1158;
  t1057 = Sin(var1[6]);
  t1325 = 0.930418*t1148;
  t1350 = 0. + t1325;
  t1494 = Cos(var1[5]);
  t1297 = t1057*t1224;
  t1424 = t1306*t1350;
  t1464 = t1297 + t1424;
  t1028 = Sin(var1[5]);
  t1532 = t1306*t1224;
  t1542 = -1.*t1057*t1350;
  t1547 = t1532 + t1542;
  t1724 = Sin(var1[3]);
  t366 = Cos(var1[7]);
  t369 = -1.*t366;
  t462 = 1. + t369;
  t2122 = -0.134322983001*t462;
  t2146 = 1. + t2122;
  t2169 = 0.366501*t2146;
  t2178 = -0.3172717261340007*t462;
  t2185 = t2169 + t2178;
  t1897 = -0.8656776547239999*t462;
  t1916 = 1. + t1897;
  t2004 = 0.930418*t1916;
  t2006 = -0.12497652119782442*t462;
  t2007 = t2004 + t2006;
  t266 = Cos(var1[3]);
  t886 = Sin(var1[4]);
  t2090 = t1306*t2007;
  t2225 = t2185*t1057;
  t2261 = 0. + t2090 + t2225;
  t2345 = t1306*t2185;
  t2369 = -1.*t2007*t1057;
  t2454 = 0. + t2345 + t2369;
  t286 = Cos(var1[4]);
  t3149 = -0.930418*t2146;
  t3211 = t3149 + t2006;
  t3022 = 0.366501*t1916;
  t3040 = 0.3172717261340007*t462;
  t3066 = t3022 + t3040;
  t3088 = t1306*t3066;
  t3262 = t3211*t1057;
  t3347 = 0. + t3088 + t3262;
  t3426 = t1306*t3211;
  t3438 = -1.*t3066*t1057;
  t3459 = 0. + t3426 + t3438;
  t546 = 1.000000637725*t462;
  t691 = -1. + t546;
  t844 = t286*t691;
  t1472 = t1028*t1464;
  t1602 = t1494*t1547;
  t1651 = t1472 + t1602;
  t1667 = t886*t1651;
  t1714 = t844 + t1667;
  t1747 = t1494*t1464;
  t1756 = -1.*t1028*t1547;
  t1827 = t1747 + t1756;
  t2330 = t1494*t2261;
  t2476 = -1.*t1028*t2454;
  t2483 = 0. + t2330 + t2476;
  t2608 = t1028*t2261;
  t2641 = t1494*t2454;
  t2656 = 0. + t2608 + t2641;
  t2658 = t886*t2656;
  t2741 = 0.366501*t1224;
  t2755 = 0.930418*t1350;
  t2774 = 0. + t2741 + t2755;
  t2809 = t286*t2774;
  t2824 = 0. + t2658 + t2809;
  t3421 = t1494*t3347;
  t3502 = -1.*t1028*t3459;
  t3522 = 0. + t3421 + t3502;
  t3636 = t1028*t3347;
  t3723 = t1494*t3459;
  t3768 = 0. + t3636 + t3723;
  t3771 = t886*t3768;
  t3780 = -0.930418*t1224;
  t3794 = 0.366501*t1350;
  t3821 = 0. + t3780 + t3794;
  t3899 = t286*t3821;
  t4100 = 0. + t3771 + t3899;
  t4584 = -3.2909349868922137e-7*var1[7];
  t4619 = -0.086806*t2146;
  t4632 = -0.010945384129716011*t462;
  t4678 = -0.366501*t1148;
  t4686 = 0. + t4678;
  t4701 = -0.04501*t4686;
  t4767 = -0.045000372235*t1224;
  t4851 = t4584 + t4619 + t4632 + t4701 + t4767;
  t4949 = 1.296332362046933e-7*var1[7];
  t5000 = 0.123098*t1916;
  t5026 = 0.10837745171647402*t462;
  t5079 = -0.930418*t1148;
  t5114 = 0. + t5079;
  t5197 = -0.04501*t5114;
  t5222 = -0.045000372235*t1350;
  t5232 = t4949 + t5000 + t5026 + t5197 + t5222;
  t4516 = -1.*t1306;
  t4533 = 1. + t4516;
  t4544 = 0.091*t4533;
  t4933 = t1057*t4851;
  t5277 = t1306*t5232;
  t5290 = 0. + t4544 + t4933 + t5277;
  t5324 = 0.091*t1057;
  t5329 = t1306*t4851;
  t5380 = -1.*t1057*t5232;
  t5392 = 0. + t5324 + t5329 + t5380;
  t5505 = t1028*t5290;
  t5514 = t1494*t5392;
  t5533 = 0. + t5505 + t5514;
  t5561 = -1.000000637725*t462;
  t5574 = 1. + t5561;
  t5598 = -0.04501*t5574;
  t5604 = -0.04500040093286238*t462;
  t5627 = 0.07877663122399998*t5114;
  t5631 = 0.031030906668*t4686;
  t5648 = -0.086806*t1224;
  t5657 = 0.123098*t1350;
  t5663 = 0. + t5598 + t5604 + t5627 + t5631 + t5648 + t5657;
  t4361 = t286*t2656;
  t4404 = -1.*t886*t2774;
  t4431 = 0. + t4361 + t4404;
  t4432 = t286*t3768;
  t4444 = -1.*t886*t3821;
  t4497 = 0. + t4432 + t4444;
  t5297 = t1494*t5290;
  t5437 = -1.*t1028*t5392;
  t5439 = 0. + t5297 + t5437;
  t5558 = t886*t5533;
  t5664 = t286*t5663;
  t5666 = 0. + t5558 + t5664;
  t5684 = t286*t5533;
  t5685 = -1.*t886*t5663;
  t5696 = 0. + t5684 + t5685;
  t4326 = -1.*t691*t886;
  t4331 = t286*t1651;
  t4351 = t4326 + t4331;
  t5749 = t3522*t5439;
  t5465 = -1.*t2483*t5439;
  t5945 = t5439*t1827;
  t5866 = -1.*t3522*t5439;
  t6041 = -1.*t5439*t1827;
  t5973 = t2483*t5439;
  t6112 = -1.*t5663*t2774;
  t6098 = t5663*t3821;
  t6165 = -1.*t5663*t3821;
  t6146 = t691*t5663;
  t6212 = t5663*t2774;
  t6180 = -1.*t691*t5663;
  t6466 = t3780 + t3794;
  t6452 = t2741 + t2755;
  t6498 = -1. + t546;
  p_output1[0]=-1.*t1724*t1827 + t1714*t266;
  p_output1[1]=0. - 1.*t1724*t2483 + t266*t2824;
  p_output1[2]=0. - 1.*t1724*t3522 + t266*t4100;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1714*t1724 + t1827*t266;
  p_output1[7]=0. + t2483*t266 + t1724*t2824;
  p_output1[8]=0. + t266*t3522 + t1724*t4100;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4351;
  p_output1[13]=t4431;
  p_output1[14]=t4497;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4497*(t5465 - 1.*t2824*t5666 - 1.*t4431*t5696) + t4431*(t4100*t5666 + t4497*t5696 + t5749);
  p_output1[19]=t4351*(-1.*t4100*t5666 - 1.*t4497*t5696 + t5866) + t4497*(t1714*t5666 + t4351*t5696 + t5945);
  p_output1[20]=t4351*(t2824*t5666 + t4431*t5696 + t5973) + t4431*(-1.*t1714*t5666 - 1.*t4351*t5696 + t6041);
  p_output1[21]=t4351;
  p_output1[22]=t4431;
  p_output1[23]=t4497;
  p_output1[24]=t2483*(t3768*t5533 + t5749 + t6098) + t3522*(t5465 - 1.*t2656*t5533 + t6112);
  p_output1[25]=t3522*(t1651*t5533 + t5945 + t6146) + t1827*(-1.*t3768*t5533 + t5866 + t6165);
  p_output1[26]=t2483*(-1.*t1651*t5533 + t6041 + t6180) + t1827*(t2656*t5533 + t5973 + t6212);
  p_output1[27]=t1827;
  p_output1[28]=t2483;
  p_output1[29]=t3522;
  p_output1[30]=t2774*(t3347*t5290 + t3459*t5392 + t6098) + t3821*(-1.*t2261*t5290 - 1.*t2454*t5392 + t6112);
  p_output1[31]=t3821*(t1464*t5290 + t1547*t5392 + t6146) + (-1.*t3347*t5290 - 1.*t3459*t5392 + t6165)*t691;
  p_output1[32]=t2774*(-1.*t1464*t5290 - 1.*t1547*t5392 + t6180) + (t2261*t5290 + t2454*t5392 + t6212)*t691;
  p_output1[33]=t691;
  p_output1[34]=t2774;
  p_output1[35]=t3821;
  p_output1[36]=0.091*t1224 - 1.*(-1.*t2185*t4851 - 1.*t2007*t5232 - 1.*t5663*t6452)*t6466 - 1.*t6452*(t3211*t4851 + t3066*t5232 + t5663*t6466);
  p_output1[37]=0.091*t2185 - 1.*(-1.*t3211*t4851 - 1.*t3066*t5232 - 1.*t5663*t6466)*t6498 - 1.*t6466*(t1224*t4851 + t1350*t5232 + t5663*t6498);
  p_output1[38]=0.091*t3211 - 1.*(t2185*t4851 + t2007*t5232 + t5663*t6452)*t6498 - 1.*t6452*(-1.*t1224*t4851 - 1.*t1350*t5232 - 1.*t5663*t6498);
  p_output1[39]=1. + t5561;
  p_output1[40]=0. - 0.366501*t1224 - 0.930418*t1350;
  p_output1[41]=0. + 0.930418*t1224 - 0.366501*t1350;
  p_output1[42]=0.0019498380905938612;
  p_output1[43]=9.656469002250478e-6;
  p_output1[44]=3.5370499999742844e-7;
  p_output1[45]=0.;
  p_output1[46]=0.;
  p_output1[47]=1.000000637725;
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



void Jb_left_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
