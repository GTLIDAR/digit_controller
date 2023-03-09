/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_shoulder_pitch_joint_right_src.h"

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
  double t21;
  double t107;
  double t306;
  double t374;
  double t569;
  double t599;
  double t584;
  double t605;
  double t607;
  double t631;
  double t647;
  double t652;
  double t1065;
  double t1047;
  double t1173;
  double t1176;
  double t715;
  double t724;
  double t728;
  double t774;
  double t802;
  double t806;
  double t1192;
  double t1193;
  double t1205;
  double t1236;
  double t1245;
  double t1252;
  double t1360;
  double t1391;
  double t1393;
  double t1170;
  double t1227;
  double t1263;
  double t1266;
  double t1287;
  double t1293;
  double t1302;
  double t1490;
  double t1491;
  double t1492;
  double t1064;
  double t1087;
  double t1146;
  double t1347;
  double t1354;
  double t1357;
  double t20;
  double t1456;
  double t1462;
  double t1467;
  double t1655;
  double t1657;
  double t1658;
  double t1596;
  double t1625;
  double t1626;
  double t1153;
  double t1158;
  double t1160;
  double t1821;
  double t1830;
  double t1834;
  double t1836;
  double t1773;
  double t1789;
  double t1802;
  t21 = Cos(var1[3]);
  t107 = Sin(var1[3]);
  t306 = Cos(var1[4]);
  t374 = Sin(var1[4]);
  t569 = Cos(var1[5]);
  t599 = Sin(var1[5]);
  t584 = t21*t569*t374;
  t605 = t107*t599;
  t607 = t584 + t605;
  t631 = -1.*t569*t107;
  t647 = t21*t374*t599;
  t652 = t631 + t647;
  t1065 = Cos(var1[24]);
  t1047 = Sin(var1[24]);
  t1173 = -1.*t1065;
  t1176 = 1. + t1173;
  t715 = t569*t107*t374;
  t724 = -1.*t21*t599;
  t728 = t715 + t724;
  t774 = t21*t569;
  t802 = t107*t374*t599;
  t806 = t774 + t802;
  t1192 = 0.4*t1176;
  t1193 = -0.12*t1047;
  t1205 = 0. + t1192 + t1193;
  t1236 = -0.12*t1176;
  t1245 = -0.4*t1047;
  t1252 = 0. + t1236 + t1245;
  t1360 = t1205*t728;
  t1391 = t1252*t806;
  t1393 = 0. + var1[1] + t1360 + t1391;
  t1170 = -1.*var1[2];
  t1227 = -1.*t306*t569*t1205;
  t1263 = -1.*t306*t1252*t599;
  t1266 = 0. + t1170 + t1227 + t1263;
  t1287 = -1.*t1047*t728;
  t1293 = t1065*t806;
  t1302 = t1287 + t1293;
  t1490 = t1065*t728;
  t1491 = t1047*t806;
  t1492 = t1490 + t1491;
  t1064 = -1.*t1047*t607;
  t1087 = t1065*t652;
  t1146 = t1064 + t1087;
  t1347 = -1.*t306*t569*t1047;
  t1354 = t1065*t306*t599;
  t1357 = t1347 + t1354;
  t20 = -1.*var1[0];
  t1456 = t1065*t306*t569;
  t1462 = t306*t1047*t599;
  t1467 = t1456 + t1462;
  t1655 = -1.*t1205*t607;
  t1657 = -1.*t1252*t652;
  t1658 = 0. + t20 + t1655 + t1657;
  t1596 = t306*t569*t1205;
  t1625 = t306*t1252*t599;
  t1626 = 0. + var1[2] + t1596 + t1625;
  t1153 = t1065*t607;
  t1158 = t1047*t652;
  t1160 = t1153 + t1158;
  t1821 = -1.*var1[1];
  t1830 = -1.*t1205*t728;
  t1834 = -1.*t1252*t806;
  t1836 = 0. + t1821 + t1830 + t1834;
  t1773 = t1205*t607;
  t1789 = t1252*t652;
  t1802 = 0. + var1[0] + t1773 + t1789;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t20;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t21*var1[2];
  p_output1[25]=-1.*t107*var1[2];
  p_output1[26]=t21*var1[0] + t107*var1[1];
  p_output1[27]=-1.*t107;
  p_output1[28]=t21;
  p_output1[29]=0;
  p_output1[30]=-1.*t374*var1[1] - 1.*t107*t306*var1[2];
  p_output1[31]=t374*var1[0] + t21*t306*var1[2];
  p_output1[32]=t107*t306*var1[0] - 1.*t21*t306*var1[1];
  p_output1[33]=t21*t306;
  p_output1[34]=t107*t306;
  p_output1[35]=-1.*t374;
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
  p_output1[144]=-0.12*t607 - 0.4*t652 + t374*var1[1] + t107*t306*var1[2];
  p_output1[145]=-0.12*t728 - 0.4*t806 - 1.*t374*var1[0] - 1.*t21*t306*var1[2];
  p_output1[146]=-0.12*t306*t569 - 0.4*t306*t599 - 1.*t107*t306*var1[0] + t21*t306*var1[1];
  p_output1[147]=0. - 1.*t21*t306;
  p_output1[148]=0. - 1.*t107*t306;
  p_output1[149]=0. + t374;
  p_output1[150]=0.005906*t1146 + 0.056191*t1160 - 0.994522*(t1266*t1302 + t1357*t1393) + 0.104528*(t1393*t1467 + t1266*t1492) + 0.385267*t21*t306;
  p_output1[151]=0.005906*t1302 + 0.056191*t1492 - 0.994522*(t1146*t1626 + t1357*t1658) + 0.104528*(t1160*t1626 + t1467*t1658) + 0.385267*t107*t306;
  p_output1[152]=0.005906*t1357 + 0.056191*t1467 - 0.994522*(t1302*t1802 + t1146*t1836) + 0.104528*(t1492*t1802 + t1160*t1836) - 0.385267*t374;
  p_output1[153]=0. - 0.994522*t1146 + 0.104528*t1160;
  p_output1[154]=0. - 0.994522*t1302 + 0.104528*t1492;
  p_output1[155]=0. - 0.994522*t1357 + 0.104528*t1467;
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



void Js_shoulder_pitch_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
