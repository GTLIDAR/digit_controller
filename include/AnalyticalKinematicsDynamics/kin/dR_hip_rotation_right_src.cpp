/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_hip_rotation_right_src.h"

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
  double t895;
  double t1321;
  double t1021;
  double t1498;
  double t1398;
  double t1418;
  double t1543;
  double t2069;
  double t2076;
  double t899;
  double t2845;
  double t1042;
  double t1299;
  double t2837;
  double t2857;
  double t2858;
  double t3106;
  double t3152;
  double t3160;
  double t3650;
  double t3666;
  double t3671;
  double t144;
  double t3629;
  double t3716;
  double t3768;
  double t3387;
  double t343;
  double t573;
  double t634;
  double t681;
  double t4305;
  double t4308;
  double t4328;
  double t4353;
  double t4359;
  double t4411;
  double t4061;
  double t4088;
  double t4412;
  double t4817;
  double t4828;
  double t4883;
  double t5051;
  double t5052;
  double t5062;
  double t5030;
  double t5075;
  double t5084;
  double t4924;
  double t5202;
  double t5224;
  double t5245;
  double t5340;
  double t5353;
  double t5354;
  double t1467;
  double t1589;
  double t1594;
  double t2338;
  double t2588;
  double t2600;
  double t3047;
  double t3286;
  double t3325;
  double t5632;
  double t5660;
  double t3396;
  double t3558;
  double t5556;
  double t5570;
  double t3840;
  double t3855;
  double t3897;
  double t5525;
  double t5527;
  double t4331;
  double t4448;
  double t4573;
  double t4579;
  double t4593;
  double t5626;
  double t5630;
  double t4676;
  double t4678;
  double t4687;
  double t4710;
  double t4716;
  double t4722;
  double t5800;
  double t4906;
  double t4911;
  double t4952;
  double t4971;
  double t5094;
  double t5098;
  double t5102;
  double t5164;
  double t5175;
  double t5268;
  double t5269;
  double t5274;
  double t5389;
  double t5390;
  double t5428;
  double t5475;
  double t5476;
  double t5477;
  double t5487;
  double t5497;
  double t5500;
  double t5533;
  double t5537;
  double t5578;
  double t5606;
  double t5631;
  double t5661;
  double t5667;
  double t5673;
  double t5724;
  double t5733;
  double t5735;
  double t5750;
  double t5756;
  double t5757;
  double t5802;
  double t5821;
  double t5853;
  double t5860;
  double t5873;
  double t5917;
  double t5921;
  double t5931;
  double t5936;
  double t5957;
  double t5960;
  double t5964;
  double t5965;
  double t5978;
  double t5987;
  double t5988;
  double t5989;
  double t5992;
  double t5993;
  double t5994;
  double t6008;
  double t6035;
  double t6040;
  double t6061;
  double t6076;
  double t6085;
  double t6089;
  double t6102;
  double t6111;
  double t6142;
  double t6155;
  double t6156;
  double t6161;
  double t6166;
  double t6167;
  double t6169;
  double t6175;
  double t6179;
  double t6190;
  double t6198;
  double t6199;
  double t6201;
  double t6208;
  double t6214;
  double t6216;
  double t6220;
  double t6222;
  double t6223;
  double t6230;
  double t6234;
  double t6239;
  double t6254;
  double t6280;
  double t6282;
  double t6283;
  double t6284;
  double t6334;
  double t6337;
  double t6343;
  double t6368;
  double t6369;
  double t6372;
  double t6394;
  double t6395;
  double t6401;
  double t6413;
  double t6414;
  double t6419;
  double t6441;
  double t6444;
  double t6449;
  double t6452;
  double t6456;
  double t6459;
  double t6460;
  double t6465;
  double t6480;
  double t6488;
  double t6490;
  double t6494;
  double t6505;
  double t6507;
  double t6511;
  double t6512;
  t895 = Cos(var1[3]);
  t1321 = Cos(var1[4]);
  t1021 = Sin(var1[18]);
  t1498 = Cos(var1[17]);
  t1398 = Cos(var1[5]);
  t1418 = Sin(var1[17]);
  t1543 = Sin(var1[5]);
  t2069 = 0.366501*t1021;
  t2076 = 0. + t2069;
  t899 = Sin(var1[4]);
  t2845 = Sin(var1[3]);
  t1042 = -0.930418*t1021;
  t1299 = 0. + t1042;
  t2837 = t895*t1398*t899;
  t2857 = t2845*t1543;
  t2858 = t2837 + t2857;
  t3106 = t1398*t2845;
  t3152 = -1.*t895*t899*t1543;
  t3160 = t3106 + t3152;
  t3650 = -1.*t1398*t2845;
  t3666 = t895*t899*t1543;
  t3671 = t3650 + t3666;
  t144 = Cos(var1[18]);
  t3629 = -1.*t1418*t2858;
  t3716 = t1498*t3671;
  t3768 = t3629 + t3716;
  t3387 = t1498*t2858;
  t343 = -1.*t144;
  t573 = 1. + t343;
  t634 = -1.000000637725*t573;
  t681 = 1. + t634;
  t4305 = -1.*t1398*t2845*t899;
  t4308 = t895*t1543;
  t4328 = t4305 + t4308;
  t4353 = -1.*t895*t1398;
  t4359 = -1.*t2845*t899*t1543;
  t4411 = t4353 + t4359;
  t4061 = t1418*t3671;
  t4088 = t3387 + t4061;
  t4412 = t1498*t4411;
  t4817 = t1398*t2845*t899;
  t4828 = -1.*t895*t1543;
  t4883 = t4817 + t4828;
  t5051 = t895*t1398;
  t5052 = t2845*t899*t1543;
  t5062 = t5051 + t5052;
  t5030 = -1.*t1418*t4883;
  t5075 = t1498*t5062;
  t5084 = t5030 + t5075;
  t4924 = t1498*t4883;
  t5202 = -1.*t1321*t1398*t1418;
  t5224 = t1498*t1321*t1543;
  t5245 = t5202 + t5224;
  t5340 = t1498*t1321*t1398;
  t5353 = t1321*t1418*t1543;
  t5354 = t5340 + t5353;
  t1467 = -1.*t895*t1321*t1398*t1418;
  t1589 = t1498*t895*t1321*t1543;
  t1594 = t1467 + t1589;
  t2338 = t1498*t895*t1321*t1398;
  t2588 = t895*t1321*t1418*t1543;
  t2600 = t2338 + t2588;
  t3047 = t1418*t2858;
  t3286 = t1498*t3160;
  t3325 = t3047 + t3286;
  t5632 = -0.8656776547239999*t573;
  t5660 = 1. + t5632;
  t3396 = -1.*t1418*t3160;
  t3558 = t3387 + t3396;
  t5556 = -0.134322983001*t573;
  t5570 = 1. + t5556;
  t3840 = -1.*t1498*t2858;
  t3855 = -1.*t1418*t3671;
  t3897 = t3840 + t3855;
  t5525 = -0.366501*t1021;
  t5527 = 0. + t5525;
  t4331 = -1.*t1418*t4328;
  t4448 = t4331 + t4412;
  t4573 = t1498*t4328;
  t4579 = t1418*t4411;
  t4593 = t4573 + t4579;
  t5626 = 0.930418*t1021;
  t5630 = 0. + t5626;
  t4676 = -1.*t1321*t1398*t1418*t2845;
  t4678 = t1498*t1321*t2845*t1543;
  t4687 = t4676 + t4678;
  t4710 = t1498*t1321*t1398*t2845;
  t4716 = t1321*t1418*t2845*t1543;
  t4722 = t4710 + t4716;
  t5800 = 0.340999127418*t573*t3768;
  t4906 = t1418*t4883;
  t4911 = t4906 + t4412;
  t4952 = -1.*t1418*t4411;
  t4971 = t4924 + t4952;
  t5094 = -1.*t1498*t4883;
  t5098 = -1.*t1418*t5062;
  t5102 = t5094 + t5098;
  t5164 = t1418*t5062;
  t5175 = t4924 + t5164;
  t5268 = -1.*t1498*t1321*t1398;
  t5269 = -1.*t1321*t1418*t1543;
  t5274 = t5268 + t5269;
  t5389 = t1321*t1398*t1418;
  t5390 = -1.*t1498*t1321*t1543;
  t5428 = t5389 + t5390;
  t5475 = t1398*t1418*t899;
  t5476 = -1.*t1498*t899*t1543;
  t5477 = t5475 + t5476;
  t5487 = -1.*t1498*t1398*t899;
  t5497 = -1.*t1418*t899*t1543;
  t5500 = t5487 + t5497;
  t5533 = -1.*t895*t5527*t899;
  t5537 = 0.340999127418*t573*t1594;
  t5578 = t5570*t2600;
  t5606 = t5533 + t5537 + t5578;
  t5631 = -1.*t895*t5630*t899;
  t5661 = t5660*t1594;
  t5667 = 0.340999127418*t573*t2600;
  t5673 = t5631 + t5661 + t5667;
  t5724 = 0.340999127418*t573*t3325;
  t5733 = t5660*t3558;
  t5735 = t5724 + t5733;
  t5750 = t5570*t3325;
  t5756 = 0.340999127418*t573*t3558;
  t5757 = t5750 + t5756;
  t5802 = t5660*t3897;
  t5821 = t5800 + t5802;
  t5853 = t5570*t3768;
  t5860 = 0.340999127418*t573*t3897;
  t5873 = t5853 + t5860;
  t5917 = -0.366501*t144*t895*t1321;
  t5921 = 0.340999127418*t1021*t3768;
  t5931 = -0.134322983001*t1021*t4088;
  t5936 = t5917 + t5921 + t5931;
  t5957 = 0.930418*t144*t895*t1321;
  t5960 = -0.8656776547239999*t1021*t3768;
  t5964 = 0.340999127418*t1021*t4088;
  t5965 = t5957 + t5960 + t5964;
  t5978 = -1.*t1321*t5527*t2845;
  t5987 = 0.340999127418*t573*t4448;
  t5988 = t5570*t4593;
  t5989 = t5978 + t5987 + t5988;
  t5992 = -1.*t1321*t5630*t2845;
  t5993 = t5660*t4448;
  t5994 = 0.340999127418*t573*t4593;
  t6008 = t5992 + t5993 + t5994;
  t6035 = -1.*t5527*t2845*t899;
  t6040 = 0.340999127418*t573*t4687;
  t6061 = t5570*t4722;
  t6076 = t6035 + t6040 + t6061;
  t6085 = -1.*t5630*t2845*t899;
  t6089 = t5660*t4687;
  t6102 = 0.340999127418*t573*t4722;
  t6111 = t6085 + t6089 + t6102;
  t6142 = t895*t1321*t5527;
  t6155 = t5570*t4088;
  t6156 = t6142 + t5800 + t6155;
  t6161 = t895*t1321*t5630;
  t6166 = t5660*t3768;
  t6167 = 0.340999127418*t573*t4088;
  t6169 = t6161 + t6166 + t6167;
  t6175 = 0.340999127418*t573*t4911;
  t6179 = t5660*t4971;
  t6190 = t6175 + t6179;
  t6198 = t5570*t4911;
  t6199 = 0.340999127418*t573*t4971;
  t6201 = t6198 + t6199;
  t6208 = 0.340999127418*t573*t5084;
  t6214 = t5660*t5102;
  t6216 = t6208 + t6214;
  t6220 = t5570*t5084;
  t6222 = 0.340999127418*t573*t5102;
  t6223 = t6220 + t6222;
  t6230 = -0.366501*t144*t1321*t2845;
  t6234 = 0.340999127418*t1021*t5084;
  t6239 = -0.134322983001*t1021*t5175;
  t6254 = t6230 + t6234 + t6239;
  t6280 = 0.930418*t144*t1321*t2845;
  t6282 = -0.8656776547239999*t1021*t5084;
  t6283 = 0.340999127418*t1021*t5175;
  t6284 = t6280 + t6282 + t6283;
  t6334 = 0.340999127418*t573*t5245;
  t6337 = t5660*t5274;
  t6343 = t6334 + t6337;
  t6368 = t5570*t5245;
  t6369 = 0.340999127418*t573*t5274;
  t6372 = t6368 + t6369;
  t6394 = 0.340999127418*t573*t5428;
  t6395 = t5660*t5354;
  t6401 = t6394 + t6395;
  t6413 = t5570*t5428;
  t6414 = 0.340999127418*t573*t5354;
  t6419 = t6413 + t6414;
  t6441 = 0.366501*t144*t899;
  t6444 = 0.340999127418*t1021*t5245;
  t6449 = -0.134322983001*t1021*t5354;
  t6452 = t6441 + t6444 + t6449;
  t6456 = -0.930418*t144*t899;
  t6459 = -0.8656776547239999*t1021*t5245;
  t6460 = 0.340999127418*t1021*t5354;
  t6465 = t6456 + t6459 + t6460;
  t6480 = -1.*t1321*t5527;
  t6488 = 0.340999127418*t573*t5477;
  t6490 = t5570*t5500;
  t6494 = t6480 + t6488 + t6490;
  t6505 = -1.*t1321*t5630;
  t6507 = t5660*t5477;
  t6511 = 0.340999127418*t573*t5500;
  t6512 = t6505 + t6507 + t6511;
  p_output1[0]=(-1.*t1299*t4448 - 1.*t2076*t4593 + t1321*t2845*t681)*var2[3] + (-1.*t1299*t1594 - 1.*t2076*t2600 + t681*t895*t899)*var2[4] + (-1.*t2076*t3325 - 1.*t1299*t3558)*var2[5] + (-1.*t2076*t3768 - 1.*t1299*t3897)*var2[17] + (0.930418*t144*t3768 - 0.366501*t144*t4088 + 1.000000637725*t1021*t1321*t895)*var2[18];
  p_output1[1]=(-1.*t1299*t3768 - 1.*t2076*t4088 - 1.*t1321*t681*t895)*var2[3] + (-1.*t1299*t4687 - 1.*t2076*t4722 + t2845*t681*t899)*var2[4] + (-1.*t2076*t4911 - 1.*t1299*t4971)*var2[5] + (-1.*t2076*t5084 - 1.*t1299*t5102)*var2[17] + (1.000000637725*t1021*t1321*t2845 + 0.930418*t144*t5084 - 0.366501*t144*t5175)*var2[18];
  p_output1[2]=(-1.*t1299*t5477 - 1.*t2076*t5500 + t1321*t681)*var2[4] + (-1.*t1299*t5354 - 1.*t2076*t5428)*var2[5] + (-1.*t2076*t5245 - 1.*t1299*t5274)*var2[17] + (0.930418*t144*t5245 - 0.366501*t144*t5354 - 1.000000637725*t1021*t899)*var2[18];
  p_output1[3]=(-0.366501*t5989 + 0.930418*t6008)*var2[3] + (-0.366501*t5606 + 0.930418*t5673)*var2[4] + (0.930418*t5735 - 0.366501*t5757)*var2[5] + (0.930418*t5821 - 0.366501*t5873)*var2[17] + (-0.366501*t5936 + 0.930418*t5965)*var2[18];
  p_output1[4]=(-0.366501*t6156 + 0.930418*t6169)*var2[3] + (-0.366501*t6076 + 0.930418*t6111)*var2[4] + (0.930418*t6190 - 0.366501*t6201)*var2[5] + (0.930418*t6216 - 0.366501*t6223)*var2[17] + (-0.366501*t6254 + 0.930418*t6284)*var2[18];
  p_output1[5]=(-0.366501*t6494 + 0.930418*t6512)*var2[4] + (0.930418*t6401 - 0.366501*t6419)*var2[5] + (0.930418*t6343 - 0.366501*t6372)*var2[17] + (-0.366501*t6452 + 0.930418*t6465)*var2[18];
  p_output1[6]=(-0.930418*t5989 - 0.366501*t6008)*var2[3] + (-0.930418*t5606 - 0.366501*t5673)*var2[4] + (-0.366501*t5735 - 0.930418*t5757)*var2[5] + (-0.366501*t5821 - 0.930418*t5873)*var2[17] + (-0.930418*t5936 - 0.366501*t5965)*var2[18];
  p_output1[7]=(-0.930418*t6156 - 0.366501*t6169)*var2[3] + (-0.930418*t6076 - 0.366501*t6111)*var2[4] + (-0.366501*t6190 - 0.930418*t6201)*var2[5] + (-0.366501*t6216 - 0.930418*t6223)*var2[17] + (-0.930418*t6254 - 0.366501*t6284)*var2[18];
  p_output1[8]=(-0.930418*t6494 - 0.366501*t6512)*var2[4] + (-0.366501*t6401 - 0.930418*t6419)*var2[5] + (-0.366501*t6343 - 0.930418*t6372)*var2[17] + (-0.930418*t6452 - 0.366501*t6465)*var2[18];
}



void dR_hip_rotation_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
