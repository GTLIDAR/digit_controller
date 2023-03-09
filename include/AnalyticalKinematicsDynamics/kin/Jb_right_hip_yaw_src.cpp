/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_right_hip_yaw_src.h"

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
  double t165;
  double t500;
  double t182;
  double t292;
  double t129;
  double t526;
  double t527;
  double t123;
  double t725;
  double t735;
  double t760;
  double t493;
  double t537;
  double t670;
  double t798;
  double t107;
  double t972;
  double t1022;
  double t1065;
  double t1725;
  double t1758;
  double t1803;
  double t1813;
  double t1942;
  double t1369;
  double t1539;
  double t1552;
  double t1564;
  double t1626;
  double t966;
  double t1123;
  double t1168;
  double t1992;
  double t2058;
  double t2109;
  double t1662;
  double t1949;
  double t1960;
  double t2564;
  double t2591;
  double t2437;
  double t2481;
  double t2541;
  double t2704;
  double t2817;
  double t2861;
  double t2552;
  double t2615;
  double t2642;
  double t703;
  double t848;
  double t891;
  double t1075;
  double t1094;
  double t1151;
  double t1177;
  double t1202;
  double t1207;
  double t1288;
  double t1318;
  double t1971;
  double t2127;
  double t2135;
  double t2160;
  double t2163;
  double t2165;
  double t2184;
  double t2207;
  double t2210;
  double t2212;
  double t2297;
  double t2299;
  double t2690;
  double t2898;
  double t2969;
  double t2985;
  double t3037;
  double t3071;
  double t3122;
  double t3154;
  double t3156;
  double t3181;
  double t3202;
  double t3220;
  double t3744;
  double t3757;
  double t3766;
  double t4019;
  double t4060;
  double t4080;
  double t4086;
  double t4106;
  double t4122;
  double t4144;
  double t4156;
  double t4270;
  double t4302;
  double t4340;
  double t4365;
  double t4456;
  double t4465;
  double t4510;
  double t4609;
  double t3773;
  double t3817;
  double t3826;
  double t4680;
  double t4693;
  double t4694;
  double t4714;
  double t3859;
  double t3924;
  double t3999;
  double t4244;
  double t4620;
  double t4625;
  double t4834;
  double t4835;
  double t4837;
  double t4850;
  double t4866;
  double t4878;
  double t4882;
  double t4893;
  double t4972;
  double t4978;
  double t5046;
  double t5071;
  double t4654;
  double t4762;
  double t4763;
  double t4977;
  double t5136;
  double t5152;
  double t5173;
  double t5213;
  double t5277;
  double t3583;
  double t3636;
  double t3743;
  double t4795;
  double t5320;
  double t5464;
  double t5623;
  double t5713;
  double t5809;
  double t5996;
  double t5967;
  double t6128;
  double t6176;
  double t6209;
  double t6257;
  double t6593;
  double t6581;
  double t6657;
  t165 = Sin(var1[18]);
  t500 = Cos(var1[17]);
  t182 = -0.366501*t165;
  t292 = 0. + t182;
  t129 = Sin(var1[17]);
  t526 = 0.930418*t165;
  t527 = 0. + t526;
  t123 = Cos(var1[5]);
  t725 = t500*t292;
  t735 = -1.*t129*t527;
  t760 = t725 + t735;
  t493 = t129*t292;
  t537 = t500*t527;
  t670 = t493 + t537;
  t798 = Sin(var1[5]);
  t107 = Sin(var1[3]);
  t972 = Cos(var1[18]);
  t1022 = -1.*t972;
  t1065 = 1. + t1022;
  t1725 = -0.134322983001*t1065;
  t1758 = 1. + t1725;
  t1803 = -0.366501*t1758;
  t1813 = 0.3172717261340007*t1065;
  t1942 = t1803 + t1813;
  t1369 = -0.8656776547239999*t1065;
  t1539 = 1. + t1369;
  t1552 = 0.930418*t1539;
  t1564 = -0.12497652119782442*t1065;
  t1626 = t1552 + t1564;
  t966 = Cos(var1[3]);
  t1123 = Cos(var1[4]);
  t1168 = Sin(var1[4]);
  t1992 = t500*t1942;
  t2058 = -1.*t1626*t129;
  t2109 = 0. + t1992 + t2058;
  t1662 = t500*t1626;
  t1949 = t1942*t129;
  t1960 = 0. + t1662 + t1949;
  t2564 = -0.930418*t1758;
  t2591 = t2564 + t1564;
  t2437 = -0.366501*t1539;
  t2481 = -0.3172717261340007*t1065;
  t2541 = t2437 + t2481;
  t2704 = t500*t2591;
  t2817 = -1.*t2541*t129;
  t2861 = 0. + t2704 + t2817;
  t2552 = t500*t2541;
  t2615 = t2591*t129;
  t2642 = 0. + t2552 + t2615;
  t703 = t123*t670;
  t848 = -1.*t760*t798;
  t891 = t703 + t848;
  t1075 = 1.000000637725*t1065;
  t1094 = -1. + t1075;
  t1151 = t1094*t1123;
  t1177 = t123*t760;
  t1202 = t670*t798;
  t1207 = t1177 + t1202;
  t1288 = t1168*t1207;
  t1318 = t1151 + t1288;
  t1971 = t123*t1960;
  t2127 = -1.*t2109*t798;
  t2135 = 0. + t1971 + t2127;
  t2160 = -0.366501*t292;
  t2163 = 0.930418*t527;
  t2165 = 0. + t2160 + t2163;
  t2184 = t1123*t2165;
  t2207 = t123*t2109;
  t2210 = t1960*t798;
  t2212 = 0. + t2207 + t2210;
  t2297 = t1168*t2212;
  t2299 = 0. + t2184 + t2297;
  t2690 = t123*t2642;
  t2898 = -1.*t2861*t798;
  t2969 = 0. + t2690 + t2898;
  t2985 = -0.930418*t292;
  t3037 = -0.366501*t527;
  t3071 = 0. + t2985 + t3037;
  t3122 = t1123*t3071;
  t3154 = t123*t2861;
  t3156 = t2642*t798;
  t3181 = 0. + t3154 + t3156;
  t3202 = t1168*t3181;
  t3220 = 0. + t3122 + t3202;
  t3744 = -1.*t2165*t1168;
  t3757 = t1123*t2212;
  t3766 = 0. + t3744 + t3757;
  t4019 = 3.2909349868922137e-7*var1[18];
  t4060 = -0.086806*t1758;
  t4080 = -0.010945384129716011*t1065;
  t4086 = -0.045000372235*t292;
  t4106 = 0.366501*t165;
  t4122 = 0. + t4106;
  t4144 = -0.04501*t4122;
  t4156 = t4019 + t4060 + t4080 + t4086 + t4144;
  t4270 = 1.296332362046933e-7*var1[18];
  t4302 = -0.123098*t1539;
  t4340 = -0.10837745171647402*t1065;
  t4365 = -0.930418*t165;
  t4456 = 0. + t4365;
  t4465 = -0.04501*t4456;
  t4510 = -0.045000372235*t527;
  t4609 = t4270 + t4302 + t4340 + t4465 + t4510;
  t3773 = -1.*t3071*t1168;
  t3817 = t1123*t3181;
  t3826 = 0. + t3773 + t3817;
  t4680 = -0.091*t129;
  t4693 = t500*t4156;
  t4694 = -1.*t129*t4609;
  t4714 = 0. + t4680 + t4693 + t4694;
  t3859 = -1.*t500;
  t3924 = 1. + t3859;
  t3999 = -0.091*t3924;
  t4244 = t129*t4156;
  t4620 = t500*t4609;
  t4625 = 0. + t3999 + t4244 + t4620;
  t4834 = -1.000000637725*t1065;
  t4835 = 1. + t4834;
  t4837 = -0.04501*t4835;
  t4850 = -0.04500040093286238*t1065;
  t4866 = -0.07877663122399998*t4456;
  t4878 = -0.086806*t292;
  t4882 = 0.031030906668*t4122;
  t4893 = -0.123098*t527;
  t4972 = 0. + t4837 + t4850 + t4866 + t4878 + t4882 + t4893;
  t4978 = t123*t4714;
  t5046 = t4625*t798;
  t5071 = 0. + t4978 + t5046;
  t4654 = t123*t4625;
  t4762 = -1.*t4714*t798;
  t4763 = 0. + t4654 + t4762;
  t4977 = -1.*t4972*t1168;
  t5136 = t1123*t5071;
  t5152 = 0. + t4977 + t5136;
  t5173 = t1123*t4972;
  t5213 = t1168*t5071;
  t5277 = 0. + t5173 + t5213;
  t3583 = -1.*t1094*t1168;
  t3636 = t1123*t1207;
  t3743 = t3583 + t3636;
  t4795 = t2969*t4763;
  t5320 = -1.*t2135*t4763;
  t5464 = -1.*t2969*t4763;
  t5623 = t4763*t891;
  t5713 = t2135*t4763;
  t5809 = -1.*t4763*t891;
  t5996 = -1.*t4972*t2165;
  t5967 = t3071*t4972;
  t6128 = -1.*t3071*t4972;
  t6176 = t1094*t4972;
  t6209 = t4972*t2165;
  t6257 = -1.*t1094*t4972;
  t6593 = t2985 + t3037;
  t6581 = t2160 + t2163;
  t6657 = -1. + t1075;
  p_output1[0]=-1.*t107*t891 + t1318*t966;
  p_output1[1]=0. - 1.*t107*t2135 + t2299*t966;
  p_output1[2]=0. - 1.*t107*t2969 + t3220*t966;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t107*t1318 + t891*t966;
  p_output1[7]=0. + t107*t2299 + t2135*t966;
  p_output1[8]=0. + t107*t3220 + t2969*t966;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3743;
  p_output1[13]=t3766;
  p_output1[14]=t3826;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3766*(t4795 + t3826*t5152 + t3220*t5277) + t3826*(-1.*t3766*t5152 - 1.*t2299*t5277 + t5320);
  p_output1[19]=t3743*(-1.*t3826*t5152 - 1.*t3220*t5277 + t5464) + t3826*(t3743*t5152 + t1318*t5277 + t5623);
  p_output1[20]=t3743*(t3766*t5152 + t2299*t5277 + t5713) + t3766*(-1.*t3743*t5152 - 1.*t1318*t5277 + t5809);
  p_output1[21]=t3743;
  p_output1[22]=t3766;
  p_output1[23]=t3826;
  p_output1[24]=t2135*(t4795 + t3181*t5071 + t5967) + t2969*(-1.*t2212*t5071 + t5320 + t5996);
  p_output1[25]=t2969*(t1207*t5071 + t5623 + t6176) + (-1.*t3181*t5071 + t5464 + t6128)*t891;
  p_output1[26]=t2135*(-1.*t1207*t5071 + t5809 + t6257) + (t2212*t5071 + t5713 + t6209)*t891;
  p_output1[27]=t891;
  p_output1[28]=t2135;
  p_output1[29]=t2969;
  p_output1[30]=t2165*(t2642*t4625 + t2861*t4714 + t5967) + t3071*(-1.*t1960*t4625 - 1.*t2109*t4714 + t5996);
  p_output1[31]=t1094*(-1.*t2642*t4625 - 1.*t2861*t4714 + t6128) + t3071*(t6176 + t4625*t670 + t4714*t760);
  p_output1[32]=t1094*(t1960*t4625 + t2109*t4714 + t6209) + t2165*(t6257 - 1.*t4625*t670 - 1.*t4714*t760);
  p_output1[33]=t1094;
  p_output1[34]=t2165;
  p_output1[35]=t3071;
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
  p_output1[102]=-0.091*t292 - 1.*(-1.*t1942*t4156 - 1.*t1626*t4609 - 1.*t4972*t6581)*t6593 - 1.*t6581*(t2591*t4156 + t2541*t4609 + t4972*t6593);
  p_output1[103]=-0.091*t1942 - 1.*(-1.*t2591*t4156 - 1.*t2541*t4609 - 1.*t4972*t6593)*t6657 - 1.*t6593*(t292*t4156 + t4609*t527 + t4972*t6657);
  p_output1[104]=-0.091*t2591 - 1.*(t1942*t4156 + t1626*t4609 + t4972*t6581)*t6657 - 1.*t6581*(-1.*t292*t4156 - 1.*t4609*t527 - 1.*t4972*t6657);
  p_output1[105]=1. + t4834;
  p_output1[106]=0. + 0.366501*t292 - 0.930418*t527;
  p_output1[107]=0. + 0.930418*t292 + 0.366501*t527;
  p_output1[108]=-0.0019498380905938612;
  p_output1[109]=9.656469002250478e-6;
  p_output1[110]=-3.5370499999742844e-7;
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



void Jb_right_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
