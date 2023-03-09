/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_right_hip_roll_src.h"

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
  double t1290;
  double t1998;
  double t1165;
  double t1240;
  double t1889;
  double t2185;
  double t2189;
  double t2906;
  double t656;
  double t2240;
  double t2251;
  double t2286;
  double t2468;
  double t2956;
  double t3050;
  double t3213;
  double t3215;
  double t3331;
  double t3865;
  double t3861;
  double t3870;
  double t3963;
  double t3971;
  double t4025;
  double t4039;
  double t4116;
  double t4165;
  double t4213;
  double t4215;
  double t3428;
  double t3478;
  double t4505;
  double t4566;
  double t4569;
  double t4402;
  double t4464;
  double t4482;
  double t4483;
  t1290 = Cos(var1[17]);
  t1998 = Sin(var1[17]);
  t1165 = Sin(var1[4]);
  t1240 = Cos(var1[5]);
  t1889 = 0.930418*t1290;
  t2185 = -0.366501*t1998;
  t2189 = t1889 + t2185;
  t2906 = Sin(var1[5]);
  t656 = Cos(var1[4]);
  t2240 = t1240*t2189;
  t2251 = 0.366501*t1290;
  t2286 = 0.930418*t1998;
  t2468 = t2251 + t2286;
  t2956 = t2468*t2906;
  t3050 = 0. + t2240 + t2956;
  t3213 = -0.366501*t1290;
  t3215 = -0.930418*t1998;
  t3331 = t3213 + t3215;
  t3865 = -1.*t2189*t2906;
  t3861 = t1240*t2468;
  t3870 = t3861 + t3865;
  t3963 = var2[3]*t656*t3870;
  t3971 = -1.*t1240*t2189;
  t4025 = -1.*t2468*t2906;
  t4039 = t3971 + t4025;
  t4116 = var2[4]*t4039;
  t4165 = t3963 + t4116;
  t4213 = -1.*t3331*t2906;
  t4215 = t2240 + t4213;
  t3428 = t1240*t3331;
  t3478 = t2189*t2906;
  t4505 = -0.930418*t1290;
  t4566 = 0.366501*t1998;
  t4569 = t4505 + t4566;
  t4402 = var2[4]*t4215;
  t4464 = t3428 + t3478;
  t4482 = var2[3]*t656*t4464;
  t4483 = t4402 + t4482;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=-0.00102*t1165*t3050*var2[3] + 0.00001*t656*var2[3];
  p_output1[13]=-0.00115*t1165*(0. + t3428 + t3478)*var2[3];
  p_output1[14]=-0.00001*t1165*t3050*var2[3] + 0.00077*t656*var2[3];
  p_output1[15]=0.00102*t4165;
  p_output1[16]=0.00115*(t4215*t656*var2[3] + (-1.*t1240*t3331 + t3865)*var2[4]);
  p_output1[17]=0.00001*t4165;
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
  p_output1[51]=0.00102*t4483;
  p_output1[52]=0.00115*((t2906*t3331 + t1240*t4569)*t656*var2[3] + (t3428 - 1.*t2906*t4569)*var2[4]);
  p_output1[53]=0.00001*t4483;
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



void Jq_AMBody_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
