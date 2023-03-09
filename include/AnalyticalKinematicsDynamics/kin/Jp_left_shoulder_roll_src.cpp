/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_left_shoulder_roll_src.h"

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
  double t408;
  double t897;
  double t906;
  double t1076;
  double t1198;
  double t1626;
  double t1521;
  double t1531;
  double t1651;
  double t1596;
  double t1702;
  double t1706;
  double t1752;
  double t1793;
  double t1802;
  double t374;
  double t1149;
  double t1433;
  double t1511;
  double t1728;
  double t1748;
  double t1750;
  double t2055;
  double t2101;
  double t2131;
  double t2172;
  double t2194;
  double t2202;
  double t3120;
  double t3146;
  double t3155;
  double t2283;
  double t3263;
  double t3283;
  double t3351;
  double t1836;
  double t2214;
  double t2223;
  double t2227;
  double t3514;
  double t3524;
  double t3529;
  double t3554;
  double t3569;
  double t3648;
  double t3655;
  double t3663;
  t408 = Sin(var1[3]);
  t897 = Cos(var1[13]);
  t906 = -1.*t897;
  t1076 = 1. + t906;
  t1198 = Sin(var1[13]);
  t1626 = Cos(var1[3]);
  t1521 = Cos(var1[5]);
  t1531 = Sin(var1[4]);
  t1651 = Sin(var1[5]);
  t1596 = -1.*t1521*t408*t1531;
  t1702 = t1626*t1651;
  t1706 = t1596 + t1702;
  t1752 = -1.*t1626*t1521;
  t1793 = -1.*t408*t1531*t1651;
  t1802 = t1752 + t1793;
  t374 = Cos(var1[4]);
  t1149 = 0.4*t1076;
  t1433 = 0.12*t1198;
  t1511 = 0. + t1149 + t1433;
  t1728 = 0.12*t1076;
  t1748 = -0.4*t1198;
  t1750 = 0. + t1728 + t1748;
  t2055 = t1626*t1521*t1531;
  t2101 = t408*t1651;
  t2131 = t2055 + t2101;
  t2172 = -1.*t1521*t408;
  t2194 = t1626*t1531*t1651;
  t2202 = t2172 + t2194;
  t3120 = t1521*t408;
  t3146 = -1.*t1626*t1531*t1651;
  t3155 = t3120 + t3146;
  t2283 = t897*t2131;
  t3263 = t1521*t408*t1531;
  t3283 = -1.*t1626*t1651;
  t3351 = t3263 + t3283;
  t1836 = t897*t1802;
  t2214 = -1.*t1198*t2131;
  t2223 = t897*t2202;
  t2227 = t2214 + t2223;
  t3514 = 0.12*t897;
  t3524 = 0.4*t1198;
  t3529 = t3514 + t3524;
  t3554 = -0.4*t897;
  t3569 = t3554 + t1433;
  t3648 = t1626*t1521;
  t3655 = t408*t1531*t1651;
  t3663 = t3648 + t3655;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1511*t1706 + t1750*t1802 + 0.11689*(-1.*t1198*t1706 + t1836) + 0.02441*t374*t408 + 0.400559*(t1198*t1802 + t1706*t897);
  p_output1[10]=t1511*t2131 + t1750*t2202 + 0.11689*t2227 + 0.400559*(t1198*t2202 + t2283) - 0.02441*t1626*t374;
  p_output1[11]=0;
  p_output1[12]=0.02441*t1531*t1626 + t1511*t1521*t1626*t374 + t1626*t1651*t1750*t374 + 0.400559*(t1198*t1626*t1651*t374 + t1521*t1626*t374*t897) + 0.11689*(-1.*t1198*t1521*t1626*t374 + t1626*t1651*t374*t897);
  p_output1[13]=0.02441*t1531*t408 + t1511*t1521*t374*t408 + t1651*t1750*t374*t408 + 0.400559*(t1198*t1651*t374*t408 + t1521*t374*t408*t897) + 0.11689*(-1.*t1198*t1521*t374*t408 + t1651*t374*t408*t897);
  p_output1[14]=-1.*t1511*t1521*t1531 - 1.*t1531*t1651*t1750 + 0.02441*t374 + 0.400559*(-1.*t1198*t1531*t1651 - 1.*t1521*t1531*t897) + 0.11689*(t1198*t1521*t1531 - 1.*t1531*t1651*t897);
  p_output1[15]=t1750*t2131 + t1511*t3155 + 0.11689*(t2283 - 1.*t1198*t3155) + 0.400559*(t1198*t2131 + t3155*t897);
  p_output1[16]=t1511*t1802 + t1750*t3351 + 0.400559*(t1836 + t1198*t3351) + 0.11689*(-1.*t1198*t1802 + t3351*t897);
  p_output1[17]=-1.*t1511*t1651*t374 + t1521*t1750*t374 + 0.11689*(t1198*t1651*t374 + t1521*t374*t897) + 0.400559*(t1198*t1521*t374 - 1.*t1651*t374*t897);
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
  p_output1[39]=0.400559*t2227 + t2131*t3529 + t2202*t3569 + 0.11689*(-1.*t1198*t2202 - 1.*t2131*t897);
  p_output1[40]=t3351*t3529 + t3569*t3663 + 0.11689*(-1.*t1198*t3663 - 1.*t3351*t897) + 0.400559*(-1.*t1198*t3351 + t3663*t897);
  p_output1[41]=t1521*t3529*t374 + t1651*t3569*t374 + 0.11689*(-1.*t1198*t1651*t374 - 1.*t1521*t374*t897) + 0.400559*(-1.*t1198*t1521*t374 + t1651*t374*t897);
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
}



void Jp_left_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
