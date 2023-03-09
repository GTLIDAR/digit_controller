/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_right_hip_roll_src.h"

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
  double t586;
  double t1620;
  double t1268;
  double t1404;
  double t1799;
  double t970;
  double t1412;
  double t1988;
  double t2118;
  double t2177;
  double t2514;
  double t2515;
  double t2559;
  double t285;
  double t1198;
  double t1230;
  double t2190;
  double t2260;
  double t2480;
  double t2502;
  double t3073;
  double t3092;
  double t3104;
  double t3129;
  double t3187;
  double t3193;
  double t4312;
  double t4344;
  double t4346;
  double t3362;
  double t4622;
  double t4629;
  double t4656;
  double t2725;
  double t3277;
  double t3280;
  double t3281;
  double t5174;
  double t5191;
  double t5199;
  t586 = Sin(var1[3]);
  t1620 = Cos(var1[3]);
  t1268 = Cos(var1[5]);
  t1404 = Sin(var1[4]);
  t1799 = Sin(var1[5]);
  t970 = Sin(var1[17]);
  t1412 = -1.*t1268*t586*t1404;
  t1988 = t1620*t1799;
  t2118 = t1412 + t1988;
  t2177 = Cos(var1[17]);
  t2514 = -1.*t1620*t1268;
  t2515 = -1.*t586*t1404*t1799;
  t2559 = t2514 + t2515;
  t285 = Cos(var1[4]);
  t1198 = -0.091*t970;
  t1230 = 0. + t1198;
  t2190 = -1.*t2177;
  t2260 = 1. + t2190;
  t2480 = -0.091*t2260;
  t2502 = 0. + t2480;
  t3073 = t1620*t1268*t1404;
  t3092 = t586*t1799;
  t3104 = t3073 + t3092;
  t3129 = -1.*t1268*t586;
  t3187 = t1620*t1404*t1799;
  t3193 = t3129 + t3187;
  t4312 = t1268*t586;
  t4344 = -1.*t1620*t1404*t1799;
  t4346 = t4312 + t4344;
  t3362 = t2177*t3104;
  t4622 = t1268*t586*t1404;
  t4629 = -1.*t1620*t1799;
  t4656 = t4622 + t4629;
  t2725 = t2177*t2559;
  t3277 = -1.*t970*t3104;
  t3280 = t2177*t3193;
  t3281 = t3277 + t3280;
  t5174 = t1620*t1268;
  t5191 = t586*t1404*t1799;
  t5199 = t5174 + t5191;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1230*t2118 + t2502*t2559 + 0.03244*t285*t586 - 0.091945*(t2725 - 1.*t2118*t970) - 0.001745*(t2118*t2177 + t2559*t970);
  p_output1[10]=-0.03244*t1620*t285 + t1230*t3104 + t2502*t3193 - 0.091945*t3281 - 0.001745*(t3362 + t3193*t970);
  p_output1[11]=0;
  p_output1[12]=0.03244*t1404*t1620 + t1230*t1268*t1620*t285 + t1620*t1799*t2502*t285 - 0.091945*(t1620*t1799*t2177*t285 - 1.*t1268*t1620*t285*t970) - 0.001745*(t1268*t1620*t2177*t285 + t1620*t1799*t285*t970);
  p_output1[13]=0.03244*t1404*t586 + t1230*t1268*t285*t586 + t1799*t2502*t285*t586 - 0.091945*(t1799*t2177*t285*t586 - 1.*t1268*t285*t586*t970) - 0.001745*(t1268*t2177*t285*t586 + t1799*t285*t586*t970);
  p_output1[14]=-1.*t1230*t1268*t1404 - 1.*t1404*t1799*t2502 + 0.03244*t285 - 0.091945*(-1.*t1404*t1799*t2177 + t1268*t1404*t970) - 0.001745*(-1.*t1268*t1404*t2177 - 1.*t1404*t1799*t970);
  p_output1[15]=t2502*t3104 + t1230*t4346 - 0.001745*(t2177*t4346 + t3104*t970) - 0.091945*(t3362 - 1.*t4346*t970);
  p_output1[16]=t1230*t2559 + t2502*t4656 - 0.091945*(t2177*t4656 - 1.*t2559*t970) - 0.001745*(t2725 + t4656*t970);
  p_output1[17]=-1.*t1230*t1799*t285 + t1268*t2502*t285 - 0.001745*(-1.*t1799*t2177*t285 + t1268*t285*t970) - 0.091945*(t1268*t2177*t285 + t1799*t285*t970);
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
  p_output1[51]=-0.091*t2177*t3104 - 0.001745*t3281 - 0.091*t3193*t970 - 0.091945*(-1.*t2177*t3104 - 1.*t3193*t970);
  p_output1[52]=-0.091*t2177*t4656 - 0.091*t5199*t970 - 0.001745*(t2177*t5199 - 1.*t4656*t970) - 0.091945*(-1.*t2177*t4656 - 1.*t5199*t970);
  p_output1[53]=-0.091*t1268*t2177*t285 - 0.091*t1799*t285*t970 - 0.001745*(t1799*t2177*t285 - 1.*t1268*t285*t970) - 0.091945*(-1.*t1268*t2177*t285 - 1.*t1799*t285*t970);
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



void Jp_right_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
