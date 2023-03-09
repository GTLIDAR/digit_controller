/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_hip_pitch_src.h"

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
  double t364;
  double t294;
  double t366;
  double t337;
  double t382;
  double t232;
  double t239;
  double t248;
  double t293;
  double t410;
  double t448;
  double t459;
  double t354;
  double t396;
  double t402;
  double t460;
  double t61;
  double t208;
  double t214;
  double t407;
  double t485;
  double t486;
  double t518;
  double t524;
  double t532;
  double t553;
  double t557;
  double t749;
  double t754;
  double t770;
  double t773;
  double t779;
  double t780;
  double t785;
  double t838;
  double t850;
  double t857;
  double t489;
  double t509;
  double t511;
  double t536;
  double t559;
  double t566;
  double t568;
  double t601;
  double t862;
  double t639;
  double t671;
  double t676;
  double t682;
  double t696;
  double t719;
  double t732;
  double t741;
  double t1258;
  double t1260;
  double t1271;
  double t1237;
  double t1244;
  double t1248;
  double t617;
  double t636;
  double t1257;
  double t1272;
  double t1275;
  double t1361;
  double t1363;
  double t1407;
  double t866;
  double t867;
  double t943;
  double t980;
  double t1495;
  double t1503;
  double t1552;
  double t1559;
  double t1336;
  double t1417;
  double t1437;
  double t1438;
  double t984;
  double t992;
  double t1456;
  double t1467;
  double t1469;
  double t1483;
  double t1004;
  double t1039;
  double t1165;
  double t1168;
  double t1194;
  double t1205;
  double t1773;
  double t1779;
  double t1826;
  double t1844;
  double t1848;
  double t1884;
  double t1991;
  double t1995;
  double t1999;
  double t2060;
  double t1840;
  double t1894;
  double t1900;
  double t1901;
  double t1935;
  double t1967;
  double t1979;
  double t1980;
  double t613;
  double t744;
  double t872;
  double t882;
  double t982;
  double t1003;
  double t1122;
  double t1130;
  double t1149;
  double t1182;
  double t1193;
  double t1211;
  double t1218;
  double t1443;
  double t1492;
  double t1595;
  double t1599;
  double t1625;
  double t1630;
  double t1650;
  double t1663;
  double t1678;
  double t1706;
  double t1713;
  double t1723;
  double t1754;
  double t1933;
  double t1981;
  double t2066;
  double t2100;
  double t2154;
  double t2155;
  double t2175;
  double t2196;
  double t2208;
  double t2224;
  double t2233;
  double t2242;
  double t2253;
  double t2521;
  double t2524;
  double t2530;
  double t2554;
  double t2591;
  double t2620;
  double t2637;
  double t2639;
  double t2644;
  double t2665;
  double t2672;
  double t2677;
  double t2678;
  double t2699;
  double t2725;
  double t2740;
  double t2815;
  double t2821;
  double t2829;
  double t2830;
  double t2853;
  double t2858;
  double t2881;
  double t2890;
  double t2915;
  double t2933;
  double t2942;
  double t2948;
  double t2960;
  double t2961;
  t364 = Cos(var1[3]);
  t294 = Cos(var1[5]);
  t366 = Sin(var1[4]);
  t337 = Sin(var1[3]);
  t382 = Sin(var1[5]);
  t232 = Cos(var1[7]);
  t239 = -1.*t232;
  t248 = 1. + t239;
  t293 = Cos(var1[6]);
  t410 = t364*t294*t366;
  t448 = t337*t382;
  t459 = t410 + t448;
  t354 = -1.*t294*t337;
  t396 = t364*t366*t382;
  t402 = t354 + t396;
  t460 = Sin(var1[6]);
  t61 = Cos(var1[8]);
  t208 = -1.*t61;
  t214 = 1. + t208;
  t407 = t293*t402;
  t485 = -1.*t459*t460;
  t486 = t407 + t485;
  t518 = t293*t459;
  t524 = t402*t460;
  t532 = t518 + t524;
  t553 = Cos(var1[4]);
  t557 = Sin(var1[7]);
  t749 = -1.000000637725*t248;
  t754 = 1. + t749;
  t770 = t364*t553*t754;
  t773 = -0.930418*t557;
  t779 = 0. + t773;
  t780 = t486*t779;
  t785 = -0.366501*t557;
  t838 = 0. + t785;
  t850 = t532*t838;
  t857 = t770 + t780 + t850;
  t489 = -0.340999127418*t248*t486;
  t509 = -0.134322983001*t248;
  t511 = 1. + t509;
  t536 = t511*t532;
  t559 = 0.366501*t557;
  t566 = 0. + t559;
  t568 = t364*t553*t566;
  t601 = t489 + t536 + t568;
  t862 = Sin(var1[8]);
  t639 = -0.8656776547239999*t248;
  t671 = 1. + t639;
  t676 = t671*t486;
  t682 = -0.340999127418*t248*t532;
  t696 = 0.930418*t557;
  t719 = 0. + t696;
  t732 = t364*t553*t719;
  t741 = t676 + t682 + t732;
  t1258 = t294*t337*t366;
  t1260 = -1.*t364*t382;
  t1271 = t1258 + t1260;
  t1237 = t364*t294;
  t1244 = t337*t366*t382;
  t1248 = t1237 + t1244;
  t617 = -0.134322983001*t214;
  t636 = 1. + t617;
  t1257 = t293*t1248;
  t1272 = -1.*t1271*t460;
  t1275 = t1257 + t1272;
  t1361 = t293*t1271;
  t1363 = t1248*t460;
  t1407 = t1361 + t1363;
  t866 = -0.366501*t862;
  t867 = 0. + t866;
  t943 = -1.000000637725*t214;
  t980 = 1. + t943;
  t1495 = t553*t754*t337;
  t1503 = t1275*t779;
  t1552 = t1407*t838;
  t1559 = t1495 + t1503 + t1552;
  t1336 = -0.340999127418*t248*t1275;
  t1417 = t511*t1407;
  t1437 = t553*t337*t566;
  t1438 = t1336 + t1417 + t1437;
  t984 = -0.930418*t862;
  t992 = 0. + t984;
  t1456 = t671*t1275;
  t1467 = -0.340999127418*t248*t1407;
  t1469 = t553*t337*t719;
  t1483 = t1456 + t1467 + t1469;
  t1004 = 0.366501*t862;
  t1039 = 0. + t1004;
  t1165 = -0.8656776547239999*t214;
  t1168 = 1. + t1165;
  t1194 = 0.930418*t862;
  t1205 = 0. + t1194;
  t1773 = t553*t293*t382;
  t1779 = -1.*t553*t294*t460;
  t1826 = t1773 + t1779;
  t1844 = t553*t294*t293;
  t1848 = t553*t382*t460;
  t1884 = t1844 + t1848;
  t1991 = -1.*t754*t366;
  t1995 = t1826*t779;
  t1999 = t1884*t838;
  t2060 = t1991 + t1995 + t1999;
  t1840 = -0.340999127418*t248*t1826;
  t1894 = t511*t1884;
  t1900 = -1.*t366*t566;
  t1901 = t1840 + t1894 + t1900;
  t1935 = t671*t1826;
  t1967 = -0.340999127418*t248*t1884;
  t1979 = -1.*t366*t719;
  t1980 = t1935 + t1967 + t1979;
  t613 = 0.340999127418*t214*t601;
  t744 = t636*t741;
  t872 = t857*t867;
  t882 = t613 + t744 + t872;
  t982 = t980*t857;
  t1003 = t601*t992;
  t1122 = t741*t1039;
  t1130 = t982 + t1003 + t1122;
  t1149 = 0.707107*t1130;
  t1182 = t1168*t601;
  t1193 = 0.340999127418*t214*t741;
  t1211 = t857*t1205;
  t1218 = t1182 + t1193 + t1211;
  t1443 = 0.340999127418*t214*t1438;
  t1492 = t636*t1483;
  t1595 = t1559*t867;
  t1599 = t1443 + t1492 + t1595;
  t1625 = t980*t1559;
  t1630 = t1438*t992;
  t1650 = t1483*t1039;
  t1663 = t1625 + t1630 + t1650;
  t1678 = 0.707107*t1663;
  t1706 = t1168*t1438;
  t1713 = 0.340999127418*t214*t1483;
  t1723 = t1559*t1205;
  t1754 = t1706 + t1713 + t1723;
  t1933 = 0.340999127418*t214*t1901;
  t1981 = t636*t1980;
  t2066 = t2060*t867;
  t2100 = t1933 + t1981 + t2066;
  t2154 = t980*t2060;
  t2155 = t1901*t992;
  t2175 = t1980*t1039;
  t2196 = t2154 + t2155 + t2175;
  t2208 = 0.707107*t2196;
  t2224 = t1168*t1901;
  t2233 = 0.340999127418*t214*t1980;
  t2242 = t2060*t1205;
  t2253 = t2224 + t2233 + t2242;
  t2521 = -1.*t293;
  t2524 = 1. + t2521;
  t2530 = 0.091*t2524;
  t2554 = 0. + t2530;
  t2591 = 0.091*t460;
  t2620 = 0. + t2591;
  t2637 = -0.04500040093286238*t248;
  t2639 = 0.07877663122399998*t779;
  t2644 = 0.031030906668*t838;
  t2665 = 0. + t2637 + t2639 + t2644;
  t2672 = -3.2909349868922137e-7*var1[7];
  t2677 = 0.03103092645718495*t248;
  t2678 = -0.045000372235*t566;
  t2699 = t2672 + t2677 + t2678;
  t2725 = 1.296332362046933e-7*var1[7];
  t2740 = 0.07877668146182712*t248;
  t2815 = -0.045000372235*t719;
  t2821 = t2725 + t2740 + t2815;
  t2829 = 3.2909349868922137e-7*var1[8];
  t2830 = 0.055653945343889656*t214;
  t2853 = -0.045000372235*t867;
  t2858 = t2829 + t2830 + t2853;
  t2881 = -0.04500040093286238*t214;
  t2890 = -0.141285834136*t992;
  t2915 = 0.055653909852*t1039;
  t2933 = 0. + t2881 + t2890 + t2915;
  t2942 = 1.296332362046933e-7*var1[8];
  t2948 = -0.14128592423750855*t214;
  t2960 = -0.045000372235*t1205;
  t2961 = t2942 + t2948 + t2960;
  p_output1[0]=t1149 - 0.657905*t1218 + 0.259155*t882;
  p_output1[1]=0.259155*t1599 + t1678 - 0.657905*t1754;
  p_output1[2]=0.259155*t2100 + t2208 - 0.657905*t2253;
  p_output1[3]=0.;
  p_output1[4]=t1149 + 0.657905*t1218 - 0.259155*t882;
  p_output1[5]=-0.259155*t1599 + t1678 + 0.657905*t1754;
  p_output1[6]=-0.259155*t2100 + t2208 + 0.657905*t2253;
  p_output1[7]=0.;
  p_output1[8]=-0.366501*t1218 - 0.930418*t882;
  p_output1[9]=-0.930418*t1599 - 0.366501*t1754;
  p_output1[10]=-0.930418*t2100 - 0.366501*t2253;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.001824*t1130 - 0.134034*t1218 + t2554*t402 + t2620*t459 + t2821*t486 + t2699*t532 + t2665*t364*t553 + t2961*t601 + t2858*t741 + t2933*t857 + 0.189863*t882 + var1[0];
  p_output1[13]=0. + 0.189863*t1599 - 0.001824*t1663 - 0.134034*t1754 + t1248*t2554 + t1271*t2620 + t1407*t2699 + t1275*t2821 + t1483*t2858 + t1559*t2933 + t1438*t2961 + t2665*t337*t553 + var1[1];
  p_output1[14]=0. + 0.189863*t2100 - 0.001824*t2196 - 0.134034*t2253 + t1884*t2699 + t1826*t2821 + t1980*t2858 + t2060*t2933 + t1901*t2961 - 1.*t2665*t366 + t2620*t294*t553 + t2554*t382*t553 + var1[2];
  p_output1[15]=1.;
}



void T_left_hip_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
