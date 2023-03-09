/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_hip_abduction_right_src.h"

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
  double t350;
  double t526;
  double t332;
  double t1294;
  double t1368;
  double t1710;
  double t523;
  double t655;
  double t904;
  double t1742;
  double t259;
  double t2068;
  double t2015;
  double t2036;
  double t2531;
  double t2549;
  double t2679;
  double t1276;
  double t1746;
  double t1923;
  double t2129;
  double t2266;
  double t2374;
  double t2384;
  double t2761;
  double t2859;
  double t2882;
  double t2968;
  double t2986;
  double t2993;
  double t2996;
  double t3292;
  double t3298;
  double t3305;
  double t3608;
  double t3616;
  double t3623;
  double t3636;
  double t3637;
  double t3642;
  double t3656;
  double t3700;
  double t3716;
  double t3718;
  double t3629;
  double t3721;
  double t3751;
  double t3797;
  double t3800;
  double t3804;
  double t3588;
  double t3596;
  double t3841;
  double t3842;
  double t3936;
  double t3951;
  t350 = Cos(var1[17]);
  t526 = Sin(var1[17]);
  t332 = Cos(var1[5]);
  t1294 = 0.930418*t350;
  t1368 = -0.366501*t526;
  t1710 = t1294 + t1368;
  t523 = 0.366501*t350;
  t655 = 0.930418*t526;
  t904 = t523 + t655;
  t1742 = Sin(var1[5]);
  t259 = Sin(var1[3]);
  t2068 = t332*t1710;
  t2015 = Cos(var1[3]);
  t2036 = Sin(var1[4]);
  t2531 = -0.366501*t350;
  t2549 = -0.930418*t526;
  t2679 = t2531 + t2549;
  t1276 = t332*t904;
  t1746 = -1.*t1710*t1742;
  t1923 = 0. + t1276 + t1746;
  t2129 = t904*t1742;
  t2266 = 0. + t2068 + t2129;
  t2374 = t2036*t2266;
  t2384 = 0. + t2374;
  t2761 = -1.*t2679*t1742;
  t2859 = 0. + t2068 + t2761;
  t2882 = t332*t2679;
  t2968 = t1710*t1742;
  t2986 = 0. + t2882 + t2968;
  t2993 = t2036*t2986;
  t2996 = 0. + t2993;
  t3292 = Cos(var1[4]);
  t3298 = -1.*t3292;
  t3305 = 0. + t3298;
  t3608 = t3292*t2986;
  t3616 = 0. + t3608;
  t3623 = 0. + t2036;
  t3636 = -1.*t350;
  t3637 = 1. + t3636;
  t3642 = -0.091*t3637;
  t3656 = -0.091*t350;
  t3700 = 0. + t3642 + t3656;
  t3716 = t3700*t1742;
  t3718 = 0. + t3716;
  t3629 = 0.001*t2036;
  t3721 = t3292*t3718;
  t3751 = 0. + t3629 + t3721;
  t3797 = -0.001*t3292;
  t3800 = t2036*t3718;
  t3804 = 0. + t3797 + t3800;
  t3588 = t3292*t2266;
  t3596 = 0. + t3588;
  t3841 = t3700*t332;
  t3842 = 0. + t3841;
  t3936 = t3842*t2859;
  t3951 = -1.*t3842*t1923;
  p_output1[0]=0. + t2015*t2384 - 1.*t1923*t259;
  p_output1[1]=0. - 1.*t259*t2859 + t2015*t2996;
  p_output1[2]=0. + t2015*t3305;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1923*t2015 + t2384*t259;
  p_output1[7]=0. + t2015*t2859 + t259*t2996;
  p_output1[8]=0. + t259*t3305;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3596;
  p_output1[13]=t3616;
  p_output1[14]=t3623;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3616*(0. + t3623*t3751 + t3305*t3804) + t3623*(-1.*t3616*t3751 - 1.*t2996*t3804 - 1.*t2859*t3842);
  p_output1[19]=t3596*(0. - 1.*t3623*t3751 - 1.*t3305*t3804) + t3623*(t3596*t3751 + t2384*t3804 + t1923*t3842);
  p_output1[20]=0. + t3596*(t3616*t3751 + t2996*t3804 + t3936) + t3616*(-1.*t3596*t3751 - 1.*t2384*t3804 + t3951);
  p_output1[21]=t3596;
  p_output1[22]=t3616;
  p_output1[23]=t3623;
  p_output1[24]=0. + 0.001*t2859;
  p_output1[25]=0. - 0.001*t1923;
  p_output1[26]=0. + t1923*(0. + t2986*t3718 + t3936) + t2859*(0. - 1.*t2266*t3718 + t3951);
  p_output1[27]=t1923;
  p_output1[28]=t2859;
  p_output1[29]=0.;
  p_output1[30]=0. - 1.*(0. - 1.*t1710*t3700);
  p_output1[31]=0. - 1.*(0. + t3700*t904);
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
  p_output1[102]=0.;
  p_output1[103]=0.;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
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
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
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



void Jb_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
