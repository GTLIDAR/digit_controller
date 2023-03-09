/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_shoulder_pitch_joint_left_src.h"

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
  double t259;
  double t276;
  double t334;
  double t343;
  double t566;
  double t617;
  double t578;
  double t639;
  double t655;
  double t689;
  double t699;
  double t700;
  double t1226;
  double t1176;
  double t1378;
  double t1389;
  double t834;
  double t837;
  double t841;
  double t856;
  double t880;
  double t882;
  double t1394;
  double t1412;
  double t1414;
  double t1436;
  double t1478;
  double t1482;
  double t1602;
  double t1617;
  double t1620;
  double t1368;
  double t1427;
  double t1503;
  double t1515;
  double t1520;
  double t1538;
  double t1543;
  double t1673;
  double t1683;
  double t1691;
  double t1182;
  double t1269;
  double t1271;
  double t1575;
  double t1595;
  double t1596;
  double t115;
  double t1653;
  double t1655;
  double t1662;
  double t1823;
  double t1836;
  double t1837;
  double t1803;
  double t1805;
  double t1808;
  double t1312;
  double t1337;
  double t1339;
  double t2007;
  double t2017;
  double t2018;
  double t2031;
  double t1958;
  double t1966;
  double t2003;
  t259 = Cos(var1[3]);
  t276 = Sin(var1[3]);
  t334 = Cos(var1[4]);
  t343 = Sin(var1[4]);
  t566 = Cos(var1[5]);
  t617 = Sin(var1[5]);
  t578 = t259*t566*t343;
  t639 = t276*t617;
  t655 = t578 + t639;
  t689 = -1.*t566*t276;
  t699 = t259*t343*t617;
  t700 = t689 + t699;
  t1226 = Cos(var1[13]);
  t1176 = Sin(var1[13]);
  t1378 = -1.*t1226;
  t1389 = 1. + t1378;
  t834 = t566*t276*t343;
  t837 = -1.*t259*t617;
  t841 = t834 + t837;
  t856 = t259*t566;
  t880 = t276*t343*t617;
  t882 = t856 + t880;
  t1394 = 0.4*t1389;
  t1412 = 0.12*t1176;
  t1414 = 0. + t1394 + t1412;
  t1436 = 0.12*t1389;
  t1478 = -0.4*t1176;
  t1482 = 0. + t1436 + t1478;
  t1602 = t1414*t841;
  t1617 = t1482*t882;
  t1620 = 0. + var1[1] + t1602 + t1617;
  t1368 = -1.*var1[2];
  t1427 = -1.*t334*t566*t1414;
  t1503 = -1.*t334*t1482*t617;
  t1515 = 0. + t1368 + t1427 + t1503;
  t1520 = -1.*t1176*t841;
  t1538 = t1226*t882;
  t1543 = t1520 + t1538;
  t1673 = t1226*t841;
  t1683 = t1176*t882;
  t1691 = t1673 + t1683;
  t1182 = -1.*t1176*t655;
  t1269 = t1226*t700;
  t1271 = t1182 + t1269;
  t1575 = -1.*t334*t566*t1176;
  t1595 = t1226*t334*t617;
  t1596 = t1575 + t1595;
  t115 = -1.*var1[0];
  t1653 = t1226*t334*t566;
  t1655 = t334*t1176*t617;
  t1662 = t1653 + t1655;
  t1823 = -1.*t1414*t655;
  t1836 = -1.*t1482*t700;
  t1837 = 0. + t115 + t1823 + t1836;
  t1803 = t334*t566*t1414;
  t1805 = t334*t1482*t617;
  t1808 = 0. + var1[2] + t1803 + t1805;
  t1312 = t1226*t655;
  t1337 = t1176*t700;
  t1339 = t1312 + t1337;
  t2007 = -1.*var1[1];
  t2017 = -1.*t1414*t841;
  t2018 = -1.*t1482*t882;
  t2031 = 0. + t2007 + t2017 + t2018;
  t1958 = t1414*t655;
  t1966 = t1482*t700;
  t2003 = 0. + var1[0] + t1958 + t1966;
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
  p_output1[19]=t115;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t259*var1[2];
  p_output1[25]=-1.*t276*var1[2];
  p_output1[26]=t259*var1[0] + t276*var1[1];
  p_output1[27]=-1.*t276;
  p_output1[28]=t259;
  p_output1[29]=0;
  p_output1[30]=-1.*t343*var1[1] - 1.*t276*t334*var1[2];
  p_output1[31]=t343*var1[0] + t259*t334*var1[2];
  p_output1[32]=t276*t334*var1[0] - 1.*t259*t334*var1[1];
  p_output1[33]=t259*t334;
  p_output1[34]=t276*t334;
  p_output1[35]=-1.*t343;
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
  p_output1[78]=0.12*t655 - 0.4*t700 + t343*var1[1] + t276*t334*var1[2];
  p_output1[79]=0.12*t841 - 0.4*t882 - 1.*t343*var1[0] - 1.*t259*t334*var1[2];
  p_output1[80]=0.12*t334*t566 - 0.4*t334*t617 - 1.*t276*t334*var1[0] + t259*t334*var1[1];
  p_output1[81]=0. - 1.*t259*t334;
  p_output1[82]=0. - 1.*t276*t334;
  p_output1[83]=0. + t343;
  p_output1[84]=0.005906*t1271 - 0.056191*t1339 + 0.994522*(t1515*t1543 + t1596*t1620) + 0.104528*(t1620*t1662 + t1515*t1691) - 0.385267*t259*t334;
  p_output1[85]=0.005906*t1543 - 0.056191*t1691 + 0.994522*(t1271*t1808 + t1596*t1837) + 0.104528*(t1339*t1808 + t1662*t1837) - 0.385267*t276*t334;
  p_output1[86]=0.005906*t1596 - 0.056191*t1662 + 0.994522*(t1543*t2003 + t1271*t2031) + 0.104528*(t1691*t2003 + t1339*t2031) + 0.385267*t343;
  p_output1[87]=0. + 0.994522*t1271 + 0.104528*t1339;
  p_output1[88]=0. + 0.994522*t1543 + 0.104528*t1691;
  p_output1[89]=0. + 0.994522*t1596 + 0.104528*t1662;
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



void Js_shoulder_pitch_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
