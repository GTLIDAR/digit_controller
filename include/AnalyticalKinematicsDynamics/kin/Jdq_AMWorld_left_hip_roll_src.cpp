/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_left_hip_roll_src.h"

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
  double t278;
  double t495;
  double t1005;
  double t426;
  double t1171;
  double t876;
  double t1131;
  double t1144;
  double t249;
  double t279;
  double t3114;
  double t3473;
  double t3494;
  double t3512;
  double t3220;
  double t3295;
  double t3320;
  double t337;
  double t1157;
  double t1204;
  double t1234;
  double t1336;
  double t1374;
  double t1407;
  double t1436;
  double t1751;
  double t3340;
  double t3538;
  double t3675;
  double t3731;
  double t3837;
  double t3874;
  double t356;
  double t1966;
  double t2207;
  double t2358;
  double t2482;
  double t2609;
  double t2786;
  double t2796;
  double t2801;
  double t2821;
  double t3023;
  double t4758;
  double t4764;
  double t4776;
  double t4629;
  double t4648;
  double t4653;
  double t3990;
  double t4044;
  double t4080;
  double t4746;
  double t4831;
  double t4914;
  double t5043;
  double t5046;
  double t5083;
  double t5342;
  double t5349;
  double t5368;
  double t5379;
  double t5400;
  double t5406;
  double t3708;
  double t3924;
  double t3933;
  double t5464;
  double t5489;
  double t5498;
  double t4087;
  double t4128;
  double t4133;
  double t5503;
  double t5506;
  double t4998;
  double t5158;
  double t5181;
  double t5222;
  double t5223;
  double t5253;
  double t5370;
  double t5407;
  double t5417;
  double t5433;
  double t5439;
  double t5440;
  t278 = Cos(var1[4]);
  t495 = Cos(var1[6]);
  t1005 = Sin(var1[6]);
  t426 = Cos(var1[5]);
  t1171 = Sin(var1[5]);
  t876 = 0.930418*t495;
  t1131 = 0.366501*t1005;
  t1144 = t876 + t1131;
  t249 = Cos(var1[3]);
  t279 = Sin(var1[4]);
  t3114 = Sin(var1[3]);
  t3473 = t249*t426*t279;
  t3494 = t3114*t1171;
  t3512 = t3473 + t3494;
  t3220 = -1.*t426*t3114;
  t3295 = t249*t279*t1171;
  t3320 = t3220 + t3295;
  t337 = 0. + t279;
  t1157 = t426*t1144;
  t1204 = -0.366501*t495;
  t1234 = 0.930418*t1005;
  t1336 = t1204 + t1234;
  t1374 = t1171*t1336;
  t1407 = 0. + t1157 + t1374;
  t1436 = t278*t1407;
  t1751 = 0. + t1436;
  t3340 = t495*t3320;
  t3538 = -1.*t3512*t1005;
  t3675 = t3340 + t3538;
  t3731 = t495*t3512;
  t3837 = t3320*t1005;
  t3874 = t3731 + t3837;
  t356 = 0.00077*t337;
  t1966 = 0.00001*t1751;
  t2207 = t356 + t1966;
  t2358 = 0.366501*t495;
  t2482 = -0.930418*t1005;
  t2609 = t2358 + t2482;
  t2786 = t426*t2609;
  t2796 = t1171*t1144;
  t2801 = 0. + t2786 + t2796;
  t2821 = t278*t2801;
  t3023 = 0. + t2821;
  t4758 = t426*t3114*t279;
  t4764 = -1.*t249*t1171;
  t4776 = t4758 + t4764;
  t4629 = t249*t426;
  t4648 = t3114*t279*t1171;
  t4653 = t4629 + t4648;
  t3990 = 0.00001*t337;
  t4044 = 0.00102*t1751;
  t4080 = t3990 + t4044;
  t4746 = t495*t4653;
  t4831 = -1.*t4776*t1005;
  t4914 = t4746 + t4831;
  t5043 = t495*t4776;
  t5046 = t4653*t1005;
  t5083 = t5043 + t5046;
  t5342 = t278*t495*t1171;
  t5349 = -1.*t278*t426*t1005;
  t5368 = t5342 + t5349;
  t5379 = t278*t426*t495;
  t5400 = t278*t1171*t1005;
  t5406 = t5379 + t5400;
  t3708 = 0.930418*t3675;
  t3924 = 0.366501*t3874;
  t3933 = t3708 + t3924;
  t5464 = -1.*t1171*t1144;
  t5489 = t426*t1336;
  t5498 = 0. + t5464 + t5489;
  t4087 = -0.366501*t3675;
  t4128 = 0.930418*t3874;
  t4133 = t4087 + t4128;
  t5503 = -1.*t1171*t2609;
  t5506 = 0. + t5503 + t1157;
  t4998 = 0.930418*t4914;
  t5158 = 0.366501*t5083;
  t5181 = t4998 + t5158;
  t5222 = -0.366501*t4914;
  t5223 = 0.930418*t5083;
  t5253 = t5222 + t5223;
  t5370 = 0.930418*t5368;
  t5407 = 0.366501*t5406;
  t5417 = t5370 + t5407;
  t5433 = -0.366501*t5368;
  t5439 = 0.930418*t5406;
  t5440 = t5433 + t5439;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.*t2207*t249*t278 + 0.00115*t3023*t3933 + t4080*t4133;
  p_output1[10]=-1.*t2207*t278*t3114 + 0.00115*t3023*t5181 + t4080*t5253;
  p_output1[11]=t2207*t279 + 0.00115*t3023*t5417 + t4080*t5440;
  p_output1[12]=-0.00001*t249*t278*t5498 + 0.00102*t4133*t5498 + 0.00115*t3933*t5506;
  p_output1[13]=-0.00001*t278*t3114*t5498 + 0.00102*t5253*t5498 + 0.00115*t5181*t5506;
  p_output1[14]=0.00001*t279*t5498 + 0.00102*t5440*t5498 + 0.00115*t5417*t5506;
  p_output1[15]=0.00077*t249*t278 - 0.00001*t4133;
  p_output1[16]=0.00077*t278*t3114 - 0.00001*t5253;
  p_output1[17]=-0.00077*t279 - 0.00001*t5440;
  p_output1[18]=-0.00077*t249*t278 + 0.00001*t4133;
  p_output1[19]=-0.00077*t278*t3114 + 0.00001*t5253;
  p_output1[20]=0.00077*t279 + 0.00001*t5440;
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



void Jdq_AMWorld_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
