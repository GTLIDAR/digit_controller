/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_left_src.h"

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
  double t959;
  double t601;
  double t1021;
  double t631;
  double t1040;
  double t2284;
  double t41;
  double t1089;
  double t1305;
  double t1306;
  double t653;
  double t1042;
  double t1054;
  double t1344;
  double t1804;
  double t1820;
  double t1837;
  double t3849;
  double t3980;
  double t4000;
  double t3155;
  double t3225;
  double t3227;
  double t1643;
  double t3576;
  double t3577;
  double t5379;
  double t5530;
  double t5535;
  double t4175;
  double t4338;
  double t2405;
  double t2430;
  double t2507;
  double t2720;
  double t5853;
  double t5855;
  double t5859;
  double t5865;
  double t5868;
  double t5871;
  double t5573;
  double t5583;
  double t5585;
  double t5734;
  double t5767;
  double t5770;
  double t5874;
  double t5793;
  double t5795;
  double t5798;
  double t5802;
  double t5818;
  double t5827;
  double t5198;
  double t5299;
  double t5303;
  double t5776;
  double t5787;
  double t5792;
  double t5828;
  double t5875;
  double t5881;
  double t5916;
  double t5926;
  double t5933;
  double t5950;
  double t5954;
  double t5955;
  double t5963;
  double t5964;
  double t5968;
  double t5972;
  double t5973;
  double t5974;
  double t5976;
  double t6042;
  double t6043;
  double t6044;
  double t6045;
  double t6047;
  double t6048;
  double t6061;
  double t6072;
  double t6128;
  double t6130;
  double t6155;
  double t6156;
  double t6182;
  double t6185;
  double t5942;
  double t5949;
  double t42;
  double t105;
  double t108;
  double t278;
  double t1345;
  double t1420;
  double t2128;
  double t2442;
  double t2754;
  double t2890;
  double t6322;
  double t6325;
  double t6326;
  double t6301;
  double t6302;
  double t6303;
  double t3348;
  double t3531;
  double t3591;
  double t3625;
  double t4031;
  double t4170;
  double t4395;
  double t4711;
  double t6337;
  double t6339;
  double t6341;
  double t6333;
  double t6334;
  double t6335;
  double t6390;
  double t6394;
  double t6396;
  double t6397;
  double t6346;
  double t6351;
  double t6352;
  double t6356;
  double t6371;
  double t6372;
  double t6374;
  double t6385;
  double t5991;
  double t5992;
  double t6117;
  double t6120;
  double t6364;
  double t6388;
  double t6401;
  double t6404;
  double t6406;
  double t6408;
  double t6412;
  double t6432;
  double t6437;
  double t6438;
  double t6443;
  double t6447;
  double t6175;
  double t6178;
  double t6189;
  double t6190;
  double t6192;
  double t6196;
  double t6203;
  double t6207;
  double t6208;
  double t6215;
  double t6229;
  double t6236;
  double t6237;
  double t6238;
  double t6244;
  double t6245;
  double t6247;
  double t6262;
  double t6265;
  double t6267;
  double t6269;
  double t6277;
  double t6285;
  double t6287;
  double t6292;
  double t6298;
  double t6561;
  double t6562;
  double t6564;
  double t6554;
  double t6555;
  double t6559;
  double t6602;
  double t6607;
  double t6609;
  double t6610;
  double t6566;
  double t6570;
  double t6572;
  double t6582;
  double t6588;
  double t6590;
  double t6595;
  double t6598;
  double t6585;
  double t6600;
  double t6615;
  double t6616;
  double t6618;
  double t6621;
  double t6623;
  double t6624;
  double t6626;
  double t6628;
  double t6630;
  double t6635;
  t959 = Cos(var1[3]);
  t601 = Cos(var1[5]);
  t1021 = Sin(var1[4]);
  t631 = Sin(var1[3]);
  t1040 = Sin(var1[5]);
  t2284 = Sin(var1[7]);
  t41 = Cos(var1[6]);
  t1089 = t959*t601*t1021;
  t1305 = t631*t1040;
  t1306 = t1089 + t1305;
  t653 = -1.*t601*t631;
  t1042 = t959*t1021*t1040;
  t1054 = t653 + t1042;
  t1344 = Sin(var1[6]);
  t1804 = Cos(var1[7]);
  t1820 = -1.*t1804;
  t1837 = 1. + t1820;
  t3849 = t41*t1054;
  t3980 = -1.*t1306*t1344;
  t4000 = t3849 + t3980;
  t3155 = t41*t1306;
  t3225 = t1054*t1344;
  t3227 = t3155 + t3225;
  t1643 = Cos(var1[4]);
  t3576 = 0.366501*t2284;
  t3577 = 0. + t3576;
  t5379 = Cos(var1[8]);
  t5530 = -1.*t5379;
  t5535 = 1. + t5530;
  t4175 = 0.930418*t2284;
  t4338 = 0. + t4175;
  t2405 = -0.930418*t2284;
  t2430 = 0. + t2405;
  t2507 = -0.366501*t2284;
  t2720 = 0. + t2507;
  t5853 = -1.000000637725*t1837;
  t5855 = 1. + t5853;
  t5859 = t959*t1643*t5855;
  t5865 = t4000*t2430;
  t5868 = t3227*t2720;
  t5871 = t5859 + t5865 + t5868;
  t5573 = -0.340999127418*t1837*t4000;
  t5583 = -0.134322983001*t1837;
  t5585 = 1. + t5583;
  t5734 = t5585*t3227;
  t5767 = t959*t1643*t3577;
  t5770 = t5573 + t5734 + t5767;
  t5874 = Sin(var1[8]);
  t5793 = -0.8656776547239999*t1837;
  t5795 = 1. + t5793;
  t5798 = t5795*t4000;
  t5802 = -0.340999127418*t1837*t3227;
  t5818 = t959*t1643*t4338;
  t5827 = t5798 + t5802 + t5818;
  t5198 = Cos(var1[9]);
  t5299 = -1.*t5198;
  t5303 = 1. + t5299;
  t5776 = 0.340999127418*t5535*t5770;
  t5787 = -0.134322983001*t5535;
  t5792 = 1. + t5787;
  t5828 = t5792*t5827;
  t5875 = -0.366501*t5874;
  t5881 = 0. + t5875;
  t5916 = t5871*t5881;
  t5926 = t5776 + t5828 + t5916;
  t5933 = Sin(var1[9]);
  t5950 = -1.000000637725*t5535;
  t5954 = 1. + t5950;
  t5955 = t5954*t5871;
  t5963 = -0.930418*t5874;
  t5964 = 0. + t5963;
  t5968 = t5770*t5964;
  t5972 = 0.366501*t5874;
  t5973 = 0. + t5972;
  t5974 = t5827*t5973;
  t5976 = t5955 + t5968 + t5974;
  t6042 = -0.8656776547239999*t5535;
  t6043 = 1. + t6042;
  t6044 = t6043*t5770;
  t6045 = 0.340999127418*t5535*t5827;
  t6047 = 0.930418*t5874;
  t6048 = 0. + t6047;
  t6061 = t5871*t6048;
  t6072 = t6044 + t6045 + t6061;
  t6128 = 0.366501*t5933;
  t6130 = 0. + t6128;
  t6155 = -0.366501*t5933;
  t6156 = 0. + t6155;
  t6182 = 0.930418*t5933;
  t6185 = 0. + t6182;
  t5942 = -0.930418*t5933;
  t5949 = 0. + t5942;
  t42 = -1.*t41;
  t105 = 1. + t42;
  t108 = 0.091*t105;
  t278 = 0. + t108;
  t1345 = 0.091*t1344;
  t1420 = 0. + t1345;
  t2128 = -0.04500040093286238*t1837;
  t2442 = 0.07877663122399998*t2430;
  t2754 = 0.031030906668*t2720;
  t2890 = 0. + t2128 + t2442 + t2754;
  t6322 = t601*t631*t1021;
  t6325 = -1.*t959*t1040;
  t6326 = t6322 + t6325;
  t6301 = t959*t601;
  t6302 = t631*t1021*t1040;
  t6303 = t6301 + t6302;
  t3348 = -3.2909349868922137e-7*var1[7];
  t3531 = 0.03103092645718495*t1837;
  t3591 = -0.045000372235*t3577;
  t3625 = t3348 + t3531 + t3591;
  t4031 = 1.296332362046933e-7*var1[7];
  t4170 = 0.07877668146182712*t1837;
  t4395 = -0.045000372235*t4338;
  t4711 = t4031 + t4170 + t4395;
  t6337 = t41*t6303;
  t6339 = -1.*t6326*t1344;
  t6341 = t6337 + t6339;
  t6333 = t41*t6326;
  t6334 = t6303*t1344;
  t6335 = t6333 + t6334;
  t6390 = t1643*t5855*t631;
  t6394 = t6341*t2430;
  t6396 = t6335*t2720;
  t6397 = t6390 + t6394 + t6396;
  t6346 = -0.340999127418*t1837*t6341;
  t6351 = t5585*t6335;
  t6352 = t1643*t631*t3577;
  t6356 = t6346 + t6351 + t6352;
  t6371 = t5795*t6341;
  t6372 = -0.340999127418*t1837*t6335;
  t6374 = t1643*t631*t4338;
  t6385 = t6371 + t6372 + t6374;
  t5991 = -0.8656776547239999*t5303;
  t5992 = 1. + t5991;
  t6117 = -0.134322983001*t5303;
  t6120 = 1. + t6117;
  t6364 = 0.340999127418*t5535*t6356;
  t6388 = t5792*t6385;
  t6401 = t6397*t5881;
  t6404 = t6364 + t6388 + t6401;
  t6406 = t5954*t6397;
  t6408 = t6356*t5964;
  t6412 = t6385*t5973;
  t6432 = t6406 + t6408 + t6412;
  t6437 = t6043*t6356;
  t6438 = 0.340999127418*t5535*t6385;
  t6443 = t6397*t6048;
  t6447 = t6437 + t6438 + t6443;
  t6175 = -1.000000637725*t5303;
  t6178 = 1. + t6175;
  t6189 = 3.2909349868922137e-7*var1[8];
  t6190 = 0.055653945343889656*t5535;
  t6192 = -0.045000372235*t5881;
  t6196 = t6189 + t6190 + t6192;
  t6203 = -1.5981976069815686e-7*var1[9];
  t6207 = 0.08675267452931407*t5303;
  t6208 = 0.039853013046*t6130;
  t6215 = t6203 + t6207 + t6208;
  t6229 = -0.04500040093286238*t5535;
  t6236 = -0.141285834136*t5964;
  t6237 = 0.055653909852*t5973;
  t6238 = 0. + t6229 + t6236 + t6237;
  t6244 = 0.039853038461262744*t5303;
  t6245 = 0.086752619205*t6156;
  t6247 = -0.22023459268999998*t6185;
  t6262 = 0. + t6244 + t6245 + t6247;
  t6265 = 1.296332362046933e-7*var1[8];
  t6267 = -0.14128592423750855*t5535;
  t6269 = -0.045000372235*t6048;
  t6277 = t6265 + t6267 + t6269;
  t6285 = -6.295460977284962e-8*var1[9];
  t6287 = -0.22023473313910558*t5303;
  t6292 = 0.039853013046*t5949;
  t6298 = t6285 + t6287 + t6292;
  t6561 = t1643*t41*t1040;
  t6562 = -1.*t1643*t601*t1344;
  t6564 = t6561 + t6562;
  t6554 = t1643*t601*t41;
  t6555 = t1643*t1040*t1344;
  t6559 = t6554 + t6555;
  t6602 = -1.*t5855*t1021;
  t6607 = t6564*t2430;
  t6609 = t6559*t2720;
  t6610 = t6602 + t6607 + t6609;
  t6566 = -0.340999127418*t1837*t6564;
  t6570 = t5585*t6559;
  t6572 = -1.*t1021*t3577;
  t6582 = t6566 + t6570 + t6572;
  t6588 = t5795*t6564;
  t6590 = -0.340999127418*t1837*t6559;
  t6595 = -1.*t1021*t4338;
  t6598 = t6588 + t6590 + t6595;
  t6585 = 0.340999127418*t5535*t6582;
  t6600 = t5792*t6598;
  t6615 = t6610*t5881;
  t6616 = t6585 + t6600 + t6615;
  t6618 = t5954*t6610;
  t6621 = t6582*t5964;
  t6623 = t6598*t5973;
  t6624 = t6618 + t6621 + t6623;
  t6626 = t6043*t6582;
  t6628 = 0.340999127418*t5535*t6598;
  t6630 = t6610*t6048;
  t6635 = t6626 + t6628 + t6630;
  p_output1[0]=0. + t1306*t1420 + t1054*t278 + t3227*t3625 + t4000*t4711 - 0.189386*(0.340999127418*t5303*t5926 + t5949*t5976 + t5992*t6072) + 0.165064*(0.340999127418*t5303*t6072 + t5926*t6120 + t5976*t6130) + 0.039853*(t5926*t6156 + t5976*t6178 + t6072*t6185) + t5827*t6196 + t5926*t6215 + t5871*t6238 + t5976*t6262 + t5770*t6277 + t6072*t6298 + t1643*t2890*t959 + var1[0];
  p_output1[1]=0. + t278*t6303 + t1643*t2890*t631 + t1420*t6326 + t3625*t6335 + t4711*t6341 + t6277*t6356 + t6196*t6385 + t6238*t6397 + t6215*t6404 + t6262*t6432 + t6298*t6447 + 0.165064*(t6120*t6404 + t6130*t6432 + 0.340999127418*t5303*t6447) - 0.189386*(0.340999127418*t5303*t6404 + t5949*t6432 + t5992*t6447) + 0.039853*(t6156*t6404 + t6178*t6432 + t6185*t6447) + var1[1];
  p_output1[2]=0. + t1040*t1643*t278 - 1.*t1021*t2890 + t1420*t1643*t601 + t3625*t6559 + t4711*t6564 + t6277*t6582 + t6196*t6598 + t6238*t6610 + t6215*t6616 + t6262*t6624 + t6298*t6635 + 0.165064*(t6120*t6616 + t6130*t6624 + 0.340999127418*t5303*t6635) - 0.189386*(0.340999127418*t5303*t6616 + t5949*t6624 + t5992*t6635) + 0.039853*(t6156*t6616 + t6178*t6624 + t6185*t6635) + var1[2];
}



void p_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
