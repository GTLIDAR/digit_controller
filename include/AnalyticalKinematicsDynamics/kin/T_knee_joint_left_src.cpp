/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_knee_joint_left_src.h"

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
  double t373;
  double t334;
  double t377;
  double t343;
  double t382;
  double t274;
  double t305;
  double t326;
  double t328;
  double t417;
  double t431;
  double t433;
  double t372;
  double t383;
  double t398;
  double t434;
  double t256;
  double t259;
  double t263;
  double t400;
  double t443;
  double t459;
  double t486;
  double t493;
  double t498;
  double t502;
  double t505;
  double t638;
  double t644;
  double t650;
  double t662;
  double t663;
  double t674;
  double t677;
  double t688;
  double t702;
  double t706;
  double t465;
  double t479;
  double t485;
  double t499;
  double t507;
  double t517;
  double t520;
  double t521;
  double t746;
  double t549;
  double t550;
  double t554;
  double t561;
  double t565;
  double t577;
  double t579;
  double t582;
  double t191;
  double t251;
  double t255;
  double t526;
  double t533;
  double t547;
  double t634;
  double t755;
  double t773;
  double t774;
  double t804;
  double t812;
  double t878;
  double t884;
  double t889;
  double t894;
  double t897;
  double t899;
  double t918;
  double t936;
  double t941;
  double t948;
  double t995;
  double t1011;
  double t1022;
  double t1031;
  double t1044;
  double t1045;
  double t1049;
  double t1054;
  double t1241;
  double t1250;
  double t1293;
  double t1201;
  double t1208;
  double t1211;
  double t1238;
  double t1298;
  double t1346;
  double t1352;
  double t1355;
  double t1358;
  double t819;
  double t849;
  double t1609;
  double t1621;
  double t1623;
  double t1661;
  double t1347;
  double t1397;
  double t1430;
  double t1451;
  double t1468;
  double t1493;
  double t1562;
  double t1563;
  double t969;
  double t982;
  double t1081;
  double t1082;
  double t1461;
  double t1608;
  double t1664;
  double t1675;
  double t1102;
  double t1107;
  double t1687;
  double t1694;
  double t1750;
  double t1757;
  double t1798;
  double t1818;
  double t1839;
  double t1842;
  double t1115;
  double t1127;
  double t1133;
  double t1137;
  double t1176;
  double t1186;
  double t1954;
  double t1959;
  double t1978;
  double t1996;
  double t2006;
  double t2009;
  double t2090;
  double t2157;
  double t2184;
  double t2195;
  double t1983;
  double t2010;
  double t2014;
  double t2025;
  double t2049;
  double t2052;
  double t2068;
  double t2076;
  double t2033;
  double t2081;
  double t2199;
  double t2216;
  double t2232;
  double t2242;
  double t2261;
  double t2273;
  double t2313;
  double t2324;
  double t2332;
  double t2342;
  double t805;
  double t952;
  double t1067;
  double t1068;
  double t1071;
  double t1100;
  double t1108;
  double t1109;
  double t1111;
  double t1113;
  double t1131;
  double t1170;
  double t1190;
  double t1196;
  double t1683;
  double t1759;
  double t1845;
  double t1852;
  double t1856;
  double t1867;
  double t1869;
  double t1888;
  double t1890;
  double t1894;
  double t1895;
  double t1917;
  double t1922;
  double t1931;
  double t2220;
  double t2289;
  double t2345;
  double t2356;
  double t2364;
  double t2365;
  double t2376;
  double t2396;
  double t2416;
  double t2420;
  double t2426;
  double t2427;
  double t2454;
  double t2479;
  double t2732;
  double t2742;
  double t2762;
  double t2771;
  double t2775;
  double t2780;
  double t2783;
  double t2822;
  double t2871;
  double t2893;
  double t2905;
  double t2915;
  double t2920;
  double t2921;
  double t2927;
  double t2933;
  double t2937;
  double t2939;
  double t2976;
  double t2979;
  double t2994;
  double t3011;
  double t3020;
  double t3022;
  double t3023;
  double t3025;
  double t3029;
  double t3036;
  double t3043;
  double t3050;
  double t3059;
  double t3064;
  double t3089;
  double t3096;
  double t3105;
  double t3106;
  double t3113;
  double t3114;
  double t3141;
  double t3142;
  double t3148;
  double t3165;
  t373 = Cos(var1[3]);
  t334 = Cos(var1[5]);
  t377 = Sin(var1[4]);
  t343 = Sin(var1[3]);
  t382 = Sin(var1[5]);
  t274 = Cos(var1[7]);
  t305 = -1.*t274;
  t326 = 1. + t305;
  t328 = Cos(var1[6]);
  t417 = t373*t334*t377;
  t431 = t343*t382;
  t433 = t417 + t431;
  t372 = -1.*t334*t343;
  t383 = t373*t377*t382;
  t398 = t372 + t383;
  t434 = Sin(var1[6]);
  t256 = Cos(var1[8]);
  t259 = -1.*t256;
  t263 = 1. + t259;
  t400 = t328*t398;
  t443 = -1.*t433*t434;
  t459 = t400 + t443;
  t486 = t328*t433;
  t493 = t398*t434;
  t498 = t486 + t493;
  t502 = Cos(var1[4]);
  t505 = Sin(var1[7]);
  t638 = -1.000000637725*t326;
  t644 = 1. + t638;
  t650 = t373*t502*t644;
  t662 = -0.930418*t505;
  t663 = 0. + t662;
  t674 = t459*t663;
  t677 = -0.366501*t505;
  t688 = 0. + t677;
  t702 = t498*t688;
  t706 = t650 + t674 + t702;
  t465 = -0.340999127418*t326*t459;
  t479 = -0.134322983001*t326;
  t485 = 1. + t479;
  t499 = t485*t498;
  t507 = 0.366501*t505;
  t517 = 0. + t507;
  t520 = t373*t502*t517;
  t521 = t465 + t499 + t520;
  t746 = Sin(var1[8]);
  t549 = -0.8656776547239999*t326;
  t550 = 1. + t549;
  t554 = t550*t459;
  t561 = -0.340999127418*t326*t498;
  t565 = 0.930418*t505;
  t577 = 0. + t565;
  t579 = t373*t502*t577;
  t582 = t554 + t561 + t579;
  t191 = Cos(var1[9]);
  t251 = -1.*t191;
  t255 = 1. + t251;
  t526 = 0.340999127418*t263*t521;
  t533 = -0.134322983001*t263;
  t547 = 1. + t533;
  t634 = t547*t582;
  t755 = -0.366501*t746;
  t773 = 0. + t755;
  t774 = t706*t773;
  t804 = t526 + t634 + t774;
  t812 = Sin(var1[9]);
  t878 = -1.000000637725*t263;
  t884 = 1. + t878;
  t889 = t884*t706;
  t894 = -0.930418*t746;
  t897 = 0. + t894;
  t899 = t521*t897;
  t918 = 0.366501*t746;
  t936 = 0. + t918;
  t941 = t582*t936;
  t948 = t889 + t899 + t941;
  t995 = -0.8656776547239999*t263;
  t1011 = 1. + t995;
  t1022 = t1011*t521;
  t1031 = 0.340999127418*t263*t582;
  t1044 = 0.930418*t746;
  t1045 = 0. + t1044;
  t1049 = t706*t1045;
  t1054 = t1022 + t1031 + t1049;
  t1241 = t334*t343*t377;
  t1250 = -1.*t373*t382;
  t1293 = t1241 + t1250;
  t1201 = t373*t334;
  t1208 = t343*t377*t382;
  t1211 = t1201 + t1208;
  t1238 = t328*t1211;
  t1298 = -1.*t1293*t434;
  t1346 = t1238 + t1298;
  t1352 = t328*t1293;
  t1355 = t1211*t434;
  t1358 = t1352 + t1355;
  t819 = -0.930418*t812;
  t849 = 0. + t819;
  t1609 = t502*t644*t343;
  t1621 = t1346*t663;
  t1623 = t1358*t688;
  t1661 = t1609 + t1621 + t1623;
  t1347 = -0.340999127418*t326*t1346;
  t1397 = t485*t1358;
  t1430 = t502*t343*t517;
  t1451 = t1347 + t1397 + t1430;
  t1468 = t550*t1346;
  t1493 = -0.340999127418*t326*t1358;
  t1562 = t502*t343*t577;
  t1563 = t1468 + t1493 + t1562;
  t969 = -0.8656776547239999*t255;
  t982 = 1. + t969;
  t1081 = -0.134322983001*t255;
  t1082 = 1. + t1081;
  t1461 = 0.340999127418*t263*t1451;
  t1608 = t547*t1563;
  t1664 = t1661*t773;
  t1675 = t1461 + t1608 + t1664;
  t1102 = 0.366501*t812;
  t1107 = 0. + t1102;
  t1687 = t884*t1661;
  t1694 = t1451*t897;
  t1750 = t1563*t936;
  t1757 = t1687 + t1694 + t1750;
  t1798 = t1011*t1451;
  t1818 = 0.340999127418*t263*t1563;
  t1839 = t1661*t1045;
  t1842 = t1798 + t1818 + t1839;
  t1115 = -0.366501*t812;
  t1127 = 0. + t1115;
  t1133 = -1.000000637725*t255;
  t1137 = 1. + t1133;
  t1176 = 0.930418*t812;
  t1186 = 0. + t1176;
  t1954 = t502*t328*t382;
  t1959 = -1.*t502*t334*t434;
  t1978 = t1954 + t1959;
  t1996 = t502*t334*t328;
  t2006 = t502*t382*t434;
  t2009 = t1996 + t2006;
  t2090 = -1.*t644*t377;
  t2157 = t1978*t663;
  t2184 = t2009*t688;
  t2195 = t2090 + t2157 + t2184;
  t1983 = -0.340999127418*t326*t1978;
  t2010 = t485*t2009;
  t2014 = -1.*t377*t517;
  t2025 = t1983 + t2010 + t2014;
  t2049 = t550*t1978;
  t2052 = -0.340999127418*t326*t2009;
  t2068 = -1.*t377*t577;
  t2076 = t2049 + t2052 + t2068;
  t2033 = 0.340999127418*t263*t2025;
  t2081 = t547*t2076;
  t2199 = t2195*t773;
  t2216 = t2033 + t2081 + t2199;
  t2232 = t884*t2195;
  t2242 = t2025*t897;
  t2261 = t2076*t936;
  t2273 = t2232 + t2242 + t2261;
  t2313 = t1011*t2025;
  t2324 = 0.340999127418*t263*t2076;
  t2332 = t2195*t1045;
  t2342 = t2313 + t2324 + t2332;
  t805 = 0.340999127418*t255*t804;
  t952 = t849*t948;
  t1067 = t982*t1054;
  t1068 = t805 + t952 + t1067;
  t1071 = -0.657905*t1068;
  t1100 = t1082*t804;
  t1108 = t1107*t948;
  t1109 = 0.340999127418*t255*t1054;
  t1111 = t1100 + t1108 + t1109;
  t1113 = 0.259155*t1111;
  t1131 = t1127*t804;
  t1170 = t1137*t948;
  t1190 = t1186*t1054;
  t1196 = t1131 + t1170 + t1190;
  t1683 = 0.340999127418*t255*t1675;
  t1759 = t849*t1757;
  t1845 = t982*t1842;
  t1852 = t1683 + t1759 + t1845;
  t1856 = -0.657905*t1852;
  t1867 = t1082*t1675;
  t1869 = t1107*t1757;
  t1888 = 0.340999127418*t255*t1842;
  t1890 = t1867 + t1869 + t1888;
  t1894 = 0.259155*t1890;
  t1895 = t1127*t1675;
  t1917 = t1137*t1757;
  t1922 = t1186*t1842;
  t1931 = t1895 + t1917 + t1922;
  t2220 = 0.340999127418*t255*t2216;
  t2289 = t849*t2273;
  t2345 = t982*t2342;
  t2356 = t2220 + t2289 + t2345;
  t2364 = -0.657905*t2356;
  t2365 = t1082*t2216;
  t2376 = t1107*t2273;
  t2396 = 0.340999127418*t255*t2342;
  t2416 = t2365 + t2376 + t2396;
  t2420 = 0.259155*t2416;
  t2426 = t1127*t2216;
  t2427 = t1137*t2273;
  t2454 = t1186*t2342;
  t2479 = t2426 + t2427 + t2454;
  t2732 = -1.*t328;
  t2742 = 1. + t2732;
  t2762 = 0.091*t2742;
  t2771 = 0. + t2762;
  t2775 = 0.091*t434;
  t2780 = 0. + t2775;
  t2783 = -0.04500040093286238*t326;
  t2822 = 0.07877663122399998*t663;
  t2871 = 0.031030906668*t688;
  t2893 = 0. + t2783 + t2822 + t2871;
  t2905 = -3.2909349868922137e-7*var1[7];
  t2915 = 0.03103092645718495*t326;
  t2920 = -0.045000372235*t517;
  t2921 = t2905 + t2915 + t2920;
  t2927 = 1.296332362046933e-7*var1[7];
  t2933 = 0.07877668146182712*t326;
  t2937 = -0.045000372235*t577;
  t2939 = t2927 + t2933 + t2937;
  t2976 = 3.2909349868922137e-7*var1[8];
  t2979 = 0.055653945343889656*t263;
  t2994 = -0.045000372235*t773;
  t3011 = t2976 + t2979 + t2994;
  t3020 = -1.5981976069815686e-7*var1[9];
  t3022 = 0.08675267452931407*t255;
  t3023 = 0.039853013046*t1107;
  t3025 = t3020 + t3022 + t3023;
  t3029 = -0.04500040093286238*t263;
  t3036 = -0.141285834136*t897;
  t3043 = 0.055653909852*t936;
  t3050 = 0. + t3029 + t3036 + t3043;
  t3059 = 0.039853038461262744*t255;
  t3064 = 0.086752619205*t1127;
  t3089 = -0.22023459268999998*t1186;
  t3096 = 0. + t3059 + t3064 + t3089;
  t3105 = 1.296332362046933e-7*var1[8];
  t3106 = -0.14128592423750855*t263;
  t3113 = -0.045000372235*t1045;
  t3114 = t3105 + t3106 + t3113;
  t3141 = -6.295460977284962e-8*var1[9];
  t3142 = -0.22023473313910558*t255;
  t3148 = 0.039853013046*t849;
  t3165 = t3141 + t3142 + t3148;
  p_output1[0]=t1071 + t1113 - 0.707107*t1196;
  p_output1[1]=t1856 + t1894 - 0.707107*t1931;
  p_output1[2]=t2364 + t2420 - 0.707107*t2479;
  p_output1[3]=0.;
  p_output1[4]=t1071 + t1113 + 0.707107*t1196;
  p_output1[5]=t1856 + t1894 + 0.707107*t1931;
  p_output1[6]=t2364 + t2420 + 0.707107*t2479;
  p_output1[7]=0.;
  p_output1[8]=-0.366501*t1068 - 0.930418*t1111;
  p_output1[9]=-0.366501*t1852 - 0.930418*t1890;
  p_output1[10]=-0.366501*t2356 - 0.930418*t2416;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.189386*t1068 + 0.165064*t1111 + 0.039853*t1196 + t1054*t3165 + t2771*t398 + t2780*t433 + t2939*t459 + t2921*t498 + t2893*t373*t502 + t3114*t521 + t3011*t582 + t3050*t706 + t3025*t804 + t3096*t948 + var1[0];
  p_output1[13]=0. - 0.189386*t1852 + 0.165064*t1890 + 0.039853*t1931 + t1211*t2771 + t1293*t2780 + t1358*t2921 + t1346*t2939 + t1563*t3011 + t1675*t3025 + t1661*t3050 + t1757*t3096 + t1451*t3114 + t1842*t3165 + t2893*t343*t502 + var1[1];
  p_output1[14]=0. - 0.189386*t2356 + 0.165064*t2416 + 0.039853*t2479 + t2009*t2921 + t1978*t2939 + t2076*t3011 + t2216*t3025 + t2195*t3050 + t2273*t3096 + t2025*t3114 + t2342*t3165 - 1.*t2893*t377 + t2780*t334*t502 + t2771*t382*t502 + var1[2];
  p_output1[15]=1.;
}



void T_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
