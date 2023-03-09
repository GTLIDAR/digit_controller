/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_elbow_src.h"

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
  double t198;
  double t328;
  double t355;
  double t330;
  double t359;
  double t278;
  double t291;
  double t292;
  double t386;
  double t344;
  double t360;
  double t361;
  double t305;
  double t387;
  double t388;
  double t391;
  double t107;
  double t113;
  double t118;
  double t152;
  double t219;
  double t252;
  double t370;
  double t404;
  double t413;
  double t465;
  double t468;
  double t470;
  double t262;
  double t273;
  double t277;
  double t435;
  double t450;
  double t456;
  double t475;
  double t476;
  double t535;
  double t545;
  double t546;
  double t549;
  double t582;
  double t588;
  double t594;
  double t612;
  double t123;
  double t691;
  double t707;
  double t708;
  double t719;
  double t728;
  double t733;
  double t741;
  double t746;
  double t749;
  double t750;
  double t803;
  double t847;
  double t931;
  double t982;
  double t494;
  double t17;
  double t154;
  double t169;
  double t485;
  double t500;
  double t503;
  double t613;
  double t642;
  double t654;
  double t783;
  double t792;
  double t945;
  double t948;
  double t958;
  double t986;
  double t994;
  double t1001;
  double t1008;
  double t1026;
  double t1027;
  double t1045;
  double t1102;
  double t1117;
  double t1132;
  double t1140;
  double t1141;
  double t1142;
  double t1143;
  double t1182;
  double t1195;
  double t1196;
  double t26;
  double t76;
  double t1386;
  double t1387;
  double t1399;
  double t1431;
  double t1437;
  double t1439;
  double t1417;
  double t1444;
  double t1452;
  double t1467;
  double t1469;
  double t1495;
  double t1383;
  double t1465;
  double t1545;
  double t1550;
  double t1559;
  double t1561;
  double t1575;
  double t1585;
  double t1590;
  double t1594;
  double t1611;
  double t1621;
  double t1053;
  double t1064;
  double t1213;
  double t1214;
  double t1557;
  double t1587;
  double t1622;
  double t1627;
  double t1224;
  double t1241;
  double t1665;
  double t1672;
  double t1675;
  double t1685;
  double t1698;
  double t1701;
  double t1704;
  double t1720;
  double t1293;
  double t1298;
  double t1305;
  double t1316;
  double t1343;
  double t1349;
  double t1922;
  double t1927;
  double t1945;
  double t1995;
  double t2003;
  double t2005;
  double t1919;
  double t1957;
  double t2018;
  double t2022;
  double t2037;
  double t2048;
  double t2056;
  double t2060;
  double t2085;
  double t2098;
  double t2100;
  double t2112;
  double t2035;
  double t2075;
  double t2114;
  double t2120;
  double t2162;
  double t2169;
  double t2173;
  double t2181;
  double t2184;
  double t2197;
  double t2201;
  double t2219;
  double t802;
  double t1046;
  double t1201;
  double t1206;
  double t1217;
  double t1244;
  double t1272;
  double t1280;
  double t1303;
  double t1327;
  double t1356;
  double t1357;
  double t1640;
  double t1690;
  double t1731;
  double t1735;
  double t1752;
  double t1772;
  double t1805;
  double t1807;
  double t1842;
  double t1850;
  double t1871;
  double t1879;
  double t2151;
  double t2183;
  double t2221;
  double t2264;
  double t2280;
  double t2292;
  double t2297;
  double t2304;
  double t2316;
  double t2339;
  double t2341;
  double t2343;
  double t2562;
  double t2567;
  double t2740;
  double t2788;
  double t2758;
  double t2511;
  double t2526;
  double t2541;
  double t2555;
  double t2570;
  double t2575;
  double t2577;
  double t2588;
  double t2590;
  double t2591;
  double t2618;
  double t2619;
  double t2630;
  double t2631;
  double t2658;
  double t2664;
  double t2705;
  double t2718;
  double t2727;
  double t2731;
  double t2746;
  double t2751;
  double t2762;
  double t2765;
  double t2769;
  double t2781;
  double t2786;
  double t2799;
  double t2803;
  double t2812;
  double t2813;
  double t2816;
  double t2824;
  double t2826;
  double t2829;
  double t2831;
  double t2842;
  double t2846;
  double t2851;
  double t2872;
  double t2879;
  double t2883;
  double t2887;
  double t2911;
  double t2914;
  double t2917;
  double t2919;
  double t2934;
  double t2935;
  double t2983;
  double t2985;
  t198 = Cos(var1[3]);
  t328 = Cos(var1[5]);
  t355 = Sin(var1[3]);
  t330 = Sin(var1[4]);
  t359 = Sin(var1[5]);
  t278 = Cos(var1[14]);
  t291 = -1.*t278;
  t292 = 1. + t291;
  t386 = Cos(var1[13]);
  t344 = t198*t328*t330;
  t360 = t355*t359;
  t361 = t344 + t360;
  t305 = Sin(var1[13]);
  t387 = -1.*t328*t355;
  t388 = t198*t330*t359;
  t391 = t387 + t388;
  t107 = Cos(var1[15]);
  t113 = -1.*t107;
  t118 = 1. + t113;
  t152 = Sin(var1[15]);
  t219 = Cos(var1[4]);
  t252 = Sin(var1[14]);
  t370 = -1.*t305*t361;
  t404 = t386*t391;
  t413 = t370 + t404;
  t465 = t386*t361;
  t468 = t305*t391;
  t470 = t465 + t468;
  t262 = 0.994522*t252;
  t273 = 0. + t262;
  t277 = t198*t219*t273;
  t435 = 0.103955395616*t292*t413;
  t450 = -0.9890740084840001*t292;
  t456 = 1. + t450;
  t475 = t456*t470;
  t476 = t277 + t435 + t475;
  t535 = -0.104528*t252;
  t545 = 0. + t535;
  t546 = t198*t219*t545;
  t549 = -0.010926102783999999*t292;
  t582 = 1. + t549;
  t588 = t582*t413;
  t594 = 0.103955395616*t292*t470;
  t612 = t546 + t588 + t594;
  t123 = -0.49726168403800003*t118;
  t691 = -1.0000001112680001*t292;
  t707 = 1. + t691;
  t708 = t707*t198*t219;
  t719 = 0.104528*t252;
  t728 = 0. + t719;
  t733 = t728*t413;
  t741 = -0.994522*t252;
  t746 = 0. + t741;
  t749 = t746*t470;
  t750 = t708 + t733 + t749;
  t803 = Cos(var1[16]);
  t847 = -1.*t803;
  t931 = 1. + t847;
  t982 = -0.051978134642000004*t118;
  t494 = 0.05226439969100001*t118;
  t17 = Sin(var1[16]);
  t154 = -0.073913*t152;
  t169 = t123 + t154;
  t485 = t169*t476;
  t500 = -0.703234*t152;
  t503 = t494 + t500;
  t613 = t503*t612;
  t642 = -0.500001190325*t118;
  t654 = 1. + t642;
  t783 = t654*t750;
  t792 = t485 + t613 + t783;
  t945 = -0.5054634410180001*t118;
  t948 = 1. + t945;
  t958 = t948*t476;
  t986 = -0.707107*t152;
  t994 = t982 + t986;
  t1001 = t994*t612;
  t1008 = 0.073913*t152;
  t1026 = t123 + t1008;
  t1027 = t1026*t750;
  t1045 = t958 + t1001 + t1027;
  t1102 = 0.707107*t152;
  t1117 = t982 + t1102;
  t1132 = t1117*t476;
  t1140 = -0.9945383682050002*t118;
  t1141 = 1. + t1140;
  t1142 = t1141*t612;
  t1143 = 0.703234*t152;
  t1182 = t494 + t1143;
  t1195 = t1182*t750;
  t1196 = t1132 + t1142 + t1195;
  t26 = -0.104528*t17;
  t76 = 0. + t26;
  t1386 = t328*t355*t330;
  t1387 = -1.*t198*t359;
  t1399 = t1386 + t1387;
  t1431 = t198*t328;
  t1437 = t355*t330*t359;
  t1439 = t1431 + t1437;
  t1417 = -1.*t305*t1399;
  t1444 = t386*t1439;
  t1452 = t1417 + t1444;
  t1467 = t386*t1399;
  t1469 = t305*t1439;
  t1495 = t1467 + t1469;
  t1383 = t219*t273*t355;
  t1465 = 0.103955395616*t292*t1452;
  t1545 = t456*t1495;
  t1550 = t1383 + t1465 + t1545;
  t1559 = t219*t545*t355;
  t1561 = t582*t1452;
  t1575 = 0.103955395616*t292*t1495;
  t1585 = t1559 + t1561 + t1575;
  t1590 = t707*t219*t355;
  t1594 = t728*t1452;
  t1611 = t746*t1495;
  t1621 = t1590 + t1594 + t1611;
  t1053 = -0.010926102783999999*t931;
  t1064 = 1. + t1053;
  t1213 = 0.994522*t17;
  t1214 = 0. + t1213;
  t1557 = t169*t1550;
  t1587 = t503*t1585;
  t1622 = t654*t1621;
  t1627 = t1557 + t1587 + t1622;
  t1224 = -0.9890740084840001*t931;
  t1241 = 1. + t1224;
  t1665 = t948*t1550;
  t1672 = t994*t1585;
  t1675 = t1026*t1621;
  t1685 = t1665 + t1672 + t1675;
  t1698 = t1117*t1550;
  t1701 = t1141*t1585;
  t1704 = t1182*t1621;
  t1720 = t1698 + t1701 + t1704;
  t1293 = -1.0000001112680001*t931;
  t1298 = 1. + t1293;
  t1305 = -0.994522*t17;
  t1316 = 0. + t1305;
  t1343 = 0.104528*t17;
  t1349 = 0. + t1343;
  t1922 = -1.*t219*t328*t305;
  t1927 = t386*t219*t359;
  t1945 = t1922 + t1927;
  t1995 = t386*t219*t328;
  t2003 = t219*t305*t359;
  t2005 = t1995 + t2003;
  t1919 = -1.*t273*t330;
  t1957 = 0.103955395616*t292*t1945;
  t2018 = t456*t2005;
  t2022 = t1919 + t1957 + t2018;
  t2037 = -1.*t545*t330;
  t2048 = t582*t1945;
  t2056 = 0.103955395616*t292*t2005;
  t2060 = t2037 + t2048 + t2056;
  t2085 = -1.*t707*t330;
  t2098 = t728*t1945;
  t2100 = t746*t2005;
  t2112 = t2085 + t2098 + t2100;
  t2035 = t169*t2022;
  t2075 = t503*t2060;
  t2114 = t654*t2112;
  t2120 = t2035 + t2075 + t2114;
  t2162 = t948*t2022;
  t2169 = t994*t2060;
  t2173 = t1026*t2112;
  t2181 = t2162 + t2169 + t2173;
  t2184 = t1117*t2022;
  t2197 = t1141*t2060;
  t2201 = t1182*t2112;
  t2219 = t2184 + t2197 + t2201;
  t802 = t76*t792;
  t1046 = 0.103955395616*t931*t1045;
  t1201 = t1064*t1196;
  t1206 = t802 + t1046 + t1201;
  t1217 = t1214*t792;
  t1244 = t1241*t1045;
  t1272 = 0.103955395616*t931*t1196;
  t1280 = t1217 + t1244 + t1272;
  t1303 = t1298*t792;
  t1327 = t1316*t1045;
  t1356 = t1349*t1196;
  t1357 = t1303 + t1327 + t1356;
  t1640 = t76*t1627;
  t1690 = 0.103955395616*t931*t1685;
  t1731 = t1064*t1720;
  t1735 = t1640 + t1690 + t1731;
  t1752 = t1214*t1627;
  t1772 = t1241*t1685;
  t1805 = 0.103955395616*t931*t1720;
  t1807 = t1752 + t1772 + t1805;
  t1842 = t1298*t1627;
  t1850 = t1316*t1685;
  t1871 = t1349*t1720;
  t1879 = t1842 + t1850 + t1871;
  t2151 = t76*t2120;
  t2183 = 0.103955395616*t931*t2181;
  t2221 = t1064*t2219;
  t2264 = t2151 + t2183 + t2221;
  t2280 = t1214*t2120;
  t2292 = t1241*t2181;
  t2297 = 0.103955395616*t931*t2219;
  t2304 = t2280 + t2292 + t2297;
  t2316 = t1298*t2120;
  t2339 = t1316*t2181;
  t2341 = t1349*t2219;
  t2343 = t2316 + t2339 + t2341;
  t2562 = -1.*t386;
  t2567 = 1. + t2562;
  t2740 = 0.051978134642000004*t118;
  t2788 = -0.05226439969100001*t118;
  t2758 = 0.49726168403800003*t118;
  t2511 = -0.056500534356700764*t292;
  t2526 = 0.38315650737400003*t746;
  t2541 = -0.040271188976*t728;
  t2555 = 0. + t2511 + t2526 + t2541;
  t2570 = 0.4*t2567;
  t2575 = 0.12*t305;
  t2577 = 0. + t2570 + t2575;
  t2588 = 0.12*t2567;
  t2590 = -0.4*t305;
  t2591 = 0. + t2588 + t2590;
  t2618 = 1.1345904784751044e-7*var1[14];
  t2619 = -0.04027119345689465*t292;
  t2630 = -0.05650052807*t545;
  t2631 = t2618 + t2619 + t2630;
  t2658 = 1.1924972351948546e-8*var1[14];
  t2664 = 0.38315655000705834*t292;
  t2705 = -0.05650052807*t273;
  t2718 = t2658 + t2664 + t2705;
  t2727 = -1.5601527583902087e-7*var1[15];
  t2731 = 0.09582494577057615*t118;
  t2746 = t2740 + t986;
  t2751 = 0.231098203479*t2746;
  t2762 = t2758 + t1008;
  t2765 = 0.164383620275*t2762;
  t2769 = t2727 + t2731 + t2751 + t2765;
  t2781 = 1.639789470231751e-8*var1[15];
  t2786 = 0.22983603018311177*t118;
  t2799 = t2788 + t1143;
  t2803 = 0.164383620275*t2799;
  t2812 = t2740 + t1102;
  t2813 = 0.18957839082800002*t2812;
  t2816 = t2781 + t2786 + t2803 + t2813;
  t2824 = 1.568745163810375e-7*var1[15];
  t2826 = 0.08219200580743281*t118;
  t2829 = t2788 + t500;
  t2831 = 0.231098203479*t2829;
  t2842 = t2758 + t154;
  t2846 = 0.18957839082800002*t2842;
  t2851 = t2824 + t2826 + t2831 + t2846;
  t2872 = 0.19098732144477495*t931;
  t2879 = 0.137024246638*t1316;
  t2883 = -0.014401763312*t1349;
  t2887 = 0. + t2872 + t2879 + t2883;
  t2911 = -5.06291820800569e-8*var1[16];
  t2914 = 0.13702426188441388*t931;
  t2917 = 0.190987300194*t1214;
  t2919 = t2911 + t2914 + t2917;
  t2934 = -4.817066759205414e-7*var1[16];
  t2935 = -0.0144017649144554*t931;
  t2983 = 0.190987300194*t76;
  t2985 = t2934 + t2935 + t2983;
  p_output1[0]=-0.040001*t1206 + 0.380588*t1280 + 0.92388*t1357;
  p_output1[1]=-0.040001*t1735 + 0.380588*t1807 + 0.92388*t1879;
  p_output1[2]=-0.040001*t2264 + 0.380588*t2304 + 0.92388*t2343;
  p_output1[3]=0.;
  p_output1[4]=0.096572*t1206 - 0.918819*t1280 + 0.382684*t1357;
  p_output1[5]=0.096572*t1735 - 0.918819*t1807 + 0.382684*t1879;
  p_output1[6]=0.096572*t2264 - 0.918819*t2304 + 0.382684*t2343;
  p_output1[7]=0.;
  p_output1[8]=0.994522*t1206 + 0.104528*t1280;
  p_output1[9]=0.994522*t1735 + 0.104528*t1807;
  p_output1[10]=0.994522*t2264 + 0.104528*t2304;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.250125*t1206 + 0.206868*t1280 + 0.290567*t1357 + t198*t219*t2555 + t1045*t2919 + t1196*t2985 + t2577*t361 + t2591*t391 + t2631*t413 + t2718*t470 + t2769*t476 + t2816*t612 + t2851*t750 + t2887*t792 + var1[0];
  p_output1[13]=0. + 0.250125*t1735 + 0.206868*t1807 + 0.290567*t1879 + t1399*t2577 + t1439*t2591 + t1452*t2631 + t1495*t2718 + t1550*t2769 + t1585*t2816 + t1621*t2851 + t1627*t2887 + t1685*t2919 + t1720*t2985 + t219*t2555*t355 + var1[1];
  p_output1[14]=0. + 0.250125*t2264 + 0.206868*t2304 + 0.290567*t2343 + t1945*t2631 + t2005*t2718 + t2022*t2769 + t2060*t2816 + t2112*t2851 + t2120*t2887 + t2181*t2919 + t2219*t2985 + t219*t2577*t328 - 1.*t2555*t330 + t219*t2591*t359 + var1[2];
  p_output1[15]=1.;
}



void T_left_elbow_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
