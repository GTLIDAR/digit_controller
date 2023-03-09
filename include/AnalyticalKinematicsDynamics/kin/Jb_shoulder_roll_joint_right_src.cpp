/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_shoulder_roll_joint_right_src.h"

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
  double t437;
  double t549;
  double t427;
  double t743;
  double t745;
  double t788;
  double t503;
  double t566;
  double t604;
  double t1219;
  double t182;
  double t1470;
  double t1402;
  double t1436;
  double t2016;
  double t2074;
  double t2152;
  double t646;
  double t1265;
  double t1372;
  double t1536;
  double t1548;
  double t1572;
  double t1718;
  double t2363;
  double t2370;
  double t2444;
  double t2573;
  double t2648;
  double t2722;
  double t2914;
  double t2999;
  double t3016;
  double t3019;
  double t3225;
  double t3230;
  double t3241;
  double t3263;
  double t3272;
  double t3285;
  double t3304;
  double t3306;
  double t3312;
  double t3313;
  double t3325;
  double t3333;
  double t3341;
  double t3348;
  double t3252;
  double t3349;
  double t3350;
  double t3362;
  double t3367;
  double t3373;
  double t3183;
  double t3221;
  double t3392;
  double t3396;
  double t3399;
  double t3512;
  double t3555;
  t437 = Cos(var1[24]);
  t549 = Sin(var1[24]);
  t427 = Cos(var1[5]);
  t743 = 0.984808*t437;
  t745 = 0.173648*t549;
  t788 = t743 + t745;
  t503 = -0.173648*t437;
  t566 = 0.984808*t549;
  t604 = t503 + t566;
  t1219 = Sin(var1[5]);
  t182 = Sin(var1[3]);
  t1470 = t427*t788;
  t1402 = Cos(var1[3]);
  t1436 = Sin(var1[4]);
  t2016 = 0.173648*t437;
  t2074 = -0.984808*t549;
  t2152 = t2016 + t2074;
  t646 = t427*t604;
  t1265 = -1.*t788*t1219;
  t1372 = 0. + t646 + t1265;
  t1536 = t604*t1219;
  t1548 = 0. + t1470 + t1536;
  t1572 = t1436*t1548;
  t1718 = 0. + t1572;
  t2363 = -1.*t2152*t1219;
  t2370 = 0. + t1470 + t2363;
  t2444 = t427*t2152;
  t2573 = t788*t1219;
  t2648 = 0. + t2444 + t2573;
  t2722 = t1436*t2648;
  t2914 = 0. + t2722;
  t2999 = Cos(var1[4]);
  t3016 = -1.*t2999;
  t3019 = 0. + t3016;
  t3225 = t2999*t2648;
  t3230 = 0. + t3225;
  t3241 = 0. + t1436;
  t3263 = -1.*t437;
  t3272 = 1. + t3263;
  t3285 = 0.4*t3272;
  t3304 = 0.4*t437;
  t3306 = 0. + t3285 + t3304;
  t3312 = t3306*t427;
  t3313 = -0.12*t3272;
  t3325 = -0.12*t437;
  t3333 = 0. + t3313 + t3325;
  t3341 = t3333*t1219;
  t3348 = 0. + t3312 + t3341;
  t3252 = 0.001*t1436;
  t3349 = t2999*t3348;
  t3350 = 0. + t3252 + t3349;
  t3362 = -0.001*t2999;
  t3367 = t1436*t3348;
  t3373 = 0. + t3362 + t3367;
  t3183 = t2999*t1548;
  t3221 = 0. + t3183;
  t3392 = t3333*t427;
  t3396 = -1.*t3306*t1219;
  t3399 = 0. + t3392 + t3396;
  t3512 = t3399*t2370;
  t3555 = -1.*t3399*t1372;
  p_output1[0]=0. + t1402*t1718 - 1.*t1372*t182;
  p_output1[1]=0. - 1.*t182*t2370 + t1402*t2914;
  p_output1[2]=0. + t1402*t3019;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1372*t1402 + t1718*t182;
  p_output1[7]=0. + t1402*t2370 + t182*t2914;
  p_output1[8]=0. + t182*t3019;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3221;
  p_output1[13]=t3230;
  p_output1[14]=t3241;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3230*(0. + t3241*t3350 + t3019*t3373) + t3241*(-1.*t3230*t3350 - 1.*t2914*t3373 - 1.*t2370*t3399);
  p_output1[19]=t3221*(0. - 1.*t3241*t3350 - 1.*t3019*t3373) + t3241*(t3221*t3350 + t1718*t3373 + t1372*t3399);
  p_output1[20]=0. + t3221*(t3230*t3350 + t2914*t3373 + t3512) + t3230*(-1.*t3221*t3350 - 1.*t1718*t3373 + t3555);
  p_output1[21]=t3221;
  p_output1[22]=t3230;
  p_output1[23]=t3241;
  p_output1[24]=0. + 0.001*t2370;
  p_output1[25]=0. - 0.001*t1372;
  p_output1[26]=0. + t1372*(0. + t2648*t3348 + t3512) + t2370*(0. - 1.*t1548*t3348 + t3555);
  p_output1[27]=t1372;
  p_output1[28]=t2370;
  p_output1[29]=0.;
  p_output1[30]=0. - 1.*(0. - 1.*t2152*t3306 - 1.*t3333*t788);
  p_output1[31]=0. - 1.*(0. + t3333*t604 + t3306*t788);
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
  p_output1[144]=0.;
  p_output1[145]=0.;
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



void Jb_shoulder_roll_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
