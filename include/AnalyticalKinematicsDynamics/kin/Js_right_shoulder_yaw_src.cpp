/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_right_shoulder_yaw_src.h"

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
  double t62;
  double t86;
  double t180;
  double t228;
  double t402;
  double t418;
  double t405;
  double t429;
  double t431;
  double t434;
  double t441;
  double t446;
  double t783;
  double t775;
  double t925;
  double t932;
  double t520;
  double t546;
  double t549;
  double t579;
  double t582;
  double t587;
  double t939;
  double t942;
  double t955;
  double t997;
  double t1004;
  double t1006;
  double t1196;
  double t1218;
  double t1231;
  double t904;
  double t993;
  double t1019;
  double t1029;
  double t1034;
  double t1101;
  double t1106;
  double t1292;
  double t1303;
  double t1313;
  double t779;
  double t820;
  double t827;
  double t1140;
  double t1154;
  double t1179;
  double t10;
  double t1247;
  double t1262;
  double t1265;
  double t1484;
  double t1490;
  double t1494;
  double t1436;
  double t1450;
  double t1451;
  double t882;
  double t887;
  double t894;
  double t1653;
  double t1658;
  double t1669;
  double t1704;
  double t1628;
  double t1644;
  double t1645;
  double t1915;
  double t1921;
  double t1928;
  double t1894;
  double t2036;
  double t2045;
  double t2070;
  double t2093;
  double t1985;
  double t1992;
  double t1911;
  double t1912;
  double t1933;
  double t1948;
  double t2118;
  double t2124;
  double t2128;
  double t2133;
  double t2151;
  double t2152;
  double t2160;
  double t2187;
  double t2201;
  double t2205;
  double t2218;
  double t2219;
  double t2148;
  double t2198;
  double t2233;
  double t2239;
  double t1999;
  double t2005;
  double t2291;
  double t2302;
  double t2312;
  double t2315;
  double t2030;
  double t2031;
  double t2240;
  double t2242;
  double t2244;
  double t2246;
  double t2338;
  double t2387;
  double t2391;
  double t2399;
  double t2483;
  double t2506;
  double t2524;
  double t2538;
  double t1913;
  double t1929;
  double t1954;
  double t1957;
  double t2250;
  double t2265;
  double t2268;
  double t2284;
  double t2699;
  double t2708;
  double t2709;
  double t2713;
  double t1994;
  double t2017;
  double t2020;
  double t2021;
  double t2414;
  double t2434;
  double t2446;
  double t2447;
  double t2719;
  double t2732;
  double t2740;
  double t2743;
  double t2459;
  double t2475;
  double t2477;
  double t2478;
  double t2034;
  double t2068;
  double t2098;
  double t2099;
  double t2852;
  double t2862;
  double t2870;
  double t2873;
  double t2879;
  double t2887;
  double t2890;
  double t2892;
  t62 = Cos(var1[3]);
  t86 = Sin(var1[3]);
  t180 = Cos(var1[4]);
  t228 = Sin(var1[4]);
  t402 = Cos(var1[5]);
  t418 = Sin(var1[5]);
  t405 = t62*t402*t228;
  t429 = t86*t418;
  t431 = t405 + t429;
  t434 = -1.*t402*t86;
  t441 = t62*t228*t418;
  t446 = t434 + t441;
  t783 = Cos(var1[24]);
  t775 = Sin(var1[24]);
  t925 = -1.*t783;
  t932 = 1. + t925;
  t520 = t402*t86*t228;
  t546 = -1.*t62*t418;
  t549 = t520 + t546;
  t579 = t62*t402;
  t582 = t86*t228*t418;
  t587 = t579 + t582;
  t939 = 0.4*t932;
  t942 = -0.12*t775;
  t955 = 0. + t939 + t942;
  t997 = -0.12*t932;
  t1004 = -0.4*t775;
  t1006 = 0. + t997 + t1004;
  t1196 = t955*t549;
  t1218 = t1006*t587;
  t1231 = 0. + var1[1] + t1196 + t1218;
  t904 = -1.*var1[2];
  t993 = -1.*t180*t402*t955;
  t1019 = -1.*t180*t1006*t418;
  t1029 = 0. + t904 + t993 + t1019;
  t1034 = -1.*t775*t549;
  t1101 = t783*t587;
  t1106 = t1034 + t1101;
  t1292 = t783*t549;
  t1303 = t775*t587;
  t1313 = t1292 + t1303;
  t779 = -1.*t775*t431;
  t820 = t783*t446;
  t827 = t779 + t820;
  t1140 = -1.*t180*t402*t775;
  t1154 = t783*t180*t418;
  t1179 = t1140 + t1154;
  t10 = -1.*var1[0];
  t1247 = t783*t180*t402;
  t1262 = t180*t775*t418;
  t1265 = t1247 + t1262;
  t1484 = -1.*t955*t431;
  t1490 = -1.*t1006*t446;
  t1494 = 0. + t10 + t1484 + t1490;
  t1436 = t180*t402*t955;
  t1450 = t180*t1006*t418;
  t1451 = 0. + var1[2] + t1436 + t1450;
  t882 = t783*t431;
  t887 = t775*t446;
  t894 = t882 + t887;
  t1653 = -1.*var1[1];
  t1658 = -1.*t955*t549;
  t1669 = -1.*t1006*t587;
  t1704 = 0. + t1653 + t1658 + t1669;
  t1628 = t955*t431;
  t1644 = t1006*t446;
  t1645 = 0. + var1[0] + t1628 + t1644;
  t1915 = Cos(var1[25]);
  t1921 = -1.*t1915;
  t1928 = 1. + t1921;
  t1894 = Sin(var1[25]);
  t2036 = 0.104528*t1894;
  t2045 = 0. + t2036;
  t2070 = 0.994522*t1894;
  t2093 = 0. + t2070;
  t1985 = -0.104528*t1894;
  t1992 = 0. + t1985;
  t1911 = -0.994522*t1894;
  t1912 = 0. + t1911;
  t1933 = -0.9890740084840001*t1928;
  t1948 = 1. + t1933;
  t2118 = -0.056500534356700764*t1928;
  t2124 = 0.040271188976*t2045;
  t2128 = 0.38315650737400003*t2093;
  t2133 = 0. + t2118 + t2124 + t2128;
  t2151 = 1.1345904784751044e-7*var1[25];
  t2152 = 0.04027119345689465*t1928;
  t2160 = -0.05650052807*t1992;
  t2187 = t2151 + t2152 + t2160;
  t2201 = -1.1924972351948546e-8*var1[25];
  t2205 = 0.38315655000705834*t1928;
  t2218 = -0.05650052807*t1912;
  t2219 = t2201 + t2205 + t2218;
  t2148 = t2133*t228;
  t2198 = -1.*t2187*t1179;
  t2233 = -1.*t2219*t1265;
  t2239 = 0. + t904 + t993 + t2148 + t1019 + t2198 + t2233;
  t1999 = -0.010926102783999999*t1928;
  t2005 = 1. + t1999;
  t2291 = t180*t2133*t86;
  t2302 = t2187*t1106;
  t2312 = t2219*t1313;
  t2315 = 0. + var1[1] + t2291 + t1196 + t1218 + t2302 + t2312;
  t2030 = -1.0000001112680001*t1928;
  t2031 = 1. + t2030;
  t2240 = t180*t1912*t86;
  t2242 = -0.103955395616*t1928*t1106;
  t2244 = t1948*t1313;
  t2246 = t2240 + t2242 + t2244;
  t2338 = t180*t1992*t86;
  t2387 = t2005*t1106;
  t2391 = -0.103955395616*t1928*t1313;
  t2399 = t2338 + t2387 + t2391;
  t2483 = t2031*t180*t86;
  t2506 = t2045*t1106;
  t2524 = t2093*t1313;
  t2538 = t2483 + t2506 + t2524;
  t1913 = t62*t180*t1912;
  t1929 = -0.103955395616*t1928*t827;
  t1954 = t1948*t894;
  t1957 = t1913 + t1929 + t1954;
  t2250 = -1.*t1912*t228;
  t2265 = -0.103955395616*t1928*t1179;
  t2268 = t1948*t1265;
  t2284 = t2250 + t2265 + t2268;
  t2699 = -1.*t2133*t228;
  t2708 = t2187*t1179;
  t2709 = t2219*t1265;
  t2713 = 0. + var1[2] + t1436 + t2699 + t1450 + t2708 + t2709;
  t1994 = t62*t180*t1992;
  t2017 = t2005*t827;
  t2020 = -0.103955395616*t1928*t894;
  t2021 = t1994 + t2017 + t2020;
  t2414 = -1.*t1992*t228;
  t2434 = t2005*t1179;
  t2446 = -0.103955395616*t1928*t1265;
  t2447 = t2414 + t2434 + t2446;
  t2719 = -1.*t62*t180*t2133;
  t2732 = -1.*t2187*t827;
  t2740 = -1.*t2219*t894;
  t2743 = 0. + t10 + t2719 + t1484 + t1490 + t2732 + t2740;
  t2459 = -1.*t2031*t228;
  t2475 = t2045*t1179;
  t2477 = t2093*t1265;
  t2478 = t2459 + t2475 + t2477;
  t2034 = t2031*t62*t180;
  t2068 = t2045*t827;
  t2098 = t2093*t894;
  t2099 = t2034 + t2068 + t2098;
  t2852 = t62*t180*t2133;
  t2862 = t2187*t827;
  t2870 = t2219*t894;
  t2873 = 0. + var1[0] + t2852 + t1628 + t1644 + t2862 + t2870;
  t2879 = -1.*t180*t2133*t86;
  t2887 = -1.*t2187*t1106;
  t2890 = -1.*t2219*t1313;
  t2892 = 0. + t1653 + t2879 + t1658 + t1669 + t2887 + t2890;
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
  p_output1[19]=t10;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t62*var1[2];
  p_output1[25]=-1.*t86*var1[2];
  p_output1[26]=t62*var1[0] + t86*var1[1];
  p_output1[27]=-1.*t86;
  p_output1[28]=t62;
  p_output1[29]=0;
  p_output1[30]=-1.*t228*var1[1] - 1.*t180*t86*var1[2];
  p_output1[31]=t228*var1[0] + t180*t62*var1[2];
  p_output1[32]=t180*t86*var1[0] - 1.*t180*t62*var1[1];
  p_output1[33]=t180*t62;
  p_output1[34]=t180*t86;
  p_output1[35]=-1.*t228;
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
  p_output1[144]=-0.12*t431 - 0.4*t446 + t228*var1[1] + t180*t86*var1[2];
  p_output1[145]=-0.12*t549 - 0.4*t587 - 1.*t228*var1[0] - 1.*t180*t62*var1[2];
  p_output1[146]=-0.12*t180*t402 - 0.4*t180*t418 - 1.*t180*t86*var1[0] + t180*t62*var1[1];
  p_output1[147]=0. - 1.*t180*t62;
  p_output1[148]=0. - 1.*t180*t86;
  p_output1[149]=0. + t228;
  p_output1[150]=-0.994522*(t1029*t1106 + t1179*t1231) + 0.104528*(t1231*t1265 + t1029*t1313) + 0.385267*t180*t62 + 0.005906*t827 + 0.056191*t894;
  p_output1[151]=0.005906*t1106 + 0.056191*t1313 - 0.994522*(t1179*t1494 + t1451*t827) + 0.385267*t180*t86 + 0.104528*(t1265*t1494 + t1451*t894);
  p_output1[152]=0.005906*t1179 + 0.056191*t1265 - 0.385267*t228 - 0.994522*(t1106*t1645 + t1704*t827) + 0.104528*(t1313*t1645 + t1704*t894);
  p_output1[153]=0. - 0.994522*t827 + 0.104528*t894;
  p_output1[154]=0. - 0.994522*t1106 + 0.104528*t1313;
  p_output1[155]=0. - 0.994522*t1179 + 0.104528*t1265;
  p_output1[156]=0.151261*t1957 + 0.249652*t2021 + 0.176528*t2099 - 0.703234*(t2239*t2246 + t2284*t2315) - 0.073913*(t2239*t2399 + t2315*t2447) + 0.707107*(t2315*t2478 + t2239*t2538);
  p_output1[157]=0.151261*t2246 + 0.249652*t2399 + 0.176528*t2538 - 0.703234*(t1957*t2713 + t2284*t2743) - 0.073913*(t2021*t2713 + t2447*t2743) + 0.707107*(t2099*t2713 + t2478*t2743);
  p_output1[158]=0.151261*t2284 + 0.249652*t2447 + 0.176528*t2478 - 0.703234*(t2246*t2873 + t1957*t2892) - 0.073913*(t2399*t2873 + t2021*t2892) + 0.707107*(t2538*t2873 + t2099*t2892);
  p_output1[159]=0. - 0.703234*t1957 - 0.073913*t2021 + 0.707107*t2099;
  p_output1[160]=0. - 0.703234*t2246 - 0.073913*t2399 + 0.707107*t2538;
  p_output1[161]=0. - 0.703234*t2284 - 0.073913*t2447 + 0.707107*t2478;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void Js_right_shoulder_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
