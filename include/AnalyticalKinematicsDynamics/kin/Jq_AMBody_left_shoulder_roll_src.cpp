/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_left_shoulder_roll_src.h"

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
  double t898;
  double t1006;
  double t144;
  double t859;
  double t1254;
  double t1789;
  double t1948;
  double t2123;
  double t28;
  double t928;
  double t1153;
  double t1215;
  double t1216;
  double t2125;
  double t2129;
  double t2349;
  double t2403;
  double t2429;
  double t2483;
  double t2488;
  double t2494;
  double t3111;
  double t3431;
  double t3398;
  double t3409;
  double t3411;
  double t3416;
  double t3436;
  double t3496;
  double t3497;
  double t3521;
  double t3527;
  double t3528;
  double t3535;
  double t3557;
  double t3571;
  double t3572;
  double t3597;
  double t3706;
  double t3948;
  double t3955;
  double t3958;
  double t3863;
  double t3872;
  double t3901;
  double t3936;
  double t4011;
  double t4018;
  double t4028;
  double t4053;
  double t4063;
  double t4084;
  double t4133;
  double t4134;
  double t4178;
  t898 = Cos(var1[13]);
  t1006 = Sin(var1[13]);
  t144 = Sin(var1[4]);
  t859 = Cos(var1[5]);
  t1254 = 0.984808*t898;
  t1789 = -0.173648*t1006;
  t1948 = t1254 + t1789;
  t2123 = Sin(var1[5]);
  t28 = Cos(var1[4]);
  t928 = -0.173648*t898;
  t1153 = -0.984808*t1006;
  t1215 = t928 + t1153;
  t1216 = t859*t1215;
  t2125 = t1948*t2123;
  t2129 = 0. + t1216 + t2125;
  t2349 = t859*t1948;
  t2403 = 0.173648*t898;
  t2429 = 0.984808*t1006;
  t2483 = t2403 + t2429;
  t2488 = t2483*t2123;
  t2494 = 0. + t2349 + t2488;
  t3111 = -0.00001*var2[3]*t144*t2494;
  t3431 = -1.*t1948*t2123;
  t3398 = -1.*t1215*t2123;
  t3409 = t2349 + t3398;
  t3411 = var2[3]*t28*t3409;
  t3416 = -1.*t859*t1215;
  t3436 = t3416 + t3431;
  t3496 = var2[4]*t3436;
  t3497 = t3411 + t3496;
  t3521 = t859*t2483;
  t3527 = t3521 + t3431;
  t3528 = var2[3]*t28*t3527;
  t3535 = -1.*t859*t1948;
  t3557 = -1.*t2483*t2123;
  t3571 = t3535 + t3557;
  t3572 = var2[4]*t3571;
  t3597 = t3528 + t3572;
  t3706 = 0.00001*t3597;
  t3948 = -0.984808*t898;
  t3955 = 0.173648*t1006;
  t3958 = t3948 + t3955;
  t3863 = var2[4]*t3409;
  t3872 = t1216 + t2125;
  t3901 = var2[3]*t28*t3872;
  t3936 = t3863 + t3901;
  t4011 = t859*t3958;
  t4018 = t1215*t2123;
  t4028 = t4011 + t4018;
  t4053 = var2[3]*t28*t4028;
  t4063 = -1.*t3958*t2123;
  t4084 = t1216 + t4063;
  t4133 = var2[4]*t4084;
  t4134 = t4053 + t4133;
  t4178 = 0.00001*t3936;
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
  p_output1[12]=-0.00001*t144*t2129*var2[3] - 0.0007*t144*t2494*var2[3] + 0.00001*t28*var2[3];
  p_output1[13]=t3111 - 0.00075*t144*t2129*var2[3] + 0.00004*t28*var2[3];
  p_output1[14]=t3111 - 0.00004*t144*t2129*var2[3] + 0.0003*t28*var2[3];
  p_output1[15]=0.00001*t3497 + 0.0007*t3597;
  p_output1[16]=0.00075*t3497 + t3706;
  p_output1[17]=0.00004*t3497 + t3706;
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
  p_output1[39]=0.0007*t3936 + 0.00001*t4134;
  p_output1[40]=0.00075*t4134 + t4178;
  p_output1[41]=0.00004*t4134 + t4178;
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



void Jq_AMBody_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
