/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_shoulder_roll_joint_left_src.h"

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
  double t231;
  double t516;
  double t649;
  double t674;
  double t693;
  double t2120;
  double t1753;
  double t2016;
  double t2149;
  double t2074;
  double t2290;
  double t2321;
  double t2362;
  double t2406;
  double t2417;
  double t227;
  double t679;
  double t1379;
  double t1470;
  double t2337;
  double t2343;
  double t2348;
  double t2598;
  double t2602;
  double t2604;
  double t2608;
  double t2618;
  double t2671;
  double t2996;
  double t2999;
  double t3006;
  double t2694;
  double t3081;
  double t3087;
  double t3090;
  double t2447;
  double t2674;
  double t2677;
  double t2678;
  double t3207;
  double t3218;
  double t3234;
  double t3243;
  double t3248;
  double t3269;
  double t3270;
  double t3271;
  t231 = Sin(var1[3]);
  t516 = Cos(var1[13]);
  t649 = -1.*t516;
  t674 = 1. + t649;
  t693 = Sin(var1[13]);
  t2120 = Cos(var1[3]);
  t1753 = Cos(var1[5]);
  t2016 = Sin(var1[4]);
  t2149 = Sin(var1[5]);
  t2074 = -1.*t1753*t231*t2016;
  t2290 = t2120*t2149;
  t2321 = t2074 + t2290;
  t2362 = -1.*t2120*t1753;
  t2406 = -1.*t231*t2016*t2149;
  t2417 = t2362 + t2406;
  t227 = Cos(var1[4]);
  t679 = 0.4*t674;
  t1379 = 0.12*t693;
  t1470 = 0. + t679 + t1379;
  t2337 = 0.12*t674;
  t2343 = -0.4*t693;
  t2348 = 0. + t2337 + t2343;
  t2598 = t2120*t1753*t2016;
  t2602 = t231*t2149;
  t2604 = t2598 + t2602;
  t2608 = -1.*t1753*t231;
  t2618 = t2120*t2016*t2149;
  t2671 = t2608 + t2618;
  t2996 = t1753*t231;
  t2999 = -1.*t2120*t2016*t2149;
  t3006 = t2996 + t2999;
  t2694 = t516*t2604;
  t3081 = t1753*t231*t2016;
  t3087 = -1.*t2120*t2149;
  t3090 = t3081 + t3087;
  t2447 = t516*t2417;
  t2674 = -1.*t693*t2604;
  t2677 = t516*t2671;
  t2678 = t2674 + t2677;
  t3207 = 0.12*t516;
  t3218 = 0.4*t693;
  t3234 = t3207 + t3218;
  t3243 = -0.4*t516;
  t3248 = t3243 + t1379;
  t3269 = t2120*t1753;
  t3270 = t231*t2016*t2149;
  t3271 = t3269 + t3270;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.001*t227*t231 + t1470*t2321 + t2348*t2417 + 0.12*(t2447 - 1.*t2321*t693) + 0.4*(t2321*t516 + t2417*t693);
  p_output1[10]=-0.001*t2120*t227 + t1470*t2604 + t2348*t2671 + 0.12*t2678 + 0.4*(t2694 + t2671*t693);
  p_output1[11]=0;
  p_output1[12]=0.001*t2016*t2120 + t1470*t1753*t2120*t227 + t2120*t2149*t227*t2348 + 0.12*(t2120*t2149*t227*t516 - 1.*t1753*t2120*t227*t693) + 0.4*(t1753*t2120*t227*t516 + t2120*t2149*t227*t693);
  p_output1[13]=0.001*t2016*t231 + t1470*t1753*t227*t231 + t2149*t227*t231*t2348 + 0.12*(t2149*t227*t231*t516 - 1.*t1753*t227*t231*t693) + 0.4*(t1753*t227*t231*t516 + t2149*t227*t231*t693);
  p_output1[14]=-1.*t1470*t1753*t2016 + 0.001*t227 - 1.*t2016*t2149*t2348 + 0.12*(-1.*t2016*t2149*t516 + t1753*t2016*t693) + 0.4*(-1.*t1753*t2016*t516 - 1.*t2016*t2149*t693);
  p_output1[15]=t2348*t2604 + t1470*t3006 + 0.4*(t3006*t516 + t2604*t693) + 0.12*(t2694 - 1.*t3006*t693);
  p_output1[16]=t1470*t2417 + t2348*t3090 + 0.12*(t3090*t516 - 1.*t2417*t693) + 0.4*(t2447 + t3090*t693);
  p_output1[17]=-1.*t1470*t2149*t227 + t1753*t227*t2348 + 0.4*(-1.*t2149*t227*t516 + t1753*t227*t693) + 0.12*(t1753*t227*t516 + t2149*t227*t693);
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
  p_output1[39]=0.4*t2678 + t2604*t3234 + t2671*t3248 + 0.12*(-1.*t2604*t516 - 1.*t2671*t693);
  p_output1[40]=t3090*t3234 + t3248*t3271 + 0.4*(t3271*t516 - 1.*t3090*t693) + 0.12*(-1.*t3090*t516 - 1.*t3271*t693);
  p_output1[41]=t1753*t227*t3234 + t2149*t227*t3248 + 0.4*(t2149*t227*t516 - 1.*t1753*t227*t693) + 0.12*(-1.*t1753*t227*t516 - 1.*t2149*t227*t693);
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



void Jp_shoulder_roll_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
