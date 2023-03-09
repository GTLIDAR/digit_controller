/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_right_hip_yaw_src.h"

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
  double t980;
  double t1905;
  double t3236;
  double t2653;
  double t2710;
  double t3263;
  double t185;
  double t515;
  double t653;
  double t2252;
  double t2955;
  double t3583;
  double t3637;
  double t3740;
  double t3975;
  double t4022;
  double t4105;
  double t22;
  double t5213;
  double t5357;
  double t4899;
  double t4972;
  double t5022;
  double t5402;
  double t5417;
  double t5478;
  double t4442;
  double t4516;
  double t1128;
  double t1133;
  double t1395;
  double t1414;
  double t744;
  double t1184;
  double t1561;
  double t1569;
  double t2552;
  double t2612;
  double t3777;
  double t3864;
  double t3881;
  double t3951;
  double t4240;
  double t4340;
  double t4619;
  double t4836;
  double t5895;
  double t5913;
  double t5937;
  double t5962;
  double t5970;
  double t5971;
  double t5084;
  double t5132;
  double t5370;
  double t5382;
  double t5993;
  double t5999;
  double t6019;
  double t5559;
  double t5575;
  double t6072;
  double t6107;
  double t6115;
  double t5618;
  double t5631;
  double t5707;
  double t5725;
  double t6279;
  double t6280;
  double t6293;
  double t6303;
  double t6304;
  double t6314;
  double t6533;
  double t6536;
  double t6540;
  double t6553;
  double t6556;
  double t6560;
  double t6702;
  double t6709;
  double t6711;
  double t6713;
  double t6716;
  double t6718;
  double t6815;
  double t6816;
  double t6817;
  double t6854;
  double t6865;
  double t6867;
  double t6869;
  double t6876;
  double t6971;
  double t6983;
  double t6985;
  double t7015;
  double t7017;
  double t7021;
  double t7023;
  double t7024;
  double t7063;
  double t7064;
  double t7070;
  double t7078;
  double t7081;
  double t7082;
  double t6133;
  double t7130;
  double t7133;
  double t7135;
  double t7168;
  double t7169;
  double t7175;
  double t7177;
  double t7180;
  double t7185;
  double t7190;
  double t7194;
  double t7195;
  double t7233;
  double t7234;
  double t7235;
  double t7237;
  double t7238;
  double t7241;
  double t7271;
  double t7272;
  double t7276;
  double t7279;
  double t7280;
  double t7281;
  double t7284;
  double t7288;
  double t7289;
  double t7325;
  double t7326;
  t980 = Sin(var1[18]);
  t1905 = Sin(var1[3]);
  t3236 = Cos(var1[3]);
  t2653 = Cos(var1[5]);
  t2710 = Sin(var1[4]);
  t3263 = Sin(var1[5]);
  t185 = Cos(var1[18]);
  t515 = -1.*t185;
  t653 = 1. + t515;
  t2252 = Sin(var1[17]);
  t2955 = -1.*t2653*t1905*t2710;
  t3583 = t3236*t3263;
  t3637 = t2955 + t3583;
  t3740 = Cos(var1[17]);
  t3975 = -1.*t3236*t2653;
  t4022 = -1.*t1905*t2710*t3263;
  t4105 = t3975 + t4022;
  t22 = Cos(var1[4]);
  t5213 = -0.366501*t980;
  t5357 = 0. + t5213;
  t4899 = -1.*t2252*t3637;
  t4972 = t3740*t4105;
  t5022 = t4899 + t4972;
  t5402 = t3740*t3637;
  t5417 = t2252*t4105;
  t5478 = t5402 + t5417;
  t4442 = 0.930418*t980;
  t4516 = 0. + t4442;
  t1128 = -0.930418*t980;
  t1133 = 0. + t1128;
  t1395 = 0.366501*t980;
  t1414 = 0. + t1395;
  t744 = -0.04500040093286238*t653;
  t1184 = -0.07877663122399998*t1133;
  t1561 = 0.031030906668*t1414;
  t1569 = 0. + t744 + t1184 + t1561;
  t2552 = -0.091*t2252;
  t2612 = 0. + t2552;
  t3777 = -1.*t3740;
  t3864 = 1. + t3777;
  t3881 = -0.091*t3864;
  t3951 = 0. + t3881;
  t4240 = 1.296332362046933e-7*var1[18];
  t4340 = -0.07877668146182712*t653;
  t4619 = -0.045000372235*t4516;
  t4836 = t4240 + t4340 + t4619;
  t5895 = t3236*t2653*t2710;
  t5913 = t1905*t3263;
  t5937 = t5895 + t5913;
  t5962 = -1.*t2653*t1905;
  t5970 = t3236*t2710*t3263;
  t5971 = t5962 + t5970;
  t5084 = 3.2909349868922137e-7*var1[18];
  t5132 = 0.03103092645718495*t653;
  t5370 = -0.045000372235*t5357;
  t5382 = t5084 + t5132 + t5370;
  t5993 = -1.*t2252*t5937;
  t5999 = t3740*t5971;
  t6019 = t5993 + t5999;
  t5559 = -0.134322983001*t653;
  t5575 = 1. + t5559;
  t6072 = t3740*t5937;
  t6107 = t2252*t5971;
  t6115 = t6072 + t6107;
  t5618 = -0.8656776547239999*t653;
  t5631 = 1. + t5618;
  t5707 = -1.000000637725*t653;
  t5725 = 1. + t5707;
  t6279 = -1.*t3236*t22*t2653*t2252;
  t6280 = t3740*t3236*t22*t3263;
  t6293 = t6279 + t6280;
  t6303 = t3740*t3236*t22*t2653;
  t6304 = t3236*t22*t2252*t3263;
  t6314 = t6303 + t6304;
  t6533 = -1.*t22*t2653*t2252*t1905;
  t6536 = t3740*t22*t1905*t3263;
  t6540 = t6533 + t6536;
  t6553 = t3740*t22*t2653*t1905;
  t6556 = t22*t2252*t1905*t3263;
  t6560 = t6553 + t6556;
  t6702 = t2653*t2252*t2710;
  t6709 = -1.*t3740*t2710*t3263;
  t6711 = t6702 + t6709;
  t6713 = -1.*t3740*t2653*t2710;
  t6716 = -1.*t2252*t2710*t3263;
  t6718 = t6713 + t6716;
  t6815 = t2653*t1905;
  t6816 = -1.*t3236*t2710*t3263;
  t6817 = t6815 + t6816;
  t6854 = t2252*t5937;
  t6865 = t3740*t6817;
  t6867 = t6854 + t6865;
  t6869 = -1.*t2252*t6817;
  t6876 = t6072 + t6869;
  t6971 = t2653*t1905*t2710;
  t6983 = -1.*t3236*t3263;
  t6985 = t6971 + t6983;
  t7015 = t2252*t6985;
  t7017 = t7015 + t4972;
  t7021 = t3740*t6985;
  t7023 = -1.*t2252*t4105;
  t7024 = t7021 + t7023;
  t7063 = t22*t2653*t2252;
  t7064 = -1.*t3740*t22*t3263;
  t7070 = t7063 + t7064;
  t7078 = t3740*t22*t2653;
  t7081 = t22*t2252*t3263;
  t7082 = t7078 + t7081;
  t6133 = 0.340999127418*t653*t6019;
  t7130 = -1.*t3740*t5937;
  t7133 = -1.*t2252*t5971;
  t7135 = t7130 + t7133;
  t7168 = t3236*t2653;
  t7169 = t1905*t2710*t3263;
  t7175 = t7168 + t7169;
  t7177 = -1.*t2252*t6985;
  t7180 = t3740*t7175;
  t7185 = t7177 + t7180;
  t7190 = -1.*t3740*t6985;
  t7194 = -1.*t2252*t7175;
  t7195 = t7190 + t7194;
  t7233 = -1.*t22*t2653*t2252;
  t7234 = t3740*t22*t3263;
  t7235 = t7233 + t7234;
  t7237 = -1.*t3740*t22*t2653;
  t7238 = -1.*t22*t2252*t3263;
  t7241 = t7237 + t7238;
  t7271 = 0.0846680539949003*t185;
  t7272 = -0.04500040093286238*t980;
  t7276 = t7271 + t7272;
  t7279 = -0.04186915633414423*t185;
  t7280 = -0.07877668146182712*t980;
  t7281 = 1.296332362046933e-7 + t7279 + t7280;
  t7284 = 0.016492681424499736*t185;
  t7288 = 0.03103092645718495*t980;
  t7289 = 3.2909349868922137e-7 + t7284 + t7288;
  t7325 = t2252*t7175;
  t7326 = t7021 + t7325;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1569*t1905*t22 + t2612*t3637 + t3951*t4105 + t4836*t5022 + t5382*t5478 - 0.04501*(t1133*t5022 + t1414*t5478 - 1.*t1905*t22*t5725) - 0.086806*(-1.*t1905*t22*t5357 + t5478*t5575 + 0.340999127418*t5022*t653) - 0.123098*(-1.*t1905*t22*t4516 + t5022*t5631 + 0.340999127418*t5478*t653);
  p_output1[10]=t1569*t22*t3236 + t2612*t5937 + t3951*t5971 + t4836*t6019 + t5382*t6115 - 0.04501*(t22*t3236*t5725 + t1133*t6019 + t1414*t6115) - 0.086806*(t22*t3236*t5357 + t5575*t6115 + t6133) - 0.123098*(t22*t3236*t4516 + t5631*t6019 + 0.340999127418*t6115*t653);
  p_output1[11]=0;
  p_output1[12]=t22*t2612*t2653*t3236 - 1.*t1569*t2710*t3236 + t22*t3236*t3263*t3951 + t4836*t6293 + t5382*t6314 - 0.04501*(-1.*t2710*t3236*t5725 + t1133*t6293 + t1414*t6314) - 0.086806*(-1.*t2710*t3236*t5357 + t5575*t6314 + 0.340999127418*t6293*t653) - 0.123098*(-1.*t2710*t3236*t4516 + t5631*t6293 + 0.340999127418*t6314*t653);
  p_output1[13]=t1905*t22*t2612*t2653 - 1.*t1569*t1905*t2710 + t1905*t22*t3263*t3951 + t4836*t6540 + t5382*t6560 - 0.04501*(-1.*t1905*t2710*t5725 + t1133*t6540 + t1414*t6560) - 0.086806*(-1.*t1905*t2710*t5357 + 0.340999127418*t653*t6540 + t5575*t6560) - 0.123098*(-1.*t1905*t2710*t4516 + t5631*t6540 + 0.340999127418*t653*t6560);
  p_output1[14]=-1.*t1569*t22 - 1.*t2612*t2653*t2710 - 1.*t2710*t3263*t3951 + t4836*t6711 + t5382*t6718 - 0.04501*(-1.*t22*t5725 + t1133*t6711 + t1414*t6718) - 0.086806*(-1.*t22*t5357 + 0.340999127418*t653*t6711 + t5575*t6718) - 0.123098*(-1.*t22*t4516 + t5631*t6711 + 0.340999127418*t653*t6718);
  p_output1[15]=t3951*t5937 + t2612*t6817 + t5382*t6867 + t4836*t6876 - 0.04501*(t1414*t6867 + t1133*t6876) - 0.123098*(0.340999127418*t653*t6867 + t5631*t6876) - 0.086806*(t5575*t6867 + 0.340999127418*t653*t6876);
  p_output1[16]=t2612*t4105 + t3951*t6985 + t5382*t7017 + t4836*t7024 - 0.04501*(t1414*t7017 + t1133*t7024) - 0.123098*(0.340999127418*t653*t7017 + t5631*t7024) - 0.086806*(t5575*t7017 + 0.340999127418*t653*t7024);
  p_output1[17]=-1.*t22*t2612*t3263 + t22*t2653*t3951 + t5382*t7070 + t4836*t7082 - 0.04501*(t1414*t7070 + t1133*t7082) - 0.123098*(0.340999127418*t653*t7070 + t5631*t7082) - 0.086806*(t5575*t7070 + 0.340999127418*t653*t7082);
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
  p_output1[51]=-0.091*t3740*t5937 - 0.091*t2252*t5971 + t5382*t6019 + t4836*t7135 - 0.04501*(t1414*t6019 + t1133*t7135) - 0.123098*(t6133 + t5631*t7135) - 0.086806*(t5575*t6019 + 0.340999127418*t653*t7135);
  p_output1[52]=-0.091*t3740*t6985 - 0.091*t2252*t7175 + t5382*t7185 + t4836*t7195 - 0.04501*(t1414*t7185 + t1133*t7195) - 0.123098*(0.340999127418*t653*t7185 + t5631*t7195) - 0.086806*(t5575*t7185 + 0.340999127418*t653*t7195);
  p_output1[53]=-0.091*t22*t2252*t3263 - 0.091*t22*t2653*t3740 + t5382*t7235 + t4836*t7241 - 0.04501*(t1414*t7235 + t1133*t7241) - 0.123098*(0.340999127418*t653*t7235 + t5631*t7241) - 0.086806*(t5575*t7235 + 0.340999127418*t653*t7241);
  p_output1[54]=t22*t3236*t7276 + t6019*t7281 + t6115*t7289 - 0.04501*(-0.930418*t185*t6019 + 0.366501*t185*t6115 - 1.000000637725*t22*t3236*t980) - 0.086806*(-0.366501*t185*t22*t3236 + 0.340999127418*t6019*t980 - 0.134322983001*t6115*t980) - 0.123098*(0.930418*t185*t22*t3236 - 0.8656776547239999*t6019*t980 + 0.340999127418*t6115*t980);
  p_output1[55]=t1905*t22*t7276 + t7185*t7281 + t7289*t7326 - 0.04501*(-0.930418*t185*t7185 + 0.366501*t185*t7326 - 1.000000637725*t1905*t22*t980) - 0.086806*(-0.366501*t185*t1905*t22 + 0.340999127418*t7185*t980 - 0.134322983001*t7326*t980) - 0.123098*(0.930418*t185*t1905*t22 - 0.8656776547239999*t7185*t980 + 0.340999127418*t7326*t980);
  p_output1[56]=-1.*t2710*t7276 + t7235*t7281 + t7082*t7289 - 0.04501*(0.366501*t185*t7082 - 0.930418*t185*t7235 + 1.000000637725*t2710*t980) - 0.123098*(-0.930418*t185*t2710 + 0.340999127418*t7082*t980 - 0.8656776547239999*t7235*t980) - 0.086806*(0.366501*t185*t2710 - 0.134322983001*t7082*t980 + 0.340999127418*t7235*t980);
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



void Jp_right_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
