/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right_src.h"

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
  double t445;
  double t93;
  double t1595;
  double t2096;
  double t1761;
  double t2102;
  double t286;
  double t292;
  double t302;
  double t1285;
  double t1897;
  double t2221;
  double t2266;
  double t2451;
  double t2555;
  double t2566;
  double t2583;
  double t168;
  double t3304;
  double t3329;
  double t2865;
  double t2888;
  double t2890;
  double t3376;
  double t3388;
  double t3394;
  double t3494;
  double t3496;
  double t3508;
  double t3530;
  double t2742;
  double t2753;
  double t457;
  double t564;
  double t649;
  double t656;
  double t4120;
  double t3984;
  double t3998;
  double t3609;
  double t3623;
  double t3640;
  double t3642;
  double t3643;
  double t3644;
  double t3968;
  double t3969;
  double t3818;
  double t3841;
  double t3854;
  double t3857;
  double t3911;
  double t3915;
  double t4017;
  double t4029;
  double t4032;
  double t4039;
  double t4043;
  double t4049;
  double t4065;
  double t4081;
  double t4084;
  double t3534;
  double t3535;
  double t3784;
  double t3789;
  double t4310;
  double t4312;
  double t4197;
  double t4198;
  double t4203;
  double t4207;
  double t4209;
  double t4210;
  double t4266;
  double t4267;
  double t4273;
  double t4275;
  double t4287;
  double t4290;
  double t4337;
  double t4342;
  double t4349;
  double t4350;
  double t4355;
  double t4360;
  double t4220;
  double t4232;
  double t4143;
  double t4159;
  double t4171;
  double t4175;
  double t351;
  double t643;
  double t738;
  double t797;
  double t1314;
  double t1425;
  double t2476;
  double t2497;
  double t2503;
  double t2512;
  double t2699;
  double t2715;
  double t2777;
  double t2805;
  double t4542;
  double t4551;
  double t4558;
  double t4564;
  double t4575;
  double t4583;
  double t3226;
  double t3284;
  double t3335;
  double t3364;
  double t3487;
  double t3514;
  double t3566;
  double t3605;
  double t4618;
  double t4621;
  double t4623;
  double t4635;
  double t4642;
  double t4645;
  double t3698;
  double t3753;
  double t3792;
  double t3798;
  double t3962;
  double t3974;
  double t4006;
  double t4016;
  double t4110;
  double t4160;
  double t4176;
  double t4192;
  double t4686;
  double t4730;
  double t4735;
  double t4737;
  double t4746;
  double t4752;
  double t4757;
  double t4759;
  double t4767;
  double t4768;
  double t4771;
  double t4778;
  double t4214;
  double t4215;
  double t4254;
  double t4262;
  double t4297;
  double t4304;
  double t4315;
  double t4334;
  double t4783;
  double t4785;
  double t4789;
  double t4791;
  double t4810;
  double t4813;
  double t4816;
  double t4820;
  double t4396;
  double t4399;
  double t4829;
  double t4832;
  double t4849;
  double t4851;
  double t4429;
  double t4431;
  double t4449;
  double t4459;
  double t4991;
  double t4997;
  double t4998;
  double t5002;
  double t5010;
  double t5012;
  double t5031;
  double t5033;
  double t5036;
  double t5037;
  double t5045;
  double t5058;
  double t5059;
  double t5065;
  double t5073;
  double t5080;
  double t5081;
  double t5093;
  double t5101;
  double t5119;
  double t5132;
  double t5133;
  double t5141;
  double t5154;
  double t5156;
  double t5157;
  double t5169;
  double t5171;
  double t5172;
  double t5175;
  t445 = Sin(var1[18]);
  t93 = Cos(var1[3]);
  t1595 = Cos(var1[5]);
  t2096 = Sin(var1[3]);
  t1761 = Sin(var1[4]);
  t2102 = Sin(var1[5]);
  t286 = Cos(var1[18]);
  t292 = -1.*t286;
  t302 = 1. + t292;
  t1285 = Sin(var1[17]);
  t1897 = t93*t1595*t1761;
  t2221 = t2096*t2102;
  t2266 = t1897 + t2221;
  t2451 = Cos(var1[17]);
  t2555 = -1.*t1595*t2096;
  t2566 = t93*t1761*t2102;
  t2583 = t2555 + t2566;
  t168 = Cos(var1[4]);
  t3304 = -0.366501*t445;
  t3329 = 0. + t3304;
  t2865 = -1.*t1285*t2266;
  t2888 = t2451*t2583;
  t2890 = t2865 + t2888;
  t3376 = t2451*t2266;
  t3388 = t1285*t2583;
  t3394 = t3376 + t3388;
  t3494 = Cos(var1[19]);
  t3496 = -1.*t3494;
  t3508 = 1. + t3496;
  t3530 = Sin(var1[19]);
  t2742 = 0.930418*t445;
  t2753 = 0. + t2742;
  t457 = -0.930418*t445;
  t564 = 0. + t457;
  t649 = 0.366501*t445;
  t656 = 0. + t649;
  t4120 = Sin(var1[20]);
  t3984 = 0.930418*t3530;
  t3998 = 0. + t3984;
  t3609 = t93*t168*t3329;
  t3623 = 0.340999127418*t302*t2890;
  t3640 = -0.134322983001*t302;
  t3642 = 1. + t3640;
  t3643 = t3642*t3394;
  t3644 = t3609 + t3623 + t3643;
  t3968 = 0.366501*t3530;
  t3969 = 0. + t3968;
  t3818 = t93*t168*t2753;
  t3841 = -0.8656776547239999*t302;
  t3854 = 1. + t3841;
  t3857 = t3854*t2890;
  t3911 = 0.340999127418*t302*t3394;
  t3915 = t3818 + t3857 + t3911;
  t4017 = -1.000000637725*t302;
  t4029 = 1. + t4017;
  t4032 = t4029*t93*t168;
  t4039 = t564*t2890;
  t4043 = t656*t3394;
  t4049 = t4032 + t4039 + t4043;
  t4065 = Cos(var1[20]);
  t4081 = -1.*t4065;
  t4084 = 1. + t4081;
  t3534 = -0.930418*t3530;
  t3535 = 0. + t3534;
  t3784 = -0.366501*t3530;
  t3789 = 0. + t3784;
  t4310 = 0.366501*t4120;
  t4312 = 0. + t4310;
  t4197 = t3998*t3644;
  t4198 = t3969*t3915;
  t4203 = -1.000000637725*t3508;
  t4207 = 1. + t4203;
  t4209 = t4207*t4049;
  t4210 = t4197 + t4198 + t4209;
  t4266 = -0.8656776547239999*t3508;
  t4267 = 1. + t4266;
  t4273 = t4267*t3644;
  t4275 = -0.340999127418*t3508*t3915;
  t4287 = t3535*t4049;
  t4290 = t4273 + t4275 + t4287;
  t4337 = -0.340999127418*t3508*t3644;
  t4342 = -0.134322983001*t3508;
  t4349 = 1. + t4342;
  t4350 = t4349*t3915;
  t4355 = t3789*t4049;
  t4360 = t4337 + t4350 + t4355;
  t4220 = 0.930418*t4120;
  t4232 = 0. + t4220;
  t4143 = -0.930418*t4120;
  t4159 = 0. + t4143;
  t4171 = -0.366501*t4120;
  t4175 = 0. + t4171;
  t351 = -0.04500040093286238*t302;
  t643 = -0.07877663122399998*t564;
  t738 = 0.031030906668*t656;
  t797 = 0. + t351 + t643 + t738;
  t1314 = -0.091*t1285;
  t1425 = 0. + t1314;
  t2476 = -1.*t2451;
  t2497 = 1. + t2476;
  t2503 = -0.091*t2497;
  t2512 = 0. + t2503;
  t2699 = 1.296332362046933e-7*var1[18];
  t2715 = -0.07877668146182712*t302;
  t2777 = -0.045000372235*t2753;
  t2805 = t2699 + t2715 + t2777;
  t4542 = t1595*t2096*t1761;
  t4551 = -1.*t93*t2102;
  t4558 = t4542 + t4551;
  t4564 = t93*t1595;
  t4575 = t2096*t1761*t2102;
  t4583 = t4564 + t4575;
  t3226 = 3.2909349868922137e-7*var1[18];
  t3284 = 0.03103092645718495*t302;
  t3335 = -0.045000372235*t3329;
  t3364 = t3226 + t3284 + t3335;
  t3487 = -1.296332362046933e-7*var1[19];
  t3514 = -0.14128592423750855*t3508;
  t3566 = -0.045000372235*t3535;
  t3605 = t3487 + t3514 + t3566;
  t4618 = -1.*t1285*t4558;
  t4621 = t2451*t4583;
  t4623 = t4618 + t4621;
  t4635 = t2451*t4558;
  t4642 = t1285*t4583;
  t4645 = t4635 + t4642;
  t3698 = 3.2909349868922137e-7*var1[19];
  t3753 = -0.055653945343889656*t3508;
  t3792 = -0.045000372235*t3789;
  t3798 = t3698 + t3753 + t3792;
  t3962 = -0.04500040093286238*t3508;
  t3974 = -0.055653909852*t3969;
  t4006 = -0.141285834136*t3998;
  t4016 = 0. + t3962 + t3974 + t4006;
  t4110 = 0.039853038461262744*t4084;
  t4160 = -0.22023459268999998*t4159;
  t4176 = -0.086752619205*t4175;
  t4192 = 0. + t4110 + t4160 + t4176;
  t4686 = t168*t3329*t2096;
  t4730 = 0.340999127418*t302*t4623;
  t4735 = t3642*t4645;
  t4737 = t4686 + t4730 + t4735;
  t4746 = t168*t2753*t2096;
  t4752 = t3854*t4623;
  t4757 = 0.340999127418*t302*t4645;
  t4759 = t4746 + t4752 + t4757;
  t4767 = t4029*t168*t2096;
  t4768 = t564*t4623;
  t4771 = t656*t4645;
  t4778 = t4767 + t4768 + t4771;
  t4214 = 6.295460977284962e-8*var1[20];
  t4215 = -0.22023473313910558*t4084;
  t4254 = 0.039853013046*t4232;
  t4262 = t4214 + t4215 + t4254;
  t4297 = -1.5981976069815686e-7*var1[20];
  t4304 = -0.08675267452931407*t4084;
  t4315 = 0.039853013046*t4312;
  t4334 = t4297 + t4304 + t4315;
  t4783 = t3998*t4737;
  t4785 = t3969*t4759;
  t4789 = t4207*t4778;
  t4791 = t4783 + t4785 + t4789;
  t4810 = t4267*t4737;
  t4813 = -0.340999127418*t3508*t4759;
  t4816 = t3535*t4778;
  t4820 = t4810 + t4813 + t4816;
  t4396 = -0.134322983001*t4084;
  t4399 = 1. + t4396;
  t4829 = -0.340999127418*t3508*t4737;
  t4832 = t4349*t4759;
  t4849 = t3789*t4778;
  t4851 = t4829 + t4832 + t4849;
  t4429 = -0.8656776547239999*t4084;
  t4431 = 1. + t4429;
  t4449 = -1.000000637725*t4084;
  t4459 = 1. + t4449;
  t4991 = -1.*t168*t1595*t1285;
  t4997 = t2451*t168*t2102;
  t4998 = t4991 + t4997;
  t5002 = t2451*t168*t1595;
  t5010 = t168*t1285*t2102;
  t5012 = t5002 + t5010;
  t5031 = -1.*t3329*t1761;
  t5033 = 0.340999127418*t302*t4998;
  t5036 = t3642*t5012;
  t5037 = t5031 + t5033 + t5036;
  t5045 = -1.*t2753*t1761;
  t5058 = t3854*t4998;
  t5059 = 0.340999127418*t302*t5012;
  t5065 = t5045 + t5058 + t5059;
  t5073 = -1.*t4029*t1761;
  t5080 = t564*t4998;
  t5081 = t656*t5012;
  t5093 = t5073 + t5080 + t5081;
  t5101 = t3998*t5037;
  t5119 = t3969*t5065;
  t5132 = t4207*t5093;
  t5133 = t5101 + t5119 + t5132;
  t5141 = t4267*t5037;
  t5154 = -0.340999127418*t3508*t5065;
  t5156 = t3535*t5093;
  t5157 = t5141 + t5154 + t5156;
  t5169 = -0.340999127418*t3508*t5037;
  t5171 = t4349*t5065;
  t5172 = t3789*t5093;
  t5175 = t5169 + t5171 + t5172;
  p_output1[0]=0. + t1425*t2266 + t2512*t2583 + t2805*t2890 + t3364*t3394 + t3605*t3644 + t3798*t3915 + t4016*t4049 + t4192*t4210 + t4262*t4290 + t4334*t4360 - 0.165064*(-0.340999127418*t4084*t4290 + t4210*t4312 + t4360*t4399) - 0.189386*(t4210*t4232 - 0.340999127418*t4084*t4360 + t4290*t4431) + 0.039853*(t4159*t4290 + t4175*t4360 + t4210*t4459) + t168*t797*t93 + var1[0];
  p_output1[1]=0. + t1425*t4558 + t2512*t4583 + t2805*t4623 + t3364*t4645 + t3605*t4737 + t3798*t4759 + t4016*t4778 + t4192*t4791 + t4262*t4820 + t4334*t4851 - 0.189386*(t4232*t4791 + t4431*t4820 - 0.340999127418*t4084*t4851) + 0.039853*(t4459*t4791 + t4159*t4820 + t4175*t4851) - 0.165064*(t4312*t4791 - 0.340999127418*t4084*t4820 + t4399*t4851) + t168*t2096*t797 + var1[1];
  p_output1[2]=0. + t1425*t1595*t168 + t168*t2102*t2512 + t2805*t4998 + t3364*t5012 + t3605*t5037 + t3798*t5065 + t4016*t5093 + t4192*t5133 + t4262*t5157 + t4334*t5175 - 0.189386*(t4232*t5133 + t4431*t5157 - 0.340999127418*t4084*t5175) + 0.039853*(t4459*t5133 + t4159*t5157 + t4175*t5175) - 0.165064*(t4312*t5133 - 0.340999127418*t4084*t5157 + t4399*t5175) - 1.*t1761*t797 + var1[2];
}



void p_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
