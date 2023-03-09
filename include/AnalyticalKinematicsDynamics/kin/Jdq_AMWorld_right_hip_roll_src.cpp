/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_right_hip_roll_src.h"

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
  double t361;
  double t557;
  double t870;
  double t507;
  double t565;
  double t1056;
  double t1221;
  double t1698;
  double t44;
  double t387;
  double t2680;
  double t2356;
  double t2710;
  double t2757;
  double t2841;
  double t2956;
  double t2959;
  double t404;
  double t1292;
  double t1306;
  double t1376;
  double t1650;
  double t1713;
  double t1735;
  double t1738;
  double t1824;
  double t2796;
  double t2988;
  double t3020;
  double t3119;
  double t3176;
  double t3178;
  double t444;
  double t1831;
  double t1855;
  double t1933;
  double t1963;
  double t2012;
  double t2066;
  double t2128;
  double t2202;
  double t2263;
  double t2282;
  double t4158;
  double t4177;
  double t4193;
  double t4276;
  double t4383;
  double t4414;
  double t3401;
  double t3561;
  double t3609;
  double t4262;
  double t4511;
  double t4616;
  double t4682;
  double t4687;
  double t4705;
  double t5067;
  double t5084;
  double t5103;
  double t5147;
  double t5156;
  double t5159;
  double t3084;
  double t3228;
  double t3328;
  double t5315;
  double t5340;
  double t5356;
  double t3724;
  double t3850;
  double t3871;
  double t5365;
  double t5382;
  double t4634;
  double t4712;
  double t4735;
  double t4839;
  double t4922;
  double t4992;
  double t5130;
  double t5161;
  double t5176;
  double t5214;
  double t5218;
  double t5243;
  t361 = Cos(var1[4]);
  t557 = Cos(var1[17]);
  t870 = Sin(var1[17]);
  t507 = Cos(var1[5]);
  t565 = 0.930418*t557;
  t1056 = -0.366501*t870;
  t1221 = t565 + t1056;
  t1698 = Sin(var1[5]);
  t44 = Cos(var1[3]);
  t387 = Sin(var1[4]);
  t2680 = Sin(var1[3]);
  t2356 = t44*t507*t387;
  t2710 = t2680*t1698;
  t2757 = t2356 + t2710;
  t2841 = -1.*t507*t2680;
  t2956 = t44*t387*t1698;
  t2959 = t2841 + t2956;
  t404 = 0. + t387;
  t1292 = t507*t1221;
  t1306 = 0.366501*t557;
  t1376 = 0.930418*t870;
  t1650 = t1306 + t1376;
  t1713 = t1650*t1698;
  t1735 = 0. + t1292 + t1713;
  t1738 = t361*t1735;
  t1824 = 0. + t1738;
  t2796 = -1.*t870*t2757;
  t2988 = t557*t2959;
  t3020 = t2796 + t2988;
  t3119 = t557*t2757;
  t3176 = t870*t2959;
  t3178 = t3119 + t3176;
  t444 = 0.00077*t404;
  t1831 = 0.00001*t1824;
  t1855 = t444 + t1831;
  t1933 = -0.366501*t557;
  t1963 = -0.930418*t870;
  t2012 = t1933 + t1963;
  t2066 = t507*t2012;
  t2128 = t1221*t1698;
  t2202 = 0. + t2066 + t2128;
  t2263 = t361*t2202;
  t2282 = 0. + t2263;
  t4158 = t507*t2680*t387;
  t4177 = -1.*t44*t1698;
  t4193 = t4158 + t4177;
  t4276 = t44*t507;
  t4383 = t2680*t387*t1698;
  t4414 = t4276 + t4383;
  t3401 = 0.00001*t404;
  t3561 = 0.00102*t1824;
  t3609 = t3401 + t3561;
  t4262 = -1.*t870*t4193;
  t4511 = t557*t4414;
  t4616 = t4262 + t4511;
  t4682 = t557*t4193;
  t4687 = t870*t4414;
  t4705 = t4682 + t4687;
  t5067 = -1.*t361*t507*t870;
  t5084 = t557*t361*t1698;
  t5103 = t5067 + t5084;
  t5147 = t557*t361*t507;
  t5156 = t361*t870*t1698;
  t5159 = t5147 + t5156;
  t3084 = 0.930418*t3020;
  t3228 = -0.366501*t3178;
  t3328 = t3084 + t3228;
  t5315 = t507*t1650;
  t5340 = -1.*t1221*t1698;
  t5356 = 0. + t5315 + t5340;
  t3724 = 0.366501*t3020;
  t3850 = 0.930418*t3178;
  t3871 = t3724 + t3850;
  t5365 = -1.*t2012*t1698;
  t5382 = 0. + t1292 + t5365;
  t4634 = 0.930418*t4616;
  t4712 = -0.366501*t4705;
  t4735 = t4634 + t4712;
  t4839 = 0.366501*t4616;
  t4922 = 0.930418*t4705;
  t4992 = t4839 + t4922;
  t5130 = 0.930418*t5103;
  t5161 = -0.366501*t5159;
  t5176 = t5130 + t5161;
  t5214 = 0.366501*t5103;
  t5218 = 0.930418*t5159;
  t5243 = t5214 + t5218;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00115*t2282*t3328 + t3609*t3871 - 1.*t1855*t361*t44;
  p_output1[10]=-1.*t1855*t2680*t361 + 0.00115*t2282*t4735 + t3609*t4992;
  p_output1[11]=t1855*t387 + 0.00115*t2282*t5176 + t3609*t5243;
  p_output1[12]=0.00102*t3871*t5356 - 0.00001*t361*t44*t5356 + 0.00115*t3328*t5382;
  p_output1[13]=-0.00001*t2680*t361*t5356 + 0.00102*t4992*t5356 + 0.00115*t4735*t5382;
  p_output1[14]=0.00001*t387*t5356 + 0.00102*t5243*t5356 + 0.00115*t5176*t5382;
  p_output1[15]=-0.00001*t3871 + 0.00077*t361*t44;
  p_output1[16]=0.00077*t2680*t361 - 0.00001*t4992;
  p_output1[17]=-0.00077*t387 - 0.00001*t5243;
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
  p_output1[51]=0.00001*t3871 - 0.00077*t361*t44;
  p_output1[52]=-0.00077*t2680*t361 + 0.00001*t4992;
  p_output1[53]=0.00077*t387 + 0.00001*t5243;
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



void Jdq_AMWorld_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
