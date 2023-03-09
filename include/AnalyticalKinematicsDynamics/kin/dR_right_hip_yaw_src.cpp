/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_right_hip_yaw_src.h"

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
  double t1080;
  double t1929;
  double t1568;
  double t2196;
  double t1983;
  double t2117;
  double t2337;
  double t2562;
  double t2700;
  double t1180;
  double t3062;
  double t1807;
  double t1916;
  double t3019;
  double t3067;
  double t3193;
  double t3254;
  double t3264;
  double t3285;
  double t3771;
  double t3789;
  double t3833;
  double t58;
  double t3722;
  double t3836;
  double t3845;
  double t3617;
  double t282;
  double t355;
  double t386;
  double t1051;
  double t4345;
  double t4367;
  double t4386;
  double t4411;
  double t4427;
  double t4443;
  double t4142;
  double t4176;
  double t4446;
  double t4649;
  double t4654;
  double t4657;
  double t4751;
  double t4754;
  double t4756;
  double t4748;
  double t4772;
  double t4779;
  double t4708;
  double t4978;
  double t5007;
  double t5013;
  double t5125;
  double t5131;
  double t5133;
  double t2139;
  double t2348;
  double t2438;
  double t2706;
  double t2723;
  double t2811;
  double t3205;
  double t3335;
  double t3429;
  double t5349;
  double t5351;
  double t3627;
  double t3632;
  double t5326;
  double t5327;
  double t3990;
  double t4001;
  double t4016;
  double t5292;
  double t5298;
  double t4406;
  double t4486;
  double t4488;
  double t4498;
  double t4507;
  double t5344;
  double t5346;
  double t4552;
  double t4571;
  double t4579;
  double t4590;
  double t4601;
  double t4602;
  double t5468;
  double t4670;
  double t4682;
  double t4716;
  double t4719;
  double t4799;
  double t4809;
  double t4814;
  double t4869;
  double t4891;
  double t5020;
  double t5036;
  double t5076;
  double t5201;
  double t5213;
  double t5222;
  double t5248;
  double t5249;
  double t5250;
  double t5259;
  double t5279;
  double t5282;
  double t5302;
  double t5304;
  double t5332;
  double t5333;
  double t5348;
  double t5369;
  double t5370;
  double t5374;
  double t5397;
  double t5404;
  double t5409;
  double t5429;
  double t5438;
  double t5442;
  double t5474;
  double t5507;
  double t5511;
  double t5521;
  double t5522;
  double t5552;
  double t5554;
  double t5555;
  double t5568;
  double t5570;
  double t5577;
  double t5578;
  double t5589;
  double t5600;
  double t5604;
  double t5614;
  double t5619;
  double t5634;
  double t5636;
  double t5638;
  double t5649;
  double t5662;
  double t5667;
  double t5673;
  double t5674;
  double t5682;
  double t5696;
  double t5701;
  double t5703;
  double t5719;
  double t5723;
  double t5732;
  double t5743;
  double t5744;
  double t5745;
  double t5747;
  double t5752;
  double t5765;
  double t5766;
  double t5781;
  double t5786;
  double t5789;
  double t5807;
  double t5817;
  double t5820;
  double t5827;
  double t5833;
  double t5836;
  double t5846;
  double t5848;
  double t5851;
  double t5854;
  double t5858;
  double t5863;
  double t5866;
  double t5870;
  double t5889;
  double t5894;
  double t5896;
  double t5902;
  double t5912;
  double t5914;
  double t5932;
  double t5939;
  double t5941;
  double t5946;
  double t5950;
  double t5951;
  double t5969;
  double t5973;
  double t5977;
  double t5979;
  double t5983;
  double t5984;
  double t5986;
  double t5991;
  double t6016;
  double t6020;
  double t6021;
  double t6031;
  double t6035;
  double t6046;
  double t6048;
  double t6049;
  t1080 = Cos(var1[3]);
  t1929 = Cos(var1[4]);
  t1568 = Sin(var1[18]);
  t2196 = Cos(var1[17]);
  t1983 = Cos(var1[5]);
  t2117 = Sin(var1[17]);
  t2337 = Sin(var1[5]);
  t2562 = 0.366501*t1568;
  t2700 = 0. + t2562;
  t1180 = Sin(var1[4]);
  t3062 = Sin(var1[3]);
  t1807 = -0.930418*t1568;
  t1916 = 0. + t1807;
  t3019 = t1080*t1983*t1180;
  t3067 = t3062*t2337;
  t3193 = t3019 + t3067;
  t3254 = t1983*t3062;
  t3264 = -1.*t1080*t1180*t2337;
  t3285 = t3254 + t3264;
  t3771 = -1.*t1983*t3062;
  t3789 = t1080*t1180*t2337;
  t3833 = t3771 + t3789;
  t58 = Cos(var1[18]);
  t3722 = -1.*t2117*t3193;
  t3836 = t2196*t3833;
  t3845 = t3722 + t3836;
  t3617 = t2196*t3193;
  t282 = -1.*t58;
  t355 = 1. + t282;
  t386 = -1.000000637725*t355;
  t1051 = 1. + t386;
  t4345 = -1.*t1983*t3062*t1180;
  t4367 = t1080*t2337;
  t4386 = t4345 + t4367;
  t4411 = -1.*t1080*t1983;
  t4427 = -1.*t3062*t1180*t2337;
  t4443 = t4411 + t4427;
  t4142 = t2117*t3833;
  t4176 = t3617 + t4142;
  t4446 = t2196*t4443;
  t4649 = t1983*t3062*t1180;
  t4654 = -1.*t1080*t2337;
  t4657 = t4649 + t4654;
  t4751 = t1080*t1983;
  t4754 = t3062*t1180*t2337;
  t4756 = t4751 + t4754;
  t4748 = -1.*t2117*t4657;
  t4772 = t2196*t4756;
  t4779 = t4748 + t4772;
  t4708 = t2196*t4657;
  t4978 = -1.*t1929*t1983*t2117;
  t5007 = t2196*t1929*t2337;
  t5013 = t4978 + t5007;
  t5125 = t2196*t1929*t1983;
  t5131 = t1929*t2117*t2337;
  t5133 = t5125 + t5131;
  t2139 = -1.*t1080*t1929*t1983*t2117;
  t2348 = t2196*t1080*t1929*t2337;
  t2438 = t2139 + t2348;
  t2706 = t2196*t1080*t1929*t1983;
  t2723 = t1080*t1929*t2117*t2337;
  t2811 = t2706 + t2723;
  t3205 = t2117*t3193;
  t3335 = t2196*t3285;
  t3429 = t3205 + t3335;
  t5349 = -0.8656776547239999*t355;
  t5351 = 1. + t5349;
  t3627 = -1.*t2117*t3285;
  t3632 = t3617 + t3627;
  t5326 = -0.134322983001*t355;
  t5327 = 1. + t5326;
  t3990 = -1.*t2196*t3193;
  t4001 = -1.*t2117*t3833;
  t4016 = t3990 + t4001;
  t5292 = -0.366501*t1568;
  t5298 = 0. + t5292;
  t4406 = -1.*t2117*t4386;
  t4486 = t4406 + t4446;
  t4488 = t2196*t4386;
  t4498 = t2117*t4443;
  t4507 = t4488 + t4498;
  t5344 = 0.930418*t1568;
  t5346 = 0. + t5344;
  t4552 = -1.*t1929*t1983*t2117*t3062;
  t4571 = t2196*t1929*t3062*t2337;
  t4579 = t4552 + t4571;
  t4590 = t2196*t1929*t1983*t3062;
  t4601 = t1929*t2117*t3062*t2337;
  t4602 = t4590 + t4601;
  t5468 = 0.340999127418*t355*t3845;
  t4670 = t2117*t4657;
  t4682 = t4670 + t4446;
  t4716 = -1.*t2117*t4443;
  t4719 = t4708 + t4716;
  t4799 = -1.*t2196*t4657;
  t4809 = -1.*t2117*t4756;
  t4814 = t4799 + t4809;
  t4869 = t2117*t4756;
  t4891 = t4708 + t4869;
  t5020 = -1.*t2196*t1929*t1983;
  t5036 = -1.*t1929*t2117*t2337;
  t5076 = t5020 + t5036;
  t5201 = t1929*t1983*t2117;
  t5213 = -1.*t2196*t1929*t2337;
  t5222 = t5201 + t5213;
  t5248 = t1983*t2117*t1180;
  t5249 = -1.*t2196*t1180*t2337;
  t5250 = t5248 + t5249;
  t5259 = -1.*t2196*t1983*t1180;
  t5279 = -1.*t2117*t1180*t2337;
  t5282 = t5259 + t5279;
  t5302 = -1.*t1080*t5298*t1180;
  t5304 = 0.340999127418*t355*t2438;
  t5332 = t5327*t2811;
  t5333 = t5302 + t5304 + t5332;
  t5348 = -1.*t1080*t5346*t1180;
  t5369 = t5351*t2438;
  t5370 = 0.340999127418*t355*t2811;
  t5374 = t5348 + t5369 + t5370;
  t5397 = 0.340999127418*t355*t3429;
  t5404 = t5351*t3632;
  t5409 = t5397 + t5404;
  t5429 = t5327*t3429;
  t5438 = 0.340999127418*t355*t3632;
  t5442 = t5429 + t5438;
  t5474 = t5351*t4016;
  t5507 = t5468 + t5474;
  t5511 = t5327*t3845;
  t5521 = 0.340999127418*t355*t4016;
  t5522 = t5511 + t5521;
  t5552 = -0.366501*t58*t1080*t1929;
  t5554 = 0.340999127418*t1568*t3845;
  t5555 = -0.134322983001*t1568*t4176;
  t5568 = t5552 + t5554 + t5555;
  t5570 = 0.930418*t58*t1080*t1929;
  t5577 = -0.8656776547239999*t1568*t3845;
  t5578 = 0.340999127418*t1568*t4176;
  t5589 = t5570 + t5577 + t5578;
  t5600 = -1.*t1929*t5298*t3062;
  t5604 = 0.340999127418*t355*t4486;
  t5614 = t5327*t4507;
  t5619 = t5600 + t5604 + t5614;
  t5634 = -1.*t1929*t5346*t3062;
  t5636 = t5351*t4486;
  t5638 = 0.340999127418*t355*t4507;
  t5649 = t5634 + t5636 + t5638;
  t5662 = -1.*t5298*t3062*t1180;
  t5667 = 0.340999127418*t355*t4579;
  t5673 = t5327*t4602;
  t5674 = t5662 + t5667 + t5673;
  t5682 = -1.*t5346*t3062*t1180;
  t5696 = t5351*t4579;
  t5701 = 0.340999127418*t355*t4602;
  t5703 = t5682 + t5696 + t5701;
  t5719 = t1080*t1929*t5298;
  t5723 = t5327*t4176;
  t5732 = t5719 + t5468 + t5723;
  t5743 = t1080*t1929*t5346;
  t5744 = t5351*t3845;
  t5745 = 0.340999127418*t355*t4176;
  t5747 = t5743 + t5744 + t5745;
  t5752 = 0.340999127418*t355*t4682;
  t5765 = t5351*t4719;
  t5766 = t5752 + t5765;
  t5781 = t5327*t4682;
  t5786 = 0.340999127418*t355*t4719;
  t5789 = t5781 + t5786;
  t5807 = 0.340999127418*t355*t4779;
  t5817 = t5351*t4814;
  t5820 = t5807 + t5817;
  t5827 = t5327*t4779;
  t5833 = 0.340999127418*t355*t4814;
  t5836 = t5827 + t5833;
  t5846 = -0.366501*t58*t1929*t3062;
  t5848 = 0.340999127418*t1568*t4779;
  t5851 = -0.134322983001*t1568*t4891;
  t5854 = t5846 + t5848 + t5851;
  t5858 = 0.930418*t58*t1929*t3062;
  t5863 = -0.8656776547239999*t1568*t4779;
  t5866 = 0.340999127418*t1568*t4891;
  t5870 = t5858 + t5863 + t5866;
  t5889 = 0.340999127418*t355*t5013;
  t5894 = t5351*t5076;
  t5896 = t5889 + t5894;
  t5902 = t5327*t5013;
  t5912 = 0.340999127418*t355*t5076;
  t5914 = t5902 + t5912;
  t5932 = 0.340999127418*t355*t5222;
  t5939 = t5351*t5133;
  t5941 = t5932 + t5939;
  t5946 = t5327*t5222;
  t5950 = 0.340999127418*t355*t5133;
  t5951 = t5946 + t5950;
  t5969 = 0.366501*t58*t1180;
  t5973 = 0.340999127418*t1568*t5013;
  t5977 = -0.134322983001*t1568*t5133;
  t5979 = t5969 + t5973 + t5977;
  t5983 = -0.930418*t58*t1180;
  t5984 = -0.8656776547239999*t1568*t5013;
  t5986 = 0.340999127418*t1568*t5133;
  t5991 = t5983 + t5984 + t5986;
  t6016 = -1.*t1929*t5298;
  t6020 = 0.340999127418*t355*t5250;
  t6021 = t5327*t5282;
  t6031 = t6016 + t6020 + t6021;
  t6035 = -1.*t1929*t5346;
  t6046 = t5351*t5250;
  t6048 = 0.340999127418*t355*t5282;
  t6049 = t6035 + t6046 + t6048;
  p_output1[0]=(t1051*t1929*t3062 - 1.*t1916*t4486 - 1.*t2700*t4507)*var2[3] + (t1051*t1080*t1180 - 1.*t1916*t2438 - 1.*t2700*t2811)*var2[4] + (-1.*t2700*t3429 - 1.*t1916*t3632)*var2[5] + (-1.*t2700*t3845 - 1.*t1916*t4016)*var2[17] + (1.000000637725*t1080*t1568*t1929 + 0.930418*t3845*t58 - 0.366501*t4176*t58)*var2[18];
  p_output1[1]=(-1.*t1051*t1080*t1929 - 1.*t1916*t3845 - 1.*t2700*t4176)*var2[3] + (t1051*t1180*t3062 - 1.*t1916*t4579 - 1.*t2700*t4602)*var2[4] + (-1.*t2700*t4682 - 1.*t1916*t4719)*var2[5] + (-1.*t2700*t4779 - 1.*t1916*t4814)*var2[17] + (1.000000637725*t1568*t1929*t3062 + 0.930418*t4779*t58 - 0.366501*t4891*t58)*var2[18];
  p_output1[2]=(t1051*t1929 - 1.*t1916*t5250 - 1.*t2700*t5282)*var2[4] + (-1.*t1916*t5133 - 1.*t2700*t5222)*var2[5] + (-1.*t2700*t5013 - 1.*t1916*t5076)*var2[17] + (-1.000000637725*t1180*t1568 + 0.930418*t5013*t58 - 0.366501*t5133*t58)*var2[18];
  p_output1[3]=(-0.366501*t5619 + 0.930418*t5649)*var2[3] + (-0.366501*t5333 + 0.930418*t5374)*var2[4] + (0.930418*t5409 - 0.366501*t5442)*var2[5] + (0.930418*t5507 - 0.366501*t5522)*var2[17] + (-0.366501*t5568 + 0.930418*t5589)*var2[18];
  p_output1[4]=(-0.366501*t5732 + 0.930418*t5747)*var2[3] + (-0.366501*t5674 + 0.930418*t5703)*var2[4] + (0.930418*t5766 - 0.366501*t5789)*var2[5] + (0.930418*t5820 - 0.366501*t5836)*var2[17] + (-0.366501*t5854 + 0.930418*t5870)*var2[18];
  p_output1[5]=(-0.366501*t6031 + 0.930418*t6049)*var2[4] + (0.930418*t5941 - 0.366501*t5951)*var2[5] + (0.930418*t5896 - 0.366501*t5914)*var2[17] + (-0.366501*t5979 + 0.930418*t5991)*var2[18];
  p_output1[6]=(-0.930418*t5619 - 0.366501*t5649)*var2[3] + (-0.930418*t5333 - 0.366501*t5374)*var2[4] + (-0.366501*t5409 - 0.930418*t5442)*var2[5] + (-0.366501*t5507 - 0.930418*t5522)*var2[17] + (-0.930418*t5568 - 0.366501*t5589)*var2[18];
  p_output1[7]=(-0.930418*t5732 - 0.366501*t5747)*var2[3] + (-0.930418*t5674 - 0.366501*t5703)*var2[4] + (-0.366501*t5766 - 0.930418*t5789)*var2[5] + (-0.366501*t5820 - 0.930418*t5836)*var2[17] + (-0.930418*t5854 - 0.366501*t5870)*var2[18];
  p_output1[8]=(-0.930418*t6031 - 0.366501*t6049)*var2[4] + (-0.366501*t5941 - 0.930418*t5951)*var2[5] + (-0.366501*t5896 - 0.930418*t5914)*var2[17] + (-0.930418*t5979 - 0.366501*t5991)*var2[18];
}



void dR_right_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
