/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_knee_src.h"

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
  double t935;
  double t690;
  double t945;
  double t707;
  double t1103;
  double t1662;
  double t170;
  double t1224;
  double t1261;
  double t1293;
  double t895;
  double t1153;
  double t1175;
  double t1335;
  double t1514;
  double t1535;
  double t1554;
  double t2204;
  double t2318;
  double t2346;
  double t1868;
  double t1875;
  double t1926;
  double t1500;
  double t1951;
  double t2071;
  double t3049;
  double t3054;
  double t3059;
  double t2557;
  double t2684;
  double t1712;
  double t1738;
  double t1742;
  double t1750;
  double t3588;
  double t3627;
  double t3636;
  double t3640;
  double t3663;
  double t3754;
  double t3078;
  double t3086;
  double t3182;
  double t3191;
  double t3207;
  double t3231;
  double t3761;
  double t3409;
  double t3424;
  double t3447;
  double t3468;
  double t3473;
  double t3485;
  double t2931;
  double t2932;
  double t2977;
  double t3264;
  double t3266;
  double t3287;
  double t3489;
  double t3805;
  double t3863;
  double t3953;
  double t3979;
  double t4014;
  double t4061;
  double t4072;
  double t4107;
  double t4155;
  double t4193;
  double t4196;
  double t4208;
  double t4219;
  double t4265;
  double t4278;
  double t4310;
  double t4350;
  double t4366;
  double t4383;
  double t4396;
  double t4426;
  double t4427;
  double t4428;
  double t4539;
  double t4556;
  double t4622;
  double t4643;
  double t4796;
  double t4801;
  double t4015;
  double t4028;
  double t424;
  double t431;
  double t442;
  double t579;
  double t1370;
  double t1493;
  double t1581;
  double t1741;
  double t1767;
  double t1792;
  double t5462;
  double t5466;
  double t5510;
  double t5438;
  double t5452;
  double t5457;
  double t1928;
  double t1943;
  double t2127;
  double t2144;
  double t2354;
  double t2470;
  double t2706;
  double t2718;
  double t5606;
  double t5646;
  double t5648;
  double t5528;
  double t5534;
  double t5557;
  double t5767;
  double t5772;
  double t5792;
  double t5807;
  double t5733;
  double t5740;
  double t5741;
  double t5743;
  double t5747;
  double t5752;
  double t5753;
  double t5758;
  double t4302;
  double t4307;
  double t4500;
  double t4528;
  double t5746;
  double t5761;
  double t5827;
  double t5835;
  double t5865;
  double t5887;
  double t5890;
  double t5919;
  double t5930;
  double t5935;
  double t5963;
  double t5964;
  double t4683;
  double t4684;
  double t4862;
  double t4904;
  double t4909;
  double t4934;
  double t4958;
  double t4961;
  double t4970;
  double t4986;
  double t5006;
  double t5018;
  double t5030;
  double t5048;
  double t5094;
  double t5111;
  double t5123;
  double t5133;
  double t5139;
  double t5242;
  double t5264;
  double t5267;
  double t5318;
  double t5348;
  double t5363;
  double t5424;
  double t6314;
  double t6321;
  double t6350;
  double t6280;
  double t6296;
  double t6310;
  double t6474;
  double t6479;
  double t6484;
  double t6487;
  double t6363;
  double t6366;
  double t6367;
  double t6382;
  double t6388;
  double t6401;
  double t6405;
  double t6415;
  double t6385;
  double t6416;
  double t6492;
  double t6497;
  double t6528;
  double t6530;
  double t6537;
  double t6542;
  double t6548;
  double t6558;
  double t6567;
  double t6593;
  t935 = Cos(var1[3]);
  t690 = Cos(var1[5]);
  t945 = Sin(var1[4]);
  t707 = Sin(var1[3]);
  t1103 = Sin(var1[5]);
  t1662 = Sin(var1[7]);
  t170 = Cos(var1[6]);
  t1224 = t935*t690*t945;
  t1261 = t707*t1103;
  t1293 = t1224 + t1261;
  t895 = -1.*t690*t707;
  t1153 = t935*t945*t1103;
  t1175 = t895 + t1153;
  t1335 = Sin(var1[6]);
  t1514 = Cos(var1[7]);
  t1535 = -1.*t1514;
  t1554 = 1. + t1535;
  t2204 = t170*t1175;
  t2318 = -1.*t1293*t1335;
  t2346 = t2204 + t2318;
  t1868 = t170*t1293;
  t1875 = t1175*t1335;
  t1926 = t1868 + t1875;
  t1500 = Cos(var1[4]);
  t1951 = 0.366501*t1662;
  t2071 = 0. + t1951;
  t3049 = Cos(var1[8]);
  t3054 = -1.*t3049;
  t3059 = 1. + t3054;
  t2557 = 0.930418*t1662;
  t2684 = 0. + t2557;
  t1712 = -0.930418*t1662;
  t1738 = 0. + t1712;
  t1742 = -0.366501*t1662;
  t1750 = 0. + t1742;
  t3588 = -1.000000637725*t1554;
  t3627 = 1. + t3588;
  t3636 = t935*t1500*t3627;
  t3640 = t2346*t1738;
  t3663 = t1926*t1750;
  t3754 = t3636 + t3640 + t3663;
  t3078 = -0.340999127418*t1554*t2346;
  t3086 = -0.134322983001*t1554;
  t3182 = 1. + t3086;
  t3191 = t3182*t1926;
  t3207 = t935*t1500*t2071;
  t3231 = t3078 + t3191 + t3207;
  t3761 = Sin(var1[8]);
  t3409 = -0.8656776547239999*t1554;
  t3424 = 1. + t3409;
  t3447 = t3424*t2346;
  t3468 = -0.340999127418*t1554*t1926;
  t3473 = t935*t1500*t2684;
  t3485 = t3447 + t3468 + t3473;
  t2931 = Cos(var1[9]);
  t2932 = -1.*t2931;
  t2977 = 1. + t2932;
  t3264 = 0.340999127418*t3059*t3231;
  t3266 = -0.134322983001*t3059;
  t3287 = 1. + t3266;
  t3489 = t3287*t3485;
  t3805 = -0.366501*t3761;
  t3863 = 0. + t3805;
  t3953 = t3754*t3863;
  t3979 = t3264 + t3489 + t3953;
  t4014 = Sin(var1[9]);
  t4061 = -1.000000637725*t3059;
  t4072 = 1. + t4061;
  t4107 = t4072*t3754;
  t4155 = -0.930418*t3761;
  t4193 = 0. + t4155;
  t4196 = t3231*t4193;
  t4208 = 0.366501*t3761;
  t4219 = 0. + t4208;
  t4265 = t3485*t4219;
  t4278 = t4107 + t4196 + t4265;
  t4310 = -0.8656776547239999*t3059;
  t4350 = 1. + t4310;
  t4366 = t4350*t3231;
  t4383 = 0.340999127418*t3059*t3485;
  t4396 = 0.930418*t3761;
  t4426 = 0. + t4396;
  t4427 = t3754*t4426;
  t4428 = t4366 + t4383 + t4427;
  t4539 = 0.366501*t4014;
  t4556 = 0. + t4539;
  t4622 = -0.366501*t4014;
  t4643 = 0. + t4622;
  t4796 = 0.930418*t4014;
  t4801 = 0. + t4796;
  t4015 = -0.930418*t4014;
  t4028 = 0. + t4015;
  t424 = -1.*t170;
  t431 = 1. + t424;
  t442 = 0.091*t431;
  t579 = 0. + t442;
  t1370 = 0.091*t1335;
  t1493 = 0. + t1370;
  t1581 = -0.04500040093286238*t1554;
  t1741 = 0.07877663122399998*t1738;
  t1767 = 0.031030906668*t1750;
  t1792 = 0. + t1581 + t1741 + t1767;
  t5462 = t690*t707*t945;
  t5466 = -1.*t935*t1103;
  t5510 = t5462 + t5466;
  t5438 = t935*t690;
  t5452 = t707*t945*t1103;
  t5457 = t5438 + t5452;
  t1928 = -3.2909349868922137e-7*var1[7];
  t1943 = 0.03103092645718495*t1554;
  t2127 = -0.045000372235*t2071;
  t2144 = t1928 + t1943 + t2127;
  t2354 = 1.296332362046933e-7*var1[7];
  t2470 = 0.07877668146182712*t1554;
  t2706 = -0.045000372235*t2684;
  t2718 = t2354 + t2470 + t2706;
  t5606 = t170*t5457;
  t5646 = -1.*t5510*t1335;
  t5648 = t5606 + t5646;
  t5528 = t170*t5510;
  t5534 = t5457*t1335;
  t5557 = t5528 + t5534;
  t5767 = t1500*t3627*t707;
  t5772 = t5648*t1738;
  t5792 = t5557*t1750;
  t5807 = t5767 + t5772 + t5792;
  t5733 = -0.340999127418*t1554*t5648;
  t5740 = t3182*t5557;
  t5741 = t1500*t707*t2071;
  t5743 = t5733 + t5740 + t5741;
  t5747 = t3424*t5648;
  t5752 = -0.340999127418*t1554*t5557;
  t5753 = t1500*t707*t2684;
  t5758 = t5747 + t5752 + t5753;
  t4302 = -0.8656776547239999*t2977;
  t4307 = 1. + t4302;
  t4500 = -0.134322983001*t2977;
  t4528 = 1. + t4500;
  t5746 = 0.340999127418*t3059*t5743;
  t5761 = t3287*t5758;
  t5827 = t5807*t3863;
  t5835 = t5746 + t5761 + t5827;
  t5865 = t4072*t5807;
  t5887 = t5743*t4193;
  t5890 = t5758*t4219;
  t5919 = t5865 + t5887 + t5890;
  t5930 = t4350*t5743;
  t5935 = 0.340999127418*t3059*t5758;
  t5963 = t5807*t4426;
  t5964 = t5930 + t5935 + t5963;
  t4683 = -1.000000637725*t2977;
  t4684 = 1. + t4683;
  t4862 = 3.2909349868922137e-7*var1[8];
  t4904 = 0.055653945343889656*t3059;
  t4909 = -0.045000372235*t3863;
  t4934 = t4862 + t4904 + t4909;
  t4958 = -1.5981976069815686e-7*var1[9];
  t4961 = 0.08675267452931407*t2977;
  t4970 = 0.039853013046*t4556;
  t4986 = t4958 + t4961 + t4970;
  t5006 = -0.04500040093286238*t3059;
  t5018 = -0.141285834136*t4193;
  t5030 = 0.055653909852*t4219;
  t5048 = 0. + t5006 + t5018 + t5030;
  t5094 = 0.039853038461262744*t2977;
  t5111 = 0.086752619205*t4643;
  t5123 = -0.22023459268999998*t4801;
  t5133 = 0. + t5094 + t5111 + t5123;
  t5139 = 1.296332362046933e-7*var1[8];
  t5242 = -0.14128592423750855*t3059;
  t5264 = -0.045000372235*t4426;
  t5267 = t5139 + t5242 + t5264;
  t5318 = -6.295460977284962e-8*var1[9];
  t5348 = -0.22023473313910558*t2977;
  t5363 = 0.039853013046*t4028;
  t5424 = t5318 + t5348 + t5363;
  t6314 = t1500*t170*t1103;
  t6321 = -1.*t1500*t690*t1335;
  t6350 = t6314 + t6321;
  t6280 = t1500*t690*t170;
  t6296 = t1500*t1103*t1335;
  t6310 = t6280 + t6296;
  t6474 = -1.*t3627*t945;
  t6479 = t6350*t1738;
  t6484 = t6310*t1750;
  t6487 = t6474 + t6479 + t6484;
  t6363 = -0.340999127418*t1554*t6350;
  t6366 = t3182*t6310;
  t6367 = -1.*t945*t2071;
  t6382 = t6363 + t6366 + t6367;
  t6388 = t3424*t6350;
  t6401 = -0.340999127418*t1554*t6310;
  t6405 = -1.*t945*t2684;
  t6415 = t6388 + t6401 + t6405;
  t6385 = 0.340999127418*t3059*t6382;
  t6416 = t3287*t6415;
  t6492 = t6487*t3863;
  t6497 = t6385 + t6416 + t6492;
  t6528 = t4072*t6487;
  t6530 = t6382*t4193;
  t6537 = t6415*t4219;
  t6542 = t6528 + t6530 + t6537;
  t6548 = t4350*t6382;
  t6558 = 0.340999127418*t3059*t6415;
  t6567 = t6487*t4426;
  t6593 = t6548 + t6558 + t6567;
  p_output1[0]=0. + t1293*t1493 + t1926*t2144 + t2346*t2718 - 0.274521*(0.340999127418*t2977*t3979 + t4028*t4278 + t4307*t4428) + 0.197083*(0.340999127418*t2977*t4428 + t3979*t4528 + t4278*t4556) - 0.010507*(t3979*t4643 + t4278*t4684 + t4428*t4801) + t3485*t4934 + t3979*t4986 + t3754*t5048 + t4278*t5133 + t3231*t5267 + t4428*t5424 + t1175*t579 + t1500*t1792*t935 + var1[0];
  p_output1[1]=0. + t1493*t5510 + t2144*t5557 + t2718*t5648 + t5267*t5743 + t4934*t5758 + t5457*t579 + t5048*t5807 + t4986*t5835 + t5133*t5919 + t5424*t5964 + 0.197083*(t4528*t5835 + t4556*t5919 + 0.340999127418*t2977*t5964) - 0.274521*(0.340999127418*t2977*t5835 + t4028*t5919 + t4307*t5964) - 0.010507*(t4643*t5835 + t4684*t5919 + t4801*t5964) + t1500*t1792*t707 + var1[1];
  p_output1[2]=0. + t1103*t1500*t579 + t2144*t6310 + t2718*t6350 + t5267*t6382 + t4934*t6415 + t5048*t6487 + t4986*t6497 + t5133*t6542 + t5424*t6593 + 0.197083*(t4528*t6497 + t4556*t6542 + 0.340999127418*t2977*t6593) - 0.274521*(0.340999127418*t2977*t6497 + t4028*t6542 + t4307*t6593) - 0.010507*(t4643*t6497 + t4684*t6542 + t4801*t6593) + t1493*t1500*t690 - 1.*t1792*t945 + var1[2];
}



void p_left_knee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
