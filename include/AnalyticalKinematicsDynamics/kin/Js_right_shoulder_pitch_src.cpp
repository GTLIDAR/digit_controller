/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_right_shoulder_pitch_src.h"

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
  double t137;
  double t155;
  double t307;
  double t333;
  double t651;
  double t691;
  double t682;
  double t695;
  double t717;
  double t735;
  double t783;
  double t810;
  double t1149;
  double t1113;
  double t1271;
  double t1276;
  double t867;
  double t872;
  double t874;
  double t897;
  double t899;
  double t908;
  double t1283;
  double t1292;
  double t1294;
  double t1315;
  double t1317;
  double t1335;
  double t1455;
  double t1475;
  double t1476;
  double t1253;
  double t1300;
  double t1356;
  double t1365;
  double t1371;
  double t1377;
  double t1378;
  double t1522;
  double t1526;
  double t1539;
  double t1136;
  double t1168;
  double t1184;
  double t1427;
  double t1428;
  double t1446;
  double t72;
  double t1516;
  double t1518;
  double t1519;
  double t1824;
  double t1826;
  double t1827;
  double t1681;
  double t1791;
  double t1795;
  double t1220;
  double t1235;
  double t1240;
  double t1982;
  double t1988;
  double t2011;
  double t2027;
  double t1970;
  double t1974;
  double t1978;
  t137 = Cos(var1[3]);
  t155 = Sin(var1[3]);
  t307 = Cos(var1[4]);
  t333 = Sin(var1[4]);
  t651 = Cos(var1[5]);
  t691 = Sin(var1[5]);
  t682 = t137*t651*t333;
  t695 = t155*t691;
  t717 = t682 + t695;
  t735 = -1.*t651*t155;
  t783 = t137*t333*t691;
  t810 = t735 + t783;
  t1149 = Cos(var1[24]);
  t1113 = Sin(var1[24]);
  t1271 = -1.*t1149;
  t1276 = 1. + t1271;
  t867 = t651*t155*t333;
  t872 = -1.*t137*t691;
  t874 = t867 + t872;
  t897 = t137*t651;
  t899 = t155*t333*t691;
  t908 = t897 + t899;
  t1283 = 0.4*t1276;
  t1292 = -0.12*t1113;
  t1294 = 0. + t1283 + t1292;
  t1315 = -0.12*t1276;
  t1317 = -0.4*t1113;
  t1335 = 0. + t1315 + t1317;
  t1455 = t1294*t874;
  t1475 = t1335*t908;
  t1476 = 0. + var1[1] + t1455 + t1475;
  t1253 = -1.*var1[2];
  t1300 = -1.*t307*t651*t1294;
  t1356 = -1.*t307*t1335*t691;
  t1365 = 0. + t1253 + t1300 + t1356;
  t1371 = -1.*t1113*t874;
  t1377 = t1149*t908;
  t1378 = t1371 + t1377;
  t1522 = t1149*t874;
  t1526 = t1113*t908;
  t1539 = t1522 + t1526;
  t1136 = -1.*t1113*t717;
  t1168 = t1149*t810;
  t1184 = t1136 + t1168;
  t1427 = -1.*t307*t651*t1113;
  t1428 = t1149*t307*t691;
  t1446 = t1427 + t1428;
  t72 = -1.*var1[0];
  t1516 = t1149*t307*t651;
  t1518 = t307*t1113*t691;
  t1519 = t1516 + t1518;
  t1824 = -1.*t1294*t717;
  t1826 = -1.*t1335*t810;
  t1827 = 0. + t72 + t1824 + t1826;
  t1681 = t307*t651*t1294;
  t1791 = t307*t1335*t691;
  t1795 = 0. + var1[2] + t1681 + t1791;
  t1220 = t1149*t717;
  t1235 = t1113*t810;
  t1240 = t1220 + t1235;
  t1982 = -1.*var1[1];
  t1988 = -1.*t1294*t874;
  t2011 = -1.*t1335*t908;
  t2027 = 0. + t1982 + t1988 + t2011;
  t1970 = t1294*t717;
  t1974 = t1335*t810;
  t1978 = 0. + var1[0] + t1970 + t1974;
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
  p_output1[19]=t72;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t137*var1[2];
  p_output1[25]=-1.*t155*var1[2];
  p_output1[26]=t137*var1[0] + t155*var1[1];
  p_output1[27]=-1.*t155;
  p_output1[28]=t137;
  p_output1[29]=0;
  p_output1[30]=-1.*t333*var1[1] - 1.*t155*t307*var1[2];
  p_output1[31]=t333*var1[0] + t137*t307*var1[2];
  p_output1[32]=t155*t307*var1[0] - 1.*t137*t307*var1[1];
  p_output1[33]=t137*t307;
  p_output1[34]=t155*t307;
  p_output1[35]=-1.*t333;
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
  p_output1[144]=-0.12*t717 - 0.4*t810 + t333*var1[1] + t155*t307*var1[2];
  p_output1[145]=-0.12*t874 - 0.4*t908 - 1.*t333*var1[0] - 1.*t137*t307*var1[2];
  p_output1[146]=-0.12*t307*t651 - 0.4*t307*t691 - 1.*t155*t307*var1[0] + t137*t307*var1[1];
  p_output1[147]=0. - 1.*t137*t307;
  p_output1[148]=0. - 1.*t155*t307;
  p_output1[149]=0. + t333;
  p_output1[150]=0.005906*t1184 + 0.056191*t1240 - 0.994522*(t1365*t1378 + t1446*t1476) + 0.104528*(t1476*t1519 + t1365*t1539) + 0.385267*t137*t307;
  p_output1[151]=0.005906*t1378 + 0.056191*t1539 - 0.994522*(t1184*t1795 + t1446*t1827) + 0.104528*(t1240*t1795 + t1519*t1827) + 0.385267*t155*t307;
  p_output1[152]=0.005906*t1446 + 0.056191*t1519 - 0.994522*(t1378*t1978 + t1184*t2027) + 0.104528*(t1539*t1978 + t1240*t2027) - 0.385267*t333;
  p_output1[153]=0. - 0.994522*t1184 + 0.104528*t1240;
  p_output1[154]=0. - 0.994522*t1378 + 0.104528*t1539;
  p_output1[155]=0. - 0.994522*t1446 + 0.104528*t1519;
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



void Js_right_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
