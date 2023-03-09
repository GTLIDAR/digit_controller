/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_right_shoulder_roll_src.h"

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
  double t1019;
  double t1386;
  double t878;
  double t956;
  double t2892;
  double t2959;
  double t2969;
  double t2984;
  double t80;
  double t184;
  double t1020;
  double t1641;
  double t2703;
  double t2805;
  double t3034;
  double t3169;
  double t3184;
  double t3212;
  double t3230;
  double t3234;
  double t3302;
  double t3401;
  double t3505;
  double t3561;
  double t3611;
  double t3638;
  double t4092;
  double t4193;
  double t4215;
  double t4218;
  double t4232;
  t1019 = Cos(var1[24]);
  t1386 = Sin(var1[24]);
  t878 = Cos(var1[4]);
  t956 = Cos(var1[5]);
  t2892 = 0.984808*t1019;
  t2959 = 0.173648*t1386;
  t2969 = t2892 + t2959;
  t2984 = Sin(var1[5]);
  t80 = Sin(var1[4]);
  t184 = 0. + t80;
  t1020 = 0.173648*t1019;
  t1641 = -0.984808*t1386;
  t2703 = t1020 + t1641;
  t2805 = t956*t2703;
  t3034 = t2969*t2984;
  t3169 = 0. + t2805 + t3034;
  t3184 = t878*t3169;
  t3212 = 0. + t3184;
  t3230 = t956*t2969;
  t3234 = -0.173648*t1019;
  t3302 = 0.984808*t1386;
  t3401 = t3234 + t3302;
  t3505 = t3401*t2984;
  t3561 = 0. + t3230 + t3505;
  t3611 = t878*t3561;
  t3638 = 0. + t3611;
  t4092 = -1.*t2703*t2984;
  t4193 = 0. + t3230 + t4092;
  t4215 = t956*t3401;
  t4218 = -1.*t2969*t2984;
  t4232 = 0. + t4215 + t4218;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00001*t184 - 0.00001*t3212 + 0.0007*t3638;
  p_output1[10]=-0.00004*t184 + 0.00075*t3212 - 0.00001*t3638;
  p_output1[11]=0.0003*t184 - 0.00004*t3212 + 0.00001*t3638;
  p_output1[12]=-0.00001*t4193 + 0.0007*t4232;
  p_output1[13]=0.00075*t4193 - 0.00001*t4232;
  p_output1[14]=-0.00004*t4193 + 0.00001*t4232;
  p_output1[15]=-0.00001;
  p_output1[16]=0.00004;
  p_output1[17]=-0.0003;
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
  p_output1[72]=0.00001;
  p_output1[73]=-0.00004;
  p_output1[74]=0.0003;
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



void Jdq_AMBody_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}