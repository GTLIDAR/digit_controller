/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_shoulder_pitch_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t866;
  double t535;
  double t540;
  double t711;
  double t3033;
  double t2305;
  double t2338;
  double t2340;
  double t2533;
  double t2542;
  double t2599;
  double t2654;
  double t2971;
  double t2139;
  double t3182;
  double t3311;
  double t3425;
  double t3480;
  double t3492;
  double t3506;
  double t3573;
  double t3667;
  double t718;
  double t794;
  double t868;
  double t938;
  double t949;
  double t966;
  double t990;
  double t1012;
  double t1513;
  double t1951;
  double t2136;
  double t4179;
  double t4225;
  double t4370;
  double t4376;
  double t3961;
  double t4838;
  double t4842;
  double t4862;
  double t4804;
  double t4807;
  double t4812;
  double t798;
  double t1278;
  double t1910;
  double t2973;
  double t3668;
  double t3715;
  double t3794;
  double t3883;
  double t3949;
  double t3952;
  double t3985;
  double t3994;
  double t4003;
  double t4041;
  double t4068;
  double t4109;
  double t4123;
  double t4354;
  double t4390;
  double t4405;
  double t4442;
  double t4448;
  double t4521;
  double t4582;
  double t4615;
  double t4626;
  double t4657;
  double t4658;
  double t4675;
  double t4679;
  double t4702;
  double t4803;
  double t4832;
  double t4906;
  double t4922;
  double t4924;
  double t4949;
  double t4959;
  double t4971;
  double t4987;
  double t4994;
  double t5003;
  double t5033;
  double t5174;
  double t5175;
  double t5177;
  double t5216;
  double t5271;
  double t5279;
  double t5319;
  double t5332;
  double t5336;
  double t5653;
  double t5657;
  double t5662;
  double t5685;
  double t5730;
  double t5755;
  double t5781;
  t866 = Sin(var1[14]);
  t535 = Cos(var1[14]);
  t540 = -1.*t535;
  t711 = 1. + t540;
  t3033 = Sin(var1[13]);
  t2305 = -0.9890740084840001*t711;
  t2338 = 1. + t2305;
  t2340 = 0.703234*t2338;
  t2533 = -0.007683655156165408*t711;
  t2542 = -0.994522*t866;
  t2599 = 0. + t2542;
  t2654 = -0.707107*t2599;
  t2971 = t2340 + t2533 + t2654;
  t2139 = Cos(var1[13]);
  t3182 = -0.010926102783999999*t711;
  t3311 = 1. + t3182;
  t3425 = -0.073913*t3311;
  t3480 = 0.07310496868062215*t711;
  t3492 = 0.104528*t866;
  t3506 = 0. + t3492;
  t3573 = -0.707107*t3506;
  t3667 = t3425 + t3480 + t3573;
  t718 = -1.0000001112680001*t711;
  t794 = 1. + t718;
  t868 = -0.104528*t866;
  t938 = 0. + t868;
  t949 = -0.073913*t938;
  t966 = 0.994522*t866;
  t990 = 0. + t966;
  t1012 = 0.703234*t990;
  t1513 = Sin(var1[4]);
  t1951 = Cos(var1[4]);
  t2136 = Cos(var1[5]);
  t4179 = 0.707107*t2599;
  t4225 = t2340 + t2533 + t4179;
  t4370 = 0.707107*t3506;
  t4376 = t3425 + t3480 + t4370;
  t3961 = Sin(var1[5]);
  t4838 = -0.994522*t3311;
  t4842 = -0.010866249592949247*t711;
  t4862 = t4838 + t4842;
  t4804 = -0.104528*t2338;
  t4807 = -0.10338592795881554*t711;
  t4812 = t4804 + t4807;
  t798 = -0.707107*t794;
  t1278 = 0. + t798 + t949 + t1012;
  t1910 = -1.*t1278*t1513;
  t2973 = t2139*t2971;
  t3668 = -1.*t3033*t3667;
  t3715 = 0. + t2973 + t3668;
  t3794 = t2136*t3715;
  t3883 = t3033*t2971;
  t3949 = t2139*t3667;
  t3952 = 0. + t3883 + t3949;
  t3985 = t3952*t3961;
  t3994 = 0. + t3794 + t3985;
  t4003 = t1951*t3994;
  t4041 = 0. + t1910 + t4003;
  t4068 = 0.707107*t794;
  t4109 = 0. + t4068 + t949 + t1012;
  t4123 = -1.*t4109*t1513;
  t4354 = t2139*t4225;
  t4390 = -1.*t3033*t4376;
  t4405 = 0. + t4354 + t4390;
  t4442 = t2136*t4405;
  t4448 = t3033*t4225;
  t4521 = t2139*t4376;
  t4582 = 0. + t4448 + t4521;
  t4615 = t4582*t3961;
  t4626 = 0. + t4442 + t4615;
  t4657 = t1951*t4626;
  t4658 = 0. + t4123 + t4657;
  t4675 = -0.994522*t938;
  t4679 = -0.104528*t990;
  t4702 = 0. + t4675 + t4679;
  t4803 = -1.*t4702*t1513;
  t4832 = t2139*t4812;
  t4906 = -1.*t4862*t3033;
  t4922 = 0. + t4832 + t4906;
  t4924 = t2136*t4922;
  t4949 = t2139*t4862;
  t4959 = t4812*t3033;
  t4971 = 0. + t4949 + t4959;
  t4987 = t4971*t3961;
  t4994 = 0. + t4924 + t4987;
  t5003 = t1951*t4994;
  t5033 = 0. + t4803 + t5003;
  t5174 = t2136*t3952;
  t5175 = -1.*t3715*t3961;
  t5177 = 0. + t5174 + t5175;
  t5216 = t2136*t4582;
  t5271 = -1.*t4405*t3961;
  t5279 = 0. + t5216 + t5271;
  t5319 = t2136*t4971;
  t5332 = -1.*t4922*t3961;
  t5336 = 0. + t5319 + t5332;
  t5653 = 0.073913*t938;
  t5657 = -0.703234*t990;
  t5662 = 0. + t798 + t5653 + t5657;
  t5685 = 0. + t4068 + t5653 + t5657;
  t5730 = 0.994522*t938;
  t5755 = 0.104528*t990;
  t5781 = 0. + t5730 + t5755;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.00001*t4041 + 0.00676*t4658;
  p_output1[10]=0.00209*t4041 - 0.00001*t4658 - 0.00205*t5033;
  p_output1[11]=-0.00205*t4041 + 0.00578*t5033;
  p_output1[12]=-0.00001*t5177 + 0.00676*t5279;
  p_output1[13]=0.00209*t5177 - 0.00001*t5279 - 0.00205*t5336;
  p_output1[14]=-0.00205*t5177 + 0.00578*t5336;
  p_output1[15]=-0.00001*t1278 + 0.00676*t4109;
  p_output1[16]=0.00209*t1278 - 0.00001*t4109 - 0.00205*t4702;
  p_output1[17]=-0.00205*t1278 + 0.00578*t4702;
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
  p_output1[39]=0.00676*t5662 - 0.00001*t5685;
  p_output1[40]=-0.00001*t5662 + 0.00209*t5685 - 0.00205*t5781;
  p_output1[41]=-0.00205*t5685 + 0.00578*t5781;
  p_output1[42]=-3.1119795000297823e-9;
  p_output1[43]=0.0020499992691486806;
  p_output1[44]=-0.0057799996980093405;
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



void Jdq_AMBody_left_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
