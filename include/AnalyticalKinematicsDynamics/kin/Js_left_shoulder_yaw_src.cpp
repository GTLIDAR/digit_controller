/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_left_shoulder_yaw_src.h"

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
  double t48;
  double t100;
  double t178;
  double t183;
  double t400;
  double t422;
  double t418;
  double t429;
  double t453;
  double t491;
  double t497;
  double t515;
  double t930;
  double t907;
  double t1037;
  double t1053;
  double t555;
  double t557;
  double t570;
  double t583;
  double t591;
  double t620;
  double t1054;
  double t1069;
  double t1079;
  double t1123;
  double t1126;
  double t1134;
  double t1246;
  double t1298;
  double t1299;
  double t995;
  double t1104;
  double t1135;
  double t1162;
  double t1166;
  double t1170;
  double t1187;
  double t1377;
  double t1387;
  double t1401;
  double t925;
  double t948;
  double t949;
  double t1214;
  double t1233;
  double t1239;
  double t41;
  double t1329;
  double t1330;
  double t1369;
  double t1552;
  double t1562;
  double t1584;
  double t1522;
  double t1537;
  double t1544;
  double t961;
  double t977;
  double t993;
  double t1750;
  double t1753;
  double t1759;
  double t1780;
  double t1694;
  double t1696;
  double t1701;
  double t1957;
  double t1960;
  double t1970;
  double t1905;
  double t2126;
  double t2128;
  double t2082;
  double t2083;
  double t2028;
  double t2033;
  double t1927;
  double t1939;
  double t1983;
  double t2008;
  double t2154;
  double t2162;
  double t2165;
  double t2173;
  double t2193;
  double t2194;
  double t2198;
  double t2244;
  double t2286;
  double t2291;
  double t2294;
  double t2296;
  double t2181;
  double t2256;
  double t2299;
  double t2300;
  double t2044;
  double t2045;
  double t2386;
  double t2392;
  double t2397;
  double t2398;
  double t2074;
  double t2079;
  double t2335;
  double t2339;
  double t2341;
  double t2343;
  double t2428;
  double t2431;
  double t2432;
  double t2441;
  double t2651;
  double t2665;
  double t2678;
  double t2680;
  double t1944;
  double t1977;
  double t2016;
  double t2017;
  double t2370;
  double t2375;
  double t2376;
  double t2379;
  double t2758;
  double t2770;
  double t2776;
  double t2782;
  double t2037;
  double t2047;
  double t2057;
  double t2065;
  double t2454;
  double t2459;
  double t2463;
  double t2475;
  double t2812;
  double t2813;
  double t2819;
  double t2824;
  double t2588;
  double t2593;
  double t2596;
  double t2603;
  double t2081;
  double t2108;
  double t2132;
  double t2143;
  double t2986;
  double t2997;
  double t2999;
  double t3000;
  double t3038;
  double t3046;
  double t3048;
  double t3056;
  t48 = Cos(var1[3]);
  t100 = Sin(var1[3]);
  t178 = Cos(var1[4]);
  t183 = Sin(var1[4]);
  t400 = Cos(var1[5]);
  t422 = Sin(var1[5]);
  t418 = t48*t400*t183;
  t429 = t100*t422;
  t453 = t418 + t429;
  t491 = -1.*t400*t100;
  t497 = t48*t183*t422;
  t515 = t491 + t497;
  t930 = Cos(var1[13]);
  t907 = Sin(var1[13]);
  t1037 = -1.*t930;
  t1053 = 1. + t1037;
  t555 = t400*t100*t183;
  t557 = -1.*t48*t422;
  t570 = t555 + t557;
  t583 = t48*t400;
  t591 = t100*t183*t422;
  t620 = t583 + t591;
  t1054 = 0.4*t1053;
  t1069 = 0.12*t907;
  t1079 = 0. + t1054 + t1069;
  t1123 = 0.12*t1053;
  t1126 = -0.4*t907;
  t1134 = 0. + t1123 + t1126;
  t1246 = t1079*t570;
  t1298 = t1134*t620;
  t1299 = 0. + var1[1] + t1246 + t1298;
  t995 = -1.*var1[2];
  t1104 = -1.*t178*t400*t1079;
  t1135 = -1.*t178*t1134*t422;
  t1162 = 0. + t995 + t1104 + t1135;
  t1166 = -1.*t907*t570;
  t1170 = t930*t620;
  t1187 = t1166 + t1170;
  t1377 = t930*t570;
  t1387 = t907*t620;
  t1401 = t1377 + t1387;
  t925 = -1.*t907*t453;
  t948 = t930*t515;
  t949 = t925 + t948;
  t1214 = -1.*t178*t400*t907;
  t1233 = t930*t178*t422;
  t1239 = t1214 + t1233;
  t41 = -1.*var1[0];
  t1329 = t930*t178*t400;
  t1330 = t178*t907*t422;
  t1369 = t1329 + t1330;
  t1552 = -1.*t1079*t453;
  t1562 = -1.*t1134*t515;
  t1584 = 0. + t41 + t1552 + t1562;
  t1522 = t178*t400*t1079;
  t1537 = t178*t1134*t422;
  t1544 = 0. + var1[2] + t1522 + t1537;
  t961 = t930*t453;
  t977 = t907*t515;
  t993 = t961 + t977;
  t1750 = -1.*var1[1];
  t1753 = -1.*t1079*t570;
  t1759 = -1.*t1134*t620;
  t1780 = 0. + t1750 + t1753 + t1759;
  t1694 = t1079*t453;
  t1696 = t1134*t515;
  t1701 = 0. + var1[0] + t1694 + t1696;
  t1957 = Cos(var1[14]);
  t1960 = -1.*t1957;
  t1970 = 1. + t1960;
  t1905 = Sin(var1[14]);
  t2126 = -0.994522*t1905;
  t2128 = 0. + t2126;
  t2082 = 0.104528*t1905;
  t2083 = 0. + t2082;
  t2028 = -0.104528*t1905;
  t2033 = 0. + t2028;
  t1927 = 0.994522*t1905;
  t1939 = 0. + t1927;
  t1983 = -0.9890740084840001*t1970;
  t2008 = 1. + t1983;
  t2154 = -0.056500534356700764*t1970;
  t2162 = 0.38315650737400003*t2128;
  t2165 = -0.040271188976*t2083;
  t2173 = 0. + t2154 + t2162 + t2165;
  t2193 = 1.1345904784751044e-7*var1[14];
  t2194 = -0.04027119345689465*t1970;
  t2198 = -0.05650052807*t2033;
  t2244 = t2193 + t2194 + t2198;
  t2286 = 1.1924972351948546e-8*var1[14];
  t2291 = 0.38315655000705834*t1970;
  t2294 = -0.05650052807*t1939;
  t2296 = t2286 + t2291 + t2294;
  t2181 = t2173*t183;
  t2256 = -1.*t2244*t1239;
  t2299 = -1.*t2296*t1369;
  t2300 = 0. + t995 + t1104 + t2181 + t1135 + t2256 + t2299;
  t2044 = -0.010926102783999999*t1970;
  t2045 = 1. + t2044;
  t2386 = t178*t2173*t100;
  t2392 = t2244*t1187;
  t2397 = t2296*t1401;
  t2398 = 0. + var1[1] + t2386 + t1246 + t1298 + t2392 + t2397;
  t2074 = -1.0000001112680001*t1970;
  t2079 = 1. + t2074;
  t2335 = t178*t1939*t100;
  t2339 = 0.103955395616*t1970*t1187;
  t2341 = t2008*t1401;
  t2343 = t2335 + t2339 + t2341;
  t2428 = t178*t2033*t100;
  t2431 = t2045*t1187;
  t2432 = 0.103955395616*t1970*t1401;
  t2441 = t2428 + t2431 + t2432;
  t2651 = t2079*t178*t100;
  t2665 = t2083*t1187;
  t2678 = t2128*t1401;
  t2680 = t2651 + t2665 + t2678;
  t1944 = t48*t178*t1939;
  t1977 = 0.103955395616*t1970*t949;
  t2016 = t2008*t993;
  t2017 = t1944 + t1977 + t2016;
  t2370 = -1.*t1939*t183;
  t2375 = 0.103955395616*t1970*t1239;
  t2376 = t2008*t1369;
  t2379 = t2370 + t2375 + t2376;
  t2758 = -1.*t2173*t183;
  t2770 = t2244*t1239;
  t2776 = t2296*t1369;
  t2782 = 0. + var1[2] + t1522 + t2758 + t1537 + t2770 + t2776;
  t2037 = t48*t178*t2033;
  t2047 = t2045*t949;
  t2057 = 0.103955395616*t1970*t993;
  t2065 = t2037 + t2047 + t2057;
  t2454 = -1.*t2033*t183;
  t2459 = t2045*t1239;
  t2463 = 0.103955395616*t1970*t1369;
  t2475 = t2454 + t2459 + t2463;
  t2812 = -1.*t48*t178*t2173;
  t2813 = -1.*t2244*t949;
  t2819 = -1.*t2296*t993;
  t2824 = 0. + t41 + t2812 + t1552 + t1562 + t2813 + t2819;
  t2588 = -1.*t2079*t183;
  t2593 = t2083*t1239;
  t2596 = t2128*t1369;
  t2603 = t2588 + t2593 + t2596;
  t2081 = t2079*t48*t178;
  t2108 = t2083*t949;
  t2132 = t2128*t993;
  t2143 = t2081 + t2108 + t2132;
  t2986 = t48*t178*t2173;
  t2997 = t2244*t949;
  t2999 = t2296*t993;
  t3000 = 0. + var1[0] + t2986 + t1694 + t1696 + t2997 + t2999;
  t3038 = -1.*t178*t2173*t100;
  t3046 = -1.*t2244*t1187;
  t3048 = -1.*t2296*t1401;
  t3056 = 0. + t1750 + t3038 + t1753 + t1759 + t3046 + t3048;
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
  p_output1[19]=t41;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t48*var1[2];
  p_output1[25]=-1.*t100*var1[2];
  p_output1[26]=t48*var1[0] + t100*var1[1];
  p_output1[27]=-1.*t100;
  p_output1[28]=t48;
  p_output1[29]=0;
  p_output1[30]=-1.*t183*var1[1] - 1.*t100*t178*var1[2];
  p_output1[31]=t183*var1[0] + t178*t48*var1[2];
  p_output1[32]=t100*t178*var1[0] - 1.*t178*t48*var1[1];
  p_output1[33]=t178*t48;
  p_output1[34]=t100*t178;
  p_output1[35]=-1.*t183;
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
  p_output1[78]=0.12*t453 - 0.4*t515 + t183*var1[1] + t100*t178*var1[2];
  p_output1[79]=0.12*t570 - 0.4*t620 - 1.*t183*var1[0] - 1.*t178*t48*var1[2];
  p_output1[80]=0.12*t178*t400 - 0.4*t178*t422 - 1.*t100*t178*var1[0] + t178*t48*var1[1];
  p_output1[81]=0. - 1.*t178*t48;
  p_output1[82]=0. - 1.*t100*t178;
  p_output1[83]=0. + t183;
  p_output1[84]=0.994522*(t1162*t1187 + t1239*t1299) + 0.104528*(t1299*t1369 + t1162*t1401) - 0.385267*t178*t48 + 0.005906*t949 - 0.056191*t993;
  p_output1[85]=0.005906*t1187 - 0.056191*t1401 - 0.385267*t100*t178 + 0.994522*(t1239*t1584 + t1544*t949) + 0.104528*(t1369*t1584 + t1544*t993);
  p_output1[86]=0.005906*t1239 - 0.056191*t1369 + 0.385267*t183 + 0.994522*(t1187*t1701 + t1780*t949) + 0.104528*(t1401*t1701 + t1780*t993);
  p_output1[87]=0. + 0.994522*t949 + 0.104528*t993;
  p_output1[88]=0. + 0.994522*t1187 + 0.104528*t1401;
  p_output1[89]=0. + 0.994522*t1239 + 0.104528*t1369;
  p_output1[90]=-0.151261*t2017 + 0.249652*t2065 - 0.176528*t2143 - 0.703234*(t2300*t2343 + t2379*t2398) + 0.073913*(t2300*t2441 + t2398*t2475) + 0.707107*(t2398*t2603 + t2300*t2680);
  p_output1[91]=-0.151261*t2343 + 0.249652*t2441 - 0.176528*t2680 - 0.703234*(t2017*t2782 + t2379*t2824) + 0.073913*(t2065*t2782 + t2475*t2824) + 0.707107*(t2143*t2782 + t2603*t2824);
  p_output1[92]=-0.151261*t2379 + 0.249652*t2475 - 0.176528*t2603 - 0.703234*(t2343*t3000 + t2017*t3056) + 0.073913*(t2441*t3000 + t2065*t3056) + 0.707107*(t2680*t3000 + t2143*t3056);
  p_output1[93]=0. - 0.703234*t2017 + 0.073913*t2065 + 0.707107*t2143;
  p_output1[94]=0. - 0.703234*t2343 + 0.073913*t2441 + 0.707107*t2680;
  p_output1[95]=0. - 0.703234*t2379 + 0.073913*t2475 + 0.707107*t2603;
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



void Js_left_shoulder_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
