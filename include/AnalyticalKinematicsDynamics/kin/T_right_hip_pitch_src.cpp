/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_right_hip_pitch_src.h"

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
  double t95;
  double t350;
  double t392;
  double t360;
  double t395;
  double t310;
  double t324;
  double t332;
  double t444;
  double t364;
  double t398;
  double t410;
  double t342;
  double t451;
  double t462;
  double t495;
  double t7;
  double t96;
  double t97;
  double t440;
  double t500;
  double t507;
  double t585;
  double t589;
  double t611;
  double t843;
  double t853;
  double t862;
  double t109;
  double t202;
  double t236;
  double t512;
  double t575;
  double t581;
  double t616;
  double t618;
  double t677;
  double t692;
  double t744;
  double t761;
  double t787;
  double t790;
  double t801;
  double t807;
  double t929;
  double t939;
  double t955;
  double t987;
  double t993;
  double t1008;
  double t1092;
  double t1163;
  double t1171;
  double t1185;
  double t55;
  double t56;
  double t1470;
  double t1473;
  double t1508;
  double t1512;
  double t1516;
  double t1531;
  double t662;
  double t668;
  double t1511;
  double t1534;
  double t1536;
  double t1567;
  double t1577;
  double t1579;
  double t877;
  double t892;
  double t1204;
  double t1209;
  double t1464;
  double t1538;
  double t1615;
  double t1629;
  double t1653;
  double t1661;
  double t1668;
  double t1692;
  double t1237;
  double t1238;
  double t1696;
  double t1698;
  double t1720;
  double t1748;
  double t1308;
  double t1332;
  double t1403;
  double t1407;
  double t1972;
  double t2025;
  double t2029;
  double t2032;
  double t2040;
  double t2073;
  double t1966;
  double t2030;
  double t2077;
  double t2085;
  double t2127;
  double t2136;
  double t2167;
  double t2204;
  double t2228;
  double t2235;
  double t2238;
  double t2268;
  double t620;
  double t836;
  double t1187;
  double t1192;
  double t1216;
  double t1221;
  double t1244;
  double t1254;
  double t1262;
  double t1275;
  double t1369;
  double t1425;
  double t1427;
  double t1446;
  double t1639;
  double t1693;
  double t1751;
  double t1763;
  double t1767;
  double t1824;
  double t1826;
  double t1835;
  double t1838;
  double t1866;
  double t1869;
  double t1903;
  double t1943;
  double t1944;
  double t2111;
  double t2209;
  double t2271;
  double t2310;
  double t2358;
  double t2370;
  double t2389;
  double t2396;
  double t2408;
  double t2415;
  double t2420;
  double t2436;
  double t2465;
  double t2484;
  double t2665;
  double t2677;
  double t2678;
  double t2679;
  double t2722;
  double t2742;
  double t2746;
  double t2753;
  double t2759;
  double t2787;
  double t2801;
  double t2816;
  double t2825;
  double t2827;
  double t2864;
  double t2889;
  double t2897;
  double t2899;
  double t2923;
  double t2925;
  double t2926;
  double t2933;
  double t2948;
  double t2994;
  double t3004;
  double t3014;
  double t3025;
  double t3029;
  double t3035;
  double t3043;
  t95 = Cos(var1[3]);
  t350 = Cos(var1[5]);
  t392 = Sin(var1[3]);
  t360 = Sin(var1[4]);
  t395 = Sin(var1[5]);
  t310 = Cos(var1[18]);
  t324 = -1.*t310;
  t332 = 1. + t324;
  t444 = Cos(var1[17]);
  t364 = t95*t350*t360;
  t398 = t392*t395;
  t410 = t364 + t398;
  t342 = Sin(var1[17]);
  t451 = -1.*t350*t392;
  t462 = t95*t360*t395;
  t495 = t451 + t462;
  t7 = Sin(var1[19]);
  t96 = Cos(var1[4]);
  t97 = Sin(var1[18]);
  t440 = -1.*t342*t410;
  t500 = t444*t495;
  t507 = t440 + t500;
  t585 = t444*t410;
  t589 = t342*t495;
  t611 = t585 + t589;
  t843 = Cos(var1[19]);
  t853 = -1.*t843;
  t862 = 1. + t853;
  t109 = -0.366501*t97;
  t202 = 0. + t109;
  t236 = t95*t96*t202;
  t512 = 0.340999127418*t332*t507;
  t575 = -0.134322983001*t332;
  t581 = 1. + t575;
  t616 = t581*t611;
  t618 = t236 + t512 + t616;
  t677 = 0.930418*t97;
  t692 = 0. + t677;
  t744 = t95*t96*t692;
  t761 = -0.8656776547239999*t332;
  t787 = 1. + t761;
  t790 = t787*t507;
  t801 = 0.340999127418*t332*t611;
  t807 = t744 + t790 + t801;
  t929 = -1.000000637725*t332;
  t939 = 1. + t929;
  t955 = t939*t95*t96;
  t987 = -0.930418*t97;
  t993 = 0. + t987;
  t1008 = t993*t507;
  t1092 = 0.366501*t97;
  t1163 = 0. + t1092;
  t1171 = t1163*t611;
  t1185 = t955 + t1008 + t1171;
  t55 = 0.930418*t7;
  t56 = 0. + t55;
  t1470 = t350*t392*t360;
  t1473 = -1.*t95*t395;
  t1508 = t1470 + t1473;
  t1512 = t95*t350;
  t1516 = t392*t360*t395;
  t1531 = t1512 + t1516;
  t662 = 0.366501*t7;
  t668 = 0. + t662;
  t1511 = -1.*t342*t1508;
  t1534 = t444*t1531;
  t1536 = t1511 + t1534;
  t1567 = t444*t1508;
  t1577 = t342*t1531;
  t1579 = t1567 + t1577;
  t877 = -1.000000637725*t862;
  t892 = 1. + t877;
  t1204 = -0.8656776547239999*t862;
  t1209 = 1. + t1204;
  t1464 = t96*t202*t392;
  t1538 = 0.340999127418*t332*t1536;
  t1615 = t581*t1579;
  t1629 = t1464 + t1538 + t1615;
  t1653 = t96*t692*t392;
  t1661 = t787*t1536;
  t1668 = 0.340999127418*t332*t1579;
  t1692 = t1653 + t1661 + t1668;
  t1237 = -0.930418*t7;
  t1238 = 0. + t1237;
  t1696 = t939*t96*t392;
  t1698 = t993*t1536;
  t1720 = t1163*t1579;
  t1748 = t1696 + t1698 + t1720;
  t1308 = -0.134322983001*t862;
  t1332 = 1. + t1308;
  t1403 = -0.366501*t7;
  t1407 = 0. + t1403;
  t1972 = -1.*t96*t350*t342;
  t2025 = t444*t96*t395;
  t2029 = t1972 + t2025;
  t2032 = t444*t96*t350;
  t2040 = t96*t342*t395;
  t2073 = t2032 + t2040;
  t1966 = -1.*t202*t360;
  t2030 = 0.340999127418*t332*t2029;
  t2077 = t581*t2073;
  t2085 = t1966 + t2030 + t2077;
  t2127 = -1.*t692*t360;
  t2136 = t787*t2029;
  t2167 = 0.340999127418*t332*t2073;
  t2204 = t2127 + t2136 + t2167;
  t2228 = -1.*t939*t360;
  t2235 = t993*t2029;
  t2238 = t1163*t2073;
  t2268 = t2228 + t2235 + t2238;
  t620 = t56*t618;
  t836 = t668*t807;
  t1187 = t892*t1185;
  t1192 = t620 + t836 + t1187;
  t1216 = t1209*t618;
  t1221 = -0.340999127418*t862*t807;
  t1244 = t1238*t1185;
  t1254 = t1216 + t1221 + t1244;
  t1262 = -0.657905*t1254;
  t1275 = -0.340999127418*t862*t618;
  t1369 = t1332*t807;
  t1425 = t1407*t1185;
  t1427 = t1275 + t1369 + t1425;
  t1446 = -0.259155*t1427;
  t1639 = t56*t1629;
  t1693 = t668*t1692;
  t1751 = t892*t1748;
  t1763 = t1639 + t1693 + t1751;
  t1767 = t1209*t1629;
  t1824 = -0.340999127418*t862*t1692;
  t1826 = t1238*t1748;
  t1835 = t1767 + t1824 + t1826;
  t1838 = -0.657905*t1835;
  t1866 = -0.340999127418*t862*t1629;
  t1869 = t1332*t1692;
  t1903 = t1407*t1748;
  t1943 = t1866 + t1869 + t1903;
  t1944 = -0.259155*t1943;
  t2111 = t56*t2085;
  t2209 = t668*t2204;
  t2271 = t892*t2268;
  t2310 = t2111 + t2209 + t2271;
  t2358 = t1209*t2085;
  t2370 = -0.340999127418*t862*t2204;
  t2389 = t1238*t2268;
  t2396 = t2358 + t2370 + t2389;
  t2408 = -0.657905*t2396;
  t2415 = -0.340999127418*t862*t2085;
  t2420 = t1332*t2204;
  t2436 = t1407*t2268;
  t2465 = t2415 + t2420 + t2436;
  t2484 = -0.259155*t2465;
  t2665 = -0.04500040093286238*t332;
  t2677 = -0.07877663122399998*t993;
  t2678 = 0.031030906668*t1163;
  t2679 = 0. + t2665 + t2677 + t2678;
  t2722 = -0.091*t342;
  t2742 = 0. + t2722;
  t2746 = -1.*t444;
  t2753 = 1. + t2746;
  t2759 = -0.091*t2753;
  t2787 = 0. + t2759;
  t2801 = 1.296332362046933e-7*var1[18];
  t2816 = -0.07877668146182712*t332;
  t2825 = -0.045000372235*t692;
  t2827 = t2801 + t2816 + t2825;
  t2864 = 3.2909349868922137e-7*var1[18];
  t2889 = 0.03103092645718495*t332;
  t2897 = -0.045000372235*t202;
  t2899 = t2864 + t2889 + t2897;
  t2923 = -1.296332362046933e-7*var1[19];
  t2925 = -0.14128592423750855*t862;
  t2926 = -0.045000372235*t1238;
  t2933 = t2923 + t2925 + t2926;
  t2948 = 3.2909349868922137e-7*var1[19];
  t2994 = -0.055653945343889656*t862;
  t3004 = -0.045000372235*t1407;
  t3014 = t2948 + t2994 + t3004;
  t3025 = -0.04500040093286238*t862;
  t3029 = -0.055653909852*t668;
  t3035 = -0.141285834136*t56;
  t3043 = 0. + t3025 + t3029 + t3035;
  p_output1[0]=0.707107*t1192 + t1262 + t1446;
  p_output1[1]=0.707107*t1763 + t1838 + t1944;
  p_output1[2]=0.707107*t2310 + t2408 + t2484;
  p_output1[3]=0.;
  p_output1[4]=-0.707107*t1192 + t1262 + t1446;
  p_output1[5]=-0.707107*t1763 + t1838 + t1944;
  p_output1[6]=-0.707107*t2310 + t2408 + t2484;
  p_output1[7]=0.;
  p_output1[8]=-0.366501*t1254 + 0.930418*t1427;
  p_output1[9]=-0.366501*t1835 + 0.930418*t1943;
  p_output1[10]=-0.366501*t2396 + 0.930418*t2465;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.001824*t1192 - 0.134034*t1254 - 0.189863*t1427 + t1185*t3043 + t2742*t410 + t2787*t495 + t2827*t507 + t2899*t611 + t2933*t618 + t3014*t807 + t2679*t95*t96 + var1[0];
  p_output1[13]=0. - 0.001824*t1763 - 0.134034*t1835 - 0.189863*t1943 + t1508*t2742 + t1531*t2787 + t1536*t2827 + t1579*t2899 + t1629*t2933 + t1692*t3014 + t1748*t3043 + t2679*t392*t96 + var1[1];
  p_output1[14]=0. - 0.001824*t2310 - 0.134034*t2396 - 0.189863*t2465 + t2029*t2827 + t2073*t2899 + t2085*t2933 + t2204*t3014 + t2268*t3043 - 1.*t2679*t360 + t2742*t350*t96 + t2787*t395*t96 + var1[2];
  p_output1[15]=1.;
}



void T_right_hip_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
