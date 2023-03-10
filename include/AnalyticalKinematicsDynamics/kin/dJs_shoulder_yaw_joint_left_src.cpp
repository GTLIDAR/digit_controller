/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_shoulder_yaw_joint_left_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t110;
  double t140;
  double t241;
  double t249;
  double t849;
  double t873;
  double t921;
  double t923;
  double t984;
  double t1113;
  double t1114;
  double t1123;
  double t1778;
  double t1713;
  double t1372;
  double t1380;
  double t1410;
  double t1852;
  double t1856;
  double t1859;
  double t1092;
  double t1095;
  double t1103;
  double t2069;
  double t2076;
  double t1304;
  double t1348;
  double t1350;
  double t1755;
  double t1782;
  double t1797;
  double t2084;
  double t2097;
  double t2106;
  double t2121;
  double t2128;
  double t2135;
  double t1806;
  double t1807;
  double t1818;
  double t2237;
  double t2242;
  double t2246;
  double t2066;
  double t2119;
  double t2139;
  double t2141;
  double t1037;
  double t1040;
  double t1045;
  double t2299;
  double t1848;
  double t1948;
  double t2492;
  double t2545;
  double t2554;
  double t2682;
  double t2687;
  double t2690;
  double t2604;
  double t2625;
  double t2628;
  double t2565;
  double t2164;
  double t2172;
  double t2207;
  double t2631;
  double t2645;
  double t2667;
  double t2870;
  double t2874;
  double t2883;
  double t2907;
  double t2908;
  double t1879;
  double t1898;
  double t1902;
  double t2968;
  double t2977;
  double t2978;
  double t2904;
  double t2916;
  double t2918;
  double t2738;
  double t2740;
  double t3201;
  double t3202;
  double t3203;
  double t3210;
  double t3214;
  double t3217;
  double t2724;
  double t2734;
  double t2735;
  double t2937;
  double t2946;
  double t2956;
  double t2310;
  double t2311;
  double t2711;
  double t2583;
  double t2587;
  double t2450;
  double t2455;
  double t3454;
  double t3456;
  double t3461;
  double t2403;
  double t2405;
  double t2410;
  double t3435;
  double t3441;
  double t3442;
  double t3508;
  double t3510;
  double t3511;
  double t3512;
  double t3489;
  double t3495;
  double t3501;
  double t2831;
  double t2841;
  double t2848;
  double t3633;
  double t3634;
  double t3647;
  double t3604;
  double t3617;
  double t3621;
  double t3178;
  double t3179;
  double t3183;
  double t3272;
  double t3280;
  double t3286;
  double t3087;
  double t3114;
  double t3136;
  double t3224;
  double t3225;
  double t3234;
  double t3736;
  double t3758;
  double t3760;
  double t3145;
  double t3147;
  double t3174;
  double t3308;
  double t3309;
  double t3313;
  double t3765;
  double t3767;
  double t3773;
  double t1938;
  double t1964;
  double t3897;
  double t3899;
  double t3903;
  double t1984;
  double t2002;
  double t2031;
  double t4132;
  double t4107;
  double t4109;
  double t4122;
  double t4172;
  double t4175;
  double t4180;
  double t4184;
  double t4145;
  double t4152;
  double t4167;
  double t4253;
  double t4259;
  double t4260;
  double t4285;
  double t4296;
  double t4302;
  double t4381;
  double t4389;
  double t4390;
  double t4363;
  double t4366;
  double t4371;
  double t4440;
  double t4449;
  double t4452;
  double t4458;
  double t3397;
  double t3406;
  double t3413;
  double t4774;
  double t4777;
  double t4780;
  double t4750;
  double t4760;
  double t4765;
  double t4788;
  double t4790;
  double t4803;
  double t4810;
  double t4834;
  double t4848;
  double t4918;
  double t4926;
  double t4941;
  double t4948;
  double t4954;
  double t4956;
  double t5064;
  double t5113;
  double t5185;
  double t4767;
  double t4784;
  double t4793;
  double t4796;
  double t5348;
  double t5351;
  double t5354;
  double t5355;
  double t5411;
  double t5412;
  double t5416;
  double t5417;
  double t5421;
  double t5431;
  double t5442;
  double t5449;
  double t5360;
  double t5419;
  double t5451;
  double t5455;
  double t4823;
  double t4861;
  double t4876;
  double t4885;
  double t5482;
  double t5485;
  double t5495;
  double t5501;
  double t4938;
  double t4951;
  double t4992;
  double t5010;
  double t5465;
  double t5773;
  double t5774;
  double t5782;
  double t5821;
  double t5845;
  double t5859;
  double t5749;
  double t5923;
  double t5924;
  double t5928;
  double t5931;
  double t5865;
  double t5866;
  double t5869;
  double t5871;
  double t6220;
  double t6231;
  double t6237;
  double t6241;
  double t6247;
  double t6248;
  double t5972;
  double t5973;
  double t5976;
  double t6090;
  double t6092;
  double t6099;
  double t6102;
  double t6465;
  double t6482;
  double t6483;
  double t6489;
  double t6495;
  double t6502;
  double t6508;
  double t6510;
  double t6763;
  double t6765;
  double t6769;
  double t6776;
  double t6778;
  double t6784;
  double t6801;
  double t6810;
  double t6811;
  double t6773;
  double t6790;
  double t6813;
  double t6814;
  double t6822;
  double t6826;
  double t6827;
  double t6829;
  double t5459;
  double t5470;
  double t5472;
  double t5512;
  double t5531;
  double t5533;
  double t5540;
  double t5582;
  double t5584;
  double t5595;
  double t5604;
  double t5750;
  double t5751;
  double t5955;
  double t5959;
  double t5966;
  double t6059;
  double t6064;
  double t6067;
  double t5684;
  double t5688;
  double t5895;
  double t5907;
  double t7010;
  double t7016;
  double t7022;
  double t7023;
  double t5697;
  double t5701;
  double t5709;
  double t7032;
  double t7033;
  double t7034;
  double t7037;
  double t7039;
  double t7045;
  double t5989;
  double t6023;
  double t6029;
  double t7048;
  double t7052;
  double t7056;
  double t7057;
  double t5721;
  double t5727;
  double t5735;
  double t6073;
  double t6077;
  double t6080;
  double t6189;
  double t6208;
  double t6213;
  double t6293;
  double t6296;
  double t6298;
  double t6353;
  double t6357;
  double t6360;
  double t6137;
  double t6144;
  double t6158;
  double t6256;
  double t6272;
  double t6275;
  double t6161;
  double t6165;
  double t6166;
  double t7125;
  double t7126;
  double t7128;
  double t7135;
  double t7141;
  double t7147;
  double t6320;
  double t6322;
  double t6171;
  double t6174;
  double t6175;
  double t6366;
  double t6372;
  double t6375;
  double t6441;
  double t6450;
  double t6455;
  double t6456;
  double t6591;
  double t6601;
  double t6602;
  double t6621;
  double t6659;
  double t6661;
  double t6665;
  double t6666;
  double t6408;
  double t6412;
  double t6414;
  double t6415;
  double t6516;
  double t6525;
  double t6534;
  double t6539;
  double t6418;
  double t6420;
  double t6421;
  double t6423;
  double t7192;
  double t7193;
  double t7196;
  double t7197;
  double t7203;
  double t7204;
  double t7205;
  double t7206;
  double t6635;
  double t6638;
  double t6639;
  double t6642;
  double t6425;
  double t6426;
  double t6427;
  double t6430;
  double t6671;
  double t6680;
  double t6683;
  double t6686;
  double t6739;
  double t6742;
  double t6744;
  double t6748;
  double t6857;
  double t6858;
  double t6859;
  double t6862;
  double t6898;
  double t6899;
  double t6901;
  double t6902;
  double t6703;
  double t6704;
  double t6708;
  double t6709;
  double t6751;
  double t6755;
  double t6756;
  double t6758;
  double t7293;
  double t7294;
  double t7295;
  double t7296;
  double t6842;
  double t6843;
  double t6848;
  double t6852;
  double t7309;
  double t7316;
  double t7317;
  double t7318;
  double t6712;
  double t6716;
  double t6717;
  double t6718;
  double t6879;
  double t6882;
  double t6889;
  double t6891;
  double t6721;
  double t6724;
  double t6728;
  double t6731;
  double t5255;
  double t5256;
  double t5263;
  double t5279;
  double t5283;
  double t5285;
  double t7373;
  double t7374;
  double t7376;
  double t5300;
  double t5317;
  double t5336;
  double t7466;
  double t7467;
  double t7481;
  double t7482;
  double t7485;
  double t7491;
  double t7492;
  double t7493;
  double t7494;
  double t7498;
  double t7499;
  double t7500;
  double t7501;
  double t7563;
  double t7566;
  double t7567;
  double t7571;
  double t7573;
  double t7575;
  double t7634;
  double t7636;
  double t7638;
  double t7649;
  double t7650;
  double t7651;
  double t7692;
  double t7700;
  double t7703;
  double t7704;
  double t7749;
  double t7751;
  double t7752;
  double t7753;
  double t7761;
  double t7764;
  double t7765;
  double t7767;
  double t6986;
  double t6987;
  double t6989;
  double t6991;
  t110 = Cos(var1[3]);
  t140 = Sin(var1[3]);
  t241 = Cos(var1[4]);
  t249 = Sin(var1[4]);
  t849 = Cos(var1[5]);
  t873 = Sin(var1[5]);
  t921 = t110*t849*t249;
  t923 = t140*t873;
  t984 = t921 + t923;
  t1113 = -1.*t110*t849;
  t1114 = -1.*t140*t249*t873;
  t1123 = t1113 + t1114;
  t1778 = Cos(var1[13]);
  t1713 = Sin(var1[13]);
  t1372 = t849*t140*t249;
  t1380 = -1.*t110*t873;
  t1410 = t1372 + t1380;
  t1852 = t110*t849;
  t1856 = t140*t249*t873;
  t1859 = t1852 + t1856;
  t1092 = -1.*t849*t140*t249;
  t1095 = t110*t873;
  t1103 = t1092 + t1095;
  t2069 = -1.*t1778;
  t2076 = 1. + t2069;
  t1304 = -1.*t849*t140;
  t1348 = t110*t249*t873;
  t1350 = t1304 + t1348;
  t1755 = -1.*t241*t849*t1713;
  t1782 = t1778*t241*t873;
  t1797 = t1755 + t1782;
  t2084 = 0.4*t2076;
  t2097 = 0.12*t1713;
  t2106 = 0. + t2084 + t2097;
  t2121 = 0.12*t2076;
  t2128 = -0.4*t1713;
  t2135 = 0. + t2121 + t2128;
  t1806 = t1778*t241*t849;
  t1807 = t241*t1713*t873;
  t1818 = t1806 + t1807;
  t2237 = t2106*t984;
  t2242 = t2135*t1350;
  t2246 = t2237 + t2242;
  t2066 = -1.*var1[2];
  t2119 = -1.*t241*t849*t2106;
  t2139 = -1.*t241*t2135*t873;
  t2141 = 0. + t2066 + t2119 + t2139;
  t1037 = t849*t140;
  t1040 = -1.*t110*t249*t873;
  t1045 = t1037 + t1040;
  t2299 = t1778*t984;
  t1848 = t1713*t1410;
  t1948 = t1778*t1123;
  t2492 = t2135*t1410;
  t2545 = t2106*t1123;
  t2554 = t2492 + t2545;
  t2682 = t2106*t1410;
  t2687 = t2135*t1859;
  t2690 = 0. + var1[1] + t2682 + t2687;
  t2604 = -1.*t241*t849*t2135;
  t2625 = t241*t2106*t873;
  t2628 = t2604 + t2625;
  t2565 = t1778*t1410;
  t2164 = -1.*t1713*t984;
  t2172 = t1778*t1350;
  t2207 = t2164 + t2172;
  t2631 = -1.*t1713*t1410;
  t2645 = t1778*t1859;
  t2667 = t2631 + t2645;
  t2870 = 0.12*t1778;
  t2874 = 0.4*t1713;
  t2883 = t2870 + t2874;
  t2907 = -0.4*t1778;
  t2908 = t2907 + t2097;
  t1879 = -1.*t1778*t1410;
  t1898 = -1.*t1713*t1859;
  t1902 = t1879 + t1898;
  t2968 = t2883*t1410;
  t2977 = t2908*t1859;
  t2978 = t2968 + t2977;
  t2904 = -1.*t241*t849*t2883;
  t2916 = -1.*t241*t2908*t873;
  t2918 = t2904 + t2916;
  t2738 = t1713*t1859;
  t2740 = t2565 + t2738;
  t3201 = t241*t849*t2106*t140;
  t3202 = t241*t2135*t140*t873;
  t3203 = t3201 + t3202;
  t3210 = t849*t2106*t249;
  t3214 = t2135*t249*t873;
  t3217 = t3210 + t3214;
  t2724 = t241*t849*t1713;
  t2734 = -1.*t1778*t241*t873;
  t2735 = t2724 + t2734;
  t2937 = -1.*t1778*t241*t849;
  t2946 = -1.*t241*t1713*t873;
  t2956 = t2937 + t2946;
  t2310 = t1713*t1350;
  t2311 = t2299 + t2310;
  t2711 = t1848 + t1948;
  t2583 = -1.*t1713*t1123;
  t2587 = t2565 + t2583;
  t2450 = -1.*t1713*t1045;
  t2455 = t2299 + t2450;
  t3454 = t241*t849*t2106;
  t3456 = t241*t2135*t873;
  t3461 = 0. + var1[2] + t3454 + t3456;
  t2403 = t1713*t984;
  t2405 = t1778*t1045;
  t2410 = t2403 + t2405;
  t3435 = -1.*t2135*t984;
  t3441 = -1.*t2106*t1045;
  t3442 = t3435 + t3441;
  t3508 = -1.*var1[0];
  t3510 = -1.*t2106*t984;
  t3511 = -1.*t2135*t1350;
  t3512 = 0. + t3508 + t3510 + t3511;
  t3489 = t241*t849*t2135;
  t3495 = -1.*t241*t2106*t873;
  t3501 = t3489 + t3495;
  t2831 = -1.*t1778*t984;
  t2841 = -1.*t1713*t1350;
  t2848 = t2831 + t2841;
  t3633 = -1.*t2883*t984;
  t3634 = -1.*t2908*t1350;
  t3647 = t3633 + t3634;
  t3604 = t241*t849*t2883;
  t3617 = t241*t2908*t873;
  t3621 = t3604 + t3617;
  t3178 = -1.*t241*t849*t1713*t140;
  t3179 = t1778*t241*t140*t873;
  t3183 = t3178 + t3179;
  t3272 = t1778*t241*t849*t140;
  t3280 = t241*t1713*t140*t873;
  t3286 = t3272 + t3280;
  t3087 = -1.*t110*t241*t849*t1713;
  t3114 = t1778*t110*t241*t873;
  t3136 = t3087 + t3114;
  t3224 = t849*t1713*t249;
  t3225 = -1.*t1778*t249*t873;
  t3234 = t3224 + t3225;
  t3736 = -1.*t110*t241*t849*t2106;
  t3758 = -1.*t110*t241*t2135*t873;
  t3760 = t3736 + t3758;
  t3145 = t1778*t110*t241*t849;
  t3147 = t110*t241*t1713*t873;
  t3174 = t3145 + t3147;
  t3308 = -1.*t1778*t849*t249;
  t3309 = -1.*t1713*t249*t873;
  t3313 = t3308 + t3309;
  t3765 = -1.*t849*t2106*t249;
  t3767 = -1.*t2135*t249*t873;
  t3773 = t3765 + t3767;
  t1938 = -1.*t1713*t1103;
  t1964 = t1938 + t1948;
  t3897 = -1.*t2106*t1103;
  t3899 = -1.*t2135*t1123;
  t3903 = t3897 + t3899;
  t1984 = t1778*t1103;
  t2002 = t1713*t1123;
  t2031 = t1984 + t2002;
  t4132 = 0. + var1[0] + t2237 + t2242;
  t4107 = -1.*t241*t849*t2106*t140;
  t4109 = -1.*t241*t2135*t140*t873;
  t4122 = t4107 + t4109;
  t4172 = -1.*var1[1];
  t4175 = -1.*t2106*t1410;
  t4180 = -1.*t2135*t1859;
  t4184 = 0. + t4172 + t4175 + t4180;
  t4145 = t110*t241*t849*t2106;
  t4152 = t110*t241*t2135*t873;
  t4167 = t4145 + t4152;
  t4253 = -1.*t2135*t1410;
  t4259 = -1.*t2106*t1123;
  t4260 = t4253 + t4259;
  t4285 = t2135*t984;
  t4296 = t2106*t1045;
  t4302 = t4285 + t4296;
  t4381 = -1.*t2883*t1410;
  t4389 = -1.*t2908*t1859;
  t4390 = t4381 + t4389;
  t4363 = t2883*t984;
  t4366 = t2908*t1350;
  t4371 = t4363 + t4366;
  t4440 = t3510 + t3511;
  t4449 = t2106*t1103;
  t4452 = t2135*t1123;
  t4458 = t4449 + t4452;
  t3397 = 0.994522*t2207;
  t3406 = 0.104528*t2311;
  t3413 = t3397 + t3406;
  t4774 = Cos(var1[14]);
  t4777 = -1.*t4774;
  t4780 = 1. + t4777;
  t4750 = Sin(var1[14]);
  t4760 = 0.994522*t4750;
  t4765 = 0. + t4760;
  t4788 = -0.9890740084840001*t4780;
  t4790 = 1. + t4788;
  t4803 = -0.104528*t4750;
  t4810 = 0. + t4803;
  t4834 = -0.010926102783999999*t4780;
  t4848 = 1. + t4834;
  t4918 = -1.0000001112680001*t4780;
  t4926 = 1. + t4918;
  t4941 = 0.104528*t4750;
  t4948 = 0. + t4941;
  t4954 = -0.994522*t4750;
  t4956 = 0. + t4954;
  t5064 = -1.*t241*t4765*t140;
  t5113 = -1.*t241*t4810*t140;
  t5185 = -1.*t4926*t241*t140;
  t4767 = -1.*t4765*t249;
  t4784 = 0.103955395616*t4780*t1797;
  t4793 = t4790*t1818;
  t4796 = t4767 + t4784 + t4793;
  t5348 = -0.056500534356700764*t4780;
  t5351 = 0.38315650737400003*t4956;
  t5354 = -0.040271188976*t4948;
  t5355 = 0. + t5348 + t5351 + t5354;
  t5411 = 1.1345904784751044e-7*var1[14];
  t5412 = -0.04027119345689465*t4780;
  t5416 = -0.05650052807*t4810;
  t5417 = t5411 + t5412 + t5416;
  t5421 = 1.1924972351948546e-8*var1[14];
  t5431 = 0.38315655000705834*t4780;
  t5442 = -0.05650052807*t4765;
  t5449 = t5421 + t5431 + t5442;
  t5360 = t5355*t249;
  t5419 = -1.*t5417*t1797;
  t5451 = -1.*t5449*t1818;
  t5455 = 0. + t2066 + t2119 + t5360 + t2139 + t5419 + t5451;
  t4823 = -1.*t4810*t249;
  t4861 = t4848*t1797;
  t4876 = 0.103955395616*t4780*t1818;
  t4885 = t4823 + t4861 + t4876;
  t5482 = t110*t241*t5355;
  t5485 = t5417*t2207;
  t5495 = t5449*t2311;
  t5501 = t5482 + t2237 + t2242 + t5485 + t5495;
  t4938 = -1.*t4926*t249;
  t4951 = t4948*t1797;
  t4992 = t4956*t1818;
  t5010 = t4938 + t4951 + t4992;
  t5465 = 0.103955395616*t4780*t2207;
  t5773 = t5449*t2667;
  t5774 = t5417*t1902;
  t5782 = t2968 + t2977 + t5773 + t5774;
  t5821 = -1.*t5449*t1797;
  t5845 = -1.*t5417*t2956;
  t5859 = t2904 + t2916 + t5821 + t5845;
  t5749 = 0.103955395616*t4780*t2667;
  t5923 = t241*t5355*t140;
  t5924 = t5417*t2667;
  t5928 = t5449*t2740;
  t5931 = 0. + var1[1] + t5923 + t2682 + t2687 + t5924 + t5928;
  t5865 = t241*t4810*t140;
  t5866 = t4848*t2667;
  t5869 = 0.103955395616*t4780*t2740;
  t5871 = t5865 + t5866 + t5869;
  t6220 = t5449*t2711;
  t6231 = t5417*t2587;
  t6237 = t2492 + t2545 + t6220 + t6231;
  t6241 = -1.*t5449*t2735;
  t6247 = -1.*t5417*t1818;
  t6248 = t2604 + t2625 + t6241 + t6247;
  t5972 = t241*t4765*t140;
  t5973 = t4790*t2740;
  t5976 = t5972 + t5749 + t5973;
  t6090 = t4926*t241*t140;
  t6092 = t4948*t2667;
  t6099 = t4956*t2740;
  t6102 = t6090 + t6092 + t6099;
  t6465 = -1.*t5355*t140*t249;
  t6482 = t5417*t3183;
  t6483 = t5449*t3286;
  t6489 = t3201 + t6465 + t3202 + t6482 + t6483;
  t6495 = t241*t5355;
  t6502 = -1.*t5417*t3234;
  t6508 = -1.*t5449*t3313;
  t6510 = t6495 + t3210 + t3214 + t6502 + t6508;
  t6763 = -0.3852670428678886*t4774;
  t6765 = -0.056500534356700764*t4750;
  t6769 = t6763 + t6765;
  t6776 = 0.0059058871981009595*t4774;
  t6778 = -0.04027119345689465*t4750;
  t6784 = 1.1345904784751044e-7 + t6776 + t6778;
  t6801 = -0.05619101817723254*t4774;
  t6810 = 0.38315655000705834*t4750;
  t6811 = 1.1924972351948546e-8 + t6801 + t6810;
  t6773 = t6769*t249;
  t6790 = -1.*t6784*t1797;
  t6813 = -1.*t6811*t1818;
  t6814 = t6773 + t6790 + t6813;
  t6822 = t241*t6769*t140;
  t6826 = t6784*t2667;
  t6827 = t6811*t2740;
  t6829 = t6822 + t6826 + t6827;
  t5459 = t110*t241*t4765;
  t5470 = t4790*t2311;
  t5472 = t5459 + t5465 + t5470;
  t5512 = t110*t241*t4810;
  t5531 = t4848*t2207;
  t5533 = 0.103955395616*t4780*t2311;
  t5540 = t5512 + t5531 + t5533;
  t5582 = t4926*t110*t241;
  t5584 = t4948*t2207;
  t5595 = t4956*t2311;
  t5604 = t5582 + t5584 + t5595;
  t5750 = t4848*t1902;
  t5751 = t5749 + t5750;
  t5955 = t4790*t2667;
  t5959 = 0.103955395616*t4780*t1902;
  t5966 = t5955 + t5959;
  t6059 = t4956*t2667;
  t6064 = t4948*t1902;
  t6067 = t6059 + t6064;
  t5684 = t4848*t2848;
  t5688 = t5465 + t5684;
  t5895 = t4848*t2956;
  t5907 = t4784 + t5895;
  t7010 = -1.*t5355*t249;
  t7016 = t5417*t1797;
  t7022 = t5449*t1818;
  t7023 = 0. + var1[2] + t3454 + t7010 + t3456 + t7016 + t7022;
  t5697 = t4790*t2207;
  t5701 = 0.103955395616*t4780*t2848;
  t5709 = t5697 + t5701;
  t7032 = -1.*t5449*t2207;
  t7033 = -1.*t5417*t2848;
  t7034 = t3633 + t3634 + t7032 + t7033;
  t7037 = t5449*t1797;
  t7039 = t5417*t2956;
  t7045 = t3604 + t3617 + t7037 + t7039;
  t5989 = t4790*t1797;
  t6023 = 0.103955395616*t4780*t2956;
  t6029 = t5989 + t6023;
  t7048 = -1.*t110*t241*t5355;
  t7052 = -1.*t5417*t2207;
  t7056 = -1.*t5449*t2311;
  t7057 = 0. + t3508 + t7048 + t3510 + t3511 + t7052 + t7056;
  t5721 = t4956*t2207;
  t5727 = t4948*t2848;
  t5735 = t5721 + t5727;
  t6073 = t4956*t1797;
  t6077 = t4948*t2956;
  t6080 = t6073 + t6077;
  t6189 = 0.103955395616*t4780*t2711;
  t6208 = t4848*t2587;
  t6213 = t6189 + t6208;
  t6293 = t4790*t2711;
  t6296 = 0.103955395616*t4780*t2587;
  t6298 = t6293 + t6296;
  t6353 = t4956*t2711;
  t6357 = t4948*t2587;
  t6360 = t6353 + t6357;
  t6137 = 0.103955395616*t4780*t2410;
  t6144 = t4848*t2455;
  t6158 = t6137 + t6144;
  t6256 = 0.103955395616*t4780*t2735;
  t6272 = t4848*t1818;
  t6275 = t6256 + t6272;
  t6161 = t4790*t2410;
  t6165 = 0.103955395616*t4780*t2455;
  t6166 = t6161 + t6165;
  t7125 = -1.*t5449*t2410;
  t7126 = -1.*t5417*t2455;
  t7128 = t3435 + t3441 + t7125 + t7126;
  t7135 = t5449*t2735;
  t7141 = t5417*t1818;
  t7147 = t3489 + t3495 + t7135 + t7141;
  t6320 = t4790*t2735;
  t6322 = t6320 + t4876;
  t6171 = t4956*t2410;
  t6174 = t4948*t2455;
  t6175 = t6171 + t6174;
  t6366 = t4956*t2735;
  t6372 = t4948*t1818;
  t6375 = t6366 + t6372;
  t6441 = -1.*t4765*t140*t249;
  t6450 = 0.103955395616*t4780*t3183;
  t6455 = t4790*t3286;
  t6456 = t6441 + t6450 + t6455;
  t6591 = -1.*t4810*t140*t249;
  t6601 = t4848*t3183;
  t6602 = 0.103955395616*t4780*t3286;
  t6621 = t6591 + t6601 + t6602;
  t6659 = -1.*t4926*t140*t249;
  t6661 = t4948*t3183;
  t6665 = t4956*t3286;
  t6666 = t6659 + t6661 + t6665;
  t6408 = -1.*t110*t4765*t249;
  t6412 = 0.103955395616*t4780*t3136;
  t6414 = t4790*t3174;
  t6415 = t6408 + t6412 + t6414;
  t6516 = -1.*t241*t4765;
  t6525 = 0.103955395616*t4780*t3234;
  t6534 = t4790*t3313;
  t6539 = t6516 + t6525 + t6534;
  t6418 = -1.*t110*t4810*t249;
  t6420 = t4848*t3136;
  t6421 = 0.103955395616*t4780*t3174;
  t6423 = t6418 + t6420 + t6421;
  t7192 = t110*t5355*t249;
  t7193 = -1.*t5417*t3136;
  t7196 = -1.*t5449*t3174;
  t7197 = t3736 + t7192 + t3758 + t7193 + t7196;
  t7203 = -1.*t241*t5355;
  t7204 = t5417*t3234;
  t7205 = t5449*t3313;
  t7206 = t7203 + t3765 + t3767 + t7204 + t7205;
  t6635 = -1.*t241*t4810;
  t6638 = t4848*t3234;
  t6639 = 0.103955395616*t4780*t3313;
  t6642 = t6635 + t6638 + t6639;
  t6425 = -1.*t4926*t110*t249;
  t6426 = t4948*t3136;
  t6427 = t4956*t3174;
  t6430 = t6425 + t6426 + t6427;
  t6671 = -1.*t4926*t241;
  t6680 = t4948*t3234;
  t6683 = t4956*t3313;
  t6686 = t6671 + t6680 + t6683;
  t6739 = -1.0000001112680001*t241*t4750*t140;
  t6742 = 0.104528*t4774*t2667;
  t6744 = -0.994522*t4774*t2740;
  t6748 = t6739 + t6742 + t6744;
  t6857 = 0.994522*t4774*t241*t140;
  t6858 = 0.103955395616*t4750*t2667;
  t6859 = -0.9890740084840001*t4750*t2740;
  t6862 = t6857 + t6858 + t6859;
  t6898 = -0.104528*t4774*t241*t140;
  t6899 = -0.010926102783999999*t4750*t2667;
  t6901 = 0.103955395616*t4750*t2740;
  t6902 = t6898 + t6899 + t6901;
  t6703 = -1.0000001112680001*t110*t241*t4750;
  t6704 = 0.104528*t4774*t2207;
  t6708 = -0.994522*t4774*t2311;
  t6709 = t6703 + t6704 + t6708;
  t6751 = 1.0000001112680001*t4750*t249;
  t6755 = 0.104528*t4774*t1797;
  t6756 = -0.994522*t4774*t1818;
  t6758 = t6751 + t6755 + t6756;
  t7293 = -1.*t6769*t249;
  t7294 = t6784*t1797;
  t7295 = t6811*t1818;
  t7296 = t7293 + t7294 + t7295;
  t6842 = -0.994522*t4774*t249;
  t6843 = 0.103955395616*t4750*t1797;
  t6848 = -0.9890740084840001*t4750*t1818;
  t6852 = t6842 + t6843 + t6848;
  t7309 = -1.*t110*t241*t6769;
  t7316 = -1.*t6784*t2207;
  t7317 = -1.*t6811*t2311;
  t7318 = t7309 + t7316 + t7317;
  t6712 = 0.994522*t4774*t110*t241;
  t6716 = 0.103955395616*t4750*t2207;
  t6717 = -0.9890740084840001*t4750*t2311;
  t6718 = t6712 + t6716 + t6717;
  t6879 = 0.104528*t4774*t249;
  t6882 = -0.010926102783999999*t4750*t1797;
  t6889 = 0.103955395616*t4750*t1818;
  t6891 = t6879 + t6882 + t6889;
  t6721 = -0.104528*t4774*t110*t241;
  t6724 = -0.010926102783999999*t4750*t2207;
  t6728 = 0.103955395616*t4750*t2311;
  t6731 = t6721 + t6724 + t6728;
  t5255 = 0.103955395616*t4780*t1964;
  t5256 = t4790*t2031;
  t5263 = t5064 + t5255 + t5256;
  t5279 = t4848*t1964;
  t5283 = 0.103955395616*t4780*t2031;
  t5285 = t5113 + t5279 + t5283;
  t7373 = -1.*t5417*t1964;
  t7374 = -1.*t5449*t2031;
  t7376 = t5923 + t3897 + t3899 + t7373 + t7374;
  t5300 = t4948*t1964;
  t5317 = t4956*t2031;
  t5336 = t5185 + t5300 + t5317;
  t7466 = t5355*t140*t249;
  t7467 = -1.*t5417*t3183;
  t7481 = -1.*t5449*t3286;
  t7482 = t4107 + t7466 + t4109 + t7467 + t7481;
  t7485 = 0. + var1[0] + t5482 + t2237 + t2242 + t5485 + t5495;
  t7491 = -1.*t110*t5355*t249;
  t7492 = t5417*t3136;
  t7493 = t5449*t3174;
  t7494 = t4145 + t7491 + t4152 + t7492 + t7493;
  t7498 = -1.*t241*t5355*t140;
  t7499 = -1.*t5417*t2667;
  t7500 = -1.*t5449*t2740;
  t7501 = 0. + t4172 + t7498 + t4175 + t4180 + t7499 + t7500;
  t7563 = -1.*t5449*t2711;
  t7566 = -1.*t5417*t2587;
  t7567 = t4253 + t4259 + t7563 + t7566;
  t7571 = t5449*t2410;
  t7573 = t5417*t2455;
  t7575 = t4285 + t4296 + t7571 + t7573;
  t7634 = -1.*t5449*t2667;
  t7636 = -1.*t5417*t1902;
  t7638 = t4381 + t4389 + t7634 + t7636;
  t7649 = t5449*t2207;
  t7650 = t5417*t2848;
  t7651 = t4363 + t4366 + t7649 + t7650;
  t7692 = t7048 + t3510 + t3511 + t7052 + t7056;
  t7700 = t5417*t1964;
  t7703 = t5449*t2031;
  t7704 = t7498 + t4449 + t4452 + t7700 + t7703;
  t7749 = t110*t241*t6769;
  t7751 = t6784*t2207;
  t7752 = t6811*t2311;
  t7753 = t7749 + t7751 + t7752;
  t7761 = -1.*t241*t6769*t140;
  t7764 = -1.*t6784*t2667;
  t7765 = -1.*t6811*t2740;
  t7767 = t7761 + t7764 + t7765;
  t6986 = -0.703234*t5472;
  t6987 = 0.073913*t5540;
  t6989 = 0.707107*t5604;
  t6991 = t6986 + t6987 + t6989;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t110*var2[2] + t140*var1[2]*var2[3];
  p_output1[25]=-1.*t140*var2[2] - 1.*t110*var1[2]*var2[3];
  p_output1[26]=t110*var2[0] + t140*var2[1] + (-1.*t140*var1[0] + t110*var1[1])*var2[3];
  p_output1[27]=-1.*t110*var2[3];
  p_output1[28]=-1.*t140*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t249*var2[1] - 1.*t140*t241*var2[2] - 1.*t110*t241*var1[2]*var2[3] + (-1.*t241*var1[1] + t140*t249*var1[2])*var2[4];
  p_output1[31]=t249*var2[0] + t110*t241*var2[2] - 1.*t140*t241*var1[2]*var2[3] + (t241*var1[0] - 1.*t110*t249*var1[2])*var2[4];
  p_output1[32]=t140*t241*var2[0] - 1.*t110*t241*var2[1] + (t110*t241*var1[0] + t140*t241*var1[1])*var2[3] + (-1.*t140*t249*var1[0] + t110*t249*var1[1])*var2[4];
  p_output1[33]=-1.*t140*t241*var2[3] - 1.*t110*t249*var2[4];
  p_output1[34]=t110*t241*var2[3] - 1.*t140*t249*var2[4];
  p_output1[35]=-1.*t241*var2[4];
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=t249*var2[1] + t140*t241*var2[2] + (0.12*t1103 - 0.4*t1123 + t110*t241*var1[2])*var2[3] + (0.12*t110*t241*t849 - 0.4*t110*t241*t873 + t241*var1[1] - 1.*t140*t249*var1[2])*var2[4] + (0.12*t1045 - 0.4*t984)*var2[5];
  p_output1[79]=-1.*t249*var2[0] - 1.*t110*t241*var2[2] + (-0.4*t1350 + 0.12*t984 + t140*t241*var1[2])*var2[3] + (0.12*t140*t241*t849 - 0.4*t140*t241*t873 - 1.*t241*var1[0] + t110*t249*var1[2])*var2[4] + (0.12*t1123 - 0.4*t1410)*var2[5];
  p_output1[80]=-1.*t140*t241*var2[0] + t110*t241*var2[1] + (-1.*t110*t241*var1[0] - 1.*t140*t241*var1[1])*var2[3] + (-0.12*t249*t849 + 0.4*t249*t873 + t140*t249*var1[0] - 1.*t110*t249*var1[1])*var2[4] + (-0.4*t241*t849 - 0.12*t241*t873)*var2[5];
  p_output1[81]=t140*t241*var2[3] + t110*t249*var2[4];
  p_output1[82]=-1.*t110*t241*var2[3] + t140*t249*var2[4];
  p_output1[83]=t241*var2[4];
  p_output1[84]=(0.994522*t1797 + 0.104528*t1818)*var2[1] + (0.994522*(t1848 - 1.*t1778*t1859) + 0.104528*t1902)*var2[2] + (0.005906*t1964 - 0.056191*t2031 + 0.994522*(t2141*t2207 + t1797*t2246) + 0.104528*(t1818*t2246 + t2141*t2311) + 0.385267*t140*t241)*var2[3] + (0.385267*t110*t249 + 0.005906*t3136 - 0.056191*t3174 + 0.994522*(t2141*t3183 + t1797*t3203 + t2667*t3217 + t2690*t3234) + 0.104528*(t1818*t3203 + t2740*t3217 + t2141*t3286 + t2690*t3313))*var2[4] + (-0.056191*t2410 + 0.005906*t2455 + 0.994522*(t1797*t2554 + t2141*t2587 + t2628*t2667 + t1818*t2690) + 0.104528*(t1818*t2554 + t2141*t2711 + t2690*t2735 + t2628*t2740))*var2[5] + (-0.056191*t2207 + 0.005906*t2848 + 0.994522*(t1902*t2141 + t2667*t2918 + t2690*t2956 + t1797*t2978) + 0.104528*(t2141*t2667 + t1797*t2690 + t2740*t2918 + t1818*t2978))*var2[13];
  p_output1[85]=(0.994522*t2735 + 0.104528*t2956)*var2[0] + t3413*var2[2] + (0.005906*t2207 - 0.056191*t2311 - 0.385267*t110*t241 + 0.994522*(t1964*t3461 + t1797*t3903) + 0.104528*(t2031*t3461 + t1818*t3903))*var2[3] + (0.385267*t140*t249 + 0.005906*t3183 - 0.056191*t3286 + 0.994522*(t3136*t3461 + t3234*t3512 + t1797*t3760 + t2207*t3773) + 0.104528*(t3174*t3461 + t3313*t3512 + t1818*t3760 + t2311*t3773))*var2[4] + (0.005906*t2587 - 0.056191*t2711 + 0.994522*(t1797*t3442 + t2455*t3461 + t2207*t3501 + t1818*t3512) + 0.104528*(t1818*t3442 + t2410*t3461 + t2311*t3501 + t2735*t3512))*var2[5] + (0.005906*t1902 - 0.056191*t2667 + 0.994522*(t2848*t3461 + t2956*t3512 + t2207*t3621 + t1797*t3647) + 0.104528*(t2207*t3461 + t1797*t3512 + t2311*t3621 + t1818*t3647))*var2[13];
  p_output1[86]=(0.994522*t2667 + 0.104528*t2740)*var2[0] + (0.994522*(-1.*t1350*t1778 + t2403) + 0.104528*t2848)*var2[1] + (0.994522*(t2207*t4132 + t1964*t4184 + t2207*t4440 + t2667*t4458) + 0.104528*(t2311*t4132 + t2031*t4184 + t2311*t4440 + t2740*t4458))*var2[3] + (0.385267*t241 + 0.005906*t3234 - 0.056191*t3313 + 0.994522*(t2207*t4122 + t3183*t4132 + t2667*t4167 + t3136*t4184) + 0.104528*(t2311*t4122 + t3286*t4132 + t2740*t4167 + t3174*t4184))*var2[4] + (0.005906*t1818 - 0.056191*t2735 + 0.994522*(t2587*t4132 + t2455*t4184 + t2207*t4260 + t2667*t4302) + 0.104528*(t2711*t4132 + t2410*t4184 + t2311*t4260 + t2740*t4302))*var2[5] + (-0.056191*t1797 + 0.005906*t2956 + 0.994522*(t1902*t4132 + t2848*t4184 + t2667*t4371 + t2207*t4390) + 0.104528*(t2667*t4132 + t2207*t4184 + t2740*t4371 + t2311*t4390))*var2[13];
  p_output1[87]=(0.994522*t1964 + 0.104528*t2031)*var2[3] + (0.994522*t3136 + 0.104528*t3174)*var2[4] + (0.104528*t2410 + 0.994522*t2455)*var2[5] + (0.104528*t2207 + 0.994522*t2848)*var2[13];
  p_output1[88]=t3413*var2[3] + (0.994522*t3183 + 0.104528*t3286)*var2[4] + (0.994522*t2587 + 0.104528*t2711)*var2[5] + (0.994522*t1902 + 0.104528*t2667)*var2[13];
  p_output1[89]=(0.994522*t3234 + 0.104528*t3313)*var2[4] + (0.994522*t1818 + 0.104528*t2735)*var2[5] + (0.104528*t1797 + 0.994522*t2956)*var2[13];
  p_output1[90]=(-0.703234*t4796 + 0.073913*t4885 + 0.707107*t5010)*var2[1] + (-0.703234*(-0.103955395616*t2667*t4780 - 1.*t2740*t4790 + t5064) + 0.073913*(-0.103955395616*t2740*t4780 - 1.*t2667*t4848 + t5113) + 0.707107*(-1.*t2667*t4948 - 1.*t2740*t4956 + t5185))*var2[2] + (-0.151261*t5263 + 0.249652*t5285 - 0.176528*t5336 - 0.703234*(t5455*t5472 + t4796*t5501) + 0.073913*(t4885*t5501 + t5455*t5540) + 0.707107*(t5010*t5501 + t5455*t5604))*var2[3] + (-0.151261*t6415 + 0.249652*t6423 - 0.176528*t6430 - 0.703234*(t5455*t6456 + t4796*t6489 + t5976*t6510 + t5931*t6539) + 0.073913*(t4885*t6489 + t5871*t6510 + t5455*t6621 + t5931*t6642) + 0.707107*(t5010*t6489 + t6102*t6510 + t5455*t6666 + t5931*t6686))*var2[4] + (0.249652*t6158 - 0.151261*t6166 - 0.176528*t6175 + 0.073913*(t5455*t6213 + t4885*t6237 + t5871*t6248 + t5931*t6275) - 0.703234*(t4796*t6237 + t5976*t6248 + t5455*t6298 + t5931*t6322) + 0.707107*(t5010*t6237 + t6102*t6248 + t5455*t6360 + t5931*t6375))*var2[5] + (0.249652*t5688 - 0.151261*t5709 - 0.176528*t5735 + 0.073913*(t5455*t5751 + t4885*t5782 + t5859*t5871 + t5907*t5931) - 0.703234*(t4796*t5782 + t5455*t5966 + t5859*t5976 + t5931*t6029) + 0.707107*(t5010*t5782 + t5455*t6067 + t5931*t6080 + t5859*t6102))*var2[13] + (-0.176528*t6709 - 0.151261*t6718 + 0.249652*t6731 + 0.707107*(t5455*t6748 + t5931*t6758 + t6102*t6814 + t5010*t6829) - 0.703234*(t5976*t6814 + t4796*t6829 + t5931*t6852 + t5455*t6862) + 0.073913*(t5871*t6814 + t4885*t6829 + t5931*t6891 + t5455*t6902))*var2[14];
  p_output1[91]=(-0.703234*(t249*t4765 - 0.103955395616*t1797*t4780 - 1.*t1818*t4790) + 0.073913*(-0.103955395616*t1818*t4780 + t249*t4810 - 1.*t1797*t4848) + 0.707107*(t249*t4926 - 1.*t1797*t4948 - 1.*t1818*t4956))*var2[0] + t6991*var2[2] + (-0.151261*t5472 + 0.249652*t5540 - 0.176528*t5604 - 0.703234*(t5263*t7023 + t4796*t7376) + 0.073913*(t5285*t7023 + t4885*t7376) + 0.707107*(t5336*t7023 + t5010*t7376))*var2[3] + (-0.151261*t6456 + 0.249652*t6621 - 0.176528*t6666 - 0.703234*(t6415*t7023 + t6539*t7057 + t4796*t7197 + t5472*t7206) + 0.073913*(t6423*t7023 + t6642*t7057 + t4885*t7197 + t5540*t7206) + 0.707107*(t6430*t7023 + t6686*t7057 + t5010*t7197 + t5604*t7206))*var2[4] + (0.249652*t6213 - 0.151261*t6298 - 0.176528*t6360 - 0.703234*(t6166*t7023 + t6322*t7057 + t4796*t7128 + t5472*t7147) + 0.073913*(t6158*t7023 + t6275*t7057 + t4885*t7128 + t5540*t7147) + 0.707107*(t6175*t7023 + t6375*t7057 + t5010*t7128 + t5604*t7147))*var2[5] + (0.249652*t5751 - 0.151261*t5966 - 0.176528*t6067 + 0.073913*(t5688*t7023 + t4885*t7034 + t5540*t7045 + t5907*t7057) - 0.703234*(t5709*t7023 + t4796*t7034 + t5472*t7045 + t6029*t7057) + 0.707107*(t5735*t7023 + t5010*t7034 + t5604*t7045 + t6080*t7057))*var2[13] + (-0.176528*t6748 - 0.151261*t6862 + 0.249652*t6902 - 0.703234*(t6718*t7023 + t6852*t7057 + t5472*t7296 + t4796*t7318) + 0.073913*(t6731*t7023 + t6891*t7057 + t5540*t7296 + t4885*t7318) + 0.707107*(t6709*t7023 + t6758*t7057 + t5604*t7296 + t5010*t7318))*var2[14];
  p_output1[92]=(0.073913*t5871 - 0.703234*t5976 + 0.707107*t6102)*var2[0] + (-0.703234*(-1.*t110*t241*t4765 - 0.103955395616*t2207*t4780 - 1.*t2311*t4790) + 0.073913*(-0.103955395616*t2311*t4780 - 1.*t110*t241*t4810 - 1.*t2207*t4848) + 0.707107*(-1.*t110*t241*t4926 - 1.*t2207*t4948 - 1.*t2311*t4956))*var2[1] + (0.073913*(t5540*t7485 + t5285*t7501 + t5540*t7692 + t5871*t7704) - 0.703234*(t5472*t7485 + t5263*t7501 + t5472*t7692 + t5976*t7704) + 0.707107*(t5604*t7485 + t5336*t7501 + t5604*t7692 + t6102*t7704))*var2[3] + (-0.151261*t6539 + 0.249652*t6642 - 0.176528*t6686 - 0.703234*(t5472*t7482 + t6456*t7485 + t5976*t7494 + t6415*t7501) + 0.073913*(t5540*t7482 + t6621*t7485 + t5871*t7494 + t6423*t7501) + 0.707107*(t5604*t7482 + t6666*t7485 + t6102*t7494 + t6430*t7501))*var2[4] + (0.249652*t6275 - 0.151261*t6322 - 0.176528*t6375 + 0.073913*(t6213*t7485 + t6158*t7501 + t5540*t7567 + t5871*t7575) - 0.703234*(t6298*t7485 + t6166*t7501 + t5472*t7567 + t5976*t7575) + 0.707107*(t6360*t7485 + t6175*t7501 + t5604*t7567 + t6102*t7575))*var2[5] + (0.249652*t5907 - 0.151261*t6029 - 0.176528*t6080 + 0.073913*(t5751*t7485 + t5688*t7501 + t5540*t7638 + t5871*t7651) - 0.703234*(t5966*t7485 + t5709*t7501 + t5472*t7638 + t5976*t7651) + 0.707107*(t6067*t7485 + t5735*t7501 + t5604*t7638 + t6102*t7651))*var2[13] + (-0.176528*t6758 - 0.151261*t6852 + 0.249652*t6891 - 0.703234*(t6862*t7485 + t6718*t7501 + t5976*t7753 + t5472*t7767) + 0.073913*(t6902*t7485 + t6731*t7501 + t5871*t7753 + t5540*t7767) + 0.707107*(t6748*t7485 + t6709*t7501 + t6102*t7753 + t5604*t7767))*var2[14];
  p_output1[93]=(-0.703234*t5263 + 0.073913*t5285 + 0.707107*t5336)*var2[3] + (-0.703234*t6415 + 0.073913*t6423 + 0.707107*t6430)*var2[4] + (0.073913*t6158 - 0.703234*t6166 + 0.707107*t6175)*var2[5] + (0.073913*t5688 - 0.703234*t5709 + 0.707107*t5735)*var2[13] + (0.707107*t6709 - 0.703234*t6718 + 0.073913*t6731)*var2[14];
  p_output1[94]=t6991*var2[3] + (-0.703234*t6456 + 0.073913*t6621 + 0.707107*t6666)*var2[4] + (0.073913*t6213 - 0.703234*t6298 + 0.707107*t6360)*var2[5] + (0.073913*t5751 - 0.703234*t5966 + 0.707107*t6067)*var2[13] + (0.707107*t6748 - 0.703234*t6862 + 0.073913*t6902)*var2[14];
  p_output1[95]=(-0.703234*t6539 + 0.073913*t6642 + 0.707107*t6686)*var2[4] + (0.073913*t6275 - 0.703234*t6322 + 0.707107*t6375)*var2[5] + (0.073913*t5907 - 0.703234*t6029 + 0.707107*t6080)*var2[13] + (0.707107*t6758 - 0.703234*t6852 + 0.073913*t6891)*var2[14];
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void dJs_shoulder_yaw_joint_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
