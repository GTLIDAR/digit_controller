/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_right_src.h"

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
  double t446;
  double t1478;
  double t1039;
  double t1120;
  double t1515;
  double t585;
  double t1419;
  double t1838;
  double t2613;
  double t2908;
  double t3146;
  double t3169;
  double t3175;
  double t310;
  double t599;
  double t834;
  double t2957;
  double t3039;
  double t3071;
  double t3102;
  double t3259;
  double t3261;
  double t3282;
  double t3293;
  double t3295;
  double t3297;
  double t3488;
  double t3495;
  double t3501;
  double t3519;
  double t3522;
  double t3525;
  double t3642;
  double t3646;
  double t3647;
  t446 = Sin(var1[3]);
  t1478 = Cos(var1[3]);
  t1039 = Cos(var1[5]);
  t1120 = Sin(var1[4]);
  t1515 = Sin(var1[5]);
  t585 = Sin(var1[17]);
  t1419 = -1.*t1039*t446*t1120;
  t1838 = t1478*t1515;
  t2613 = t1419 + t1838;
  t2908 = Cos(var1[17]);
  t3146 = -1.*t1478*t1039;
  t3169 = -1.*t446*t1120*t1515;
  t3175 = t3146 + t3169;
  t310 = Cos(var1[4]);
  t599 = -0.091*t585;
  t834 = 0. + t599;
  t2957 = -1.*t2908;
  t3039 = 1. + t2957;
  t3071 = -0.091*t3039;
  t3102 = 0. + t3071;
  t3259 = t1478*t1039*t1120;
  t3261 = t446*t1515;
  t3282 = t3259 + t3261;
  t3293 = -1.*t1039*t446;
  t3295 = t1478*t1120*t1515;
  t3297 = t3293 + t3295;
  t3488 = t1039*t446;
  t3495 = -1.*t1478*t1120*t1515;
  t3501 = t3488 + t3495;
  t3519 = t1039*t446*t1120;
  t3522 = -1.*t1478*t1515;
  t3525 = t3519 + t3522;
  t3642 = t1478*t1039;
  t3646 = t446*t1120*t1515;
  t3647 = t3642 + t3646;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t3102*t3175 + 0.001*t310*t446 - 0.091*(t2908*t3175 - 1.*t2613*t585) + t2613*t834;
  p_output1[10]=-0.001*t1478*t310 + t3102*t3297 - 0.091*(t2908*t3297 - 1.*t3282*t585) + t3282*t834;
  p_output1[11]=0;
  p_output1[12]=0.001*t1120*t1478 + t1478*t1515*t310*t3102 - 0.091*(t1478*t1515*t2908*t310 - 1.*t1039*t1478*t310*t585) + t1039*t1478*t310*t834;
  p_output1[13]=0.001*t1120*t446 + t1515*t310*t3102*t446 - 0.091*(t1515*t2908*t310*t446 - 1.*t1039*t310*t446*t585) + t1039*t310*t446*t834;
  p_output1[14]=0.001*t310 - 1.*t1120*t1515*t3102 - 0.091*(-1.*t1120*t1515*t2908 + t1039*t1120*t585) - 1.*t1039*t1120*t834;
  p_output1[15]=t3102*t3282 - 0.091*(t2908*t3282 - 1.*t3501*t585) + t3501*t834;
  p_output1[16]=t3102*t3525 - 0.091*(t2908*t3525 - 1.*t3175*t585) + t3175*t834;
  p_output1[17]=t1039*t310*t3102 - 0.091*(t1039*t2908*t310 + t1515*t310*t585) - 1.*t1515*t310*t834;
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
  p_output1[51]=-0.091*t2908*t3282 - 0.091*t3297*t585 - 0.091*(-1.*t2908*t3282 - 1.*t3297*t585);
  p_output1[52]=-0.091*t2908*t3525 - 0.091*t3647*t585 - 0.091*(-1.*t2908*t3525 - 1.*t3647*t585);
  p_output1[53]=-0.091*t1039*t2908*t310 - 0.091*t1515*t310*t585 - 0.091*(-1.*t1039*t2908*t310 - 1.*t1515*t310*t585);
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



void Jp_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
