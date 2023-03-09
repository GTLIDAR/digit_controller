/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_right_hip_roll_src.h"

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
  double t455;
  double t534;
  double t451;
  double t923;
  double t1417;
  double t1433;
  double t528;
  double t771;
  double t778;
  double t1505;
  double t327;
  double t1836;
  double t1658;
  double t1763;
  double t2525;
  double t2646;
  double t2667;
  double t786;
  double t1513;
  double t1520;
  double t1876;
  double t1910;
  double t1962;
  double t2196;
  double t2671;
  double t2677;
  double t2787;
  double t2789;
  double t2893;
  double t2901;
  double t2913;
  double t3029;
  double t3109;
  double t3160;
  double t3629;
  double t3651;
  double t3684;
  double t3698;
  double t3705;
  double t3780;
  double t3870;
  double t3946;
  double t3947;
  double t3976;
  double t4036;
  double t4091;
  double t4121;
  double t4127;
  double t4154;
  double t3691;
  double t4181;
  double t4231;
  double t4281;
  double t4295;
  double t4299;
  double t3601;
  double t3617;
  double t4448;
  double t4471;
  double t4473;
  double t4900;
  double t5058;
  t455 = Cos(var1[17]);
  t534 = Sin(var1[17]);
  t451 = Cos(var1[5]);
  t923 = 0.930418*t455;
  t1417 = -0.366501*t534;
  t1433 = t923 + t1417;
  t528 = 0.366501*t455;
  t771 = 0.930418*t534;
  t778 = t528 + t771;
  t1505 = Sin(var1[5]);
  t327 = Sin(var1[3]);
  t1836 = t451*t1433;
  t1658 = Cos(var1[3]);
  t1763 = Sin(var1[4]);
  t2525 = -0.366501*t455;
  t2646 = -0.930418*t534;
  t2667 = t2525 + t2646;
  t786 = t451*t778;
  t1513 = -1.*t1433*t1505;
  t1520 = 0. + t786 + t1513;
  t1876 = t778*t1505;
  t1910 = 0. + t1836 + t1876;
  t1962 = t1763*t1910;
  t2196 = 0. + t1962;
  t2671 = -1.*t2667*t1505;
  t2677 = 0. + t1836 + t2671;
  t2787 = t451*t2667;
  t2789 = t1433*t1505;
  t2893 = 0. + t2787 + t2789;
  t2901 = t1763*t2893;
  t2913 = 0. + t2901;
  t3029 = Cos(var1[4]);
  t3109 = -1.*t3029;
  t3160 = 0. + t3109;
  t3629 = t3029*t2893;
  t3651 = 0. + t3629;
  t3684 = 0. + t1763;
  t3698 = -0.001745*t455;
  t3705 = 0.0009450000000000014*t534;
  t3780 = 0. + t3698 + t3705;
  t3870 = t451*t3780;
  t3946 = -1.*t455;
  t3947 = 1. + t3946;
  t3976 = -0.091*t3947;
  t4036 = -0.091945*t455;
  t4091 = -0.001745*t534;
  t4121 = 0. + t3976 + t4036 + t4091;
  t4127 = t4121*t1505;
  t4154 = 0. + t3870 + t4127;
  t3691 = 0.03244*t1763;
  t4181 = t3029*t4154;
  t4231 = 0. + t3691 + t4181;
  t4281 = -0.03244*t3029;
  t4295 = t1763*t4154;
  t4299 = 0. + t4281 + t4295;
  t3601 = t3029*t1910;
  t3617 = 0. + t3601;
  t4448 = t451*t4121;
  t4471 = -1.*t3780*t1505;
  t4473 = 0. + t4448 + t4471;
  t4900 = t2677*t4473;
  t5058 = -1.*t1520*t4473;
  p_output1[0]=0. + t1658*t2196 - 1.*t1520*t327;
  p_output1[1]=0. + t1658*t2913 - 1.*t2677*t327;
  p_output1[2]=0. + t1658*t3160;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1520*t1658 + t2196*t327;
  p_output1[7]=0. + t1658*t2677 + t2913*t327;
  p_output1[8]=0. + t3160*t327;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3617;
  p_output1[13]=t3651;
  p_output1[14]=t3684;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3651*(0. + t3684*t4231 + t3160*t4299) + t3684*(-1.*t3651*t4231 - 1.*t2913*t4299 - 1.*t2677*t4473);
  p_output1[19]=t3617*(0. - 1.*t3684*t4231 - 1.*t3160*t4299) + t3684*(t3617*t4231 + t2196*t4299 + t1520*t4473);
  p_output1[20]=0. + t3617*(t3651*t4231 + t2913*t4299 + t4900) + t3651*(-1.*t3617*t4231 - 1.*t2196*t4299 + t5058);
  p_output1[21]=t3617;
  p_output1[22]=t3651;
  p_output1[23]=t3684;
  p_output1[24]=0. + 0.03244*t2677;
  p_output1[25]=0. - 0.03244*t1520;
  p_output1[26]=0. + t1520*(0. + t2893*t4154 + t4900) + t2677*(0. - 1.*t1910*t4154 + t5058);
  p_output1[27]=t1520;
  p_output1[28]=t2677;
  p_output1[29]=0.;
  p_output1[30]=0. - 1.*(0. - 1.*t2667*t3780 - 1.*t1433*t4121);
  p_output1[31]=0. - 1.*(0. + t1433*t3780 + t4121*t778);
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0.;
  p_output1[35]=-1.;
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
  p_output1[102]=0.00023970076500000326;
  p_output1[103]=-0.0019699228550000003;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
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



void Jb_right_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
