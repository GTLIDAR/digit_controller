/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:57:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_tarsus_src.h"

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
  double t972;
  double t853;
  double t1308;
  double t888;
  double t1330;
  double t1912;
  double t396;
  double t1436;
  double t1455;
  double t1545;
  double t892;
  double t1407;
  double t1414;
  double t1548;
  double t1808;
  double t1850;
  double t1881;
  double t2495;
  double t2589;
  double t2689;
  double t2023;
  double t2051;
  double t2101;
  double t1806;
  double t2391;
  double t2444;
  double t3212;
  double t3238;
  double t3242;
  double t2839;
  double t2886;
  double t1916;
  double t1931;
  double t1949;
  double t1960;
  double t3616;
  double t3647;
  double t3770;
  double t3862;
  double t3886;
  double t3929;
  double t3291;
  double t3309;
  double t3375;
  double t3376;
  double t3401;
  double t3458;
  double t3964;
  double t3486;
  double t3494;
  double t3505;
  double t3547;
  double t3594;
  double t3611;
  double t3130;
  double t3160;
  double t3200;
  double t3060;
  double t3461;
  double t3471;
  double t3478;
  double t3613;
  double t4031;
  double t4033;
  double t4068;
  double t4078;
  double t4145;
  double t4154;
  double t4184;
  double t4194;
  double t4269;
  double t4317;
  double t4321;
  double t4352;
  double t4356;
  double t4362;
  double t4372;
  double t4539;
  double t4541;
  double t4584;
  double t4600;
  double t4608;
  double t4609;
  double t4615;
  double t4617;
  double t4829;
  double t4836;
  double t4893;
  double t4118;
  double t4150;
  double t4152;
  double t4386;
  double t4402;
  double t4528;
  double t4622;
  double t4623;
  double t4696;
  double t4708;
  double t4713;
  double t4716;
  double t4725;
  double t4750;
  double t4772;
  double t4786;
  double t4910;
  double t4913;
  double t4943;
  double t4944;
  double t4945;
  double t4946;
  double t4948;
  double t4959;
  double t4966;
  double t4980;
  double t5061;
  double t5075;
  double t5160;
  double t5168;
  double t4668;
  double t4686;
  double t3083;
  double t3088;
  double t411;
  double t464;
  double t577;
  double t716;
  double t1549;
  double t1635;
  double t1897;
  double t1934;
  double t1961;
  double t2001;
  double t5714;
  double t5715;
  double t5717;
  double t5683;
  double t5699;
  double t5708;
  double t2145;
  double t2225;
  double t2471;
  double t2476;
  double t2695;
  double t2705;
  double t2888;
  double t2966;
  double t5783;
  double t5785;
  double t5786;
  double t5754;
  double t5757;
  double t5775;
  double t5932;
  double t5943;
  double t5962;
  double t5965;
  double t5803;
  double t5804;
  double t5820;
  double t5828;
  double t5841;
  double t5846;
  double t5851;
  double t5861;
  double t5830;
  double t5894;
  double t5975;
  double t5987;
  double t5995;
  double t6000;
  double t6004;
  double t6035;
  double t6051;
  double t6062;
  double t6070;
  double t6072;
  double t4903;
  double t4908;
  double t5042;
  double t5044;
  double t5994;
  double t6040;
  double t6090;
  double t6098;
  double t6106;
  double t6112;
  double t6116;
  double t6117;
  double t6134;
  double t6139;
  double t6162;
  double t6163;
  double t5129;
  double t5137;
  double t5196;
  double t5197;
  double t5200;
  double t5207;
  double t5229;
  double t5231;
  double t5252;
  double t5279;
  double t5322;
  double t5332;
  double t5336;
  double t5352;
  double t5377;
  double t5384;
  double t5400;
  double t5404;
  double t5461;
  double t5469;
  double t5472;
  double t5484;
  double t5512;
  double t5516;
  double t5517;
  double t5527;
  double t5545;
  double t5556;
  double t5560;
  double t5564;
  double t5580;
  double t5581;
  double t5592;
  double t5593;
  double t5653;
  double t5654;
  double t5662;
  double t5670;
  double t6341;
  double t6342;
  double t6346;
  double t6325;
  double t6333;
  double t6339;
  double t6412;
  double t6425;
  double t6452;
  double t6461;
  double t6353;
  double t6355;
  double t6356;
  double t6357;
  double t6365;
  double t6377;
  double t6382;
  double t6385;
  double t6358;
  double t6394;
  double t6469;
  double t6476;
  double t6492;
  double t6496;
  double t6499;
  double t6500;
  double t6518;
  double t6526;
  double t6529;
  double t6534;
  double t6486;
  double t6510;
  double t6535;
  double t6544;
  double t6549;
  double t6550;
  double t6554;
  double t6563;
  double t6581;
  double t6582;
  double t6593;
  double t6599;
  t972 = Cos(var1[3]);
  t853 = Cos(var1[5]);
  t1308 = Sin(var1[4]);
  t888 = Sin(var1[3]);
  t1330 = Sin(var1[5]);
  t1912 = Sin(var1[7]);
  t396 = Cos(var1[6]);
  t1436 = t972*t853*t1308;
  t1455 = t888*t1330;
  t1545 = t1436 + t1455;
  t892 = -1.*t853*t888;
  t1407 = t972*t1308*t1330;
  t1414 = t892 + t1407;
  t1548 = Sin(var1[6]);
  t1808 = Cos(var1[7]);
  t1850 = -1.*t1808;
  t1881 = 1. + t1850;
  t2495 = t396*t1414;
  t2589 = -1.*t1545*t1548;
  t2689 = t2495 + t2589;
  t2023 = t396*t1545;
  t2051 = t1414*t1548;
  t2101 = t2023 + t2051;
  t1806 = Cos(var1[4]);
  t2391 = 0.366501*t1912;
  t2444 = 0. + t2391;
  t3212 = Cos(var1[8]);
  t3238 = -1.*t3212;
  t3242 = 1. + t3238;
  t2839 = 0.930418*t1912;
  t2886 = 0. + t2839;
  t1916 = -0.930418*t1912;
  t1931 = 0. + t1916;
  t1949 = -0.366501*t1912;
  t1960 = 0. + t1949;
  t3616 = -1.000000637725*t1881;
  t3647 = 1. + t3616;
  t3770 = t972*t1806*t3647;
  t3862 = t2689*t1931;
  t3886 = t2101*t1960;
  t3929 = t3770 + t3862 + t3886;
  t3291 = -0.340999127418*t1881*t2689;
  t3309 = -0.134322983001*t1881;
  t3375 = 1. + t3309;
  t3376 = t3375*t2101;
  t3401 = t972*t1806*t2444;
  t3458 = t3291 + t3376 + t3401;
  t3964 = Sin(var1[8]);
  t3486 = -0.8656776547239999*t1881;
  t3494 = 1. + t3486;
  t3505 = t3494*t2689;
  t3547 = -0.340999127418*t1881*t2101;
  t3594 = t972*t1806*t2886;
  t3611 = t3505 + t3547 + t3594;
  t3130 = Cos(var1[9]);
  t3160 = -1.*t3130;
  t3200 = 1. + t3160;
  t3060 = Sin(var1[10]);
  t3461 = 0.340999127418*t3242*t3458;
  t3471 = -0.134322983001*t3242;
  t3478 = 1. + t3471;
  t3613 = t3478*t3611;
  t4031 = -0.366501*t3964;
  t4033 = 0. + t4031;
  t4068 = t3929*t4033;
  t4078 = t3461 + t3613 + t4068;
  t4145 = Sin(var1[9]);
  t4154 = -1.000000637725*t3242;
  t4184 = 1. + t4154;
  t4194 = t4184*t3929;
  t4269 = -0.930418*t3964;
  t4317 = 0. + t4269;
  t4321 = t3458*t4317;
  t4352 = 0.366501*t3964;
  t4356 = 0. + t4352;
  t4362 = t3611*t4356;
  t4372 = t4194 + t4321 + t4362;
  t4539 = -0.8656776547239999*t3242;
  t4541 = 1. + t4539;
  t4584 = t4541*t3458;
  t4600 = 0.340999127418*t3242*t3611;
  t4608 = 0.930418*t3964;
  t4609 = 0. + t4608;
  t4615 = t3929*t4609;
  t4617 = t4584 + t4600 + t4615;
  t4829 = Cos(var1[10]);
  t4836 = -1.*t4829;
  t4893 = 1. + t4836;
  t4118 = 0.340999127418*t3200*t4078;
  t4150 = -0.930418*t4145;
  t4152 = 0. + t4150;
  t4386 = t4152*t4372;
  t4402 = -0.8656776547239999*t3200;
  t4528 = 1. + t4402;
  t4622 = t4528*t4617;
  t4623 = t4118 + t4386 + t4622;
  t4696 = -0.134322983001*t3200;
  t4708 = 1. + t4696;
  t4713 = t4708*t4078;
  t4716 = 0.366501*t4145;
  t4725 = 0. + t4716;
  t4750 = t4725*t4372;
  t4772 = 0.340999127418*t3200*t4617;
  t4786 = t4713 + t4750 + t4772;
  t4910 = -0.366501*t4145;
  t4913 = 0. + t4910;
  t4943 = t4913*t4078;
  t4944 = -1.000000637725*t3200;
  t4945 = 1. + t4944;
  t4946 = t4945*t4372;
  t4948 = 0.930418*t4145;
  t4959 = 0. + t4948;
  t4966 = t4959*t4617;
  t4980 = t4943 + t4946 + t4966;
  t5061 = -0.930418*t3060;
  t5075 = 0. + t5061;
  t5160 = 0.366501*t3060;
  t5168 = 0. + t5160;
  t4668 = -0.366501*t3060;
  t4686 = 0. + t4668;
  t3083 = 0.930418*t3060;
  t3088 = 0. + t3083;
  t411 = -1.*t396;
  t464 = 1. + t411;
  t577 = 0.091*t464;
  t716 = 0. + t577;
  t1549 = 0.091*t1548;
  t1635 = 0. + t1549;
  t1897 = -0.04500040093286238*t1881;
  t1934 = 0.07877663122399998*t1931;
  t1961 = 0.031030906668*t1960;
  t2001 = 0. + t1897 + t1934 + t1961;
  t5714 = t853*t888*t1308;
  t5715 = -1.*t972*t1330;
  t5717 = t5714 + t5715;
  t5683 = t972*t853;
  t5699 = t888*t1308*t1330;
  t5708 = t5683 + t5699;
  t2145 = -3.2909349868922137e-7*var1[7];
  t2225 = 0.03103092645718495*t1881;
  t2471 = -0.045000372235*t2444;
  t2476 = t2145 + t2225 + t2471;
  t2695 = 1.296332362046933e-7*var1[7];
  t2705 = 0.07877668146182712*t1881;
  t2888 = -0.045000372235*t2886;
  t2966 = t2695 + t2705 + t2888;
  t5783 = t396*t5708;
  t5785 = -1.*t5717*t1548;
  t5786 = t5783 + t5785;
  t5754 = t396*t5717;
  t5757 = t5708*t1548;
  t5775 = t5754 + t5757;
  t5932 = t1806*t3647*t888;
  t5943 = t5786*t1931;
  t5962 = t5775*t1960;
  t5965 = t5932 + t5943 + t5962;
  t5803 = -0.340999127418*t1881*t5786;
  t5804 = t3375*t5775;
  t5820 = t1806*t888*t2444;
  t5828 = t5803 + t5804 + t5820;
  t5841 = t3494*t5786;
  t5846 = -0.340999127418*t1881*t5775;
  t5851 = t1806*t888*t2886;
  t5861 = t5841 + t5846 + t5851;
  t5830 = 0.340999127418*t3242*t5828;
  t5894 = t3478*t5861;
  t5975 = t5965*t4033;
  t5987 = t5830 + t5894 + t5975;
  t5995 = t4184*t5965;
  t6000 = t5828*t4317;
  t6004 = t5861*t4356;
  t6035 = t5995 + t6000 + t6004;
  t6051 = t4541*t5828;
  t6062 = 0.340999127418*t3242*t5861;
  t6070 = t5965*t4609;
  t6072 = t6051 + t6062 + t6070;
  t4903 = -1.000000637725*t4893;
  t4908 = 1. + t4903;
  t5042 = -0.8656776547239999*t4893;
  t5044 = 1. + t5042;
  t5994 = 0.340999127418*t3200*t5987;
  t6040 = t4152*t6035;
  t6090 = t4528*t6072;
  t6098 = t5994 + t6040 + t6090;
  t6106 = t4708*t5987;
  t6112 = t4725*t6035;
  t6116 = 0.340999127418*t3200*t6072;
  t6117 = t6106 + t6112 + t6116;
  t6134 = t4913*t5987;
  t6139 = t4945*t6035;
  t6162 = t4959*t6072;
  t6163 = t6134 + t6139 + t6162;
  t5129 = -0.134322983001*t4893;
  t5137 = 1. + t5129;
  t5196 = 2.281945176511838e-8*var1[10];
  t5197 = -0.5905366811997648*t4893;
  t5200 = -0.262809976934*t5075;
  t5207 = t5196 + t5197 + t5200;
  t5229 = 5.7930615939377813e-8*var1[10];
  t5231 = 0.23261833304643187*t4893;
  t5252 = -0.262809976934*t5168;
  t5279 = t5229 + t5231 + t5252;
  t5322 = -0.26281014453449253*t4893;
  t5332 = 0.23261818470000004*t4686;
  t5336 = -0.5905363046000001*t3088;
  t5352 = 0. + t5322 + t5332 + t5336;
  t5377 = 3.2909349868922137e-7*var1[8];
  t5384 = 0.055653945343889656*t3242;
  t5400 = -0.045000372235*t4033;
  t5404 = t5377 + t5384 + t5400;
  t5461 = -1.5981976069815686e-7*var1[9];
  t5469 = 0.08675267452931407*t3200;
  t5472 = 0.039853013046*t4725;
  t5484 = t5461 + t5469 + t5472;
  t5512 = -0.04500040093286238*t3242;
  t5516 = -0.141285834136*t4317;
  t5517 = 0.055653909852*t4356;
  t5527 = 0. + t5512 + t5516 + t5517;
  t5545 = 0.039853038461262744*t3200;
  t5556 = 0.086752619205*t4913;
  t5560 = -0.22023459268999998*t4959;
  t5564 = 0. + t5545 + t5556 + t5560;
  t5580 = 1.296332362046933e-7*var1[8];
  t5581 = -0.14128592423750855*t3242;
  t5592 = -0.045000372235*t4609;
  t5593 = t5580 + t5581 + t5592;
  t5653 = -6.295460977284962e-8*var1[9];
  t5654 = -0.22023473313910558*t3200;
  t5662 = 0.039853013046*t4152;
  t5670 = t5653 + t5654 + t5662;
  t6341 = t1806*t396*t1330;
  t6342 = -1.*t1806*t853*t1548;
  t6346 = t6341 + t6342;
  t6325 = t1806*t853*t396;
  t6333 = t1806*t1330*t1548;
  t6339 = t6325 + t6333;
  t6412 = -1.*t3647*t1308;
  t6425 = t6346*t1931;
  t6452 = t6339*t1960;
  t6461 = t6412 + t6425 + t6452;
  t6353 = -0.340999127418*t1881*t6346;
  t6355 = t3375*t6339;
  t6356 = -1.*t1308*t2444;
  t6357 = t6353 + t6355 + t6356;
  t6365 = t3494*t6346;
  t6377 = -0.340999127418*t1881*t6339;
  t6382 = -1.*t1308*t2886;
  t6385 = t6365 + t6377 + t6382;
  t6358 = 0.340999127418*t3242*t6357;
  t6394 = t3478*t6385;
  t6469 = t6461*t4033;
  t6476 = t6358 + t6394 + t6469;
  t6492 = t4184*t6461;
  t6496 = t6357*t4317;
  t6499 = t6385*t4356;
  t6500 = t6492 + t6496 + t6499;
  t6518 = t4541*t6357;
  t6526 = 0.340999127418*t3242*t6385;
  t6529 = t6461*t4609;
  t6534 = t6518 + t6526 + t6529;
  t6486 = 0.340999127418*t3200*t6476;
  t6510 = t4152*t6500;
  t6535 = t4528*t6534;
  t6544 = t6486 + t6510 + t6535;
  t6549 = t4708*t6476;
  t6550 = t4725*t6500;
  t6554 = 0.340999127418*t3200*t6534;
  t6563 = t6549 + t6550 + t6554;
  t6581 = t4913*t6476;
  t6582 = t4945*t6500;
  t6593 = t4959*t6534;
  t6599 = t6581 + t6582 + t6593;
  p_output1[0]=0. + t1545*t1635 + t2101*t2476 + t2689*t2966 - 0.277485*(t3088*t4623 + t4686*t4786 + t4908*t4980) - 0.58342*(0.340999127418*t4786*t4893 + t4623*t5044 + t4980*t5075) + 0.319547*(0.340999127418*t4623*t4893 + t4786*t5137 + t4980*t5168) + t4623*t5207 + t4786*t5279 + t4980*t5352 + t3611*t5404 + t4078*t5484 + t3929*t5527 + t4372*t5564 + t3458*t5593 + t4617*t5670 + t1414*t716 + t1806*t2001*t972 + var1[0];
  p_output1[1]=0. + t1635*t5717 + t2476*t5775 + t2966*t5786 + t5593*t5828 + t5404*t5861 + t5527*t5965 + t5484*t5987 + t5564*t6035 + t5670*t6072 + t5207*t6098 + t5279*t6117 + t5352*t6163 - 0.277485*(t3088*t6098 + t4686*t6117 + t4908*t6163) - 0.58342*(t5044*t6098 + 0.340999127418*t4893*t6117 + t5075*t6163) + 0.319547*(0.340999127418*t4893*t6098 + t5137*t6117 + t5168*t6163) + t5708*t716 + t1806*t2001*t888 + var1[1];
  p_output1[2]=0. - 1.*t1308*t2001 + t2476*t6339 + t2966*t6346 + t5593*t6357 + t5404*t6385 + t5527*t6461 + t5484*t6476 + t5564*t6500 + t5670*t6534 + t5207*t6544 + t5279*t6563 + t5352*t6599 - 0.277485*(t3088*t6544 + t4686*t6563 + t4908*t6599) - 0.58342*(t5044*t6544 + 0.340999127418*t4893*t6563 + t5075*t6599) + 0.319547*(0.340999127418*t4893*t6544 + t5137*t6563 + t5168*t6599) + t1330*t1806*t716 + t1635*t1806*t853 + var1[2];
}



void p_left_tarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
