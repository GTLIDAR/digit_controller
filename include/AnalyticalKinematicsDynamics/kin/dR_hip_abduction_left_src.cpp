/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_hip_abduction_left_src.h"

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
  double t1079;
  double t1112;
  double t1134;
  double t1114;
  double t1119;
  double t1135;
  double t1177;
  double t1172;
  double t1184;
  double t1190;
  double t1192;
  double t1176;
  double t1178;
  double t1179;
  double t1215;
  double t1216;
  double t1217;
  double t1236;
  double t1238;
  double t1239;
  double t1229;
  double t1230;
  double t1233;
  double t1218;
  double t1219;
  double t1220;
  double t1200;
  double t1235;
  double t1279;
  double t1282;
  double t1283;
  double t1294;
  double t1297;
  double t1298;
  double t1131;
  double t1136;
  double t1137;
  double t1156;
  double t1157;
  double t1160;
  double t1181;
  double t1197;
  double t1198;
  double t1204;
  double t1207;
  double t1223;
  double t1224;
  double t1225;
  double t1240;
  double t1241;
  double t1245;
  double t1246;
  double t1247;
  double t1253;
  double t1254;
  double t1256;
  double t1259;
  double t1262;
  double t1263;
  double t1221;
  double t1269;
  double t1270;
  double t1284;
  double t1285;
  double t1287;
  double t1288;
  double t1289;
  double t1299;
  double t1300;
  double t1301;
  double t1303;
  double t1304;
  double t1305;
  double t1310;
  double t1311;
  double t1312;
  double t1314;
  double t1315;
  double t1316;
  double t1320;
  double t1321;
  double t1322;
  double t1324;
  double t1325;
  double t1326;
  double t1330;
  double t1331;
  double t1332;
  double t1334;
  double t1335;
  double t1336;
  t1079 = Cos(var1[3]);
  t1112 = Cos(var1[4]);
  t1134 = Cos(var1[5]);
  t1114 = Cos(var1[6]);
  t1119 = Sin(var1[5]);
  t1135 = Sin(var1[6]);
  t1177 = Sin(var1[4]);
  t1172 = Sin(var1[3]);
  t1184 = t1079*t1134*t1177;
  t1190 = t1172*t1119;
  t1192 = t1184 + t1190;
  t1176 = t1134*t1172;
  t1178 = -1.*t1079*t1177*t1119;
  t1179 = t1176 + t1178;
  t1215 = -1.*t1134*t1172;
  t1216 = t1079*t1177*t1119;
  t1217 = t1215 + t1216;
  t1236 = -1.*t1134*t1172*t1177;
  t1238 = t1079*t1119;
  t1239 = t1236 + t1238;
  t1229 = -1.*t1079*t1134;
  t1230 = -1.*t1172*t1177*t1119;
  t1233 = t1229 + t1230;
  t1218 = t1114*t1217;
  t1219 = -1.*t1192*t1135;
  t1220 = t1218 + t1219;
  t1200 = t1114*t1192;
  t1235 = t1114*t1233;
  t1279 = t1134*t1172*t1177;
  t1282 = -1.*t1079*t1119;
  t1283 = t1279 + t1282;
  t1294 = t1079*t1134;
  t1297 = t1172*t1177*t1119;
  t1298 = t1294 + t1297;
  t1131 = t1079*t1112*t1114*t1119;
  t1136 = -1.*t1079*t1112*t1134*t1135;
  t1137 = t1131 + t1136;
  t1156 = t1079*t1112*t1134*t1114;
  t1157 = t1079*t1112*t1119*t1135;
  t1160 = t1156 + t1157;
  t1181 = t1114*t1179;
  t1197 = t1192*t1135;
  t1198 = t1181 + t1197;
  t1204 = -1.*t1179*t1135;
  t1207 = t1200 + t1204;
  t1223 = -1.*t1114*t1192;
  t1224 = -1.*t1217*t1135;
  t1225 = t1223 + t1224;
  t1240 = -1.*t1239*t1135;
  t1241 = t1235 + t1240;
  t1245 = t1114*t1239;
  t1246 = t1233*t1135;
  t1247 = t1245 + t1246;
  t1253 = t1112*t1114*t1172*t1119;
  t1254 = -1.*t1112*t1134*t1172*t1135;
  t1256 = t1253 + t1254;
  t1259 = t1112*t1134*t1114*t1172;
  t1262 = t1112*t1172*t1119*t1135;
  t1263 = t1259 + t1262;
  t1221 = 0.930418*t1220;
  t1269 = t1217*t1135;
  t1270 = t1200 + t1269;
  t1284 = t1283*t1135;
  t1285 = t1235 + t1284;
  t1287 = t1114*t1283;
  t1288 = -1.*t1233*t1135;
  t1289 = t1287 + t1288;
  t1299 = t1114*t1298;
  t1300 = -1.*t1283*t1135;
  t1301 = t1299 + t1300;
  t1303 = -1.*t1114*t1283;
  t1304 = -1.*t1298*t1135;
  t1305 = t1303 + t1304;
  t1310 = t1112*t1114*t1119;
  t1311 = -1.*t1112*t1134*t1135;
  t1312 = t1310 + t1311;
  t1314 = -1.*t1112*t1134*t1114;
  t1315 = -1.*t1112*t1119*t1135;
  t1316 = t1314 + t1315;
  t1320 = -1.*t1112*t1114*t1119;
  t1321 = t1112*t1134*t1135;
  t1322 = t1320 + t1321;
  t1324 = t1112*t1134*t1114;
  t1325 = t1112*t1119*t1135;
  t1326 = t1324 + t1325;
  t1330 = -1.*t1114*t1177*t1119;
  t1331 = t1134*t1177*t1135;
  t1332 = t1330 + t1331;
  t1334 = -1.*t1134*t1114*t1177;
  t1335 = -1.*t1177*t1119*t1135;
  t1336 = t1334 + t1335;
  p_output1[0]=(-0.366501*t1241 + 0.930418*t1247)*var2[3] + (-0.366501*t1137 + 0.930418*t1160)*var2[4] + (0.930418*t1198 - 0.366501*t1207)*var2[5] + (t1221 - 0.366501*t1225)*var2[6];
  p_output1[1]=(-0.366501*t1220 + 0.930418*t1270)*var2[3] + (-0.366501*t1256 + 0.930418*t1263)*var2[4] + (0.930418*t1285 - 0.366501*t1289)*var2[5] + (0.930418*t1301 - 0.366501*t1305)*var2[6];
  p_output1[2]=(-0.366501*t1332 + 0.930418*t1336)*var2[4] + (0.930418*t1322 - 0.366501*t1326)*var2[5] + (0.930418*t1312 - 0.366501*t1316)*var2[6];
  p_output1[3]=(0.930418*t1241 + 0.366501*t1247)*var2[3] + (0.930418*t1137 + 0.366501*t1160)*var2[4] + (0.366501*t1198 + 0.930418*t1207)*var2[5] + (0.366501*t1220 + 0.930418*t1225)*var2[6];
  p_output1[4]=(t1221 + 0.366501*t1270)*var2[3] + (0.930418*t1256 + 0.366501*t1263)*var2[4] + (0.366501*t1285 + 0.930418*t1289)*var2[5] + (0.366501*t1301 + 0.930418*t1305)*var2[6];
  p_output1[5]=(0.930418*t1332 + 0.366501*t1336)*var2[4] + (0.366501*t1322 + 0.930418*t1326)*var2[5] + (0.366501*t1312 + 0.930418*t1316)*var2[6];
  p_output1[6]=t1112*t1172*var2[3] + t1079*t1177*var2[4];
  p_output1[7]=-1.*t1079*t1112*var2[3] + t1172*t1177*var2[4];
  p_output1[8]=t1112*var2[4];
}



void dR_hip_abduction_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
