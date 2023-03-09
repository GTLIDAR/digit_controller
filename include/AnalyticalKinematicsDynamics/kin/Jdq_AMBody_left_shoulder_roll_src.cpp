/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_shoulder_roll_src.h"

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
  double t876;
  double t928;
  double t144;
  double t260;
  double t1395;
  double t2118;
  double t2279;
  double t2313;
  double t28;
  double t33;
  double t898;
  double t1006;
  double t1153;
  double t1254;
  double t2349;
  double t2403;
  double t2429;
  double t2488;
  double t2645;
  double t2646;
  double t2720;
  double t2780;
  double t2817;
  double t2820;
  double t3005;
  double t3111;
  double t3409;
  double t3572;
  double t3597;
  double t3706;
  double t3735;
  double t3749;
  double t3901;
  t876 = Cos(var1[13]);
  t928 = Sin(var1[13]);
  t144 = Cos(var1[4]);
  t260 = Cos(var1[5]);
  t1395 = 0.984808*t876;
  t2118 = -0.173648*t928;
  t2279 = t1395 + t2118;
  t2313 = Sin(var1[5]);
  t28 = Sin(var1[4]);
  t33 = 0. + t28;
  t898 = -0.173648*t876;
  t1006 = -0.984808*t928;
  t1153 = t898 + t1006;
  t1254 = t260*t1153;
  t2349 = t2279*t2313;
  t2403 = 0. + t1254 + t2349;
  t2429 = t144*t2403;
  t2488 = 0. + t2429;
  t2645 = t260*t2279;
  t2646 = 0.173648*t876;
  t2720 = 0.984808*t928;
  t2780 = t2646 + t2720;
  t2817 = t2780*t2313;
  t2820 = 0. + t2645 + t2817;
  t3005 = t144*t2820;
  t3111 = 0. + t3005;
  t3409 = 0.00001*t3111;
  t3572 = -1.*t1153*t2313;
  t3597 = 0. + t2645 + t3572;
  t3706 = t260*t2780;
  t3735 = -1.*t2279*t2313;
  t3749 = 0. + t3706 + t3735;
  t3901 = 0.00001*t3749;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00001*t2488 + 0.0007*t3111 + 0.00001*t33;
  p_output1[10]=0.00075*t2488 + 0.00004*t33 + t3409;
  p_output1[11]=0.00004*t2488 + 0.0003*t33 + t3409;
  p_output1[12]=0.00001*t3597 + 0.0007*t3749;
  p_output1[13]=0.00075*t3597 + t3901;
  p_output1[14]=0.00004*t3597 + t3901;
  p_output1[15]=-0.00001;
  p_output1[16]=-0.00004;
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
  p_output1[39]=0.00001;
  p_output1[40]=0.00004;
  p_output1[41]=0.0003;
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



void Jdq_AMBody_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
