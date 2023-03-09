/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_hip_flexion_right_src.h"

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
  double t66;
  double t354;
  double t420;
  double t382;
  double t449;
  double t214;
  double t287;
  double t294;
  double t475;
  double t397;
  double t456;
  double t469;
  double t335;
  double t482;
  double t484;
  double t507;
  double t6;
  double t70;
  double t117;
  double t473;
  double t513;
  double t531;
  double t580;
  double t676;
  double t683;
  double t851;
  double t852;
  double t866;
  double t166;
  double t191;
  double t199;
  double t544;
  double t559;
  double t562;
  double t686;
  double t688;
  double t709;
  double t710;
  double t727;
  double t737;
  double t763;
  double t766;
  double t775;
  double t784;
  double t923;
  double t932;
  double t937;
  double t967;
  double t975;
  double t1001;
  double t1027;
  double t1081;
  double t1097;
  double t1106;
  double t18;
  double t38;
  double t1365;
  double t1367;
  double t1370;
  double t1377;
  double t1383;
  double t1400;
  double t697;
  double t698;
  double t1375;
  double t1424;
  double t1430;
  double t1440;
  double t1460;
  double t1466;
  double t907;
  double t917;
  double t1135;
  double t1158;
  double t1345;
  double t1433;
  double t1469;
  double t1559;
  double t1609;
  double t1624;
  double t1629;
  double t1630;
  double t1198;
  double t1199;
  double t1654;
  double t1655;
  double t1674;
  double t1710;
  double t1237;
  double t1240;
  double t1291;
  double t1295;
  double t1908;
  double t1913;
  double t1927;
  double t1987;
  double t2006;
  double t2009;
  double t1880;
  double t1982;
  double t2010;
  double t2013;
  double t2051;
  double t2090;
  double t2091;
  double t2094;
  double t2121;
  double t2140;
  double t2166;
  double t2171;
  double t692;
  double t821;
  double t1109;
  double t1113;
  double t1168;
  double t1193;
  double t1202;
  double t1211;
  double t1217;
  double t1230;
  double t1252;
  double t1303;
  double t1304;
  double t1307;
  double t1606;
  double t1652;
  double t1742;
  double t1768;
  double t1789;
  double t1792;
  double t1807;
  double t1812;
  double t1825;
  double t1846;
  double t1847;
  double t1848;
  double t1858;
  double t1868;
  double t2016;
  double t2109;
  double t2181;
  double t2183;
  double t2272;
  double t2284;
  double t2374;
  double t2388;
  double t2406;
  double t2408;
  double t2437;
  double t2444;
  double t2465;
  double t2470;
  double t2712;
  double t2723;
  double t2741;
  double t2744;
  double t2762;
  double t2765;
  double t2771;
  double t2786;
  double t2789;
  double t2803;
  double t2821;
  double t2838;
  double t2842;
  double t2844;
  double t2862;
  double t2867;
  double t2899;
  double t2900;
  double t2937;
  double t2957;
  double t2961;
  double t2971;
  double t2984;
  double t2992;
  double t2998;
  double t3005;
  double t3027;
  double t3030;
  double t3031;
  double t3044;
  t66 = Cos(var1[3]);
  t354 = Cos(var1[5]);
  t420 = Sin(var1[3]);
  t382 = Sin(var1[4]);
  t449 = Sin(var1[5]);
  t214 = Cos(var1[18]);
  t287 = -1.*t214;
  t294 = 1. + t287;
  t475 = Cos(var1[17]);
  t397 = t66*t354*t382;
  t456 = t420*t449;
  t469 = t397 + t456;
  t335 = Sin(var1[17]);
  t482 = -1.*t354*t420;
  t484 = t66*t382*t449;
  t507 = t482 + t484;
  t6 = Sin(var1[19]);
  t70 = Cos(var1[4]);
  t117 = Sin(var1[18]);
  t473 = -1.*t335*t469;
  t513 = t475*t507;
  t531 = t473 + t513;
  t580 = t475*t469;
  t676 = t335*t507;
  t683 = t580 + t676;
  t851 = Cos(var1[19]);
  t852 = -1.*t851;
  t866 = 1. + t852;
  t166 = -0.366501*t117;
  t191 = 0. + t166;
  t199 = t66*t70*t191;
  t544 = 0.340999127418*t294*t531;
  t559 = -0.134322983001*t294;
  t562 = 1. + t559;
  t686 = t562*t683;
  t688 = t199 + t544 + t686;
  t709 = 0.930418*t117;
  t710 = 0. + t709;
  t727 = t66*t70*t710;
  t737 = -0.8656776547239999*t294;
  t763 = 1. + t737;
  t766 = t763*t531;
  t775 = 0.340999127418*t294*t683;
  t784 = t727 + t766 + t775;
  t923 = -1.000000637725*t294;
  t932 = 1. + t923;
  t937 = t932*t66*t70;
  t967 = -0.930418*t117;
  t975 = 0. + t967;
  t1001 = t975*t531;
  t1027 = 0.366501*t117;
  t1081 = 0. + t1027;
  t1097 = t1081*t683;
  t1106 = t937 + t1001 + t1097;
  t18 = 0.930418*t6;
  t38 = 0. + t18;
  t1365 = t354*t420*t382;
  t1367 = -1.*t66*t449;
  t1370 = t1365 + t1367;
  t1377 = t66*t354;
  t1383 = t420*t382*t449;
  t1400 = t1377 + t1383;
  t697 = 0.366501*t6;
  t698 = 0. + t697;
  t1375 = -1.*t335*t1370;
  t1424 = t475*t1400;
  t1430 = t1375 + t1424;
  t1440 = t475*t1370;
  t1460 = t335*t1400;
  t1466 = t1440 + t1460;
  t907 = -1.000000637725*t866;
  t917 = 1. + t907;
  t1135 = -0.8656776547239999*t866;
  t1158 = 1. + t1135;
  t1345 = t70*t191*t420;
  t1433 = 0.340999127418*t294*t1430;
  t1469 = t562*t1466;
  t1559 = t1345 + t1433 + t1469;
  t1609 = t70*t710*t420;
  t1624 = t763*t1430;
  t1629 = 0.340999127418*t294*t1466;
  t1630 = t1609 + t1624 + t1629;
  t1198 = -0.930418*t6;
  t1199 = 0. + t1198;
  t1654 = t932*t70*t420;
  t1655 = t975*t1430;
  t1674 = t1081*t1466;
  t1710 = t1654 + t1655 + t1674;
  t1237 = -0.134322983001*t866;
  t1240 = 1. + t1237;
  t1291 = -0.366501*t6;
  t1295 = 0. + t1291;
  t1908 = -1.*t70*t354*t335;
  t1913 = t475*t70*t449;
  t1927 = t1908 + t1913;
  t1987 = t475*t70*t354;
  t2006 = t70*t335*t449;
  t2009 = t1987 + t2006;
  t1880 = -1.*t191*t382;
  t1982 = 0.340999127418*t294*t1927;
  t2010 = t562*t2009;
  t2013 = t1880 + t1982 + t2010;
  t2051 = -1.*t710*t382;
  t2090 = t763*t1927;
  t2091 = 0.340999127418*t294*t2009;
  t2094 = t2051 + t2090 + t2091;
  t2121 = -1.*t932*t382;
  t2140 = t975*t1927;
  t2166 = t1081*t2009;
  t2171 = t2121 + t2140 + t2166;
  t692 = t38*t688;
  t821 = t698*t784;
  t1109 = t917*t1106;
  t1113 = t692 + t821 + t1109;
  t1168 = t1158*t688;
  t1193 = -0.340999127418*t866*t784;
  t1202 = t1199*t1106;
  t1211 = t1168 + t1193 + t1202;
  t1217 = -0.657905*t1211;
  t1230 = -0.340999127418*t866*t688;
  t1252 = t1240*t784;
  t1303 = t1295*t1106;
  t1304 = t1230 + t1252 + t1303;
  t1307 = -0.259155*t1304;
  t1606 = t38*t1559;
  t1652 = t698*t1630;
  t1742 = t917*t1710;
  t1768 = t1606 + t1652 + t1742;
  t1789 = t1158*t1559;
  t1792 = -0.340999127418*t866*t1630;
  t1807 = t1199*t1710;
  t1812 = t1789 + t1792 + t1807;
  t1825 = -0.657905*t1812;
  t1846 = -0.340999127418*t866*t1559;
  t1847 = t1240*t1630;
  t1848 = t1295*t1710;
  t1858 = t1846 + t1847 + t1848;
  t1868 = -0.259155*t1858;
  t2016 = t38*t2013;
  t2109 = t698*t2094;
  t2181 = t917*t2171;
  t2183 = t2016 + t2109 + t2181;
  t2272 = t1158*t2013;
  t2284 = -0.340999127418*t866*t2094;
  t2374 = t1199*t2171;
  t2388 = t2272 + t2284 + t2374;
  t2406 = -0.657905*t2388;
  t2408 = -0.340999127418*t866*t2013;
  t2437 = t1240*t2094;
  t2444 = t1295*t2171;
  t2465 = t2408 + t2437 + t2444;
  t2470 = -0.259155*t2465;
  t2712 = -0.04500040093286238*t294;
  t2723 = -0.07877663122399998*t975;
  t2741 = 0.031030906668*t1081;
  t2744 = 0. + t2712 + t2723 + t2741;
  t2762 = -0.091*t335;
  t2765 = 0. + t2762;
  t2771 = -1.*t475;
  t2786 = 1. + t2771;
  t2789 = -0.091*t2786;
  t2803 = 0. + t2789;
  t2821 = 1.296332362046933e-7*var1[18];
  t2838 = -0.07877668146182712*t294;
  t2842 = -0.045000372235*t710;
  t2844 = t2821 + t2838 + t2842;
  t2862 = 3.2909349868922137e-7*var1[18];
  t2867 = 0.03103092645718495*t294;
  t2899 = -0.045000372235*t191;
  t2900 = t2862 + t2867 + t2899;
  t2937 = -1.296332362046933e-7*var1[19];
  t2957 = -0.14128592423750855*t866;
  t2961 = -0.045000372235*t1199;
  t2971 = t2937 + t2957 + t2961;
  t2984 = 3.2909349868922137e-7*var1[19];
  t2992 = -0.055653945343889656*t866;
  t2998 = -0.045000372235*t1295;
  t3005 = t2984 + t2992 + t2998;
  t3027 = -0.04500040093286238*t866;
  t3030 = -0.055653909852*t698;
  t3031 = -0.141285834136*t38;
  t3044 = 0. + t3027 + t3030 + t3031;
  p_output1[0]=0.707107*t1113 + t1217 + t1307;
  p_output1[1]=0.707107*t1768 + t1825 + t1868;
  p_output1[2]=0.707107*t2183 + t2406 + t2470;
  p_output1[3]=0.;
  p_output1[4]=-0.707107*t1113 + t1217 + t1307;
  p_output1[5]=-0.707107*t1768 + t1825 + t1868;
  p_output1[6]=-0.707107*t2183 + t2406 + t2470;
  p_output1[7]=0.;
  p_output1[8]=-0.366501*t1211 + 0.930418*t1304;
  p_output1[9]=-0.366501*t1812 + 0.930418*t1858;
  p_output1[10]=-0.366501*t2388 + 0.930418*t2465;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.045*t1113 - 0.108789*t1211 - 0.138152*t1304 + t1106*t3044 + t2765*t469 + t2803*t507 + t2844*t531 + t2900*t683 + t2971*t688 + t2744*t66*t70 + t3005*t784 + var1[0];
  p_output1[13]=0. - 0.045*t1768 - 0.108789*t1812 - 0.138152*t1858 + t1370*t2765 + t1400*t2803 + t1430*t2844 + t1466*t2900 + t1559*t2971 + t1630*t3005 + t1710*t3044 + t2744*t420*t70 + var1[1];
  p_output1[14]=0. - 0.045*t2183 - 0.108789*t2388 - 0.138152*t2465 + t1927*t2844 + t2009*t2900 + t2013*t2971 + t2094*t3005 + t2171*t3044 - 1.*t2744*t382 + t2765*t354*t70 + t2803*t449*t70 + var1[2];
  p_output1[15]=1.;
}



void T_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
