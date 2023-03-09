/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_hip_abduction_left_src.h"

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
  double t839;
  double t833;
  double t846;
  double t835;
  double t869;
  double t828;
  double t878;
  double t879;
  double t880;
  double t836;
  double t872;
  double t874;
  double t882;
  double t912;
  double t913;
  double t915;
  double t904;
  double t906;
  double t907;
  double t933;
  double t877;
  double t883;
  double t884;
  double t887;
  double t896;
  double t900;
  double t910;
  double t916;
  double t917;
  double t924;
  double t925;
  double t927;
  double t934;
  double t939;
  double t942;
  double t946;
  double t950;
  double t953;
  double t984;
  double t985;
  double t986;
  double t987;
  double t991;
  double t992;
  t839 = Cos(var1[3]);
  t833 = Cos(var1[5]);
  t846 = Sin(var1[4]);
  t835 = Sin(var1[3]);
  t869 = Sin(var1[5]);
  t828 = Cos(var1[6]);
  t878 = t839*t833*t846;
  t879 = t835*t869;
  t880 = t878 + t879;
  t836 = -1.*t833*t835;
  t872 = t839*t846*t869;
  t874 = t836 + t872;
  t882 = Sin(var1[6]);
  t912 = t833*t835*t846;
  t913 = -1.*t839*t869;
  t915 = t912 + t913;
  t904 = t839*t833;
  t906 = t835*t846*t869;
  t907 = t904 + t906;
  t933 = Cos(var1[4]);
  t877 = t828*t874;
  t883 = -1.*t880*t882;
  t884 = t877 + t883;
  t887 = t828*t880;
  t896 = t874*t882;
  t900 = t887 + t896;
  t910 = t828*t907;
  t916 = -1.*t915*t882;
  t917 = t910 + t916;
  t924 = t828*t915;
  t925 = t907*t882;
  t927 = t924 + t925;
  t934 = t933*t828*t869;
  t939 = -1.*t933*t833*t882;
  t942 = t934 + t939;
  t946 = t933*t833*t828;
  t950 = t933*t869*t882;
  t953 = t946 + t950;
  t984 = -1.*t828;
  t985 = 1. + t984;
  t986 = 0.091*t985;
  t987 = 0. + t986;
  t991 = 0.091*t882;
  t992 = 0. + t991;
  p_output1[0]=-0.366501*t884 + 0.930418*t900;
  p_output1[1]=-0.366501*t917 + 0.930418*t927;
  p_output1[2]=-0.366501*t942 + 0.930418*t953;
  p_output1[3]=0.;
  p_output1[4]=0.930418*t884 + 0.366501*t900;
  p_output1[5]=0.930418*t917 + 0.366501*t927;
  p_output1[6]=0.930418*t942 + 0.366501*t953;
  p_output1[7]=0.;
  p_output1[8]=-1.*t839*t933;
  p_output1[9]=-1.*t835*t933;
  p_output1[10]=t846;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.091*t884 - 0.001*t839*t933 + t874*t987 + t880*t992 + var1[0];
  p_output1[13]=0. + 0.091*t917 - 0.001*t835*t933 + t907*t987 + t915*t992 + var1[1];
  p_output1[14]=0. + 0.001*t846 + 0.091*t942 + t869*t933*t987 + t833*t933*t992 + var1[2];
  p_output1[15]=1.;
}



void T_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
