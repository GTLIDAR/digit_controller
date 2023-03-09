/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_left_hip_pitch_src.h"

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
  double t124;
  double t148;
  double t203;
  double t206;
  double t451;
  double t476;
  double t459;
  double t489;
  double t490;
  double t806;
  double t808;
  double t850;
  double t856;
  double t901;
  double t534;
  double t540;
  double t549;
  double t1034;
  double t1043;
  double t1061;
  double t1080;
  double t1149;
  double t1155;
  double t1092;
  double t1098;
  double t1116;
  double t1131;
  double t1158;
  double t1159;
  double t1210;
  double t1214;
  double t1215;
  double t1217;
  double t1218;
  double t1223;
  double t1227;
  double t1272;
  double t1275;
  double t1285;
  double t66;
  double t1169;
  double t1198;
  double t1201;
  double t857;
  double t968;
  double t973;
  double t1399;
  double t1405;
  double t1408;
  double t1255;
  double t1258;
  double t1263;
  double t1417;
  double t1428;
  double t1435;
  double t1010;
  double t1020;
  double t1026;
  double t1611;
  double t1652;
  double t1660;
  double t1664;
  double t1559;
  double t1571;
  double t1574;
  double t1892;
  double t1865;
  double t1874;
  double t1882;
  double t2008;
  double t2023;
  double t1886;
  double t1901;
  double t1906;
  double t1914;
  double t1935;
  double t1959;
  double t1963;
  double t1976;
  double t1991;
  double t2001;
  double t2032;
  double t2037;
  double t2059;
  double t2062;
  double t2083;
  double t2084;
  double t2086;
  double t2115;
  double t2140;
  double t2152;
  double t1977;
  double t2051;
  double t2116;
  double t2119;
  double t2259;
  double t2269;
  double t2272;
  double t2273;
  double t2303;
  double t2307;
  double t2472;
  double t2478;
  double t2506;
  double t2526;
  double t2276;
  double t2277;
  double t2288;
  double t2298;
  double t2594;
  double t2596;
  double t2598;
  double t2639;
  double t2556;
  double t2558;
  double t2564;
  double t2568;
  double t2657;
  double t2658;
  double t2664;
  double t2665;
  double t2378;
  double t2384;
  double t2385;
  double t2386;
  double t2424;
  double t2432;
  double t2139;
  double t2155;
  double t2183;
  double t2196;
  double t2316;
  double t2320;
  double t2321;
  double t2341;
  double t2824;
  double t2832;
  double t2834;
  double t2836;
  double t2853;
  double t2869;
  double t2871;
  double t2872;
  t124 = Cos(var1[3]);
  t148 = Sin(var1[3]);
  t203 = Cos(var1[4]);
  t206 = Sin(var1[4]);
  t451 = Cos(var1[5]);
  t476 = Sin(var1[5]);
  t459 = t124*t451*t206;
  t489 = t148*t476;
  t490 = t459 + t489;
  t806 = Cos(var1[6]);
  t808 = -1.*t451*t148;
  t850 = t124*t206*t476;
  t856 = t808 + t850;
  t901 = Sin(var1[6]);
  t534 = t451*t148*t206;
  t540 = -1.*t124*t476;
  t549 = t534 + t540;
  t1034 = -1.*t806;
  t1043 = 1. + t1034;
  t1061 = 0.091*t1043;
  t1080 = 0. + t1061;
  t1149 = 0.091*t901;
  t1155 = 0. + t1149;
  t1092 = t124*t451;
  t1098 = t148*t206*t476;
  t1116 = t1092 + t1098;
  t1131 = t1080*t1116;
  t1158 = t549*t1155;
  t1159 = 0. + var1[1] + t1131 + t1158;
  t1210 = -1.*var1[2];
  t1214 = -1.*t203*t1080*t476;
  t1215 = -1.*t203*t451*t1155;
  t1217 = 0. + t1210 + t1214 + t1215;
  t1218 = t806*t1116;
  t1223 = -1.*t549*t901;
  t1227 = t1218 + t1223;
  t1272 = t806*t549;
  t1275 = t1116*t901;
  t1285 = t1272 + t1275;
  t66 = -1.*var1[0];
  t1169 = t203*t806*t476;
  t1198 = -1.*t203*t451*t901;
  t1201 = t1169 + t1198;
  t857 = t806*t856;
  t968 = -1.*t490*t901;
  t973 = t857 + t968;
  t1399 = -1.*t1080*t856;
  t1405 = -1.*t490*t1155;
  t1408 = 0. + t66 + t1399 + t1405;
  t1255 = t203*t451*t806;
  t1258 = t203*t476*t901;
  t1263 = t1255 + t1258;
  t1417 = t203*t1080*t476;
  t1428 = t203*t451*t1155;
  t1435 = 0. + var1[2] + t1417 + t1428;
  t1010 = t806*t490;
  t1020 = t856*t901;
  t1026 = t1010 + t1020;
  t1611 = -1.*var1[1];
  t1652 = -1.*t1080*t1116;
  t1660 = -1.*t549*t1155;
  t1664 = 0. + t1611 + t1652 + t1660;
  t1559 = t1080*t856;
  t1571 = t490*t1155;
  t1574 = 0. + var1[0] + t1559 + t1571;
  t1892 = Sin(var1[7]);
  t1865 = Cos(var1[7]);
  t1874 = -1.*t1865;
  t1882 = 1. + t1874;
  t2008 = 0.366501*t1892;
  t2023 = 0. + t2008;
  t1886 = -0.04500040093286238*t1882;
  t1901 = -0.930418*t1892;
  t1906 = 0. + t1901;
  t1914 = 0.07877663122399998*t1906;
  t1935 = -0.366501*t1892;
  t1959 = 0. + t1935;
  t1963 = 0.031030906668*t1959;
  t1976 = 0. + t1886 + t1914 + t1963;
  t1991 = -3.2909349868922137e-7*var1[7];
  t2001 = 0.03103092645718495*t1882;
  t2032 = -0.045000372235*t2023;
  t2037 = t1991 + t2001 + t2032;
  t2059 = 1.296332362046933e-7*var1[7];
  t2062 = 0.07877668146182712*t1882;
  t2083 = 0.930418*t1892;
  t2084 = 0. + t2083;
  t2086 = -0.045000372235*t2084;
  t2115 = t2059 + t2062 + t2086;
  t2140 = -0.134322983001*t1882;
  t2152 = 1. + t2140;
  t1977 = t206*t1976;
  t2051 = -1.*t1263*t2037;
  t2116 = -1.*t1201*t2115;
  t2119 = 0. + t1210 + t1214 + t1215 + t1977 + t2051 + t2116;
  t2259 = t203*t148*t1976;
  t2269 = t1285*t2037;
  t2272 = t1227*t2115;
  t2273 = 0. + var1[1] + t1131 + t1158 + t2259 + t2269 + t2272;
  t2303 = -0.8656776547239999*t1882;
  t2307 = 1. + t2303;
  t2472 = -0.340999127418*t1882*t973;
  t2478 = t2152*t1026;
  t2506 = t124*t203*t2023;
  t2526 = t2472 + t2478 + t2506;
  t2276 = -0.340999127418*t1882*t1201;
  t2277 = t2152*t1263;
  t2288 = -1.*t206*t2023;
  t2298 = t2276 + t2277 + t2288;
  t2594 = -1.*t206*t1976;
  t2596 = t1263*t2037;
  t2598 = t1201*t2115;
  t2639 = 0. + var1[2] + t1417 + t1428 + t2594 + t2596 + t2598;
  t2556 = t2307*t973;
  t2558 = -0.340999127418*t1882*t1026;
  t2564 = t124*t203*t2084;
  t2568 = t2556 + t2558 + t2564;
  t2657 = -1.*t124*t203*t1976;
  t2658 = -1.*t1026*t2037;
  t2664 = -1.*t973*t2115;
  t2665 = 0. + t66 + t1399 + t1405 + t2657 + t2658 + t2664;
  t2378 = t2307*t1201;
  t2384 = -0.340999127418*t1882*t1263;
  t2385 = -1.*t206*t2084;
  t2386 = t2378 + t2384 + t2385;
  t2424 = -1.000000637725*t1882;
  t2432 = 1. + t2424;
  t2139 = -0.340999127418*t1882*t1227;
  t2155 = t2152*t1285;
  t2183 = t203*t148*t2023;
  t2196 = t2139 + t2155 + t2183;
  t2316 = t2307*t1227;
  t2320 = -0.340999127418*t1882*t1285;
  t2321 = t203*t148*t2084;
  t2341 = t2316 + t2320 + t2321;
  t2824 = -1.*t203*t148*t1976;
  t2832 = -1.*t1285*t2037;
  t2834 = -1.*t1227*t2115;
  t2836 = 0. + t1611 + t1652 + t1660 + t2824 + t2832 + t2834;
  t2853 = t124*t203*t1976;
  t2869 = t1026*t2037;
  t2871 = t973*t2115;
  t2872 = 0. + var1[0] + t1559 + t1571 + t2853 + t2869 + t2871;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t66;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t124*var1[2];
  p_output1[25]=-1.*t148*var1[2];
  p_output1[26]=t124*var1[0] + t148*var1[1];
  p_output1[27]=-1.*t148;
  p_output1[28]=t124;
  p_output1[29]=0;
  p_output1[30]=-1.*t206*var1[1] - 1.*t148*t203*var1[2];
  p_output1[31]=t206*var1[0] + t124*t203*var1[2];
  p_output1[32]=t148*t203*var1[0] - 1.*t124*t203*var1[1];
  p_output1[33]=t124*t203;
  p_output1[34]=t148*t203;
  p_output1[35]=-1.*t206;
  p_output1[36]=0.091*t490 + t206*var1[1] + t148*t203*var1[2];
  p_output1[37]=0.091*t549 - 1.*t206*var1[0] - 1.*t124*t203*var1[2];
  p_output1[38]=0.091*t203*t451 - 1.*t148*t203*var1[0] + t124*t203*var1[1];
  p_output1[39]=0. - 1.*t124*t203;
  p_output1[40]=0. - 1.*t148*t203;
  p_output1[41]=0. + t206;
  p_output1[42]=-0.016493*t1026 + 0.366501*(t1159*t1201 + t1217*t1227) - 0.930418*(t1159*t1263 + t1217*t1285) - 0.084668*t124*t203 - 0.041869*t973;
  p_output1[43]=-0.041869*t1227 - 0.016493*t1285 - 0.930418*(t1263*t1408 + t1026*t1435) - 0.084668*t148*t203 + 0.366501*(t1201*t1408 + t1435*t973);
  p_output1[44]=-0.041869*t1201 - 0.016493*t1263 - 0.930418*(t1285*t1574 + t1026*t1664) + 0.084668*t206 + 0.366501*(t1227*t1574 + t1664*t973);
  p_output1[45]=0. - 0.930418*t1026 + 0.366501*t973;
  p_output1[46]=0. + 0.366501*t1227 - 0.930418*t1285;
  p_output1[47]=0. + 0.366501*t1201 - 0.930418*t1263;
  p_output1[48]=0.366501*(t2119*t2196 + t2273*t2298) + 0.930418*(t2119*t2341 + t2273*t2386) - 0.041869*t2526 + 0.016493*t2568 + 0.151852*(t1026*t1959 + t124*t203*t2432 + t1906*t973);
  p_output1[49]=-0.041869*t2196 + 0.016493*t2341 + 0.151852*(t1227*t1906 + t1285*t1959 + t148*t203*t2432) + 0.366501*(t2526*t2639 + t2298*t2665) + 0.930418*(t2568*t2639 + t2386*t2665);
  p_output1[50]=-0.041869*t2298 + 0.016493*t2386 + 0.151852*(t1201*t1906 + t1263*t1959 - 1.*t206*t2432) + 0.366501*(t2526*t2836 + t2196*t2872) + 0.930418*(t2568*t2836 + t2341*t2872);
  p_output1[51]=0. + 0.366501*t2526 + 0.930418*t2568;
  p_output1[52]=0. + 0.366501*t2196 + 0.930418*t2341;
  p_output1[53]=0. + 0.366501*t2298 + 0.930418*t2386;
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
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void Js_left_hip_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
