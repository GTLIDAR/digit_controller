/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_right_shoulder_roll_src.h"

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
  double t286;
  double t408;
  double t239;
  double t635;
  double t756;
  double t909;
  double t296;
  double t471;
  double t475;
  double t967;
  double t225;
  double t1500;
  double t1319;
  double t1470;
  double t1737;
  double t1909;
  double t1917;
  double t487;
  double t1046;
  double t1115;
  double t1508;
  double t1513;
  double t1623;
  double t1676;
  double t1921;
  double t1929;
  double t1956;
  double t1979;
  double t2066;
  double t2082;
  double t2124;
  double t2202;
  double t2294;
  double t2296;
  double t2699;
  double t2835;
  double t2946;
  double t3056;
  double t3127;
  double t3150;
  double t3158;
  double t3213;
  double t3242;
  double t3317;
  double t3332;
  double t3353;
  double t3364;
  double t3369;
  double t3392;
  double t3405;
  double t3006;
  double t3434;
  double t3447;
  double t3514;
  double t3563;
  double t3582;
  double t2664;
  double t2669;
  double t3631;
  double t3656;
  double t3660;
  double t3893;
  double t4002;
  t286 = Cos(var1[24]);
  t408 = Sin(var1[24]);
  t239 = Cos(var1[5]);
  t635 = 0.984808*t286;
  t756 = 0.173648*t408;
  t909 = t635 + t756;
  t296 = -0.173648*t286;
  t471 = 0.984808*t408;
  t475 = t296 + t471;
  t967 = Sin(var1[5]);
  t225 = Sin(var1[3]);
  t1500 = t239*t909;
  t1319 = Cos(var1[3]);
  t1470 = Sin(var1[4]);
  t1737 = 0.173648*t286;
  t1909 = -0.984808*t408;
  t1917 = t1737 + t1909;
  t487 = t239*t475;
  t1046 = -1.*t909*t967;
  t1115 = 0. + t487 + t1046;
  t1508 = t475*t967;
  t1513 = 0. + t1500 + t1508;
  t1623 = t1470*t1513;
  t1676 = 0. + t1623;
  t1921 = -1.*t1917*t967;
  t1929 = 0. + t1500 + t1921;
  t1956 = t239*t1917;
  t1979 = t909*t967;
  t2066 = 0. + t1956 + t1979;
  t2082 = t1470*t2066;
  t2124 = 0. + t2082;
  t2202 = Cos(var1[4]);
  t2294 = -1.*t2202;
  t2296 = 0. + t2294;
  t2699 = t2202*t2066;
  t2835 = 0. + t2699;
  t2946 = 0. + t1470;
  t3056 = -1.*t286;
  t3127 = 1. + t3056;
  t3150 = 0.4*t3127;
  t3158 = 0.400559*t286;
  t3213 = -0.0031100000000000017*t408;
  t3242 = 0. + t3150 + t3158 + t3213;
  t3317 = t239*t3242;
  t3332 = -0.12*t3127;
  t3353 = -0.11689*t286;
  t3364 = 0.0005589999999999762*t408;
  t3369 = 0. + t3332 + t3353 + t3364;
  t3392 = t3369*t967;
  t3405 = 0. + t3317 + t3392;
  t3006 = 0.02441*t1470;
  t3434 = t2202*t3405;
  t3447 = 0. + t3006 + t3434;
  t3514 = -0.02441*t2202;
  t3563 = t1470*t3405;
  t3582 = 0. + t3514 + t3563;
  t2664 = t2202*t1513;
  t2669 = 0. + t2664;
  t3631 = t239*t3369;
  t3656 = -1.*t3242*t967;
  t3660 = 0. + t3631 + t3656;
  t3893 = t1929*t3660;
  t4002 = -1.*t3660*t1115;
  p_output1[0]=0. + t1319*t1676 - 1.*t1115*t225;
  p_output1[1]=0. + t1319*t2124 - 1.*t1929*t225;
  p_output1[2]=0. + t1319*t2296;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1115*t1319 + t1676*t225;
  p_output1[7]=0. + t1319*t1929 + t2124*t225;
  p_output1[8]=0. + t225*t2296;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2669;
  p_output1[13]=t2835;
  p_output1[14]=t2946;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2835*(0. + t2946*t3447 + t2296*t3582) + t2946*(-1.*t2835*t3447 - 1.*t2124*t3582 - 1.*t1929*t3660);
  p_output1[19]=t2669*(0. - 1.*t2946*t3447 - 1.*t2296*t3582) + t2946*(t2669*t3447 + t1676*t3582 + t1115*t3660);
  p_output1[20]=0. + t2669*(t2835*t3447 + t2124*t3582 + t3893) + t2835*(-1.*t2669*t3447 - 1.*t1676*t3582 + t4002);
  p_output1[21]=t2669;
  p_output1[22]=t2835;
  p_output1[23]=t2946;
  p_output1[24]=0. + 0.02441*t1929;
  p_output1[25]=0. - 0.02441*t1115;
  p_output1[26]=0. + t1115*(0. + t2066*t3405 + t3893) + t1929*(0. - 1.*t1513*t3405 + t4002);
  p_output1[27]=t1115;
  p_output1[28]=t1929;
  p_output1[29]=0.;
  p_output1[30]=0. - 1.*(0. - 1.*t1917*t3242 - 1.*t3369*t909);
  p_output1[31]=0. - 1.*(0. + t3369*t475 + t3242*t909);
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0.;
  p_output1[35]=-1.;
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
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=-0.003159822111999999;
  p_output1[145]=0.000010462392000032406;
  p_output1[146]=0.;
  p_output1[147]=0.;
  p_output1[148]=0.;
  p_output1[149]=1.;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void Jb_right_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
