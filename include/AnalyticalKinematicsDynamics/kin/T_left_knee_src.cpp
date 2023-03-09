/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:57:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_knee_src.h"

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
  double t381;
  double t371;
  double t397;
  double t373;
  double t399;
  double t283;
  double t295;
  double t341;
  double t361;
  double t438;
  double t448;
  double t452;
  double t380;
  double t410;
  double t434;
  double t462;
  double t222;
  double t226;
  double t254;
  double t435;
  double t480;
  double t487;
  double t513;
  double t514;
  double t516;
  double t527;
  double t529;
  double t719;
  double t724;
  double t731;
  double t742;
  double t751;
  double t769;
  double t778;
  double t823;
  double t833;
  double t846;
  double t488;
  double t491;
  double t502;
  double t519;
  double t530;
  double t535;
  double t541;
  double t560;
  double t861;
  double t600;
  double t601;
  double t628;
  double t629;
  double t632;
  double t639;
  double t656;
  double t671;
  double t160;
  double t182;
  double t202;
  double t563;
  double t569;
  double t596;
  double t717;
  double t883;
  double t884;
  double t911;
  double t912;
  double t941;
  double t979;
  double t987;
  double t990;
  double t1001;
  double t1003;
  double t1042;
  double t1050;
  double t1062;
  double t1066;
  double t1072;
  double t1124;
  double t1137;
  double t1142;
  double t1143;
  double t1144;
  double t1152;
  double t1174;
  double t1189;
  double t1445;
  double t1472;
  double t1476;
  double t1395;
  double t1397;
  double t1408;
  double t1443;
  double t1522;
  double t1542;
  double t1590;
  double t1610;
  double t1627;
  double t948;
  double t978;
  double t1795;
  double t1830;
  double t1831;
  double t1835;
  double t1567;
  double t1632;
  double t1648;
  double t1653;
  double t1703;
  double t1710;
  double t1719;
  double t1730;
  double t1082;
  double t1122;
  double t1219;
  double t1228;
  double t1672;
  double t1753;
  double t1842;
  double t1856;
  double t1235;
  double t1249;
  double t1884;
  double t1906;
  double t1918;
  double t1923;
  double t1950;
  double t1954;
  double t1959;
  double t1964;
  double t1271;
  double t1275;
  double t1297;
  double t1300;
  double t1337;
  double t1339;
  double t2118;
  double t2119;
  double t2120;
  double t2135;
  double t2147;
  double t2152;
  double t2262;
  double t2265;
  double t2268;
  double t2270;
  double t2126;
  double t2157;
  double t2158;
  double t2164;
  double t2188;
  double t2192;
  double t2200;
  double t2204;
  double t2174;
  double t2249;
  double t2290;
  double t2300;
  double t2358;
  double t2361;
  double t2366;
  double t2375;
  double t2383;
  double t2389;
  double t2413;
  double t2422;
  double t930;
  double t1076;
  double t1196;
  double t1197;
  double t1209;
  double t1230;
  double t1257;
  double t1261;
  double t1262;
  double t1263;
  double t1284;
  double t1305;
  double t1345;
  double t1363;
  double t1883;
  double t1930;
  double t1966;
  double t1992;
  double t2019;
  double t2022;
  double t2028;
  double t2029;
  double t2035;
  double t2068;
  double t2072;
  double t2091;
  double t2094;
  double t2107;
  double t2304;
  double t2381;
  double t2432;
  double t2435;
  double t2442;
  double t2452;
  double t2469;
  double t2470;
  double t2477;
  double t2482;
  double t2483;
  double t2486;
  double t2488;
  double t2497;
  double t2693;
  double t2696;
  double t2727;
  double t2735;
  double t2751;
  double t2764;
  double t2777;
  double t2810;
  double t2815;
  double t2816;
  double t2823;
  double t2847;
  double t2865;
  double t2892;
  double t2902;
  double t2905;
  double t2918;
  double t2928;
  double t2947;
  double t2958;
  double t2962;
  double t2963;
  double t2973;
  double t2976;
  double t2978;
  double t2979;
  double t2985;
  double t2989;
  double t2990;
  double t2995;
  double t3005;
  double t3013;
  double t3031;
  double t3037;
  double t3074;
  double t3091;
  double t3093;
  double t3101;
  double t3112;
  double t3122;
  double t3128;
  double t3138;
  t381 = Cos(var1[3]);
  t371 = Cos(var1[5]);
  t397 = Sin(var1[4]);
  t373 = Sin(var1[3]);
  t399 = Sin(var1[5]);
  t283 = Cos(var1[7]);
  t295 = -1.*t283;
  t341 = 1. + t295;
  t361 = Cos(var1[6]);
  t438 = t381*t371*t397;
  t448 = t373*t399;
  t452 = t438 + t448;
  t380 = -1.*t371*t373;
  t410 = t381*t397*t399;
  t434 = t380 + t410;
  t462 = Sin(var1[6]);
  t222 = Cos(var1[8]);
  t226 = -1.*t222;
  t254 = 1. + t226;
  t435 = t361*t434;
  t480 = -1.*t452*t462;
  t487 = t435 + t480;
  t513 = t361*t452;
  t514 = t434*t462;
  t516 = t513 + t514;
  t527 = Cos(var1[4]);
  t529 = Sin(var1[7]);
  t719 = -1.000000637725*t341;
  t724 = 1. + t719;
  t731 = t381*t527*t724;
  t742 = -0.930418*t529;
  t751 = 0. + t742;
  t769 = t487*t751;
  t778 = -0.366501*t529;
  t823 = 0. + t778;
  t833 = t516*t823;
  t846 = t731 + t769 + t833;
  t488 = -0.340999127418*t341*t487;
  t491 = -0.134322983001*t341;
  t502 = 1. + t491;
  t519 = t502*t516;
  t530 = 0.366501*t529;
  t535 = 0. + t530;
  t541 = t381*t527*t535;
  t560 = t488 + t519 + t541;
  t861 = Sin(var1[8]);
  t600 = -0.8656776547239999*t341;
  t601 = 1. + t600;
  t628 = t601*t487;
  t629 = -0.340999127418*t341*t516;
  t632 = 0.930418*t529;
  t639 = 0. + t632;
  t656 = t381*t527*t639;
  t671 = t628 + t629 + t656;
  t160 = Cos(var1[9]);
  t182 = -1.*t160;
  t202 = 1. + t182;
  t563 = 0.340999127418*t254*t560;
  t569 = -0.134322983001*t254;
  t596 = 1. + t569;
  t717 = t596*t671;
  t883 = -0.366501*t861;
  t884 = 0. + t883;
  t911 = t846*t884;
  t912 = t563 + t717 + t911;
  t941 = Sin(var1[9]);
  t979 = -1.000000637725*t254;
  t987 = 1. + t979;
  t990 = t987*t846;
  t1001 = -0.930418*t861;
  t1003 = 0. + t1001;
  t1042 = t560*t1003;
  t1050 = 0.366501*t861;
  t1062 = 0. + t1050;
  t1066 = t671*t1062;
  t1072 = t990 + t1042 + t1066;
  t1124 = -0.8656776547239999*t254;
  t1137 = 1. + t1124;
  t1142 = t1137*t560;
  t1143 = 0.340999127418*t254*t671;
  t1144 = 0.930418*t861;
  t1152 = 0. + t1144;
  t1174 = t846*t1152;
  t1189 = t1142 + t1143 + t1174;
  t1445 = t371*t373*t397;
  t1472 = -1.*t381*t399;
  t1476 = t1445 + t1472;
  t1395 = t381*t371;
  t1397 = t373*t397*t399;
  t1408 = t1395 + t1397;
  t1443 = t361*t1408;
  t1522 = -1.*t1476*t462;
  t1542 = t1443 + t1522;
  t1590 = t361*t1476;
  t1610 = t1408*t462;
  t1627 = t1590 + t1610;
  t948 = -0.930418*t941;
  t978 = 0. + t948;
  t1795 = t527*t724*t373;
  t1830 = t1542*t751;
  t1831 = t1627*t823;
  t1835 = t1795 + t1830 + t1831;
  t1567 = -0.340999127418*t341*t1542;
  t1632 = t502*t1627;
  t1648 = t527*t373*t535;
  t1653 = t1567 + t1632 + t1648;
  t1703 = t601*t1542;
  t1710 = -0.340999127418*t341*t1627;
  t1719 = t527*t373*t639;
  t1730 = t1703 + t1710 + t1719;
  t1082 = -0.8656776547239999*t202;
  t1122 = 1. + t1082;
  t1219 = -0.134322983001*t202;
  t1228 = 1. + t1219;
  t1672 = 0.340999127418*t254*t1653;
  t1753 = t596*t1730;
  t1842 = t1835*t884;
  t1856 = t1672 + t1753 + t1842;
  t1235 = 0.366501*t941;
  t1249 = 0. + t1235;
  t1884 = t987*t1835;
  t1906 = t1653*t1003;
  t1918 = t1730*t1062;
  t1923 = t1884 + t1906 + t1918;
  t1950 = t1137*t1653;
  t1954 = 0.340999127418*t254*t1730;
  t1959 = t1835*t1152;
  t1964 = t1950 + t1954 + t1959;
  t1271 = -0.366501*t941;
  t1275 = 0. + t1271;
  t1297 = -1.000000637725*t202;
  t1300 = 1. + t1297;
  t1337 = 0.930418*t941;
  t1339 = 0. + t1337;
  t2118 = t527*t361*t399;
  t2119 = -1.*t527*t371*t462;
  t2120 = t2118 + t2119;
  t2135 = t527*t371*t361;
  t2147 = t527*t399*t462;
  t2152 = t2135 + t2147;
  t2262 = -1.*t724*t397;
  t2265 = t2120*t751;
  t2268 = t2152*t823;
  t2270 = t2262 + t2265 + t2268;
  t2126 = -0.340999127418*t341*t2120;
  t2157 = t502*t2152;
  t2158 = -1.*t397*t535;
  t2164 = t2126 + t2157 + t2158;
  t2188 = t601*t2120;
  t2192 = -0.340999127418*t341*t2152;
  t2200 = -1.*t397*t639;
  t2204 = t2188 + t2192 + t2200;
  t2174 = 0.340999127418*t254*t2164;
  t2249 = t596*t2204;
  t2290 = t2270*t884;
  t2300 = t2174 + t2249 + t2290;
  t2358 = t987*t2270;
  t2361 = t2164*t1003;
  t2366 = t2204*t1062;
  t2375 = t2358 + t2361 + t2366;
  t2383 = t1137*t2164;
  t2389 = 0.340999127418*t254*t2204;
  t2413 = t2270*t1152;
  t2422 = t2383 + t2389 + t2413;
  t930 = 0.340999127418*t202*t912;
  t1076 = t978*t1072;
  t1196 = t1122*t1189;
  t1197 = t930 + t1076 + t1196;
  t1209 = -0.657905*t1197;
  t1230 = t1228*t912;
  t1257 = t1249*t1072;
  t1261 = 0.340999127418*t202*t1189;
  t1262 = t1230 + t1257 + t1261;
  t1263 = 0.259155*t1262;
  t1284 = t1275*t912;
  t1305 = t1300*t1072;
  t1345 = t1339*t1189;
  t1363 = t1284 + t1305 + t1345;
  t1883 = 0.340999127418*t202*t1856;
  t1930 = t978*t1923;
  t1966 = t1122*t1964;
  t1992 = t1883 + t1930 + t1966;
  t2019 = -0.657905*t1992;
  t2022 = t1228*t1856;
  t2028 = t1249*t1923;
  t2029 = 0.340999127418*t202*t1964;
  t2035 = t2022 + t2028 + t2029;
  t2068 = 0.259155*t2035;
  t2072 = t1275*t1856;
  t2091 = t1300*t1923;
  t2094 = t1339*t1964;
  t2107 = t2072 + t2091 + t2094;
  t2304 = 0.340999127418*t202*t2300;
  t2381 = t978*t2375;
  t2432 = t1122*t2422;
  t2435 = t2304 + t2381 + t2432;
  t2442 = -0.657905*t2435;
  t2452 = t1228*t2300;
  t2469 = t1249*t2375;
  t2470 = 0.340999127418*t202*t2422;
  t2477 = t2452 + t2469 + t2470;
  t2482 = 0.259155*t2477;
  t2483 = t1275*t2300;
  t2486 = t1300*t2375;
  t2488 = t1339*t2422;
  t2497 = t2483 + t2486 + t2488;
  t2693 = -1.*t361;
  t2696 = 1. + t2693;
  t2727 = 0.091*t2696;
  t2735 = 0. + t2727;
  t2751 = 0.091*t462;
  t2764 = 0. + t2751;
  t2777 = -0.04500040093286238*t341;
  t2810 = 0.07877663122399998*t751;
  t2815 = 0.031030906668*t823;
  t2816 = 0. + t2777 + t2810 + t2815;
  t2823 = -3.2909349868922137e-7*var1[7];
  t2847 = 0.03103092645718495*t341;
  t2865 = -0.045000372235*t535;
  t2892 = t2823 + t2847 + t2865;
  t2902 = 1.296332362046933e-7*var1[7];
  t2905 = 0.07877668146182712*t341;
  t2918 = -0.045000372235*t639;
  t2928 = t2902 + t2905 + t2918;
  t2947 = 3.2909349868922137e-7*var1[8];
  t2958 = 0.055653945343889656*t254;
  t2962 = -0.045000372235*t884;
  t2963 = t2947 + t2958 + t2962;
  t2973 = -1.5981976069815686e-7*var1[9];
  t2976 = 0.08675267452931407*t202;
  t2978 = 0.039853013046*t1249;
  t2979 = t2973 + t2976 + t2978;
  t2985 = -0.04500040093286238*t254;
  t2989 = -0.141285834136*t1003;
  t2990 = 0.055653909852*t1062;
  t2995 = 0. + t2985 + t2989 + t2990;
  t3005 = 0.039853038461262744*t202;
  t3013 = 0.086752619205*t1275;
  t3031 = -0.22023459268999998*t1339;
  t3037 = 0. + t3005 + t3013 + t3031;
  t3074 = 1.296332362046933e-7*var1[8];
  t3091 = -0.14128592423750855*t254;
  t3093 = -0.045000372235*t1152;
  t3101 = t3074 + t3091 + t3093;
  t3112 = -6.295460977284962e-8*var1[9];
  t3122 = -0.22023473313910558*t202;
  t3128 = 0.039853013046*t978;
  t3138 = t3112 + t3122 + t3128;
  p_output1[0]=t1209 + t1263 - 0.707107*t1363;
  p_output1[1]=t2019 + t2068 - 0.707107*t2107;
  p_output1[2]=t2442 + t2482 - 0.707107*t2497;
  p_output1[3]=0.;
  p_output1[4]=t1209 + t1263 + 0.707107*t1363;
  p_output1[5]=t2019 + t2068 + 0.707107*t2107;
  p_output1[6]=t2442 + t2482 + 0.707107*t2497;
  p_output1[7]=0.;
  p_output1[8]=-0.366501*t1197 - 0.930418*t1262;
  p_output1[9]=-0.366501*t1992 - 0.930418*t2035;
  p_output1[10]=-0.366501*t2435 - 0.930418*t2477;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.274521*t1197 + 0.197083*t1262 - 0.010507*t1363 + t1072*t3037 + t1189*t3138 + t2735*t434 + t2764*t452 + t2928*t487 + t2892*t516 + t2816*t381*t527 + t3101*t560 + t2963*t671 + t2995*t846 + t2979*t912 + var1[0];
  p_output1[13]=0. - 0.274521*t1992 + 0.197083*t2035 - 0.010507*t2107 + t1408*t2735 + t1476*t2764 + t1627*t2892 + t1542*t2928 + t1730*t2963 + t1856*t2979 + t1835*t2995 + t1923*t3037 + t1653*t3101 + t1964*t3138 + t2816*t373*t527 + var1[1];
  p_output1[14]=0. - 0.274521*t2435 + 0.197083*t2477 - 0.010507*t2497 + t2152*t2892 + t2120*t2928 + t2204*t2963 + t2300*t2979 + t2270*t2995 + t2375*t3037 + t2164*t3101 + t2422*t3138 - 1.*t2816*t397 + t2764*t371*t527 + t2735*t399*t527 + var1[2];
  p_output1[15]=1.;
}



void T_left_knee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
