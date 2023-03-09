/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right_src.h"

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
  double t211;
  double t1424;
  double t1575;
  double t1511;
  double t1579;
  double t1230;
  double t1281;
  double t1289;
  double t1614;
  double t1548;
  double t1610;
  double t1611;
  double t1346;
  double t1624;
  double t1651;
  double t1748;
  double t6;
  double t215;
  double t232;
  double t1613;
  double t1825;
  double t1827;
  double t2012;
  double t2013;
  double t2016;
  double t2581;
  double t2587;
  double t2615;
  double t596;
  double t1009;
  double t1176;
  double t1846;
  double t1978;
  double t2010;
  double t2181;
  double t2272;
  double t2408;
  double t2417;
  double t2422;
  double t2465;
  double t2470;
  double t2503;
  double t2567;
  double t2571;
  double t2705;
  double t2712;
  double t2731;
  double t2735;
  double t2741;
  double t2761;
  double t2770;
  double t2792;
  double t2803;
  double t2844;
  double t10;
  double t18;
  double t3175;
  double t3185;
  double t3193;
  double t3196;
  double t3204;
  double t3207;
  double t2345;
  double t2374;
  double t3194;
  double t3209;
  double t3217;
  double t3246;
  double t3293;
  double t3314;
  double t2630;
  double t2635;
  double t2901;
  double t2906;
  double t3172;
  double t3222;
  double t3317;
  double t3323;
  double t3326;
  double t3327;
  double t3328;
  double t3329;
  double t2971;
  double t2972;
  double t3353;
  double t3356;
  double t3364;
  double t3376;
  double t3025;
  double t3027;
  double t3080;
  double t3099;
  double t3483;
  double t3487;
  double t3494;
  double t3508;
  double t3530;
  double t3535;
  double t3479;
  double t3496;
  double t3541;
  double t3554;
  double t3557;
  double t3558;
  double t3559;
  double t3565;
  double t3576;
  double t3580;
  double t3587;
  double t3605;
  double t2307;
  double t2573;
  double t2862;
  double t2899;
  double t2961;
  double t2963;
  double t2984;
  double t2992;
  double t2998;
  double t3005;
  double t3043;
  double t3103;
  double t3116;
  double t3152;
  double t3325;
  double t3335;
  double t3388;
  double t3390;
  double t3401;
  double t3411;
  double t3412;
  double t3422;
  double t3426;
  double t3430;
  double t3433;
  double t3435;
  double t3451;
  double t3453;
  double t3555;
  double t3571;
  double t3609;
  double t3620;
  double t3642;
  double t3643;
  double t3644;
  double t3647;
  double t3673;
  double t3676;
  double t3708;
  double t3709;
  double t3735;
  double t3736;
  t211 = Cos(var1[3]);
  t1424 = Cos(var1[5]);
  t1575 = Sin(var1[3]);
  t1511 = Sin(var1[4]);
  t1579 = Sin(var1[5]);
  t1230 = Cos(var1[18]);
  t1281 = -1.*t1230;
  t1289 = 1. + t1281;
  t1614 = Cos(var1[17]);
  t1548 = t211*t1424*t1511;
  t1610 = t1575*t1579;
  t1611 = t1548 + t1610;
  t1346 = Sin(var1[17]);
  t1624 = -1.*t1424*t1575;
  t1651 = t211*t1511*t1579;
  t1748 = t1624 + t1651;
  t6 = Sin(var1[19]);
  t215 = Cos(var1[4]);
  t232 = Sin(var1[18]);
  t1613 = -1.*t1346*t1611;
  t1825 = t1614*t1748;
  t1827 = t1613 + t1825;
  t2012 = t1614*t1611;
  t2013 = t1346*t1748;
  t2016 = t2012 + t2013;
  t2581 = Cos(var1[19]);
  t2587 = -1.*t2581;
  t2615 = 1. + t2587;
  t596 = -0.366501*t232;
  t1009 = 0. + t596;
  t1176 = t211*t215*t1009;
  t1846 = 0.340999127418*t1289*t1827;
  t1978 = -0.134322983001*t1289;
  t2010 = 1. + t1978;
  t2181 = t2010*t2016;
  t2272 = t1176 + t1846 + t2181;
  t2408 = 0.930418*t232;
  t2417 = 0. + t2408;
  t2422 = t211*t215*t2417;
  t2465 = -0.8656776547239999*t1289;
  t2470 = 1. + t2465;
  t2503 = t2470*t1827;
  t2567 = 0.340999127418*t1289*t2016;
  t2571 = t2422 + t2503 + t2567;
  t2705 = -1.000000637725*t1289;
  t2712 = 1. + t2705;
  t2731 = t2712*t211*t215;
  t2735 = -0.930418*t232;
  t2741 = 0. + t2735;
  t2761 = t2741*t1827;
  t2770 = 0.366501*t232;
  t2792 = 0. + t2770;
  t2803 = t2792*t2016;
  t2844 = t2731 + t2761 + t2803;
  t10 = 0.930418*t6;
  t18 = 0. + t10;
  t3175 = t1424*t1575*t1511;
  t3185 = -1.*t211*t1579;
  t3193 = t3175 + t3185;
  t3196 = t211*t1424;
  t3204 = t1575*t1511*t1579;
  t3207 = t3196 + t3204;
  t2345 = 0.366501*t6;
  t2374 = 0. + t2345;
  t3194 = -1.*t1346*t3193;
  t3209 = t1614*t3207;
  t3217 = t3194 + t3209;
  t3246 = t1614*t3193;
  t3293 = t1346*t3207;
  t3314 = t3246 + t3293;
  t2630 = -1.000000637725*t2615;
  t2635 = 1. + t2630;
  t2901 = -0.8656776547239999*t2615;
  t2906 = 1. + t2901;
  t3172 = t215*t1009*t1575;
  t3222 = 0.340999127418*t1289*t3217;
  t3317 = t2010*t3314;
  t3323 = t3172 + t3222 + t3317;
  t3326 = t215*t2417*t1575;
  t3327 = t2470*t3217;
  t3328 = 0.340999127418*t1289*t3314;
  t3329 = t3326 + t3327 + t3328;
  t2971 = -0.930418*t6;
  t2972 = 0. + t2971;
  t3353 = t2712*t215*t1575;
  t3356 = t2741*t3217;
  t3364 = t2792*t3314;
  t3376 = t3353 + t3356 + t3364;
  t3025 = -0.134322983001*t2615;
  t3027 = 1. + t3025;
  t3080 = -0.366501*t6;
  t3099 = 0. + t3080;
  t3483 = -1.*t215*t1424*t1346;
  t3487 = t1614*t215*t1579;
  t3494 = t3483 + t3487;
  t3508 = t1614*t215*t1424;
  t3530 = t215*t1346*t1579;
  t3535 = t3508 + t3530;
  t3479 = -1.*t1009*t1511;
  t3496 = 0.340999127418*t1289*t3494;
  t3541 = t2010*t3535;
  t3554 = t3479 + t3496 + t3541;
  t3557 = -1.*t2417*t1511;
  t3558 = t2470*t3494;
  t3559 = 0.340999127418*t1289*t3535;
  t3565 = t3557 + t3558 + t3559;
  t3576 = -1.*t2712*t1511;
  t3580 = t2741*t3494;
  t3587 = t2792*t3535;
  t3605 = t3576 + t3580 + t3587;
  t2307 = t18*t2272;
  t2573 = t2374*t2571;
  t2862 = t2635*t2844;
  t2899 = t2307 + t2573 + t2862;
  t2961 = t2906*t2272;
  t2963 = -0.340999127418*t2615*t2571;
  t2984 = t2972*t2844;
  t2992 = t2961 + t2963 + t2984;
  t2998 = -0.657905*t2992;
  t3005 = -0.340999127418*t2615*t2272;
  t3043 = t3027*t2571;
  t3103 = t3099*t2844;
  t3116 = t3005 + t3043 + t3103;
  t3152 = -0.259155*t3116;
  t3325 = t18*t3323;
  t3335 = t2374*t3329;
  t3388 = t2635*t3376;
  t3390 = t3325 + t3335 + t3388;
  t3401 = t2906*t3323;
  t3411 = -0.340999127418*t2615*t3329;
  t3412 = t2972*t3376;
  t3422 = t3401 + t3411 + t3412;
  t3426 = -0.657905*t3422;
  t3430 = -0.340999127418*t2615*t3323;
  t3433 = t3027*t3329;
  t3435 = t3099*t3376;
  t3451 = t3430 + t3433 + t3435;
  t3453 = -0.259155*t3451;
  t3555 = t18*t3554;
  t3571 = t2374*t3565;
  t3609 = t2635*t3605;
  t3620 = t3555 + t3571 + t3609;
  t3642 = t2906*t3554;
  t3643 = -0.340999127418*t2615*t3565;
  t3644 = t2972*t3605;
  t3647 = t3642 + t3643 + t3644;
  t3673 = -0.657905*t3647;
  t3676 = -0.340999127418*t2615*t3554;
  t3708 = t3027*t3565;
  t3709 = t3099*t3605;
  t3735 = t3676 + t3708 + t3709;
  t3736 = -0.259155*t3735;
  p_output1[0]=0.707107*t2899 + t2998 + t3152;
  p_output1[1]=0.707107*t3390 + t3426 + t3453;
  p_output1[2]=0.707107*t3620 + t3673 + t3736;
  p_output1[3]=-0.707107*t2899 + t2998 + t3152;
  p_output1[4]=-0.707107*t3390 + t3426 + t3453;
  p_output1[5]=-0.707107*t3620 + t3673 + t3736;
  p_output1[6]=-0.366501*t2992 + 0.930418*t3116;
  p_output1[7]=-0.366501*t3422 + 0.930418*t3451;
  p_output1[8]=-0.366501*t3647 + 0.930418*t3735;
}



void R_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
