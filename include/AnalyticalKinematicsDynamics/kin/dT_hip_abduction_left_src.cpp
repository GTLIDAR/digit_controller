/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_hip_abduction_left_src.h"

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
  double t900;
  double t912;
  double t925;
  double t917;
  double t923;
  double t927;
  double t986;
  double t979;
  double t994;
  double t996;
  double t999;
  double t983;
  double t987;
  double t988;
  double t1022;
  double t1024;
  double t1025;
  double t1055;
  double t1056;
  double t1057;
  double t1049;
  double t1050;
  double t1051;
  double t1026;
  double t1027;
  double t1030;
  double t1010;
  double t1054;
  double t1104;
  double t1106;
  double t1108;
  double t1121;
  double t1126;
  double t1127;
  double t924;
  double t930;
  double t932;
  double t960;
  double t961;
  double t962;
  double t992;
  double t1002;
  double t1003;
  double t1014;
  double t1016;
  double t1041;
  double t1042;
  double t1043;
  double t1058;
  double t1059;
  double t1065;
  double t1066;
  double t1067;
  double t1073;
  double t1074;
  double t1076;
  double t1079;
  double t1082;
  double t1083;
  double t1031;
  double t1090;
  double t1093;
  double t1109;
  double t1110;
  double t1112;
  double t1113;
  double t1114;
  double t1128;
  double t1129;
  double t1130;
  double t1132;
  double t1133;
  double t1134;
  double t1139;
  double t1140;
  double t1141;
  double t1143;
  double t1144;
  double t1145;
  double t1149;
  double t1150;
  double t1151;
  double t1153;
  double t1156;
  double t1157;
  double t1162;
  double t1163;
  double t1164;
  double t1166;
  double t1167;
  double t1168;
  double t1231;
  double t1232;
  double t1233;
  double t1234;
  double t1236;
  double t1237;
  t900 = Cos(var1[3]);
  t912 = Cos(var1[4]);
  t925 = Cos(var1[5]);
  t917 = Cos(var1[6]);
  t923 = Sin(var1[5]);
  t927 = Sin(var1[6]);
  t986 = Sin(var1[4]);
  t979 = Sin(var1[3]);
  t994 = t900*t925*t986;
  t996 = t979*t923;
  t999 = t994 + t996;
  t983 = t925*t979;
  t987 = -1.*t900*t986*t923;
  t988 = t983 + t987;
  t1022 = -1.*t925*t979;
  t1024 = t900*t986*t923;
  t1025 = t1022 + t1024;
  t1055 = -1.*t925*t979*t986;
  t1056 = t900*t923;
  t1057 = t1055 + t1056;
  t1049 = -1.*t900*t925;
  t1050 = -1.*t979*t986*t923;
  t1051 = t1049 + t1050;
  t1026 = t917*t1025;
  t1027 = -1.*t999*t927;
  t1030 = t1026 + t1027;
  t1010 = t917*t999;
  t1054 = t917*t1051;
  t1104 = t925*t979*t986;
  t1106 = -1.*t900*t923;
  t1108 = t1104 + t1106;
  t1121 = t900*t925;
  t1126 = t979*t986*t923;
  t1127 = t1121 + t1126;
  t924 = t900*t912*t917*t923;
  t930 = -1.*t900*t912*t925*t927;
  t932 = t924 + t930;
  t960 = t900*t912*t925*t917;
  t961 = t900*t912*t923*t927;
  t962 = t960 + t961;
  t992 = t917*t988;
  t1002 = t999*t927;
  t1003 = t992 + t1002;
  t1014 = -1.*t988*t927;
  t1016 = t1010 + t1014;
  t1041 = -1.*t917*t999;
  t1042 = -1.*t1025*t927;
  t1043 = t1041 + t1042;
  t1058 = -1.*t1057*t927;
  t1059 = t1054 + t1058;
  t1065 = t917*t1057;
  t1066 = t1051*t927;
  t1067 = t1065 + t1066;
  t1073 = t912*t917*t979*t923;
  t1074 = -1.*t912*t925*t979*t927;
  t1076 = t1073 + t1074;
  t1079 = t912*t925*t917*t979;
  t1082 = t912*t979*t923*t927;
  t1083 = t1079 + t1082;
  t1031 = 0.930418*t1030;
  t1090 = t1025*t927;
  t1093 = t1010 + t1090;
  t1109 = t1108*t927;
  t1110 = t1054 + t1109;
  t1112 = t917*t1108;
  t1113 = -1.*t1051*t927;
  t1114 = t1112 + t1113;
  t1128 = t917*t1127;
  t1129 = -1.*t1108*t927;
  t1130 = t1128 + t1129;
  t1132 = -1.*t917*t1108;
  t1133 = -1.*t1127*t927;
  t1134 = t1132 + t1133;
  t1139 = t912*t917*t923;
  t1140 = -1.*t912*t925*t927;
  t1141 = t1139 + t1140;
  t1143 = -1.*t912*t925*t917;
  t1144 = -1.*t912*t923*t927;
  t1145 = t1143 + t1144;
  t1149 = -1.*t912*t917*t923;
  t1150 = t912*t925*t927;
  t1151 = t1149 + t1150;
  t1153 = t912*t925*t917;
  t1156 = t912*t923*t927;
  t1157 = t1153 + t1156;
  t1162 = -1.*t917*t986*t923;
  t1163 = t925*t986*t927;
  t1164 = t1162 + t1163;
  t1166 = -1.*t925*t917*t986;
  t1167 = -1.*t986*t923*t927;
  t1168 = t1166 + t1167;
  t1231 = -1.*t917;
  t1232 = 1. + t1231;
  t1233 = 0.091*t1232;
  t1234 = 0. + t1233;
  t1236 = 0.091*t927;
  t1237 = 0. + t1236;
  p_output1[0]=(-0.366501*t1059 + 0.930418*t1067)*var2[3] + (-0.366501*t932 + 0.930418*t962)*var2[4] + (0.930418*t1003 - 0.366501*t1016)*var2[5] + (t1031 - 0.366501*t1043)*var2[6];
  p_output1[1]=(-0.366501*t1030 + 0.930418*t1093)*var2[3] + (-0.366501*t1076 + 0.930418*t1083)*var2[4] + (0.930418*t1110 - 0.366501*t1114)*var2[5] + (0.930418*t1130 - 0.366501*t1134)*var2[6];
  p_output1[2]=(-0.366501*t1164 + 0.930418*t1168)*var2[4] + (0.930418*t1151 - 0.366501*t1157)*var2[5] + (0.930418*t1141 - 0.366501*t1145)*var2[6];
  p_output1[3]=0;
  p_output1[4]=(0.930418*t1059 + 0.366501*t1067)*var2[3] + (0.930418*t932 + 0.366501*t962)*var2[4] + (0.366501*t1003 + 0.930418*t1016)*var2[5] + (0.366501*t1030 + 0.930418*t1043)*var2[6];
  p_output1[5]=(t1031 + 0.366501*t1093)*var2[3] + (0.930418*t1076 + 0.366501*t1083)*var2[4] + (0.366501*t1110 + 0.930418*t1114)*var2[5] + (0.366501*t1130 + 0.930418*t1134)*var2[6];
  p_output1[6]=(0.930418*t1164 + 0.366501*t1168)*var2[4] + (0.366501*t1151 + 0.930418*t1157)*var2[5] + (0.366501*t1141 + 0.930418*t1145)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t912*t979*var2[3] + t900*t986*var2[4];
  p_output1[9]=-1.*t900*t912*var2[3] + t979*t986*var2[4];
  p_output1[10]=t912*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.091*t1059 + t1051*t1234 + t1057*t1237 + 0.001*t912*t979)*var2[3] + (t1234*t900*t912*t923 + t1237*t900*t912*t925 + 0.091*t932 + 0.001*t900*t986)*var2[4] + (0.091*t1016 + t1237*t988 + t1234*t999)*var2[5] + (0.091*t1043 + 0.091*t1025*t927 + 0.091*t917*t999)*var2[6];
  p_output1[13]=var2[1] + (0.091*t1030 + t1025*t1234 - 0.001*t900*t912 + t1237*t999)*var2[3] + (0.091*t1076 + t1234*t912*t923*t979 + t1237*t912*t925*t979 + 0.001*t979*t986)*var2[4] + (0.091*t1114 + t1108*t1234 + t1051*t1237)*var2[5] + (0.091*t1134 + 0.091*t1108*t917 + 0.091*t1127*t927)*var2[6];
  p_output1[14]=var2[2] + (0.091*t1164 + 0.001*t912 - 1.*t1234*t923*t986 - 1.*t1237*t925*t986)*var2[4] + (0.091*t1157 - 1.*t1237*t912*t923 + t1234*t912*t925)*var2[5] + (0.091*t1145 + 0.091*t912*t917*t925 + 0.091*t912*t923*t927)*var2[6];
  p_output1[15]=0;
}



void dT_hip_abduction_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
