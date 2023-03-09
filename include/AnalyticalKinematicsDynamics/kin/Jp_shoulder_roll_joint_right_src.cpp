/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_shoulder_roll_joint_right_src.h"

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
  double t145;
  double t1169;
  double t1191;
  double t1305;
  double t1866;
  double t2129;
  double t1999;
  double t2024;
  double t2352;
  double t2056;
  double t2455;
  double t2506;
  double t2639;
  double t2668;
  double t2670;
  double t142;
  double t1430;
  double t1872;
  double t1998;
  double t2549;
  double t2575;
  double t2623;
  double t2832;
  double t2842;
  double t2849;
  double t2855;
  double t2895;
  double t2901;
  double t3149;
  double t3154;
  double t3162;
  double t2921;
  double t3202;
  double t3203;
  double t3205;
  double t2704;
  double t2907;
  double t2909;
  double t2914;
  double t3274;
  double t3285;
  double t3287;
  double t3304;
  double t3306;
  double t3333;
  double t3334;
  double t3340;
  t145 = Sin(var1[3]);
  t1169 = Cos(var1[24]);
  t1191 = -1.*t1169;
  t1305 = 1. + t1191;
  t1866 = Sin(var1[24]);
  t2129 = Cos(var1[3]);
  t1999 = Cos(var1[5]);
  t2024 = Sin(var1[4]);
  t2352 = Sin(var1[5]);
  t2056 = -1.*t1999*t145*t2024;
  t2455 = t2129*t2352;
  t2506 = t2056 + t2455;
  t2639 = -1.*t2129*t1999;
  t2668 = -1.*t145*t2024*t2352;
  t2670 = t2639 + t2668;
  t142 = Cos(var1[4]);
  t1430 = 0.4*t1305;
  t1872 = -0.12*t1866;
  t1998 = 0. + t1430 + t1872;
  t2549 = -0.12*t1305;
  t2575 = -0.4*t1866;
  t2623 = 0. + t2549 + t2575;
  t2832 = t2129*t1999*t2024;
  t2842 = t145*t2352;
  t2849 = t2832 + t2842;
  t2855 = -1.*t1999*t145;
  t2895 = t2129*t2024*t2352;
  t2901 = t2855 + t2895;
  t3149 = t1999*t145;
  t3154 = -1.*t2129*t2024*t2352;
  t3162 = t3149 + t3154;
  t2921 = t1169*t2849;
  t3202 = t1999*t145*t2024;
  t3203 = -1.*t2129*t2352;
  t3205 = t3202 + t3203;
  t2704 = t1169*t2670;
  t2907 = -1.*t1866*t2849;
  t2909 = t1169*t2901;
  t2914 = t2907 + t2909;
  t3274 = -0.12*t1169;
  t3285 = 0.4*t1866;
  t3287 = t3274 + t3285;
  t3304 = -0.4*t1169;
  t3306 = t3304 + t1872;
  t3333 = t2129*t1999;
  t3334 = t145*t2024*t2352;
  t3340 = t3333 + t3334;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.001*t142*t145 + t1998*t2506 + t2623*t2670 + 0.4*(t1169*t2506 + t1866*t2670) - 0.12*(-1.*t1866*t2506 + t2704);
  p_output1[10]=-0.001*t142*t2129 + t1998*t2849 + t2623*t2901 - 0.12*t2914 + 0.4*(t1866*t2901 + t2921);
  p_output1[11]=0;
  p_output1[12]=t142*t1998*t1999*t2129 + 0.001*t2024*t2129 - 0.12*(-1.*t142*t1866*t1999*t2129 + t1169*t142*t2129*t2352) + 0.4*(t1169*t142*t1999*t2129 + t142*t1866*t2129*t2352) + t142*t2129*t2352*t2623;
  p_output1[13]=t142*t145*t1998*t1999 + 0.001*t145*t2024 - 0.12*(-1.*t142*t145*t1866*t1999 + t1169*t142*t145*t2352) + 0.4*(t1169*t142*t145*t1999 + t142*t145*t1866*t2352) + t142*t145*t2352*t2623;
  p_output1[14]=0.001*t142 - 1.*t1998*t1999*t2024 - 0.12*(t1866*t1999*t2024 - 1.*t1169*t2024*t2352) + 0.4*(-1.*t1169*t1999*t2024 - 1.*t1866*t2024*t2352) - 1.*t2024*t2352*t2623;
  p_output1[15]=t2623*t2849 + t1998*t3162 + 0.4*(t1866*t2849 + t1169*t3162) - 0.12*(t2921 - 1.*t1866*t3162);
  p_output1[16]=t1998*t2670 + t2623*t3205 - 0.12*(-1.*t1866*t2670 + t1169*t3205) + 0.4*(t2704 + t1866*t3205);
  p_output1[17]=-1.*t142*t1998*t2352 + 0.4*(t142*t1866*t1999 - 1.*t1169*t142*t2352) - 0.12*(t1169*t142*t1999 + t142*t1866*t2352) + t142*t1999*t2623;
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
  p_output1[72]=-0.12*(-1.*t1169*t2849 - 1.*t1866*t2901) + 0.4*t2914 + t2849*t3287 + t2901*t3306;
  p_output1[73]=t3205*t3287 + t3306*t3340 + 0.4*(-1.*t1866*t3205 + t1169*t3340) - 0.12*(-1.*t1169*t3205 - 1.*t1866*t3340);
  p_output1[74]=0.4*(-1.*t142*t1866*t1999 + t1169*t142*t2352) - 0.12*(-1.*t1169*t142*t1999 - 1.*t142*t1866*t2352) + t142*t1999*t3287 + t142*t2352*t3306;
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



void Jp_shoulder_roll_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
