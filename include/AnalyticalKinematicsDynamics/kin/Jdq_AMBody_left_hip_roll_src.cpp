/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_hip_roll_src.h"

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
  double t1988;
  double t2094;
  double t1787;
  double t1901;
  double t3307;
  double t2017;
  double t2340;
  double t2890;
  double t793;
  double t807;
  double t3267;
  double t3412;
  double t3429;
  double t3460;
  double t3711;
  double t3766;
  double t3853;
  double t3857;
  double t4166;
  double t4375;
  double t4460;
  double t4730;
  double t4746;
  double t4758;
  t1988 = Cos(var1[6]);
  t2094 = Sin(var1[6]);
  t1787 = Cos(var1[4]);
  t1901 = Cos(var1[5]);
  t3307 = Sin(var1[5]);
  t2017 = 0.930418*t1988;
  t2340 = 0.366501*t2094;
  t2890 = t2017 + t2340;
  t793 = Sin(var1[4]);
  t807 = 0. + t793;
  t3267 = t1901*t2890;
  t3412 = -0.366501*t1988;
  t3429 = 0.930418*t2094;
  t3460 = t3412 + t3429;
  t3711 = t3307*t3460;
  t3766 = 0. + t3267 + t3711;
  t3853 = t1787*t3766;
  t3857 = 0. + t3853;
  t4166 = 0.366501*t1988;
  t4375 = -0.930418*t2094;
  t4460 = t4166 + t4375;
  t4730 = -1.*t3307*t2890;
  t4746 = t1901*t3460;
  t4758 = 0. + t4730 + t4746;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00102*t3857 + 0.00001*t807;
  p_output1[10]=0.00115*(0. + t1787*(0. + t2890*t3307 + t1901*t4460));
  p_output1[11]=0.00001*t3857 + 0.00077*t807;
  p_output1[12]=0.00102*t4758;
  p_output1[13]=0.00115*(0. + t3267 - 1.*t3307*t4460);
  p_output1[14]=0.00001*t4758;
  p_output1[15]=-0.00001;
  p_output1[16]=0;
  p_output1[17]=-0.00077;
  p_output1[18]=0.00001;
  p_output1[19]=0;
  p_output1[20]=0.00077;
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



void Jdq_AMBody_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
