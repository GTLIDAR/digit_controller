/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_left_hip_yaw_src.h"

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
  double t858;
  double t896;
  double t909;
  double t829;
  double t981;
  double t2891;
  double t2436;
  double t2548;
  double t2790;
  double t2826;
  double t361;
  double t862;
  double t1399;
  double t1459;
  double t1514;
  double t1696;
  double t1715;
  double t1889;
  double t2892;
  double t2919;
  double t3604;
  double t3837;
  double t5036;
  double t5175;
  double t5188;
  double t4637;
  double t4659;
  double t4781;
  double t5336;
  double t5342;
  double t5604;
  double t5622;
  double t410;
  double t460;
  double t610;
  double t809;
  double t1964;
  double t1985;
  double t2884;
  double t3584;
  double t3868;
  double t3940;
  double t4598;
  double t4625;
  double t5714;
  double t5734;
  double t5780;
  double t5803;
  double t5811;
  double t5812;
  double t5867;
  double t5874;
  double t5882;
  double t5253;
  double t5285;
  double t5370;
  double t5413;
  double t5850;
  double t5860;
  double t5865;
  double t5520;
  double t5534;
  double t5568;
  double t5598;
  double t5627;
  double t5630;
  double t5654;
  double t5655;
  double t6031;
  double t6034;
  double t6039;
  double t5983;
  double t6016;
  double t6025;
  double t6136;
  double t6139;
  double t6144;
  double t6125;
  double t6128;
  double t6132;
  double t6257;
  double t6280;
  double t6284;
  double t6234;
  double t6237;
  double t6239;
  double t6342;
  double t6345;
  double t6346;
  double t6365;
  double t6366;
  double t6370;
  double t6374;
  double t6379;
  double t6415;
  double t6416;
  double t6418;
  double t6430;
  double t6432;
  double t6437;
  double t6439;
  double t6443;
  double t6480;
  double t6485;
  double t6486;
  double t6490;
  double t6491;
  double t6492;
  double t5919;
  double t6533;
  double t6534;
  double t6537;
  double t6588;
  double t6590;
  double t6593;
  double t6601;
  double t6602;
  double t6606;
  double t6609;
  double t6611;
  double t6612;
  double t6663;
  double t6665;
  double t6666;
  double t6672;
  double t6674;
  double t6676;
  double t6715;
  double t6719;
  double t6724;
  double t6732;
  double t6737;
  double t6738;
  double t6740;
  double t6741;
  double t6742;
  double t6779;
  double t6784;
  t858 = Cos(var1[5]);
  t896 = Sin(var1[3]);
  t909 = Sin(var1[4]);
  t829 = Cos(var1[3]);
  t981 = Sin(var1[5]);
  t2891 = Sin(var1[7]);
  t2436 = Cos(var1[4]);
  t2548 = Cos(var1[7]);
  t2790 = -1.*t2548;
  t2826 = 1. + t2790;
  t361 = Cos(var1[6]);
  t862 = -1.*t829*t858;
  t1399 = -1.*t896*t909*t981;
  t1459 = t862 + t1399;
  t1514 = -1.*t858*t896*t909;
  t1696 = t829*t981;
  t1715 = t1514 + t1696;
  t1889 = Sin(var1[6]);
  t2892 = -0.930418*t2891;
  t2919 = 0. + t2892;
  t3604 = -0.366501*t2891;
  t3837 = 0. + t3604;
  t5036 = t361*t1715;
  t5175 = t1459*t1889;
  t5188 = t5036 + t5175;
  t4637 = t361*t1459;
  t4659 = -1.*t1715*t1889;
  t4781 = t4637 + t4659;
  t5336 = 0.366501*t2891;
  t5342 = 0. + t5336;
  t5604 = 0.930418*t2891;
  t5622 = 0. + t5604;
  t410 = -1.*t361;
  t460 = 1. + t410;
  t610 = 0.091*t460;
  t809 = 0. + t610;
  t1964 = 0.091*t1889;
  t1985 = 0. + t1964;
  t2884 = -0.04500040093286238*t2826;
  t3584 = 0.07877663122399998*t2919;
  t3868 = 0.031030906668*t3837;
  t3940 = 0. + t2884 + t3584 + t3868;
  t4598 = -1.000000637725*t2826;
  t4625 = 1. + t4598;
  t5714 = -1.*t858*t896;
  t5734 = t829*t909*t981;
  t5780 = t5714 + t5734;
  t5803 = t829*t858*t909;
  t5811 = t896*t981;
  t5812 = t5803 + t5811;
  t5867 = t361*t5812;
  t5874 = t5780*t1889;
  t5882 = t5867 + t5874;
  t5253 = -3.2909349868922137e-7*var1[7];
  t5285 = 0.03103092645718495*t2826;
  t5370 = -0.045000372235*t5342;
  t5413 = t5253 + t5285 + t5370;
  t5850 = t361*t5780;
  t5860 = -1.*t5812*t1889;
  t5865 = t5850 + t5860;
  t5520 = -0.134322983001*t2826;
  t5534 = 1. + t5520;
  t5568 = 1.296332362046933e-7*var1[7];
  t5598 = 0.07877668146182712*t2826;
  t5627 = -0.045000372235*t5622;
  t5630 = t5568 + t5598 + t5627;
  t5654 = -0.8656776547239999*t2826;
  t5655 = 1. + t5654;
  t6031 = t829*t2436*t858*t361;
  t6034 = t829*t2436*t981*t1889;
  t6039 = t6031 + t6034;
  t5983 = t829*t2436*t361*t981;
  t6016 = -1.*t829*t2436*t858*t1889;
  t6025 = t5983 + t6016;
  t6136 = t2436*t858*t361*t896;
  t6139 = t2436*t896*t981*t1889;
  t6144 = t6136 + t6139;
  t6125 = t2436*t361*t896*t981;
  t6128 = -1.*t2436*t858*t896*t1889;
  t6132 = t6125 + t6128;
  t6257 = -1.*t858*t361*t909;
  t6280 = -1.*t909*t981*t1889;
  t6284 = t6257 + t6280;
  t6234 = -1.*t361*t909*t981;
  t6237 = t858*t909*t1889;
  t6239 = t6234 + t6237;
  t6342 = t858*t896;
  t6345 = -1.*t829*t909*t981;
  t6346 = t6342 + t6345;
  t6365 = t361*t6346;
  t6366 = t5812*t1889;
  t6370 = t6365 + t6366;
  t6374 = -1.*t6346*t1889;
  t6379 = t5867 + t6374;
  t6415 = t858*t896*t909;
  t6416 = -1.*t829*t981;
  t6418 = t6415 + t6416;
  t6430 = t6418*t1889;
  t6432 = t4637 + t6430;
  t6437 = t361*t6418;
  t6439 = -1.*t1459*t1889;
  t6443 = t6437 + t6439;
  t6480 = -1.*t2436*t361*t981;
  t6485 = t2436*t858*t1889;
  t6486 = t6480 + t6485;
  t6490 = t2436*t858*t361;
  t6491 = t2436*t981*t1889;
  t6492 = t6490 + t6491;
  t5919 = -0.340999127418*t2826*t5865;
  t6533 = -1.*t361*t5812;
  t6534 = -1.*t5780*t1889;
  t6537 = t6533 + t6534;
  t6588 = t829*t858;
  t6590 = t896*t909*t981;
  t6593 = t6588 + t6590;
  t6601 = t361*t6593;
  t6602 = -1.*t6418*t1889;
  t6606 = t6601 + t6602;
  t6609 = -1.*t361*t6418;
  t6611 = -1.*t6593*t1889;
  t6612 = t6609 + t6611;
  t6663 = t2436*t361*t981;
  t6665 = -1.*t2436*t858*t1889;
  t6666 = t6663 + t6665;
  t6672 = -1.*t2436*t858*t361;
  t6674 = -1.*t2436*t981*t1889;
  t6676 = t6672 + t6674;
  t6715 = -0.0846680539949003*t2548;
  t6719 = -0.04500040093286238*t2891;
  t6724 = t6715 + t6719;
  t6732 = -0.016492681424499736*t2548;
  t6737 = 0.03103092645718495*t2891;
  t6738 = -3.2909349868922137e-7 + t6732 + t6737;
  t6740 = -0.04186915633414423*t2548;
  t6741 = 0.07877668146182712*t2891;
  t6742 = 1.296332362046933e-7 + t6740 + t6741;
  t6779 = t6593*t1889;
  t6784 = t6437 + t6779;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1715*t1985 + t5188*t5413 + t4781*t5630 + t1459*t809 - 1.*t2436*t3940*t896 - 0.04501*(t2919*t4781 + t3837*t5188 - 1.*t2436*t4625*t896) - 0.086806*(-0.340999127418*t2826*t4781 + t5188*t5534 - 1.*t2436*t5342*t896) + 0.123098*(-0.340999127418*t2826*t5188 + t4781*t5655 - 1.*t2436*t5622*t896);
  p_output1[10]=t1985*t5812 + t5630*t5865 + t5413*t5882 + t5780*t809 + t2436*t3940*t829 - 0.04501*(t2919*t5865 + t3837*t5882 + t2436*t4625*t829) - 0.086806*(t5534*t5882 + t5919 + t2436*t5342*t829) + 0.123098*(t5655*t5865 - 0.340999127418*t2826*t5882 + t2436*t5622*t829);
  p_output1[11]=0;
  p_output1[12]=t5630*t6025 + t5413*t6039 + t1985*t2436*t829*t858 - 1.*t3940*t829*t909 - 0.04501*(t2919*t6025 + t3837*t6039 - 1.*t4625*t829*t909) - 0.086806*(-0.340999127418*t2826*t6025 + t5534*t6039 - 1.*t5342*t829*t909) + 0.123098*(t5655*t6025 - 0.340999127418*t2826*t6039 - 1.*t5622*t829*t909) + t2436*t809*t829*t981;
  p_output1[13]=t5630*t6132 + t5413*t6144 + t1985*t2436*t858*t896 - 1.*t3940*t896*t909 - 0.04501*(t2919*t6132 + t3837*t6144 - 1.*t4625*t896*t909) - 0.086806*(-0.340999127418*t2826*t6132 + t5534*t6144 - 1.*t5342*t896*t909) + 0.123098*(t5655*t6132 - 0.340999127418*t2826*t6144 - 1.*t5622*t896*t909) + t2436*t809*t896*t981;
  p_output1[14]=-1.*t2436*t3940 + t5630*t6239 + t5413*t6284 + 0.123098*(-1.*t2436*t5622 + t5655*t6239 - 0.340999127418*t2826*t6284) - 0.04501*(-1.*t2436*t4625 + t2919*t6239 + t3837*t6284) - 0.086806*(-1.*t2436*t5342 - 0.340999127418*t2826*t6239 + t5534*t6284) - 1.*t1985*t858*t909 - 1.*t809*t909*t981;
  p_output1[15]=t1985*t6346 + t5413*t6370 + t5630*t6379 - 0.086806*(t5534*t6370 - 0.340999127418*t2826*t6379) - 0.04501*(t3837*t6370 + t2919*t6379) + 0.123098*(-0.340999127418*t2826*t6370 + t5655*t6379) + t5812*t809;
  p_output1[16]=t1459*t1985 + t5413*t6432 + t5630*t6443 - 0.086806*(t5534*t6432 - 0.340999127418*t2826*t6443) - 0.04501*(t3837*t6432 + t2919*t6443) + 0.123098*(-0.340999127418*t2826*t6432 + t5655*t6443) + t6418*t809;
  p_output1[17]=t5413*t6486 + t5630*t6492 - 0.086806*(t5534*t6486 - 0.340999127418*t2826*t6492) - 0.04501*(t3837*t6486 + t2919*t6492) + 0.123098*(-0.340999127418*t2826*t6486 + t5655*t6492) + t2436*t809*t858 - 1.*t1985*t2436*t981;
  p_output1[18]=0.091*t1889*t5780 + 0.091*t361*t5812 + t5413*t5865 + t5630*t6537 - 0.086806*(t5534*t5865 - 0.340999127418*t2826*t6537) - 0.04501*(t3837*t5865 + t2919*t6537) + 0.123098*(t5919 + t5655*t6537);
  p_output1[19]=0.091*t361*t6418 + 0.091*t1889*t6593 + t5413*t6606 + t5630*t6612 - 0.086806*(t5534*t6606 - 0.340999127418*t2826*t6612) - 0.04501*(t3837*t6606 + t2919*t6612) + 0.123098*(-0.340999127418*t2826*t6606 + t5655*t6612);
  p_output1[20]=t5413*t6666 + t5630*t6676 - 0.086806*(t5534*t6666 - 0.340999127418*t2826*t6676) - 0.04501*(t3837*t6666 + t2919*t6676) + 0.123098*(-0.340999127418*t2826*t6666 + t5655*t6676) + 0.091*t2436*t361*t858 + 0.091*t1889*t2436*t981;
  p_output1[21]=t5882*t6738 + t5865*t6742 + t2436*t6724*t829 - 0.086806*(-0.340999127418*t2891*t5865 - 0.134322983001*t2891*t5882 + 0.366501*t2436*t2548*t829) + 0.123098*(-0.8656776547239999*t2891*t5865 - 0.340999127418*t2891*t5882 + 0.930418*t2436*t2548*t829) - 0.04501*(-0.930418*t2548*t5865 - 0.366501*t2548*t5882 - 1.000000637725*t2436*t2891*t829);
  p_output1[22]=t6606*t6742 + t6738*t6784 + t2436*t6724*t896 - 0.086806*(-0.340999127418*t2891*t6606 - 0.134322983001*t2891*t6784 + 0.366501*t2436*t2548*t896) + 0.123098*(-0.8656776547239999*t2891*t6606 - 0.340999127418*t2891*t6784 + 0.930418*t2436*t2548*t896) - 0.04501*(-0.930418*t2548*t6606 - 0.366501*t2548*t6784 - 1.000000637725*t2436*t2891*t896);
  p_output1[23]=t6492*t6738 + t6666*t6742 - 1.*t6724*t909 + 0.123098*(-0.340999127418*t2891*t6492 - 0.8656776547239999*t2891*t6666 - 0.930418*t2548*t909) - 0.086806*(-0.134322983001*t2891*t6492 - 0.340999127418*t2891*t6666 - 0.366501*t2548*t909) - 0.04501*(-0.366501*t2548*t6492 - 0.930418*t2548*t6666 + 1.000000637725*t2891*t909);
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



void Jp_left_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
