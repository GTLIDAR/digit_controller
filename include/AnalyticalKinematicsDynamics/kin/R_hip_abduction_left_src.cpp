/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_left_src.h"

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
  double t1016;
  double t996;
  double t1024;
  double t1003;
  double t1026;
  double t961;
  double t1059;
  double t1064;
  double t1065;
  double t1007;
  double t1047;
  double t1048;
  double t1067;
  double t1119;
  double t1121;
  double t1128;
  double t1110;
  double t1111;
  double t1112;
  double t1141;
  double t1056;
  double t1070;
  double t1072;
  double t1079;
  double t1082;
  double t1097;
  double t1114;
  double t1130;
  double t1131;
  double t1135;
  double t1136;
  double t1137;
  double t1142;
  double t1145;
  double t1146;
  double t1148;
  double t1152;
  double t1153;
  t1016 = Cos(var1[3]);
  t996 = Cos(var1[5]);
  t1024 = Sin(var1[4]);
  t1003 = Sin(var1[3]);
  t1026 = Sin(var1[5]);
  t961 = Cos(var1[6]);
  t1059 = t1016*t996*t1024;
  t1064 = t1003*t1026;
  t1065 = t1059 + t1064;
  t1007 = -1.*t996*t1003;
  t1047 = t1016*t1024*t1026;
  t1048 = t1007 + t1047;
  t1067 = Sin(var1[6]);
  t1119 = t996*t1003*t1024;
  t1121 = -1.*t1016*t1026;
  t1128 = t1119 + t1121;
  t1110 = t1016*t996;
  t1111 = t1003*t1024*t1026;
  t1112 = t1110 + t1111;
  t1141 = Cos(var1[4]);
  t1056 = t961*t1048;
  t1070 = -1.*t1065*t1067;
  t1072 = t1056 + t1070;
  t1079 = t961*t1065;
  t1082 = t1048*t1067;
  t1097 = t1079 + t1082;
  t1114 = t961*t1112;
  t1130 = -1.*t1128*t1067;
  t1131 = t1114 + t1130;
  t1135 = t961*t1128;
  t1136 = t1112*t1067;
  t1137 = t1135 + t1136;
  t1142 = t1141*t961*t1026;
  t1145 = -1.*t1141*t996*t1067;
  t1146 = t1142 + t1145;
  t1148 = t1141*t996*t961;
  t1152 = t1141*t1026*t1067;
  t1153 = t1148 + t1152;
  p_output1[0]=-0.366501*t1072 + 0.930418*t1097;
  p_output1[1]=-0.366501*t1131 + 0.930418*t1137;
  p_output1[2]=-0.366501*t1146 + 0.930418*t1153;
  p_output1[3]=0.930418*t1072 + 0.366501*t1097;
  p_output1[4]=0.930418*t1131 + 0.366501*t1137;
  p_output1[5]=0.930418*t1146 + 0.366501*t1153;
  p_output1[6]=-1.*t1016*t1141;
  p_output1[7]=-1.*t1003*t1141;
  p_output1[8]=t1024;
}



void R_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
