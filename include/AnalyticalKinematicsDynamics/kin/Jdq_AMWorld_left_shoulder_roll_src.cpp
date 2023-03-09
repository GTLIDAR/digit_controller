/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_left_shoulder_roll_src.h"

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
  double t306;
  double t888;
  double t1090;
  double t865;
  double t1308;
  double t1344;
  double t1425;
  double t1452;
  double t326;
  double t683;
  double t997;
  double t1108;
  double t1196;
  double t1233;
  double t1488;
  double t1503;
  double t1658;
  double t1659;
  double t1800;
  double t1810;
  double t1881;
  double t1895;
  double t1899;
  double t1965;
  double t1975;
  double t2138;
  double t2144;
  double t269;
  double t2482;
  double t2478;
  double t2501;
  double t2512;
  double t2573;
  double t2586;
  double t2590;
  double t2554;
  double t2595;
  double t2628;
  double t2732;
  double t2749;
  double t2926;
  double t779;
  double t1715;
  double t2265;
  double t2427;
  double t2435;
  double t2438;
  double t4326;
  double t4329;
  double t4334;
  double t4401;
  double t4432;
  double t4533;
  double t3107;
  double t3194;
  double t3214;
  double t3519;
  double t4356;
  double t4684;
  double t4707;
  double t4714;
  double t4724;
  double t4730;
  double t4887;
  double t4889;
  double t4939;
  double t4961;
  double t4978;
  double t4986;
  double t5059;
  double t5060;
  double t5082;
  double t5086;
  double t5087;
  double t5094;
  double t2671;
  double t2990;
  double t3015;
  double t3566;
  double t3597;
  double t3966;
  double t5065;
  double t5095;
  double t5100;
  double t5102;
  double t4710;
  double t4737;
  double t4738;
  double t5126;
  double t5132;
  double t5141;
  double t4748;
  double t4816;
  double t4819;
  double t4956;
  double t4995;
  double t5023;
  double t5032;
  double t5039;
  double t5053;
  t306 = Cos(var1[4]);
  t888 = Cos(var1[13]);
  t1090 = Sin(var1[13]);
  t865 = Cos(var1[5]);
  t1308 = 0.984808*t888;
  t1344 = -0.173648*t1090;
  t1425 = t1308 + t1344;
  t1452 = Sin(var1[5]);
  t326 = Sin(var1[4]);
  t683 = 0. + t326;
  t997 = -0.173648*t888;
  t1108 = -0.984808*t1090;
  t1196 = t997 + t1108;
  t1233 = t865*t1196;
  t1488 = t1425*t1452;
  t1503 = 0. + t1233 + t1488;
  t1658 = t306*t1503;
  t1659 = 0. + t1658;
  t1800 = t865*t1425;
  t1810 = 0.173648*t888;
  t1881 = 0.984808*t1090;
  t1895 = t1810 + t1881;
  t1899 = t1895*t1452;
  t1965 = 0. + t1800 + t1899;
  t1975 = t306*t1965;
  t2138 = 0. + t1975;
  t2144 = 0.00001*t2138;
  t269 = Cos(var1[3]);
  t2482 = Sin(var1[3]);
  t2478 = t269*t865*t326;
  t2501 = t2482*t1452;
  t2512 = t2478 + t2501;
  t2573 = -1.*t865*t2482;
  t2586 = t269*t326*t1452;
  t2590 = t2573 + t2586;
  t2554 = -1.*t1090*t2512;
  t2595 = t888*t2590;
  t2628 = t2554 + t2595;
  t2732 = t888*t2512;
  t2749 = t1090*t2590;
  t2926 = t2732 + t2749;
  t779 = 0.0003*t683;
  t1715 = 0.00004*t1659;
  t2265 = t779 + t1715 + t2144;
  t2427 = 0.00004*t683;
  t2435 = 0.00075*t1659;
  t2438 = t2427 + t2435 + t2144;
  t4326 = t865*t2482*t326;
  t4329 = -1.*t269*t1452;
  t4334 = t4326 + t4329;
  t4401 = t269*t865;
  t4432 = t2482*t326*t1452;
  t4533 = t4401 + t4432;
  t3107 = 0.00001*t683;
  t3194 = 0.00001*t1659;
  t3214 = 0.0007*t2138;
  t3519 = t3107 + t3194 + t3214;
  t4356 = -1.*t1090*t4334;
  t4684 = t888*t4533;
  t4707 = t4356 + t4684;
  t4714 = t888*t4334;
  t4724 = t1090*t4533;
  t4730 = t4714 + t4724;
  t4887 = -1.*t306*t865*t1090;
  t4889 = t888*t306*t1452;
  t4939 = t4887 + t4889;
  t4961 = t888*t306*t865;
  t4978 = t306*t1090*t1452;
  t4986 = t4961 + t4978;
  t5059 = -1.*t1196*t1452;
  t5060 = 0. + t1800 + t5059;
  t5082 = t865*t1895;
  t5086 = -1.*t1425*t1452;
  t5087 = 0. + t5082 + t5086;
  t5094 = 0.00001*t5087;
  t2671 = 0.984808*t2628;
  t2990 = -0.173648*t2926;
  t3015 = t2671 + t2990;
  t3566 = 0.173648*t2628;
  t3597 = 0.984808*t2926;
  t3966 = t3566 + t3597;
  t5065 = 0.00004*t5060;
  t5095 = t5065 + t5094;
  t5100 = 0.00075*t5060;
  t5102 = t5100 + t5094;
  t4710 = 0.984808*t4707;
  t4737 = -0.173648*t4730;
  t4738 = t4710 + t4737;
  t5126 = 0.00001*t5060;
  t5132 = 0.0007*t5087;
  t5141 = t5126 + t5132;
  t4748 = 0.173648*t4707;
  t4816 = 0.984808*t4730;
  t4819 = t4748 + t4816;
  t4956 = 0.984808*t4939;
  t4995 = -0.173648*t4986;
  t5023 = t4956 + t4995;
  t5032 = 0.173648*t4939;
  t5039 = 0.984808*t4986;
  t5053 = t5032 + t5039;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t2438*t3015 - 1.*t2265*t269*t306 + t3519*t3966;
  p_output1[10]=-1.*t2265*t2482*t306 + t2438*t4738 + t3519*t4819;
  p_output1[11]=t2265*t326 + t2438*t5023 + t3519*t5053;
  p_output1[12]=-1.*t269*t306*t5095 + t3015*t5102 + t3966*t5141;
  p_output1[13]=-1.*t2482*t306*t5095 + t4738*t5102 + t4819*t5141;
  p_output1[14]=t326*t5095 + t5023*t5102 + t5053*t5141;
  p_output1[15]=-0.00004*t3015 + 0.0003*t269*t306 - 0.00001*t3966;
  p_output1[16]=0.0003*t2482*t306 - 0.00004*t4738 - 0.00001*t4819;
  p_output1[17]=-0.0003*t326 - 0.00004*t5023 - 0.00001*t5053;
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
  p_output1[39]=0.00004*t3015 - 0.0003*t269*t306 + 0.00001*t3966;
  p_output1[40]=-0.0003*t2482*t306 + 0.00004*t4738 + 0.00001*t4819;
  p_output1[41]=0.0003*t326 + 0.00004*t5023 + 0.00001*t5053;
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



void Jdq_AMWorld_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
