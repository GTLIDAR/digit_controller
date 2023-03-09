/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:22:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_right_elbow_src.h"

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
  double t1045;
  double t1058;
  double t1117;
  double t1333;
  double t1351;
  double t1368;
  double t1393;
  double t1932;
  double t1536;
  double t1678;
  double t1692;
  double t1715;
  double t1722;
  double t1125;
  double t1129;
  double t1165;
  double t1174;
  double t1234;
  double t1732;
  double t1952;
  double t1979;
  double t2017;
  double t2020;
  double t2021;
  double t2035;
  double t2049;
  double t2093;
  double t2199;
  double t1370;
  double t1417;
  double t1466;
  double t1474;
  double t1740;
  double t1743;
  double t1808;
  double t1885;
  double t1929;
  double t2051;
  double t2078;
  double t150;
  double t854;
  double t923;
  double t2154;
  double t2170;
  double t2190;
  double t2213;
  double t2231;
  double t2295;
  double t2303;
  double t2305;
  double t2331;
  double t2372;
  double t2486;
  double t2524;
  double t2543;
  double t2658;
  double t2668;
  double t2670;
  double t2671;
  double t2727;
  double t2750;
  double t2793;
  double t3431;
  double t3163;
  double t3182;
  double t3219;
  double t3270;
  double t3326;
  double t3400;
  double t3401;
  double t3418;
  double t3157;
  double t3433;
  double t3461;
  double t3488;
  double t3518;
  double t3520;
  double t3525;
  double t3533;
  double t3553;
  double t2411;
  double t2485;
  double t2110;
  double t2137;
  double t3717;
  double t3751;
  double t3760;
  double t3763;
  double t3781;
  double t3792;
  double t3809;
  double t3822;
  double t3829;
  double t3831;
  double t3832;
  double t3868;
  double t3897;
  double t3900;
  double t3902;
  double t3906;
  double t3913;
  double t3918;
  double t931;
  double t1027;
  double t2998;
  double t3117;
  double t3119;
  double t3802;
  double t3881;
  double t3928;
  double t3933;
  double t3967;
  double t3968;
  double t3992;
  double t4001;
  double t4014;
  double t4034;
  double t4040;
  double t4043;
  double t4095;
  double t4101;
  double t4110;
  double t4113;
  double t4120;
  double t4124;
  double t4136;
  double t4141;
  double t3665;
  double t4237;
  double t4251;
  double t4253;
  double t4254;
  double t4271;
  double t4283;
  double t4304;
  double t4325;
  double t4342;
  double t4347;
  double t4354;
  double t4361;
  double t4262;
  double t4329;
  double t4367;
  double t4372;
  double t4390;
  double t4406;
  double t4413;
  double t4419;
  double t4435;
  double t4436;
  double t4440;
  double t4441;
  double t4488;
  double t4489;
  double t4490;
  double t4513;
  double t4524;
  double t4560;
  double t4568;
  double t4574;
  double t2087;
  double t2404;
  double t2932;
  double t2995;
  double t3103;
  double t3422;
  double t3554;
  double t3563;
  double t3571;
  double t3598;
  double t3621;
  double t3630;
  double t3669;
  double t3693;
  double t3705;
  double t3708;
  double t3961;
  double t4007;
  double t4067;
  double t4072;
  double t4081;
  double t4116;
  double t4144;
  double t4145;
  double t4158;
  double t4179;
  double t4199;
  double t4201;
  double t4203;
  double t4206;
  double t4212;
  double t4231;
  double t4386;
  double t4421;
  double t4448;
  double t4455;
  double t4458;
  double t4519;
  double t4586;
  double t4589;
  double t4590;
  double t4594;
  double t4597;
  double t4620;
  double t4621;
  double t4639;
  double t4644;
  double t4669;
  double t4769;
  double t4782;
  double t4785;
  double t4791;
  double t4800;
  double t4824;
  double t4835;
  double t4848;
  double t4850;
  double t4978;
  double t4986;
  double t4990;
  double t4991;
  double t4994;
  double t4997;
  double t5001;
  double t5014;
  double t5018;
  double t5022;
  double t5023;
  double t5030;
  double t5084;
  double t5086;
  double t5095;
  double t5103;
  double t5112;
  double t5123;
  double t5136;
  double t5140;
  double t5141;
  double t5199;
  double t5209;
  double t5212;
  double t5213;
  double t5224;
  double t5227;
  double t5232;
  double t5234;
  double t5238;
  double t5240;
  double t5242;
  double t5245;
  t1045 = Cos(var1[27]);
  t1058 = -1.*t1045;
  t1117 = 1. + t1058;
  t1333 = Cos(var1[26]);
  t1351 = -1.*t1333;
  t1368 = 1. + t1351;
  t1393 = Sin(var1[26]);
  t1932 = Sin(var1[27]);
  t1536 = -0.010926102783999999*t1117;
  t1678 = 1. + t1536;
  t1692 = -0.994522*t1678;
  t1715 = -0.010866249592949247*t1117;
  t1722 = t1692 + t1715;
  t1125 = -0.9890740084840001*t1117;
  t1129 = 1. + t1125;
  t1165 = 0.104528*t1129;
  t1174 = 0.10338592795881554*t1117;
  t1234 = t1165 + t1174;
  t1732 = -0.05226439969100001*t1368;
  t1952 = -0.994522*t1932;
  t1979 = 0. + t1952;
  t2017 = 0.104528*t1979;
  t2020 = -0.104528*t1932;
  t2021 = 0. + t2020;
  t2035 = -0.994522*t2021;
  t2049 = t2017 + t2035;
  t2093 = Sin(var1[25]);
  t2199 = 0.051978134642000004*t1368;
  t1370 = -0.49726168403800003*t1368;
  t1417 = -0.073913*t1393;
  t1466 = t1370 + t1417;
  t1474 = t1234*t1466;
  t1740 = 0.703234*t1393;
  t1743 = t1732 + t1740;
  t1808 = t1722*t1743;
  t1885 = -0.500001190325*t1368;
  t1929 = 1. + t1885;
  t2051 = t1929*t2049;
  t2078 = 0. + t1474 + t1808 + t2051;
  t150 = Cos(var1[25]);
  t854 = -1.*t150;
  t923 = 1. + t854;
  t2154 = -0.9945383682050002*t1368;
  t2170 = 1. + t2154;
  t2190 = t2170*t1722;
  t2213 = -0.707107*t1393;
  t2231 = t2199 + t2213;
  t2295 = t1234*t2231;
  t2303 = -0.703234*t1393;
  t2305 = t1732 + t2303;
  t2331 = t2305*t2049;
  t2372 = 0. + t2190 + t2295 + t2331;
  t2486 = -0.5054634410180001*t1368;
  t2524 = 1. + t2486;
  t2543 = t2524*t1234;
  t2658 = 0.707107*t1393;
  t2668 = t2199 + t2658;
  t2670 = t1722*t2668;
  t2671 = 0.073913*t1393;
  t2727 = t1370 + t2671;
  t2750 = t2727*t2049;
  t2793 = 0. + t2543 + t2670 + t2750;
  t3431 = Sin(var1[24]);
  t3163 = 0.994522*t2093;
  t3182 = 0. + t3163;
  t3219 = t3182*t2078;
  t3270 = -0.103955395616*t923*t2372;
  t3326 = -0.9890740084840001*t923;
  t3400 = 1. + t3326;
  t3401 = t3400*t2793;
  t3418 = 0. + t3219 + t3270 + t3401;
  t3157 = Cos(var1[24]);
  t3433 = 0.104528*t2093;
  t3461 = 0. + t3433;
  t3488 = t3461*t2078;
  t3518 = -0.010926102783999999*t923;
  t3520 = 1. + t3518;
  t3525 = t3520*t2372;
  t3533 = -0.103955395616*t923*t2793;
  t3553 = 0. + t3488 + t3525 + t3533;
  t2411 = -0.994522*t2093;
  t2485 = 0. + t2411;
  t2110 = -0.104528*t2093;
  t2137 = 0. + t2110;
  t3717 = -1.0000001112680001*t1117;
  t3751 = 1. + t3717;
  t3760 = -0.382684*t3751;
  t3763 = 0.918819*t1979;
  t3781 = 0.096572*t2021;
  t3792 = t3760 + t3763 + t3781;
  t3809 = 0.096572*t1678;
  t3822 = -0.0955161926444975*t1117;
  t3829 = 0.104528*t1932;
  t3831 = 0. + t3829;
  t3832 = -0.382684*t3831;
  t3868 = t3809 + t3822 + t3832;
  t3897 = 0.918819*t1129;
  t3900 = -0.010039180465428352*t1117;
  t3902 = 0.994522*t1932;
  t3906 = 0. + t3902;
  t3913 = -0.382684*t3906;
  t3918 = t3897 + t3900 + t3913;
  t931 = -1.0000001112680001*t923;
  t1027 = 1. + t931;
  t2998 = Sin(var1[4]);
  t3117 = Cos(var1[4]);
  t3119 = Cos(var1[5]);
  t3802 = t2727*t3792;
  t3881 = t2668*t3868;
  t3928 = t2524*t3918;
  t3933 = 0. + t3802 + t3881 + t3928;
  t3967 = t2305*t3792;
  t3968 = t2170*t3868;
  t3992 = t2231*t3918;
  t4001 = 0. + t3967 + t3968 + t3992;
  t4014 = t1929*t3792;
  t4034 = t1743*t3868;
  t4040 = t1466*t3918;
  t4043 = 0. + t4014 + t4034 + t4040;
  t4095 = -0.103955395616*t923*t3933;
  t4101 = t3520*t4001;
  t4110 = t3461*t4043;
  t4113 = 0. + t4095 + t4101 + t4110;
  t4120 = t3400*t3933;
  t4124 = -0.103955395616*t923*t4001;
  t4136 = t3182*t4043;
  t4141 = 0. + t4120 + t4124 + t4136;
  t3665 = Sin(var1[5]);
  t4237 = 0.92388*t3751;
  t4251 = 0.380588*t1979;
  t4253 = 0.040001*t2021;
  t4254 = t4237 + t4251 + t4253;
  t4271 = 0.040001*t1678;
  t4283 = -0.0395641761067022*t1117;
  t4304 = 0.92388*t3831;
  t4325 = t4271 + t4283 + t4304;
  t4342 = 0.380588*t1129;
  t4347 = -0.004158319780035616*t1117;
  t4354 = 0.92388*t3906;
  t4361 = t4342 + t4347 + t4354;
  t4262 = t2727*t4254;
  t4329 = t2668*t4325;
  t4367 = t2524*t4361;
  t4372 = 0. + t4262 + t4329 + t4367;
  t4390 = t2305*t4254;
  t4406 = t2170*t4325;
  t4413 = t2231*t4361;
  t4419 = 0. + t4390 + t4406 + t4413;
  t4435 = t1929*t4254;
  t4436 = t1743*t4325;
  t4440 = t1466*t4361;
  t4441 = 0. + t4435 + t4436 + t4440;
  t4488 = -0.103955395616*t923*t4372;
  t4489 = t3520*t4419;
  t4490 = t3461*t4441;
  t4513 = 0. + t4488 + t4489 + t4490;
  t4524 = t3400*t4372;
  t4560 = -0.103955395616*t923*t4419;
  t4568 = t3182*t4441;
  t4574 = 0. + t4524 + t4560 + t4568;
  t2087 = t1027*t2078;
  t2404 = t2137*t2372;
  t2932 = t2485*t2793;
  t2995 = 0. + t2087 + t2404 + t2932;
  t3103 = -1.*t2995*t2998;
  t3422 = t3157*t3418;
  t3554 = -1.*t3431*t3553;
  t3563 = 0. + t3422 + t3554;
  t3571 = t3119*t3563;
  t3598 = t3431*t3418;
  t3621 = t3157*t3553;
  t3630 = 0. + t3598 + t3621;
  t3669 = t3630*t3665;
  t3693 = 0. + t3571 + t3669;
  t3705 = t3117*t3693;
  t3708 = 0. + t3103 + t3705;
  t3961 = t2485*t3933;
  t4007 = t2137*t4001;
  t4067 = t1027*t4043;
  t4072 = 0. + t3961 + t4007 + t4067;
  t4081 = -1.*t4072*t2998;
  t4116 = -1.*t3431*t4113;
  t4144 = t3157*t4141;
  t4145 = 0. + t4116 + t4144;
  t4158 = t3119*t4145;
  t4179 = t3157*t4113;
  t4199 = t3431*t4141;
  t4201 = 0. + t4179 + t4199;
  t4203 = t4201*t3665;
  t4206 = 0. + t4158 + t4203;
  t4212 = t3117*t4206;
  t4231 = 0. + t4081 + t4212;
  t4386 = t2485*t4372;
  t4421 = t2137*t4419;
  t4448 = t1027*t4441;
  t4455 = 0. + t4386 + t4421 + t4448;
  t4458 = -1.*t4455*t2998;
  t4519 = -1.*t3431*t4513;
  t4586 = t3157*t4574;
  t4589 = 0. + t4519 + t4586;
  t4590 = t3119*t4589;
  t4594 = t3157*t4513;
  t4597 = t3431*t4574;
  t4620 = 0. + t4594 + t4597;
  t4621 = t4620*t3665;
  t4639 = 0. + t4590 + t4621;
  t4644 = t3117*t4639;
  t4669 = 0. + t4458 + t4644;
  t4769 = t3119*t3630;
  t4782 = -1.*t3563*t3665;
  t4785 = 0. + t4769 + t4782;
  t4791 = t3119*t4201;
  t4800 = -1.*t4145*t3665;
  t4824 = 0. + t4791 + t4800;
  t4835 = t3119*t4620;
  t4848 = -1.*t4589*t3665;
  t4850 = 0. + t4835 + t4848;
  t4978 = -1.*t1027*t2078;
  t4986 = -1.*t2137*t2372;
  t4990 = -1.*t2485*t2793;
  t4991 = 0. + t4978 + t4986 + t4990;
  t4994 = -1.*t2485*t3933;
  t4997 = -1.*t2137*t4001;
  t5001 = -1.*t1027*t4043;
  t5014 = 0. + t4994 + t4997 + t5001;
  t5018 = -1.*t2485*t4372;
  t5022 = -1.*t2137*t4419;
  t5023 = -1.*t1027*t4441;
  t5030 = 0. + t5018 + t5022 + t5023;
  t5084 = -0.994522*t2372;
  t5086 = 0.104528*t2793;
  t5095 = 0. + t5084 + t5086;
  t5103 = 0.104528*t3933;
  t5112 = -0.994522*t4001;
  t5123 = 0. + t5103 + t5112;
  t5136 = 0.104528*t4372;
  t5140 = -0.994522*t4419;
  t5141 = 0. + t5136 + t5140;
  t5199 = -0.073913*t1722;
  t5209 = -0.703234*t1234;
  t5212 = 0.707107*t2049;
  t5213 = 0. + t5199 + t5209 + t5212;
  t5224 = 0.707107*t3792;
  t5227 = -0.073913*t3868;
  t5232 = -0.703234*t3918;
  t5234 = 0. + t5224 + t5227 + t5232;
  t5238 = 0.707107*t4254;
  t5240 = -0.073913*t4325;
  t5242 = -0.703234*t4361;
  t5245 = 0. + t5238 + t5240 + t5242;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.0014*t3708 - 0.00003*t4231 + 0.00048*t4669;
  p_output1[10]=-0.00002*t3708 + 0.00956*t4231 - 0.00003*t4669;
  p_output1[11]=-0.00001*t3708 - 0.00002*t4231 + 0.0014*t4669;
  p_output1[12]=0.0014*t4785 - 0.00003*t4824 + 0.00048*t4850;
  p_output1[13]=-0.00002*t4785 + 0.00956*t4824 - 0.00003*t4850;
  p_output1[14]=-0.00001*t4785 - 0.00002*t4824 + 0.0014*t4850;
  p_output1[15]=0.0014*t2995 - 0.00003*t4072 + 0.00048*t4455;
  p_output1[16]=-0.00002*t2995 + 0.00956*t4072 - 0.00003*t4455;
  p_output1[17]=-0.00001*t2995 - 0.00002*t4072 + 0.0014*t4455;
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
  p_output1[72]=0.0014*t4991 - 0.00003*t5014 + 0.00048*t5030;
  p_output1[73]=-0.00002*t4991 + 0.00956*t5014 - 0.00003*t5030;
  p_output1[74]=-0.00001*t4991 - 0.00002*t5014 + 0.0014*t5030;
  p_output1[75]=0.0014*t5095 - 0.00003*t5123 + 0.00048*t5141;
  p_output1[76]=-0.00002*t5095 + 0.00956*t5123 - 0.00003*t5141;
  p_output1[77]=-0.00001*t5095 - 0.00002*t5123 + 0.0014*t5141;
  p_output1[78]=0.0014*t5213 - 0.00003*t5234 + 0.00048*t5245;
  p_output1[79]=-0.00002*t5213 + 0.00956*t5234 - 0.00003*t5245;
  p_output1[80]=-0.00001*t5213 - 0.00002*t5234 + 0.0014*t5245;
  p_output1[81]=0.0014000002851719201;
  p_output1[82]=-0.000020006377476740062;
  p_output1[83]=-9.999668670840007e-6;
}



void Jdq_AMBody_right_elbow_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
