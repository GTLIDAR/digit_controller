/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:10:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_knee_src.h"

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
  double t1030;
  double t84;
  double t1642;
  double t1893;
  double t1706;
  double t2003;
  double t817;
  double t881;
  double t969;
  double t1576;
  double t1887;
  double t2044;
  double t2060;
  double t2170;
  double t2243;
  double t2263;
  double t2265;
  double t486;
  double t2773;
  double t2814;
  double t2556;
  double t2660;
  double t2698;
  double t2891;
  double t2894;
  double t2895;
  double t2962;
  double t2975;
  double t2993;
  double t3181;
  double t2364;
  double t2387;
  double t1033;
  double t1044;
  double t1102;
  double t1156;
  double t4443;
  double t3906;
  double t3943;
  double t3297;
  double t3320;
  double t3395;
  double t3405;
  double t3455;
  double t3456;
  double t3867;
  double t3874;
  double t3667;
  double t3668;
  double t3670;
  double t3739;
  double t3755;
  double t3782;
  double t3989;
  double t4016;
  double t4149;
  double t4183;
  double t4204;
  double t4241;
  double t4340;
  double t4366;
  double t4369;
  double t3198;
  double t3264;
  double t3561;
  double t3580;
  double t5174;
  double t5208;
  double t4710;
  double t4716;
  double t4718;
  double t4728;
  double t4738;
  double t4752;
  double t4858;
  double t4886;
  double t5007;
  double t5037;
  double t5059;
  double t5065;
  double t5224;
  double t5225;
  double t5255;
  double t5257;
  double t5258;
  double t5309;
  double t4807;
  double t4815;
  double t4469;
  double t4535;
  double t4683;
  double t4685;
  double t989;
  double t1086;
  double t1415;
  double t1443;
  double t1593;
  double t1606;
  double t2217;
  double t2225;
  double t2232;
  double t2233;
  double t2341;
  double t2352;
  double t2477;
  double t2530;
  double t5671;
  double t5676;
  double t5686;
  double t5694;
  double t5697;
  double t5719;
  double t2761;
  double t2772;
  double t2846;
  double t2867;
  double t2937;
  double t3137;
  double t3267;
  double t3292;
  double t5758;
  double t5772;
  double t5773;
  double t5839;
  double t5893;
  double t5926;
  double t3478;
  double t3523;
  double t3613;
  double t3630;
  double t3789;
  double t3884;
  double t3951;
  double t3970;
  double t4408;
  double t4635;
  double t4688;
  double t4702;
  double t5939;
  double t5945;
  double t5947;
  double t5953;
  double t5964;
  double t5971;
  double t6004;
  double t6008;
  double t6024;
  double t6031;
  double t6064;
  double t6065;
  double t4799;
  double t4805;
  double t4828;
  double t4846;
  double t5125;
  double t5135;
  double t5215;
  double t5217;
  double t6081;
  double t6091;
  double t6093;
  double t6127;
  double t6131;
  double t6132;
  double t6176;
  double t6189;
  double t5370;
  double t5385;
  double t6195;
  double t6204;
  double t6235;
  double t6241;
  double t5481;
  double t5518;
  double t5606;
  double t5610;
  double t6418;
  double t6422;
  double t6423;
  double t6439;
  double t6441;
  double t6448;
  double t6452;
  double t6477;
  double t6478;
  double t6526;
  double t6546;
  double t6563;
  double t6610;
  double t6613;
  double t6646;
  double t6649;
  double t6653;
  double t6666;
  double t6682;
  double t6712;
  double t6731;
  double t6732;
  double t6762;
  double t6780;
  double t6788;
  double t6792;
  double t6796;
  double t6800;
  double t6803;
  double t6806;
  t1030 = Sin(var1[18]);
  t84 = Cos(var1[3]);
  t1642 = Cos(var1[5]);
  t1893 = Sin(var1[3]);
  t1706 = Sin(var1[4]);
  t2003 = Sin(var1[5]);
  t817 = Cos(var1[18]);
  t881 = -1.*t817;
  t969 = 1. + t881;
  t1576 = Sin(var1[17]);
  t1887 = t84*t1642*t1706;
  t2044 = t1893*t2003;
  t2060 = t1887 + t2044;
  t2170 = Cos(var1[17]);
  t2243 = -1.*t1642*t1893;
  t2263 = t84*t1706*t2003;
  t2265 = t2243 + t2263;
  t486 = Cos(var1[4]);
  t2773 = -0.366501*t1030;
  t2814 = 0. + t2773;
  t2556 = -1.*t1576*t2060;
  t2660 = t2170*t2265;
  t2698 = t2556 + t2660;
  t2891 = t2170*t2060;
  t2894 = t1576*t2265;
  t2895 = t2891 + t2894;
  t2962 = Cos(var1[19]);
  t2975 = -1.*t2962;
  t2993 = 1. + t2975;
  t3181 = Sin(var1[19]);
  t2364 = 0.930418*t1030;
  t2387 = 0. + t2364;
  t1033 = -0.930418*t1030;
  t1044 = 0. + t1033;
  t1102 = 0.366501*t1030;
  t1156 = 0. + t1102;
  t4443 = Sin(var1[20]);
  t3906 = 0.930418*t3181;
  t3943 = 0. + t3906;
  t3297 = t84*t486*t2814;
  t3320 = 0.340999127418*t969*t2698;
  t3395 = -0.134322983001*t969;
  t3405 = 1. + t3395;
  t3455 = t3405*t2895;
  t3456 = t3297 + t3320 + t3455;
  t3867 = 0.366501*t3181;
  t3874 = 0. + t3867;
  t3667 = t84*t486*t2387;
  t3668 = -0.8656776547239999*t969;
  t3670 = 1. + t3668;
  t3739 = t3670*t2698;
  t3755 = 0.340999127418*t969*t2895;
  t3782 = t3667 + t3739 + t3755;
  t3989 = -1.000000637725*t969;
  t4016 = 1. + t3989;
  t4149 = t4016*t84*t486;
  t4183 = t1044*t2698;
  t4204 = t1156*t2895;
  t4241 = t4149 + t4183 + t4204;
  t4340 = Cos(var1[20]);
  t4366 = -1.*t4340;
  t4369 = 1. + t4366;
  t3198 = -0.930418*t3181;
  t3264 = 0. + t3198;
  t3561 = -0.366501*t3181;
  t3580 = 0. + t3561;
  t5174 = 0.366501*t4443;
  t5208 = 0. + t5174;
  t4710 = t3943*t3456;
  t4716 = t3874*t3782;
  t4718 = -1.000000637725*t2993;
  t4728 = 1. + t4718;
  t4738 = t4728*t4241;
  t4752 = t4710 + t4716 + t4738;
  t4858 = -0.8656776547239999*t2993;
  t4886 = 1. + t4858;
  t5007 = t4886*t3456;
  t5037 = -0.340999127418*t2993*t3782;
  t5059 = t3264*t4241;
  t5065 = t5007 + t5037 + t5059;
  t5224 = -0.340999127418*t2993*t3456;
  t5225 = -0.134322983001*t2993;
  t5255 = 1. + t5225;
  t5257 = t5255*t3782;
  t5258 = t3580*t4241;
  t5309 = t5224 + t5257 + t5258;
  t4807 = 0.930418*t4443;
  t4815 = 0. + t4807;
  t4469 = -0.930418*t4443;
  t4535 = 0. + t4469;
  t4683 = -0.366501*t4443;
  t4685 = 0. + t4683;
  t989 = -0.04500040093286238*t969;
  t1086 = -0.07877663122399998*t1044;
  t1415 = 0.031030906668*t1156;
  t1443 = 0. + t989 + t1086 + t1415;
  t1593 = -0.091*t1576;
  t1606 = 0. + t1593;
  t2217 = -1.*t2170;
  t2225 = 1. + t2217;
  t2232 = -0.091*t2225;
  t2233 = 0. + t2232;
  t2341 = 1.296332362046933e-7*var1[18];
  t2352 = -0.07877668146182712*t969;
  t2477 = -0.045000372235*t2387;
  t2530 = t2341 + t2352 + t2477;
  t5671 = t1642*t1893*t1706;
  t5676 = -1.*t84*t2003;
  t5686 = t5671 + t5676;
  t5694 = t84*t1642;
  t5697 = t1893*t1706*t2003;
  t5719 = t5694 + t5697;
  t2761 = 3.2909349868922137e-7*var1[18];
  t2772 = 0.03103092645718495*t969;
  t2846 = -0.045000372235*t2814;
  t2867 = t2761 + t2772 + t2846;
  t2937 = -1.296332362046933e-7*var1[19];
  t3137 = -0.14128592423750855*t2993;
  t3267 = -0.045000372235*t3264;
  t3292 = t2937 + t3137 + t3267;
  t5758 = -1.*t1576*t5686;
  t5772 = t2170*t5719;
  t5773 = t5758 + t5772;
  t5839 = t2170*t5686;
  t5893 = t1576*t5719;
  t5926 = t5839 + t5893;
  t3478 = 3.2909349868922137e-7*var1[19];
  t3523 = -0.055653945343889656*t2993;
  t3613 = -0.045000372235*t3580;
  t3630 = t3478 + t3523 + t3613;
  t3789 = -0.04500040093286238*t2993;
  t3884 = -0.055653909852*t3874;
  t3951 = -0.141285834136*t3943;
  t3970 = 0. + t3789 + t3884 + t3951;
  t4408 = 0.039853038461262744*t4369;
  t4635 = -0.22023459268999998*t4535;
  t4688 = -0.086752619205*t4685;
  t4702 = 0. + t4408 + t4635 + t4688;
  t5939 = t486*t2814*t1893;
  t5945 = 0.340999127418*t969*t5773;
  t5947 = t3405*t5926;
  t5953 = t5939 + t5945 + t5947;
  t5964 = t486*t2387*t1893;
  t5971 = t3670*t5773;
  t6004 = 0.340999127418*t969*t5926;
  t6008 = t5964 + t5971 + t6004;
  t6024 = t4016*t486*t1893;
  t6031 = t1044*t5773;
  t6064 = t1156*t5926;
  t6065 = t6024 + t6031 + t6064;
  t4799 = 6.295460977284962e-8*var1[20];
  t4805 = -0.22023473313910558*t4369;
  t4828 = 0.039853013046*t4815;
  t4846 = t4799 + t4805 + t4828;
  t5125 = -1.5981976069815686e-7*var1[20];
  t5135 = -0.08675267452931407*t4369;
  t5215 = 0.039853013046*t5208;
  t5217 = t5125 + t5135 + t5215;
  t6081 = t3943*t5953;
  t6091 = t3874*t6008;
  t6093 = t4728*t6065;
  t6127 = t6081 + t6091 + t6093;
  t6131 = t4886*t5953;
  t6132 = -0.340999127418*t2993*t6008;
  t6176 = t3264*t6065;
  t6189 = t6131 + t6132 + t6176;
  t5370 = -0.134322983001*t4369;
  t5385 = 1. + t5370;
  t6195 = -0.340999127418*t2993*t5953;
  t6204 = t5255*t6008;
  t6235 = t3580*t6065;
  t6241 = t6195 + t6204 + t6235;
  t5481 = -0.8656776547239999*t4369;
  t5518 = 1. + t5481;
  t5606 = -1.000000637725*t4369;
  t5610 = 1. + t5606;
  t6418 = -1.*t486*t1642*t1576;
  t6422 = t2170*t486*t2003;
  t6423 = t6418 + t6422;
  t6439 = t2170*t486*t1642;
  t6441 = t486*t1576*t2003;
  t6448 = t6439 + t6441;
  t6452 = -1.*t2814*t1706;
  t6477 = 0.340999127418*t969*t6423;
  t6478 = t3405*t6448;
  t6526 = t6452 + t6477 + t6478;
  t6546 = -1.*t2387*t1706;
  t6563 = t3670*t6423;
  t6610 = 0.340999127418*t969*t6448;
  t6613 = t6546 + t6563 + t6610;
  t6646 = -1.*t4016*t1706;
  t6649 = t1044*t6423;
  t6653 = t1156*t6448;
  t6666 = t6646 + t6649 + t6653;
  t6682 = t3943*t6526;
  t6712 = t3874*t6613;
  t6731 = t4728*t6666;
  t6732 = t6682 + t6712 + t6731;
  t6762 = t4886*t6526;
  t6780 = -0.340999127418*t2993*t6613;
  t6788 = t3264*t6666;
  t6792 = t6762 + t6780 + t6788;
  t6796 = -0.340999127418*t2993*t6526;
  t6800 = t5255*t6613;
  t6803 = t3580*t6666;
  t6806 = t6796 + t6800 + t6803;
  p_output1[0]=0. + t1606*t2060 + t2233*t2265 + t2530*t2698 + t2867*t2895 + t3292*t3456 + t3630*t3782 + t3970*t4241 + t4702*t4752 + t4846*t5065 + t5217*t5309 - 0.197083*(-0.340999127418*t4369*t5065 + t4752*t5208 + t5309*t5385) - 0.274521*(t4752*t4815 - 0.340999127418*t4369*t5309 + t5065*t5518) - 0.010507*(t4535*t5065 + t4685*t5309 + t4752*t5610) + t1443*t486*t84 + var1[0];
  p_output1[1]=0. + t1443*t1893*t486 + t1606*t5686 + t2233*t5719 + t2530*t5773 + t2867*t5926 + t3292*t5953 + t3630*t6008 + t3970*t6065 + t4702*t6127 + t4846*t6189 + t5217*t6241 - 0.274521*(t4815*t6127 + t5518*t6189 - 0.340999127418*t4369*t6241) - 0.010507*(t5610*t6127 + t4535*t6189 + t4685*t6241) - 0.197083*(t5208*t6127 - 0.340999127418*t4369*t6189 + t5385*t6241) + var1[1];
  p_output1[2]=0. - 1.*t1443*t1706 + t1606*t1642*t486 + t2003*t2233*t486 + t2530*t6423 + t2867*t6448 + t3292*t6526 + t3630*t6613 + t3970*t6666 + t4702*t6732 + t4846*t6792 + t5217*t6806 - 0.274521*(t4815*t6732 + t5518*t6792 - 0.340999127418*t4369*t6806) - 0.010507*(t5610*t6732 + t4535*t6792 + t4685*t6806) - 0.197083*(t5208*t6732 - 0.340999127418*t4369*t6792 + t5385*t6806) + var1[2];
}



void p_right_knee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
