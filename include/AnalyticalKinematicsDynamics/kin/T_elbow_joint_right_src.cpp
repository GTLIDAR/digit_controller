/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_elbow_joint_right_src.h"

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
  double t289;
  double t423;
  double t438;
  double t428;
  double t455;
  double t379;
  double t411;
  double t415;
  double t487;
  double t432;
  double t462;
  double t469;
  double t420;
  double t490;
  double t498;
  double t499;
  double t133;
  double t145;
  double t146;
  double t225;
  double t318;
  double t366;
  double t484;
  double t533;
  double t539;
  double t562;
  double t567;
  double t575;
  double t371;
  double t376;
  double t377;
  double t541;
  double t545;
  double t557;
  double t592;
  double t594;
  double t684;
  double t686;
  double t688;
  double t731;
  double t742;
  double t752;
  double t761;
  double t785;
  double t178;
  double t852;
  double t859;
  double t874;
  double t877;
  double t879;
  double t906;
  double t911;
  double t914;
  double t922;
  double t950;
  double t1011;
  double t1025;
  double t1057;
  double t1089;
  double t630;
  double t10;
  double t231;
  double t238;
  double t595;
  double t680;
  double t683;
  double t801;
  double t806;
  double t841;
  double t953;
  double t996;
  double t1065;
  double t1075;
  double t1079;
  double t1095;
  double t1101;
  double t1107;
  double t1108;
  double t1110;
  double t1140;
  double t1147;
  double t1241;
  double t1246;
  double t1259;
  double t1261;
  double t1268;
  double t1272;
  double t1275;
  double t1286;
  double t1293;
  double t1295;
  double t45;
  double t83;
  double t1489;
  double t1492;
  double t1498;
  double t1508;
  double t1522;
  double t1527;
  double t1507;
  double t1536;
  double t1538;
  double t1548;
  double t1554;
  double t1591;
  double t1462;
  double t1545;
  double t1597;
  double t1609;
  double t1626;
  double t1633;
  double t1637;
  double t1653;
  double t1678;
  double t1692;
  double t1697;
  double t1709;
  double t1193;
  double t1228;
  double t1326;
  double t1328;
  double t1619;
  double t1658;
  double t1731;
  double t1732;
  double t1340;
  double t1342;
  double t1740;
  double t1745;
  double t1747;
  double t1768;
  double t1786;
  double t1790;
  double t1813;
  double t1838;
  double t1389;
  double t1391;
  double t1415;
  double t1417;
  double t1427;
  double t1429;
  double t1951;
  double t1976;
  double t1978;
  double t1993;
  double t2003;
  double t2009;
  double t1945;
  double t1991;
  double t2024;
  double t2030;
  double t2035;
  double t2041;
  double t2047;
  double t2070;
  double t2131;
  double t2132;
  double t2134;
  double t2142;
  double t2033;
  double t2127;
  double t2148;
  double t2155;
  double t2204;
  double t2225;
  double t2241;
  double t2245;
  double t2259;
  double t2266;
  double t2281;
  double t2322;
  double t1000;
  double t1173;
  double t1301;
  double t1303;
  double t1331;
  double t1343;
  double t1357;
  double t1367;
  double t1402;
  double t1419;
  double t1437;
  double t1438;
  double t1734;
  double t1775;
  double t1842;
  double t1848;
  double t1859;
  double t1863;
  double t1864;
  double t1873;
  double t1886;
  double t1906;
  double t1922;
  double t1924;
  double t2194;
  double t2247;
  double t2328;
  double t2339;
  double t2353;
  double t2365;
  double t2368;
  double t2369;
  double t2380;
  double t2401;
  double t2404;
  double t2408;
  double t2686;
  double t2718;
  double t2845;
  double t2944;
  double t2899;
  double t2662;
  double t2669;
  double t2674;
  double t2680;
  double t2720;
  double t2724;
  double t2739;
  double t2744;
  double t2764;
  double t2766;
  double t2788;
  double t2797;
  double t2799;
  double t2809;
  double t2811;
  double t2820;
  double t2822;
  double t2825;
  double t2828;
  double t2829;
  double t2859;
  double t2866;
  double t2907;
  double t2913;
  double t2918;
  double t2926;
  double t2940;
  double t2948;
  double t2949;
  double t2952;
  double t2953;
  double t2962;
  double t2992;
  double t3010;
  double t3021;
  double t3035;
  double t3046;
  double t3052;
  double t3067;
  double t3074;
  double t3075;
  double t3077;
  double t3078;
  double t3100;
  double t3102;
  double t3108;
  double t3112;
  double t3153;
  double t3159;
  double t3169;
  double t3170;
  t289 = Cos(var1[3]);
  t423 = Cos(var1[5]);
  t438 = Sin(var1[3]);
  t428 = Sin(var1[4]);
  t455 = Sin(var1[5]);
  t379 = Cos(var1[25]);
  t411 = -1.*t379;
  t415 = 1. + t411;
  t487 = Cos(var1[24]);
  t432 = t289*t423*t428;
  t462 = t438*t455;
  t469 = t432 + t462;
  t420 = Sin(var1[24]);
  t490 = -1.*t423*t438;
  t498 = t289*t428*t455;
  t499 = t490 + t498;
  t133 = Cos(var1[26]);
  t145 = -1.*t133;
  t146 = 1. + t145;
  t225 = Sin(var1[26]);
  t318 = Cos(var1[4]);
  t366 = Sin(var1[25]);
  t484 = -1.*t420*t469;
  t533 = t487*t499;
  t539 = t484 + t533;
  t562 = t487*t469;
  t567 = t420*t499;
  t575 = t562 + t567;
  t371 = -0.994522*t366;
  t376 = 0. + t371;
  t377 = t289*t318*t376;
  t541 = -0.103955395616*t415*t539;
  t545 = -0.9890740084840001*t415;
  t557 = 1. + t545;
  t592 = t557*t575;
  t594 = t377 + t541 + t592;
  t684 = -0.104528*t366;
  t686 = 0. + t684;
  t688 = t289*t318*t686;
  t731 = -0.010926102783999999*t415;
  t742 = 1. + t731;
  t752 = t742*t539;
  t761 = -0.103955395616*t415*t575;
  t785 = t688 + t752 + t761;
  t178 = -0.49726168403800003*t146;
  t852 = -1.0000001112680001*t415;
  t859 = 1. + t852;
  t874 = t859*t289*t318;
  t877 = 0.104528*t366;
  t879 = 0. + t877;
  t906 = t879*t539;
  t911 = 0.994522*t366;
  t914 = 0. + t911;
  t922 = t914*t575;
  t950 = t874 + t906 + t922;
  t1011 = Cos(var1[27]);
  t1025 = -1.*t1011;
  t1057 = 1. + t1025;
  t1089 = 0.051978134642000004*t146;
  t630 = -0.05226439969100001*t146;
  t10 = Sin(var1[27]);
  t231 = 0.073913*t225;
  t238 = t178 + t231;
  t595 = t238*t594;
  t680 = -0.703234*t225;
  t683 = t630 + t680;
  t801 = t683*t785;
  t806 = -0.500001190325*t146;
  t841 = 1. + t806;
  t953 = t841*t950;
  t996 = t595 + t801 + t953;
  t1065 = -0.5054634410180001*t146;
  t1075 = 1. + t1065;
  t1079 = t1075*t594;
  t1095 = -0.707107*t225;
  t1101 = t1089 + t1095;
  t1107 = t1101*t785;
  t1108 = -0.073913*t225;
  t1110 = t178 + t1108;
  t1140 = t1110*t950;
  t1147 = t1079 + t1107 + t1140;
  t1241 = 0.707107*t225;
  t1246 = t1089 + t1241;
  t1259 = t1246*t594;
  t1261 = -0.9945383682050002*t146;
  t1268 = 1. + t1261;
  t1272 = t1268*t785;
  t1275 = 0.703234*t225;
  t1286 = t630 + t1275;
  t1293 = t1286*t950;
  t1295 = t1259 + t1272 + t1293;
  t45 = -0.104528*t10;
  t83 = 0. + t45;
  t1489 = t423*t438*t428;
  t1492 = -1.*t289*t455;
  t1498 = t1489 + t1492;
  t1508 = t289*t423;
  t1522 = t438*t428*t455;
  t1527 = t1508 + t1522;
  t1507 = -1.*t420*t1498;
  t1536 = t487*t1527;
  t1538 = t1507 + t1536;
  t1548 = t487*t1498;
  t1554 = t420*t1527;
  t1591 = t1548 + t1554;
  t1462 = t318*t376*t438;
  t1545 = -0.103955395616*t415*t1538;
  t1597 = t557*t1591;
  t1609 = t1462 + t1545 + t1597;
  t1626 = t318*t686*t438;
  t1633 = t742*t1538;
  t1637 = -0.103955395616*t415*t1591;
  t1653 = t1626 + t1633 + t1637;
  t1678 = t859*t318*t438;
  t1692 = t879*t1538;
  t1697 = t914*t1591;
  t1709 = t1678 + t1692 + t1697;
  t1193 = -0.010926102783999999*t1057;
  t1228 = 1. + t1193;
  t1326 = -0.994522*t10;
  t1328 = 0. + t1326;
  t1619 = t238*t1609;
  t1658 = t683*t1653;
  t1731 = t841*t1709;
  t1732 = t1619 + t1658 + t1731;
  t1340 = -0.9890740084840001*t1057;
  t1342 = 1. + t1340;
  t1740 = t1075*t1609;
  t1745 = t1101*t1653;
  t1747 = t1110*t1709;
  t1768 = t1740 + t1745 + t1747;
  t1786 = t1246*t1609;
  t1790 = t1268*t1653;
  t1813 = t1286*t1709;
  t1838 = t1786 + t1790 + t1813;
  t1389 = -1.0000001112680001*t1057;
  t1391 = 1. + t1389;
  t1415 = 0.994522*t10;
  t1417 = 0. + t1415;
  t1427 = 0.104528*t10;
  t1429 = 0. + t1427;
  t1951 = -1.*t318*t423*t420;
  t1976 = t487*t318*t455;
  t1978 = t1951 + t1976;
  t1993 = t487*t318*t423;
  t2003 = t318*t420*t455;
  t2009 = t1993 + t2003;
  t1945 = -1.*t376*t428;
  t1991 = -0.103955395616*t415*t1978;
  t2024 = t557*t2009;
  t2030 = t1945 + t1991 + t2024;
  t2035 = -1.*t686*t428;
  t2041 = t742*t1978;
  t2047 = -0.103955395616*t415*t2009;
  t2070 = t2035 + t2041 + t2047;
  t2131 = -1.*t859*t428;
  t2132 = t879*t1978;
  t2134 = t914*t2009;
  t2142 = t2131 + t2132 + t2134;
  t2033 = t238*t2030;
  t2127 = t683*t2070;
  t2148 = t841*t2142;
  t2155 = t2033 + t2127 + t2148;
  t2204 = t1075*t2030;
  t2225 = t1101*t2070;
  t2241 = t1110*t2142;
  t2245 = t2204 + t2225 + t2241;
  t2259 = t1246*t2030;
  t2266 = t1268*t2070;
  t2281 = t1286*t2142;
  t2322 = t2259 + t2266 + t2281;
  t1000 = t83*t996;
  t1173 = -0.103955395616*t1057*t1147;
  t1301 = t1228*t1295;
  t1303 = t1000 + t1173 + t1301;
  t1331 = t1328*t996;
  t1343 = t1342*t1147;
  t1357 = -0.103955395616*t1057*t1295;
  t1367 = t1331 + t1343 + t1357;
  t1402 = t1391*t996;
  t1419 = t1417*t1147;
  t1437 = t1429*t1295;
  t1438 = t1402 + t1419 + t1437;
  t1734 = t83*t1732;
  t1775 = -0.103955395616*t1057*t1768;
  t1842 = t1228*t1838;
  t1848 = t1734 + t1775 + t1842;
  t1859 = t1328*t1732;
  t1863 = t1342*t1768;
  t1864 = -0.103955395616*t1057*t1838;
  t1873 = t1859 + t1863 + t1864;
  t1886 = t1391*t1732;
  t1906 = t1417*t1768;
  t1922 = t1429*t1838;
  t1924 = t1886 + t1906 + t1922;
  t2194 = t83*t2155;
  t2247 = -0.103955395616*t1057*t2245;
  t2328 = t1228*t2322;
  t2339 = t2194 + t2247 + t2328;
  t2353 = t1328*t2155;
  t2365 = t1342*t2245;
  t2368 = -0.103955395616*t1057*t2322;
  t2369 = t2353 + t2365 + t2368;
  t2380 = t1391*t2155;
  t2401 = t1417*t2245;
  t2404 = t1429*t2322;
  t2408 = t2380 + t2401 + t2404;
  t2686 = -1.*t487;
  t2718 = 1. + t2686;
  t2845 = -0.051978134642000004*t146;
  t2944 = 0.05226439969100001*t146;
  t2899 = 0.49726168403800003*t146;
  t2662 = -0.056500534356700764*t415;
  t2669 = 0.040271188976*t879;
  t2674 = 0.38315650737400003*t914;
  t2680 = 0. + t2662 + t2669 + t2674;
  t2720 = 0.4*t2718;
  t2724 = -0.12*t420;
  t2739 = 0. + t2720 + t2724;
  t2744 = -0.12*t2718;
  t2764 = -0.4*t420;
  t2766 = 0. + t2744 + t2764;
  t2788 = 1.1345904784751044e-7*var1[25];
  t2797 = 0.04027119345689465*t415;
  t2799 = -0.05650052807*t686;
  t2809 = t2788 + t2797 + t2799;
  t2811 = -1.1924972351948546e-8*var1[25];
  t2820 = 0.38315655000705834*t415;
  t2822 = -0.05650052807*t376;
  t2825 = t2811 + t2820 + t2822;
  t2828 = 1.5601527583902087e-7*var1[26];
  t2829 = 0.09582494577057615*t146;
  t2859 = t2845 + t1095;
  t2866 = -0.231098203479*t2859;
  t2907 = t2899 + t1108;
  t2913 = 0.164383620275*t2907;
  t2918 = t2828 + t2829 + t2866 + t2913;
  t2926 = 1.639789470231751e-8*var1[26];
  t2940 = -0.22983603018311177*t146;
  t2948 = t2944 + t1275;
  t2949 = 0.164383620275*t2948;
  t2952 = t2845 + t1241;
  t2953 = 0.18957839082800002*t2952;
  t2962 = t2926 + t2940 + t2949 + t2953;
  t2992 = -1.568745163810375e-7*var1[26];
  t3010 = 0.08219200580743281*t146;
  t3021 = t2944 + t680;
  t3035 = -0.231098203479*t3021;
  t3046 = t2899 + t231;
  t3052 = 0.18957839082800002*t3046;
  t3067 = t2992 + t3010 + t3035 + t3052;
  t3074 = 0.19098732144477495*t1057;
  t3075 = 0.014401763312*t1429;
  t3077 = 0.137024246638*t1417;
  t3078 = 0. + t3074 + t3075 + t3077;
  t3100 = 5.06291820800569e-8*var1[27];
  t3102 = 0.13702426188441388*t1057;
  t3108 = 0.190987300194*t1328;
  t3112 = t3100 + t3102 + t3108;
  t3153 = -4.817066759205414e-7*var1[27];
  t3159 = 0.0144017649144554*t1057;
  t3169 = 0.190987300194*t83;
  t3170 = t3153 + t3159 + t3169;
  p_output1[0]=0.040001*t1303 + 0.380588*t1367 + 0.92388*t1438;
  p_output1[1]=0.040001*t1848 + 0.380588*t1873 + 0.92388*t1924;
  p_output1[2]=0.040001*t2339 + 0.380588*t2369 + 0.92388*t2408;
  p_output1[3]=0.;
  p_output1[4]=0.096572*t1303 + 0.918819*t1367 - 0.382684*t1438;
  p_output1[5]=0.096572*t1848 + 0.918819*t1873 - 0.382684*t1924;
  p_output1[6]=0.096572*t2339 + 0.918819*t2369 - 0.382684*t2408;
  p_output1[7]=0.;
  p_output1[8]=-0.994522*t1303 + 0.104528*t1367;
  p_output1[9]=-0.994522*t1848 + 0.104528*t1873;
  p_output1[10]=-0.994522*t2339 + 0.104528*t2369;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.272168*t1303 + 0.167144*t1367 + 0.190987*t1438 + t1147*t3112 + t1295*t3170 + t2680*t289*t318 + t2739*t469 + t2766*t499 + t2809*t539 + t2825*t575 + t2918*t594 + t2962*t785 + t3067*t950 + t3078*t996 + var1[0];
  p_output1[13]=0. - 0.272168*t1848 + 0.167144*t1873 + 0.190987*t1924 + t1498*t2739 + t1527*t2766 + t1538*t2809 + t1591*t2825 + t1609*t2918 + t1653*t2962 + t1709*t3067 + t1732*t3078 + t1768*t3112 + t1838*t3170 + t2680*t318*t438 + var1[1];
  p_output1[14]=0. - 0.272168*t2339 + 0.167144*t2369 + 0.190987*t2408 + t1978*t2809 + t2009*t2825 + t2030*t2918 + t2070*t2962 + t2142*t3067 + t2155*t3078 + t2245*t3112 + t2322*t3170 + t2739*t318*t423 - 1.*t2680*t428 + t2766*t318*t455 + var1[2];
  p_output1[15]=1.;
}



void T_elbow_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
