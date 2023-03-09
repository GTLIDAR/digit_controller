/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:45:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_knee_joint_right_src.h"

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
  double t51;
  double t238;
  double t261;
  double t257;
  double t266;
  double t217;
  double t226;
  double t229;
  double t305;
  double t258;
  double t277;
  double t281;
  double t234;
  double t309;
  double t321;
  double t351;
  double t33;
  double t73;
  double t90;
  double t283;
  double t357;
  double t358;
  double t404;
  double t410;
  double t419;
  double t551;
  double t552;
  double t559;
  double t93;
  double t159;
  double t196;
  double t360;
  double t397;
  double t403;
  double t426;
  double t427;
  double t455;
  double t473;
  double t478;
  double t499;
  double t506;
  double t516;
  double t523;
  double t527;
  double t616;
  double t623;
  double t633;
  double t640;
  double t643;
  double t659;
  double t666;
  double t672;
  double t673;
  double t691;
  double t737;
  double t753;
  double t763;
  double t6;
  double t34;
  double t40;
  double t436;
  double t441;
  double t446;
  double t535;
  double t564;
  double t604;
  double t712;
  double t734;
  double t779;
  double t794;
  double t795;
  double t805;
  double t828;
  double t829;
  double t831;
  double t837;
  double t923;
  double t930;
  double t939;
  double t951;
  double t954;
  double t971;
  double t979;
  double t989;
  double t7;
  double t20;
  double t1200;
  double t1207;
  double t1217;
  double t1250;
  double t1255;
  double t1282;
  double t1238;
  double t1284;
  double t1296;
  double t1325;
  double t1328;
  double t1331;
  double t1197;
  double t1318;
  double t1335;
  double t1340;
  double t1379;
  double t1380;
  double t1384;
  double t1389;
  double t1396;
  double t1464;
  double t1500;
  double t1514;
  double t861;
  double t922;
  double t1009;
  double t1025;
  double t1352;
  double t1395;
  double t1520;
  double t1525;
  double t1036;
  double t1039;
  double t1529;
  double t1550;
  double t1561;
  double t1568;
  double t1582;
  double t1593;
  double t1615;
  double t1618;
  double t1090;
  double t1104;
  double t1111;
  double t1115;
  double t1147;
  double t1152;
  double t1802;
  double t1807;
  double t1810;
  double t1825;
  double t1831;
  double t1843;
  double t1792;
  double t1820;
  double t1870;
  double t1871;
  double t1882;
  double t1890;
  double t1908;
  double t1918;
  double t1933;
  double t1938;
  double t1939;
  double t1960;
  double t1873;
  double t1923;
  double t1961;
  double t1972;
  double t1994;
  double t1996;
  double t2007;
  double t2009;
  double t2014;
  double t2026;
  double t2064;
  double t2077;
  double t736;
  double t845;
  double t994;
  double t996;
  double t1032;
  double t1044;
  double t1049;
  double t1057;
  double t1108;
  double t1138;
  double t1157;
  double t1178;
  double t1189;
  double t1527;
  double t1574;
  double t1627;
  double t1646;
  double t1663;
  double t1675;
  double t1676;
  double t1714;
  double t1716;
  double t1721;
  double t1725;
  double t1728;
  double t1757;
  double t1981;
  double t2013;
  double t2098;
  double t2111;
  double t2123;
  double t2127;
  double t2130;
  double t2136;
  double t2142;
  double t2159;
  double t2185;
  double t2193;
  double t2195;
  double t2357;
  double t2359;
  double t2360;
  double t2364;
  double t2378;
  double t2399;
  double t2443;
  double t2446;
  double t2458;
  double t2461;
  double t2469;
  double t2471;
  double t2475;
  double t2479;
  double t2483;
  double t2491;
  double t2494;
  double t2499;
  double t2509;
  double t2520;
  double t2529;
  double t2543;
  double t2556;
  double t2557;
  double t2559;
  double t2560;
  double t2571;
  double t2579;
  double t2580;
  double t2585;
  double t2599;
  double t2603;
  double t2607;
  double t2614;
  double t2640;
  double t2645;
  double t2649;
  double t2652;
  double t2687;
  double t2691;
  double t2698;
  double t2719;
  t51 = Cos(var1[3]);
  t238 = Cos(var1[5]);
  t261 = Sin(var1[3]);
  t257 = Sin(var1[4]);
  t266 = Sin(var1[5]);
  t217 = Cos(var1[18]);
  t226 = -1.*t217;
  t229 = 1. + t226;
  t305 = Cos(var1[17]);
  t258 = t51*t238*t257;
  t277 = t261*t266;
  t281 = t258 + t277;
  t234 = Sin(var1[17]);
  t309 = -1.*t238*t261;
  t321 = t51*t257*t266;
  t351 = t309 + t321;
  t33 = Sin(var1[19]);
  t73 = Cos(var1[4]);
  t90 = Sin(var1[18]);
  t283 = -1.*t234*t281;
  t357 = t305*t351;
  t358 = t283 + t357;
  t404 = t305*t281;
  t410 = t234*t351;
  t419 = t404 + t410;
  t551 = Cos(var1[19]);
  t552 = -1.*t551;
  t559 = 1. + t552;
  t93 = -0.366501*t90;
  t159 = 0. + t93;
  t196 = t51*t73*t159;
  t360 = 0.340999127418*t229*t358;
  t397 = -0.134322983001*t229;
  t403 = 1. + t397;
  t426 = t403*t419;
  t427 = t196 + t360 + t426;
  t455 = 0.930418*t90;
  t473 = 0. + t455;
  t478 = t51*t73*t473;
  t499 = -0.8656776547239999*t229;
  t506 = 1. + t499;
  t516 = t506*t358;
  t523 = 0.340999127418*t229*t419;
  t527 = t478 + t516 + t523;
  t616 = -1.000000637725*t229;
  t623 = 1. + t616;
  t633 = t623*t51*t73;
  t640 = -0.930418*t90;
  t643 = 0. + t640;
  t659 = t643*t358;
  t666 = 0.366501*t90;
  t672 = 0. + t666;
  t673 = t672*t419;
  t691 = t633 + t659 + t673;
  t737 = Cos(var1[20]);
  t753 = -1.*t737;
  t763 = 1. + t753;
  t6 = Sin(var1[20]);
  t34 = 0.930418*t33;
  t40 = 0. + t34;
  t436 = t40*t427;
  t441 = 0.366501*t33;
  t446 = 0. + t441;
  t535 = t446*t527;
  t564 = -1.000000637725*t559;
  t604 = 1. + t564;
  t712 = t604*t691;
  t734 = t436 + t535 + t712;
  t779 = -0.8656776547239999*t559;
  t794 = 1. + t779;
  t795 = t794*t427;
  t805 = -0.340999127418*t559*t527;
  t828 = -0.930418*t33;
  t829 = 0. + t828;
  t831 = t829*t691;
  t837 = t795 + t805 + t831;
  t923 = -0.340999127418*t559*t427;
  t930 = -0.134322983001*t559;
  t939 = 1. + t930;
  t951 = t939*t527;
  t954 = -0.366501*t33;
  t971 = 0. + t954;
  t979 = t971*t691;
  t989 = t923 + t951 + t979;
  t7 = 0.366501*t6;
  t20 = 0. + t7;
  t1200 = t238*t261*t257;
  t1207 = -1.*t51*t266;
  t1217 = t1200 + t1207;
  t1250 = t51*t238;
  t1255 = t261*t257*t266;
  t1282 = t1250 + t1255;
  t1238 = -1.*t234*t1217;
  t1284 = t305*t1282;
  t1296 = t1238 + t1284;
  t1325 = t305*t1217;
  t1328 = t234*t1282;
  t1331 = t1325 + t1328;
  t1197 = t73*t159*t261;
  t1318 = 0.340999127418*t229*t1296;
  t1335 = t403*t1331;
  t1340 = t1197 + t1318 + t1335;
  t1379 = t73*t473*t261;
  t1380 = t506*t1296;
  t1384 = 0.340999127418*t229*t1331;
  t1389 = t1379 + t1380 + t1384;
  t1396 = t623*t73*t261;
  t1464 = t643*t1296;
  t1500 = t672*t1331;
  t1514 = t1396 + t1464 + t1500;
  t861 = -0.134322983001*t763;
  t922 = 1. + t861;
  t1009 = 0.930418*t6;
  t1025 = 0. + t1009;
  t1352 = t40*t1340;
  t1395 = t446*t1389;
  t1520 = t604*t1514;
  t1525 = t1352 + t1395 + t1520;
  t1036 = -0.8656776547239999*t763;
  t1039 = 1. + t1036;
  t1529 = t794*t1340;
  t1550 = -0.340999127418*t559*t1389;
  t1561 = t829*t1514;
  t1568 = t1529 + t1550 + t1561;
  t1582 = -0.340999127418*t559*t1340;
  t1593 = t939*t1389;
  t1615 = t971*t1514;
  t1618 = t1582 + t1593 + t1615;
  t1090 = -1.000000637725*t763;
  t1104 = 1. + t1090;
  t1111 = -0.930418*t6;
  t1115 = 0. + t1111;
  t1147 = -0.366501*t6;
  t1152 = 0. + t1147;
  t1802 = -1.*t73*t238*t234;
  t1807 = t305*t73*t266;
  t1810 = t1802 + t1807;
  t1825 = t305*t73*t238;
  t1831 = t73*t234*t266;
  t1843 = t1825 + t1831;
  t1792 = -1.*t159*t257;
  t1820 = 0.340999127418*t229*t1810;
  t1870 = t403*t1843;
  t1871 = t1792 + t1820 + t1870;
  t1882 = -1.*t473*t257;
  t1890 = t506*t1810;
  t1908 = 0.340999127418*t229*t1843;
  t1918 = t1882 + t1890 + t1908;
  t1933 = -1.*t623*t257;
  t1938 = t643*t1810;
  t1939 = t672*t1843;
  t1960 = t1933 + t1938 + t1939;
  t1873 = t40*t1871;
  t1923 = t446*t1918;
  t1961 = t604*t1960;
  t1972 = t1873 + t1923 + t1961;
  t1994 = t794*t1871;
  t1996 = -0.340999127418*t559*t1918;
  t2007 = t829*t1960;
  t2009 = t1994 + t1996 + t2007;
  t2014 = -0.340999127418*t559*t1871;
  t2026 = t939*t1918;
  t2064 = t971*t1960;
  t2077 = t2014 + t2026 + t2064;
  t736 = t20*t734;
  t845 = -0.340999127418*t763*t837;
  t994 = t922*t989;
  t996 = t736 + t845 + t994;
  t1032 = t1025*t734;
  t1044 = t1039*t837;
  t1049 = -0.340999127418*t763*t989;
  t1057 = t1032 + t1044 + t1049;
  t1108 = t1104*t734;
  t1138 = t1115*t837;
  t1157 = t1152*t989;
  t1178 = t1108 + t1138 + t1157;
  t1189 = -0.707107*t1178;
  t1527 = t20*t1525;
  t1574 = -0.340999127418*t763*t1568;
  t1627 = t922*t1618;
  t1646 = t1527 + t1574 + t1627;
  t1663 = t1025*t1525;
  t1675 = t1039*t1568;
  t1676 = -0.340999127418*t763*t1618;
  t1714 = t1663 + t1675 + t1676;
  t1716 = t1104*t1525;
  t1721 = t1115*t1568;
  t1725 = t1152*t1618;
  t1728 = t1716 + t1721 + t1725;
  t1757 = -0.707107*t1728;
  t1981 = t20*t1972;
  t2013 = -0.340999127418*t763*t2009;
  t2098 = t922*t2077;
  t2111 = t1981 + t2013 + t2098;
  t2123 = t1025*t1972;
  t2127 = t1039*t2009;
  t2130 = -0.340999127418*t763*t2077;
  t2136 = t2123 + t2127 + t2130;
  t2142 = t1104*t1972;
  t2159 = t1115*t2009;
  t2185 = t1152*t2077;
  t2193 = t2142 + t2159 + t2185;
  t2195 = -0.707107*t2193;
  t2357 = -0.04500040093286238*t229;
  t2359 = -0.07877663122399998*t643;
  t2360 = 0.031030906668*t672;
  t2364 = 0. + t2357 + t2359 + t2360;
  t2378 = -0.091*t234;
  t2399 = 0. + t2378;
  t2443 = -1.*t305;
  t2446 = 1. + t2443;
  t2458 = -0.091*t2446;
  t2461 = 0. + t2458;
  t2469 = 1.296332362046933e-7*var1[18];
  t2471 = -0.07877668146182712*t229;
  t2475 = -0.045000372235*t473;
  t2479 = t2469 + t2471 + t2475;
  t2483 = 3.2909349868922137e-7*var1[18];
  t2491 = 0.03103092645718495*t229;
  t2494 = -0.045000372235*t159;
  t2499 = t2483 + t2491 + t2494;
  t2509 = -1.296332362046933e-7*var1[19];
  t2520 = -0.14128592423750855*t559;
  t2529 = -0.045000372235*t829;
  t2543 = t2509 + t2520 + t2529;
  t2556 = 3.2909349868922137e-7*var1[19];
  t2557 = -0.055653945343889656*t559;
  t2559 = -0.045000372235*t971;
  t2560 = t2556 + t2557 + t2559;
  t2571 = -0.04500040093286238*t559;
  t2579 = -0.055653909852*t446;
  t2580 = -0.141285834136*t40;
  t2585 = 0. + t2571 + t2579 + t2580;
  t2599 = 0.039853038461262744*t763;
  t2603 = -0.22023459268999998*t1115;
  t2607 = -0.086752619205*t1152;
  t2614 = 0. + t2599 + t2603 + t2607;
  t2640 = 6.295460977284962e-8*var1[20];
  t2645 = -0.22023473313910558*t763;
  t2649 = 0.039853013046*t1025;
  t2652 = t2640 + t2645 + t2649;
  t2687 = -1.5981976069815686e-7*var1[20];
  t2691 = -0.08675267452931407*t763;
  t2698 = 0.039853013046*t20;
  t2719 = t2687 + t2691 + t2698;
  p_output1[0]=-0.657905*t1057 + t1189 - 0.259155*t996;
  p_output1[1]=-0.259155*t1646 - 0.657905*t1714 + t1757;
  p_output1[2]=-0.259155*t2111 - 0.657905*t2136 + t2195;
  p_output1[3]=0.;
  p_output1[4]=0.657905*t1057 + t1189 + 0.259155*t996;
  p_output1[5]=0.259155*t1646 + 0.657905*t1714 + t1757;
  p_output1[6]=0.259155*t2111 + 0.657905*t2136 + t2195;
  p_output1[7]=0.;
  p_output1[8]=-0.366501*t1057 + 0.930418*t996;
  p_output1[9]=0.930418*t1646 - 0.366501*t1714;
  p_output1[10]=0.930418*t2111 - 0.366501*t2136;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.189386*t1057 + 0.039853*t1178 + t2399*t281 + t2461*t351 + t2479*t358 + t2499*t419 + t2543*t427 + t2560*t527 + t2585*t691 + t2364*t51*t73 + t2614*t734 + t2652*t837 + t2719*t989 - 0.165064*t996 + var1[0];
  p_output1[13]=0. - 0.165064*t1646 - 0.189386*t1714 + 0.039853*t1728 + t1217*t2399 + t1282*t2461 + t1296*t2479 + t1331*t2499 + t1340*t2543 + t1389*t2560 + t1514*t2585 + t1525*t2614 + t1568*t2652 + t1618*t2719 + t2364*t261*t73 + var1[1];
  p_output1[14]=0. - 0.165064*t2111 - 0.189386*t2136 + 0.039853*t2193 + t1810*t2479 + t1843*t2499 + t1871*t2543 + t1918*t2560 - 1.*t2364*t257 + t1960*t2585 + t1972*t2614 + t2009*t2652 + t2077*t2719 + t238*t2399*t73 + t2461*t266*t73 + var1[2];
  p_output1[15]=1.;
}



void T_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
