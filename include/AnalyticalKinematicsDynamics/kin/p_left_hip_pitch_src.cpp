/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_hip_pitch_src.h"

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
  double t1576;
  double t1300;
  double t1619;
  double t1305;
  double t1693;
  double t2466;
  double t605;
  double t2010;
  double t2016;
  double t2056;
  double t1337;
  double t1780;
  double t1929;
  double t2064;
  double t2367;
  double t2427;
  double t2444;
  double t3534;
  double t3539;
  double t3629;
  double t2940;
  double t2991;
  double t3014;
  double t2336;
  double t3828;
  double t3834;
  double t4127;
  double t4175;
  double t4245;
  double t3072;
  double t3305;
  double t4012;
  double t4035;
  double t4042;
  double t4046;
  double t4062;
  double t4071;
  double t2541;
  double t2544;
  double t2583;
  double t2759;
  double t4315;
  double t4467;
  double t4511;
  double t5082;
  double t5088;
  double t5090;
  double t5174;
  double t5201;
  double t5341;
  double t4673;
  double t4689;
  double t4731;
  double t4794;
  double t4808;
  double t4828;
  double t5402;
  double t5431;
  double t5448;
  double t5449;
  double t5953;
  double t6002;
  double t748;
  double t812;
  double t1176;
  double t1250;
  double t2067;
  double t2126;
  double t2465;
  double t2567;
  double t2822;
  double t2844;
  double t6529;
  double t6532;
  double t6540;
  double t6460;
  double t6475;
  double t6476;
  double t3048;
  double t3053;
  double t3322;
  double t3344;
  double t3673;
  double t3734;
  double t3840;
  double t3845;
  double t6595;
  double t6616;
  double t6620;
  double t6560;
  double t6573;
  double t6577;
  double t4081;
  double t4249;
  double t4517;
  double t4572;
  double t5013;
  double t5064;
  double t6634;
  double t6642;
  double t6655;
  double t6680;
  double t6793;
  double t6794;
  double t6820;
  double t6841;
  double t5397;
  double t5447;
  double t5628;
  double t5653;
  double t5868;
  double t5871;
  double t6697;
  double t6705;
  double t6738;
  double t6750;
  double t5938;
  double t5942;
  double t6152;
  double t6153;
  double t6175;
  double t6176;
  double t7022;
  double t7024;
  double t7026;
  double t7001;
  double t7007;
  double t7017;
  double t7046;
  double t7053;
  double t7055;
  double t7057;
  double t7097;
  double t7114;
  double t7140;
  double t7160;
  double t7062;
  double t7063;
  double t7078;
  double t7085;
  t1576 = Cos(var1[3]);
  t1300 = Cos(var1[5]);
  t1619 = Sin(var1[4]);
  t1305 = Sin(var1[3]);
  t1693 = Sin(var1[5]);
  t2466 = Sin(var1[7]);
  t605 = Cos(var1[6]);
  t2010 = t1576*t1300*t1619;
  t2016 = t1305*t1693;
  t2056 = t2010 + t2016;
  t1337 = -1.*t1300*t1305;
  t1780 = t1576*t1619*t1693;
  t1929 = t1337 + t1780;
  t2064 = Sin(var1[6]);
  t2367 = Cos(var1[7]);
  t2427 = -1.*t2367;
  t2444 = 1. + t2427;
  t3534 = t605*t1929;
  t3539 = -1.*t2056*t2064;
  t3629 = t3534 + t3539;
  t2940 = t605*t2056;
  t2991 = t1929*t2064;
  t3014 = t2940 + t2991;
  t2336 = Cos(var1[4]);
  t3828 = 0.930418*t2466;
  t3834 = 0. + t3828;
  t4127 = Cos(var1[8]);
  t4175 = -1.*t4127;
  t4245 = 1. + t4175;
  t3072 = 0.366501*t2466;
  t3305 = 0. + t3072;
  t4012 = -0.8656776547239999*t2444;
  t4035 = 1. + t4012;
  t4042 = t4035*t3629;
  t4046 = -0.340999127418*t2444*t3014;
  t4062 = t1576*t2336*t3834;
  t4071 = t4042 + t4046 + t4062;
  t2541 = -0.930418*t2466;
  t2544 = 0. + t2541;
  t2583 = -0.366501*t2466;
  t2759 = 0. + t2583;
  t4315 = Sin(var1[8]);
  t4467 = -0.366501*t4315;
  t4511 = 0. + t4467;
  t5082 = -1.000000637725*t2444;
  t5088 = 1. + t5082;
  t5090 = t1576*t2336*t5088;
  t5174 = t3629*t2544;
  t5201 = t3014*t2759;
  t5341 = t5090 + t5174 + t5201;
  t4673 = -0.340999127418*t2444*t3629;
  t4689 = -0.134322983001*t2444;
  t4731 = 1. + t4689;
  t4794 = t4731*t3014;
  t4808 = t1576*t2336*t3305;
  t4828 = t4673 + t4794 + t4808;
  t5402 = -0.930418*t4315;
  t5431 = 0. + t5402;
  t5448 = 0.366501*t4315;
  t5449 = 0. + t5448;
  t5953 = 0.930418*t4315;
  t6002 = 0. + t5953;
  t748 = -1.*t605;
  t812 = 1. + t748;
  t1176 = 0.091*t812;
  t1250 = 0. + t1176;
  t2067 = 0.091*t2064;
  t2126 = 0. + t2067;
  t2465 = -0.04500040093286238*t2444;
  t2567 = 0.07877663122399998*t2544;
  t2822 = 0.031030906668*t2759;
  t2844 = 0. + t2465 + t2567 + t2822;
  t6529 = t1300*t1305*t1619;
  t6532 = -1.*t1576*t1693;
  t6540 = t6529 + t6532;
  t6460 = t1576*t1300;
  t6475 = t1305*t1619*t1693;
  t6476 = t6460 + t6475;
  t3048 = -3.2909349868922137e-7*var1[7];
  t3053 = 0.03103092645718495*t2444;
  t3322 = -0.045000372235*t3305;
  t3344 = t3048 + t3053 + t3322;
  t3673 = 1.296332362046933e-7*var1[7];
  t3734 = 0.07877668146182712*t2444;
  t3840 = -0.045000372235*t3834;
  t3845 = t3673 + t3734 + t3840;
  t6595 = t605*t6476;
  t6616 = -1.*t6540*t2064;
  t6620 = t6595 + t6616;
  t6560 = t605*t6540;
  t6573 = t6476*t2064;
  t6577 = t6560 + t6573;
  t4081 = 3.2909349868922137e-7*var1[8];
  t4249 = 0.055653945343889656*t4245;
  t4517 = -0.045000372235*t4511;
  t4572 = t4081 + t4249 + t4517;
  t5013 = -0.134322983001*t4245;
  t5064 = 1. + t5013;
  t6634 = t4035*t6620;
  t6642 = -0.340999127418*t2444*t6577;
  t6655 = t2336*t1305*t3834;
  t6680 = t6634 + t6642 + t6655;
  t6793 = t2336*t5088*t1305;
  t6794 = t6620*t2544;
  t6820 = t6577*t2759;
  t6841 = t6793 + t6794 + t6820;
  t5397 = -0.04500040093286238*t4245;
  t5447 = -0.141285834136*t5431;
  t5628 = 0.055653909852*t5449;
  t5653 = 0. + t5397 + t5447 + t5628;
  t5868 = -1.000000637725*t4245;
  t5871 = 1. + t5868;
  t6697 = -0.340999127418*t2444*t6620;
  t6705 = t4731*t6577;
  t6738 = t2336*t1305*t3305;
  t6750 = t6697 + t6705 + t6738;
  t5938 = 1.296332362046933e-7*var1[8];
  t5942 = -0.14128592423750855*t4245;
  t6152 = -0.045000372235*t6002;
  t6153 = t5938 + t5942 + t6152;
  t6175 = -0.8656776547239999*t4245;
  t6176 = 1. + t6175;
  t7022 = t2336*t605*t1693;
  t7024 = -1.*t2336*t1300*t2064;
  t7026 = t7022 + t7024;
  t7001 = t2336*t1300*t605;
  t7007 = t2336*t1693*t2064;
  t7017 = t7001 + t7007;
  t7046 = t4035*t7026;
  t7053 = -0.340999127418*t2444*t7017;
  t7055 = -1.*t1619*t3834;
  t7057 = t7046 + t7053 + t7055;
  t7097 = -1.*t5088*t1619;
  t7114 = t7026*t2544;
  t7140 = t7017*t2759;
  t7160 = t7097 + t7114 + t7140;
  t7062 = -0.340999127418*t2444*t7026;
  t7063 = t4731*t7017;
  t7078 = -1.*t1619*t3305;
  t7085 = t7062 + t7063 + t7078;
  p_output1[0]=0. + t1250*t1929 + t2056*t2126 + t1576*t2336*t2844 + t3014*t3344 + t3629*t3845 + t4071*t4572 + 0.189863*(0.340999127418*t4245*t4828 + t4071*t5064 + t4511*t5341) + t5341*t5653 - 0.001824*(t4828*t5431 + t4071*t5449 + t5341*t5871) + t4828*t6153 - 0.134034*(0.340999127418*t4071*t4245 + t5341*t6002 + t4828*t6176) + var1[0];
  p_output1[1]=0. + t1305*t2336*t2844 + t1250*t6476 + t2126*t6540 + t3344*t6577 + t3845*t6620 + t4572*t6680 + t6153*t6750 + t5653*t6841 + 0.189863*(t5064*t6680 + 0.340999127418*t4245*t6750 + t4511*t6841) - 0.001824*(t5449*t6680 + t5431*t6750 + t5871*t6841) - 0.134034*(0.340999127418*t4245*t6680 + t6176*t6750 + t6002*t6841) + var1[1];
  p_output1[2]=0. + t1250*t1693*t2336 + t1300*t2126*t2336 - 1.*t1619*t2844 + t3344*t7017 + t3845*t7026 + t4572*t7057 + t6153*t7085 + t5653*t7160 + 0.189863*(t5064*t7057 + 0.340999127418*t4245*t7085 + t4511*t7160) - 0.001824*(t5449*t7057 + t5431*t7085 + t5871*t7160) - 0.134034*(0.340999127418*t4245*t7057 + t6176*t7085 + t6002*t7160) + var1[2];
}



void p_left_hip_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
