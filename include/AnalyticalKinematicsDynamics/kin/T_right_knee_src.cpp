/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:10:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_right_knee_src.h"

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
  double t128;
  double t256;
  double t266;
  double t263;
  double t268;
  double t236;
  double t238;
  double t242;
  double t287;
  double t264;
  double t273;
  double t278;
  double t253;
  double t289;
  double t312;
  double t315;
  double t64;
  double t138;
  double t152;
  double t284;
  double t326;
  double t327;
  double t392;
  double t417;
  double t425;
  double t633;
  double t649;
  double t652;
  double t158;
  double t188;
  double t213;
  double t335;
  double t378;
  double t384;
  double t459;
  double t460;
  double t488;
  double t566;
  double t592;
  double t594;
  double t600;
  double t602;
  double t606;
  double t611;
  double t732;
  double t743;
  double t764;
  double t767;
  double t801;
  double t812;
  double t814;
  double t825;
  double t826;
  double t835;
  double t857;
  double t860;
  double t864;
  double t25;
  double t82;
  double t108;
  double t462;
  double t486;
  double t487;
  double t620;
  double t663;
  double t677;
  double t837;
  double t838;
  double t866;
  double t868;
  double t871;
  double t878;
  double t892;
  double t894;
  double t902;
  double t903;
  double t960;
  double t966;
  double t970;
  double t975;
  double t992;
  double t1032;
  double t1035;
  double t1037;
  double t51;
  double t63;
  double t1254;
  double t1260;
  double t1266;
  double t1286;
  double t1294;
  double t1302;
  double t1268;
  double t1306;
  double t1319;
  double t1325;
  double t1329;
  double t1332;
  double t1246;
  double t1321;
  double t1339;
  double t1358;
  double t1399;
  double t1406;
  double t1420;
  double t1425;
  double t1452;
  double t1470;
  double t1479;
  double t1490;
  double t952;
  double t954;
  double t1080;
  double t1084;
  double t1393;
  double t1429;
  double t1497;
  double t1510;
  double t1108;
  double t1109;
  double t1541;
  double t1549;
  double t1558;
  double t1565;
  double t1580;
  double t1581;
  double t1585;
  double t1596;
  double t1162;
  double t1170;
  double t1180;
  double t1183;
  double t1191;
  double t1202;
  double t1811;
  double t1817;
  double t1822;
  double t1858;
  double t1873;
  double t1885;
  double t1774;
  double t1847;
  double t1889;
  double t1909;
  double t1916;
  double t1922;
  double t1923;
  double t1933;
  double t1983;
  double t2001;
  double t2006;
  double t2008;
  double t1913;
  double t1982;
  double t2013;
  double t2017;
  double t2020;
  double t2022;
  double t2038;
  double t2041;
  double t2062;
  double t2069;
  double t2078;
  double t2094;
  double t854;
  double t932;
  double t1066;
  double t1067;
  double t1096;
  double t1126;
  double t1134;
  double t1137;
  double t1172;
  double t1186;
  double t1209;
  double t1212;
  double t1219;
  double t1527;
  double t1578;
  double t1600;
  double t1612;
  double t1622;
  double t1646;
  double t1663;
  double t1670;
  double t1705;
  double t1720;
  double t1741;
  double t1756;
  double t1770;
  double t2018;
  double t2046;
  double t2096;
  double t2118;
  double t2126;
  double t2133;
  double t2168;
  double t2171;
  double t2193;
  double t2195;
  double t2198;
  double t2209;
  double t2220;
  double t2429;
  double t2431;
  double t2433;
  double t2437;
  double t2470;
  double t2472;
  double t2482;
  double t2485;
  double t2494;
  double t2500;
  double t2505;
  double t2518;
  double t2524;
  double t2528;
  double t2558;
  double t2559;
  double t2560;
  double t2572;
  double t2592;
  double t2601;
  double t2605;
  double t2606;
  double t2613;
  double t2614;
  double t2618;
  double t2622;
  double t2643;
  double t2662;
  double t2676;
  double t2688;
  double t2711;
  double t2735;
  double t2740;
  double t2741;
  double t2750;
  double t2755;
  double t2758;
  double t2773;
  double t2792;
  double t2795;
  double t2816;
  double t2820;
  t128 = Cos(var1[3]);
  t256 = Cos(var1[5]);
  t266 = Sin(var1[3]);
  t263 = Sin(var1[4]);
  t268 = Sin(var1[5]);
  t236 = Cos(var1[18]);
  t238 = -1.*t236;
  t242 = 1. + t238;
  t287 = Cos(var1[17]);
  t264 = t128*t256*t263;
  t273 = t266*t268;
  t278 = t264 + t273;
  t253 = Sin(var1[17]);
  t289 = -1.*t256*t266;
  t312 = t128*t263*t268;
  t315 = t289 + t312;
  t64 = Sin(var1[19]);
  t138 = Cos(var1[4]);
  t152 = Sin(var1[18]);
  t284 = -1.*t253*t278;
  t326 = t287*t315;
  t327 = t284 + t326;
  t392 = t287*t278;
  t417 = t253*t315;
  t425 = t392 + t417;
  t633 = Cos(var1[19]);
  t649 = -1.*t633;
  t652 = 1. + t649;
  t158 = -0.366501*t152;
  t188 = 0. + t158;
  t213 = t128*t138*t188;
  t335 = 0.340999127418*t242*t327;
  t378 = -0.134322983001*t242;
  t384 = 1. + t378;
  t459 = t384*t425;
  t460 = t213 + t335 + t459;
  t488 = 0.930418*t152;
  t566 = 0. + t488;
  t592 = t128*t138*t566;
  t594 = -0.8656776547239999*t242;
  t600 = 1. + t594;
  t602 = t600*t327;
  t606 = 0.340999127418*t242*t425;
  t611 = t592 + t602 + t606;
  t732 = -1.000000637725*t242;
  t743 = 1. + t732;
  t764 = t743*t128*t138;
  t767 = -0.930418*t152;
  t801 = 0. + t767;
  t812 = t801*t327;
  t814 = 0.366501*t152;
  t825 = 0. + t814;
  t826 = t825*t425;
  t835 = t764 + t812 + t826;
  t857 = Cos(var1[20]);
  t860 = -1.*t857;
  t864 = 1. + t860;
  t25 = Sin(var1[20]);
  t82 = 0.930418*t64;
  t108 = 0. + t82;
  t462 = t108*t460;
  t486 = 0.366501*t64;
  t487 = 0. + t486;
  t620 = t487*t611;
  t663 = -1.000000637725*t652;
  t677 = 1. + t663;
  t837 = t677*t835;
  t838 = t462 + t620 + t837;
  t866 = -0.8656776547239999*t652;
  t868 = 1. + t866;
  t871 = t868*t460;
  t878 = -0.340999127418*t652*t611;
  t892 = -0.930418*t64;
  t894 = 0. + t892;
  t902 = t894*t835;
  t903 = t871 + t878 + t902;
  t960 = -0.340999127418*t652*t460;
  t966 = -0.134322983001*t652;
  t970 = 1. + t966;
  t975 = t970*t611;
  t992 = -0.366501*t64;
  t1032 = 0. + t992;
  t1035 = t1032*t835;
  t1037 = t960 + t975 + t1035;
  t51 = 0.366501*t25;
  t63 = 0. + t51;
  t1254 = t256*t266*t263;
  t1260 = -1.*t128*t268;
  t1266 = t1254 + t1260;
  t1286 = t128*t256;
  t1294 = t266*t263*t268;
  t1302 = t1286 + t1294;
  t1268 = -1.*t253*t1266;
  t1306 = t287*t1302;
  t1319 = t1268 + t1306;
  t1325 = t287*t1266;
  t1329 = t253*t1302;
  t1332 = t1325 + t1329;
  t1246 = t138*t188*t266;
  t1321 = 0.340999127418*t242*t1319;
  t1339 = t384*t1332;
  t1358 = t1246 + t1321 + t1339;
  t1399 = t138*t566*t266;
  t1406 = t600*t1319;
  t1420 = 0.340999127418*t242*t1332;
  t1425 = t1399 + t1406 + t1420;
  t1452 = t743*t138*t266;
  t1470 = t801*t1319;
  t1479 = t825*t1332;
  t1490 = t1452 + t1470 + t1479;
  t952 = -0.134322983001*t864;
  t954 = 1. + t952;
  t1080 = 0.930418*t25;
  t1084 = 0. + t1080;
  t1393 = t108*t1358;
  t1429 = t487*t1425;
  t1497 = t677*t1490;
  t1510 = t1393 + t1429 + t1497;
  t1108 = -0.8656776547239999*t864;
  t1109 = 1. + t1108;
  t1541 = t868*t1358;
  t1549 = -0.340999127418*t652*t1425;
  t1558 = t894*t1490;
  t1565 = t1541 + t1549 + t1558;
  t1580 = -0.340999127418*t652*t1358;
  t1581 = t970*t1425;
  t1585 = t1032*t1490;
  t1596 = t1580 + t1581 + t1585;
  t1162 = -1.000000637725*t864;
  t1170 = 1. + t1162;
  t1180 = -0.930418*t25;
  t1183 = 0. + t1180;
  t1191 = -0.366501*t25;
  t1202 = 0. + t1191;
  t1811 = -1.*t138*t256*t253;
  t1817 = t287*t138*t268;
  t1822 = t1811 + t1817;
  t1858 = t287*t138*t256;
  t1873 = t138*t253*t268;
  t1885 = t1858 + t1873;
  t1774 = -1.*t188*t263;
  t1847 = 0.340999127418*t242*t1822;
  t1889 = t384*t1885;
  t1909 = t1774 + t1847 + t1889;
  t1916 = -1.*t566*t263;
  t1922 = t600*t1822;
  t1923 = 0.340999127418*t242*t1885;
  t1933 = t1916 + t1922 + t1923;
  t1983 = -1.*t743*t263;
  t2001 = t801*t1822;
  t2006 = t825*t1885;
  t2008 = t1983 + t2001 + t2006;
  t1913 = t108*t1909;
  t1982 = t487*t1933;
  t2013 = t677*t2008;
  t2017 = t1913 + t1982 + t2013;
  t2020 = t868*t1909;
  t2022 = -0.340999127418*t652*t1933;
  t2038 = t894*t2008;
  t2041 = t2020 + t2022 + t2038;
  t2062 = -0.340999127418*t652*t1909;
  t2069 = t970*t1933;
  t2078 = t1032*t2008;
  t2094 = t2062 + t2069 + t2078;
  t854 = t63*t838;
  t932 = -0.340999127418*t864*t903;
  t1066 = t954*t1037;
  t1067 = t854 + t932 + t1066;
  t1096 = t1084*t838;
  t1126 = t1109*t903;
  t1134 = -0.340999127418*t864*t1037;
  t1137 = t1096 + t1126 + t1134;
  t1172 = t1170*t838;
  t1186 = t1183*t903;
  t1209 = t1202*t1037;
  t1212 = t1172 + t1186 + t1209;
  t1219 = -0.707107*t1212;
  t1527 = t63*t1510;
  t1578 = -0.340999127418*t864*t1565;
  t1600 = t954*t1596;
  t1612 = t1527 + t1578 + t1600;
  t1622 = t1084*t1510;
  t1646 = t1109*t1565;
  t1663 = -0.340999127418*t864*t1596;
  t1670 = t1622 + t1646 + t1663;
  t1705 = t1170*t1510;
  t1720 = t1183*t1565;
  t1741 = t1202*t1596;
  t1756 = t1705 + t1720 + t1741;
  t1770 = -0.707107*t1756;
  t2018 = t63*t2017;
  t2046 = -0.340999127418*t864*t2041;
  t2096 = t954*t2094;
  t2118 = t2018 + t2046 + t2096;
  t2126 = t1084*t2017;
  t2133 = t1109*t2041;
  t2168 = -0.340999127418*t864*t2094;
  t2171 = t2126 + t2133 + t2168;
  t2193 = t1170*t2017;
  t2195 = t1183*t2041;
  t2198 = t1202*t2094;
  t2209 = t2193 + t2195 + t2198;
  t2220 = -0.707107*t2209;
  t2429 = -0.04500040093286238*t242;
  t2431 = -0.07877663122399998*t801;
  t2433 = 0.031030906668*t825;
  t2437 = 0. + t2429 + t2431 + t2433;
  t2470 = -0.091*t253;
  t2472 = 0. + t2470;
  t2482 = -1.*t287;
  t2485 = 1. + t2482;
  t2494 = -0.091*t2485;
  t2500 = 0. + t2494;
  t2505 = 1.296332362046933e-7*var1[18];
  t2518 = -0.07877668146182712*t242;
  t2524 = -0.045000372235*t566;
  t2528 = t2505 + t2518 + t2524;
  t2558 = 3.2909349868922137e-7*var1[18];
  t2559 = 0.03103092645718495*t242;
  t2560 = -0.045000372235*t188;
  t2572 = t2558 + t2559 + t2560;
  t2592 = -1.296332362046933e-7*var1[19];
  t2601 = -0.14128592423750855*t652;
  t2605 = -0.045000372235*t894;
  t2606 = t2592 + t2601 + t2605;
  t2613 = 3.2909349868922137e-7*var1[19];
  t2614 = -0.055653945343889656*t652;
  t2618 = -0.045000372235*t1032;
  t2622 = t2613 + t2614 + t2618;
  t2643 = -0.04500040093286238*t652;
  t2662 = -0.055653909852*t487;
  t2676 = -0.141285834136*t108;
  t2688 = 0. + t2643 + t2662 + t2676;
  t2711 = 0.039853038461262744*t864;
  t2735 = -0.22023459268999998*t1183;
  t2740 = -0.086752619205*t1202;
  t2741 = 0. + t2711 + t2735 + t2740;
  t2750 = 6.295460977284962e-8*var1[20];
  t2755 = -0.22023473313910558*t864;
  t2758 = 0.039853013046*t1084;
  t2773 = t2750 + t2755 + t2758;
  t2792 = -1.5981976069815686e-7*var1[20];
  t2795 = -0.08675267452931407*t864;
  t2816 = 0.039853013046*t63;
  t2820 = t2792 + t2795 + t2816;
  p_output1[0]=-0.259155*t1067 - 0.657905*t1137 + t1219;
  p_output1[1]=-0.259155*t1612 - 0.657905*t1670 + t1770;
  p_output1[2]=-0.259155*t2118 - 0.657905*t2171 + t2220;
  p_output1[3]=0.;
  p_output1[4]=0.259155*t1067 + 0.657905*t1137 + t1219;
  p_output1[5]=0.259155*t1612 + 0.657905*t1670 + t1770;
  p_output1[6]=0.259155*t2118 + 0.657905*t2171 + t2220;
  p_output1[7]=0.;
  p_output1[8]=0.930418*t1067 - 0.366501*t1137;
  p_output1[9]=0.930418*t1612 - 0.366501*t1670;
  p_output1[10]=0.930418*t2118 - 0.366501*t2171;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.197083*t1067 - 0.274521*t1137 - 0.010507*t1212 + t128*t138*t2437 + t2472*t278 + t1037*t2820 + t2500*t315 + t2528*t327 + t2572*t425 + t2606*t460 + t2622*t611 + t2688*t835 + t2741*t838 + t2773*t903 + var1[0];
  p_output1[13]=0. - 0.197083*t1612 - 0.274521*t1670 - 0.010507*t1756 + t1266*t2472 + t1302*t2500 + t1319*t2528 + t1332*t2572 + t1358*t2606 + t1425*t2622 + t138*t2437*t266 + t1490*t2688 + t1510*t2741 + t1565*t2773 + t1596*t2820 + var1[1];
  p_output1[14]=0. - 0.197083*t2118 - 0.274521*t2171 - 0.010507*t2209 + t1822*t2528 + t138*t2472*t256 + t1885*t2572 + t1909*t2606 + t1933*t2622 - 1.*t2437*t263 + t138*t2500*t268 + t2008*t2688 + t2017*t2741 + t2041*t2773 + t2094*t2820 + var1[2];
  p_output1[15]=1.;
}



void T_right_knee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
