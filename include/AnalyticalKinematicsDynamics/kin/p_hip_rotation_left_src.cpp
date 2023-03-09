/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_left_src.h"

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
  double t1244;
  double t1226;
  double t1245;
  double t1227;
  double t1259;
  double t1308;
  double t1301;
  double t1302;
  double t1305;
  double t1306;
  double t1181;
  double t1241;
  double t1262;
  double t1263;
  double t1273;
  double t1284;
  double t1286;
  double t1290;
  double t1309;
  double t1310;
  double t1316;
  double t1317;
  double t1340;
  double t1341;
  double t1346;
  double t1331;
  double t1332;
  double t1333;
  double t1355;
  double t1356;
  double t1376;
  double t1377;
  double t1184;
  double t1218;
  double t1220;
  double t1225;
  double t1292;
  double t1294;
  double t1307;
  double t1312;
  double t1318;
  double t1319;
  double t1326;
  double t1328;
  double t1389;
  double t1390;
  double t1391;
  double t1393;
  double t1394;
  double t1395;
  double t1406;
  double t1407;
  double t1408;
  double t1351;
  double t1352;
  double t1357;
  double t1358;
  double t1401;
  double t1403;
  double t1404;
  double t1364;
  double t1365;
  double t1372;
  double t1375;
  double t1378;
  double t1379;
  double t1381;
  double t1382;
  double t1433;
  double t1434;
  double t1435;
  double t1429;
  double t1430;
  double t1431;
  t1244 = Cos(var1[3]);
  t1226 = Cos(var1[5]);
  t1245 = Sin(var1[4]);
  t1227 = Sin(var1[3]);
  t1259 = Sin(var1[5]);
  t1308 = Sin(var1[7]);
  t1301 = Cos(var1[4]);
  t1302 = Cos(var1[7]);
  t1305 = -1.*t1302;
  t1306 = 1. + t1305;
  t1181 = Cos(var1[6]);
  t1241 = -1.*t1226*t1227;
  t1262 = t1244*t1245*t1259;
  t1263 = t1241 + t1262;
  t1273 = t1244*t1226*t1245;
  t1284 = t1227*t1259;
  t1286 = t1273 + t1284;
  t1290 = Sin(var1[6]);
  t1309 = -0.930418*t1308;
  t1310 = 0. + t1309;
  t1316 = -0.366501*t1308;
  t1317 = 0. + t1316;
  t1340 = t1181*t1286;
  t1341 = t1263*t1290;
  t1346 = t1340 + t1341;
  t1331 = t1181*t1263;
  t1332 = -1.*t1286*t1290;
  t1333 = t1331 + t1332;
  t1355 = 0.366501*t1308;
  t1356 = 0. + t1355;
  t1376 = 0.930418*t1308;
  t1377 = 0. + t1376;
  t1184 = -1.*t1181;
  t1218 = 1. + t1184;
  t1220 = 0.091*t1218;
  t1225 = 0. + t1220;
  t1292 = 0.091*t1290;
  t1294 = 0. + t1292;
  t1307 = -0.04500040093286238*t1306;
  t1312 = 0.07877663122399998*t1310;
  t1318 = 0.031030906668*t1317;
  t1319 = 0. + t1307 + t1312 + t1318;
  t1326 = -1.000000637725*t1306;
  t1328 = 1. + t1326;
  t1389 = t1244*t1226;
  t1390 = t1227*t1245*t1259;
  t1391 = t1389 + t1390;
  t1393 = t1226*t1227*t1245;
  t1394 = -1.*t1244*t1259;
  t1395 = t1393 + t1394;
  t1406 = t1181*t1395;
  t1407 = t1391*t1290;
  t1408 = t1406 + t1407;
  t1351 = -3.2909349868922137e-7*var1[7];
  t1352 = 0.03103092645718495*t1306;
  t1357 = -0.045000372235*t1356;
  t1358 = t1351 + t1352 + t1357;
  t1401 = t1181*t1391;
  t1403 = -1.*t1395*t1290;
  t1404 = t1401 + t1403;
  t1364 = -0.134322983001*t1306;
  t1365 = 1. + t1364;
  t1372 = 1.296332362046933e-7*var1[7];
  t1375 = 0.07877668146182712*t1306;
  t1378 = -0.045000372235*t1377;
  t1379 = t1372 + t1375 + t1378;
  t1381 = -0.8656776547239999*t1306;
  t1382 = 1. + t1381;
  t1433 = t1301*t1226*t1181;
  t1434 = t1301*t1259*t1290;
  t1435 = t1433 + t1434;
  t1429 = t1301*t1181*t1259;
  t1430 = -1.*t1301*t1226*t1290;
  t1431 = t1429 + t1430;
  p_output1[0]=0. + t1225*t1263 + t1286*t1294 + t1244*t1301*t1319 - 0.045*(t1244*t1301*t1328 + t1310*t1333 + t1317*t1346) + t1346*t1358 - 0.046986*(-0.340999127418*t1306*t1333 + t1244*t1301*t1356 + t1346*t1365) + t1333*t1379 + 0.109508*(-0.340999127418*t1306*t1346 + t1244*t1301*t1377 + t1333*t1382) + var1[0];
  p_output1[1]=0. + t1227*t1301*t1319 + t1225*t1391 + t1294*t1395 + t1379*t1404 + t1358*t1408 + 0.109508*(t1227*t1301*t1377 + t1382*t1404 - 0.340999127418*t1306*t1408) - 0.045*(t1227*t1301*t1328 + t1310*t1404 + t1317*t1408) - 0.046986*(t1227*t1301*t1356 - 0.340999127418*t1306*t1404 + t1365*t1408) + var1[1];
  p_output1[2]=0. + t1225*t1259*t1301 + t1226*t1294*t1301 - 1.*t1245*t1319 + t1379*t1431 + t1358*t1435 + 0.109508*(-1.*t1245*t1377 + t1382*t1431 - 0.340999127418*t1306*t1435) - 0.045*(-1.*t1245*t1328 + t1310*t1431 + t1317*t1435) - 0.046986*(-1.*t1245*t1356 - 0.340999127418*t1306*t1431 + t1365*t1435) + var1[2];
}



void p_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
