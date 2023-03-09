/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right_src.h"

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
  double t986;
  double t1226;
  double t1359;
  double t1257;
  double t1393;
  double t1097;
  double t1688;
  double t1313;
  double t1454;
  double t1657;
  double t1175;
  double t1783;
  double t1786;
  double t1798;
  double t577;
  double t601;
  double t609;
  double t652;
  double t889;
  double t1011;
  double t1156;
  double t1173;
  double t2025;
  double t2026;
  double t2375;
  double t2416;
  double t2420;
  double t2600;
  double t2650;
  double t2670;
  double t1667;
  double t1849;
  double t1852;
  double t2055;
  double t2093;
  double t2229;
  double t3482;
  double t3538;
  double t2525;
  double t2723;
  double t2729;
  double t3564;
  double t3598;
  double t2796;
  double t2814;
  double t2860;
  double t3666;
  double t3669;
  double t3694;
  double t3725;
  double t3098;
  double t3106;
  double t3130;
  double t3387;
  double t3404;
  double t3411;
  double t3558;
  double t3560;
  double t3621;
  double t3625;
  double t3671;
  double t3745;
  double t3759;
  double t3768;
  double t3840;
  double t3850;
  double t3855;
  double t3859;
  double t3895;
  double t3897;
  double t3926;
  double t3962;
  double t4038;
  double t4060;
  double t4061;
  double t4088;
  double t4106;
  double t4117;
  double t4119;
  double t4121;
  t986 = Cos(var1[3]);
  t1226 = Cos(var1[5]);
  t1359 = Sin(var1[3]);
  t1257 = Sin(var1[4]);
  t1393 = Sin(var1[5]);
  t1097 = Sin(var1[18]);
  t1688 = Cos(var1[17]);
  t1313 = t986*t1226*t1257;
  t1454 = t1359*t1393;
  t1657 = t1313 + t1454;
  t1175 = Sin(var1[17]);
  t1783 = -1.*t1226*t1359;
  t1786 = t986*t1257*t1393;
  t1798 = t1783 + t1786;
  t577 = Cos(var1[18]);
  t601 = -1.*t577;
  t609 = 1. + t601;
  t652 = -1.000000637725*t609;
  t889 = 1. + t652;
  t1011 = Cos(var1[4]);
  t1156 = -0.930418*t1097;
  t1173 = 0. + t1156;
  t2025 = 0.366501*t1097;
  t2026 = 0. + t2025;
  t2375 = t1226*t1359*t1257;
  t2416 = -1.*t986*t1393;
  t2420 = t2375 + t2416;
  t2600 = t986*t1226;
  t2650 = t1359*t1257*t1393;
  t2670 = t2600 + t2650;
  t1667 = -1.*t1175*t1657;
  t1849 = t1688*t1798;
  t1852 = t1667 + t1849;
  t2055 = t1688*t1657;
  t2093 = t1175*t1798;
  t2229 = t2055 + t2093;
  t3482 = -0.366501*t1097;
  t3538 = 0. + t3482;
  t2525 = -1.*t1175*t2420;
  t2723 = t1688*t2670;
  t2729 = t2525 + t2723;
  t3564 = -0.134322983001*t609;
  t3598 = 1. + t3564;
  t2796 = t1688*t2420;
  t2814 = t1175*t2670;
  t2860 = t2796 + t2814;
  t3666 = 0.930418*t1097;
  t3669 = 0. + t3666;
  t3694 = -0.8656776547239999*t609;
  t3725 = 1. + t3694;
  t3098 = -1.*t1011*t1226*t1175;
  t3106 = t1688*t1011*t1393;
  t3130 = t3098 + t3106;
  t3387 = t1688*t1011*t1226;
  t3404 = t1011*t1175*t1393;
  t3411 = t3387 + t3404;
  t3558 = t986*t1011*t3538;
  t3560 = 0.340999127418*t609*t1852;
  t3621 = t3598*t2229;
  t3625 = t3558 + t3560 + t3621;
  t3671 = t986*t1011*t3669;
  t3745 = t3725*t1852;
  t3759 = 0.340999127418*t609*t2229;
  t3768 = t3671 + t3745 + t3759;
  t3840 = t1011*t3538*t1359;
  t3850 = 0.340999127418*t609*t2729;
  t3855 = t3598*t2860;
  t3859 = t3840 + t3850 + t3855;
  t3895 = t1011*t3669*t1359;
  t3897 = t3725*t2729;
  t3926 = 0.340999127418*t609*t2860;
  t3962 = t3895 + t3897 + t3926;
  t4038 = -1.*t3538*t1257;
  t4060 = 0.340999127418*t609*t3130;
  t4061 = t3598*t3411;
  t4088 = t4038 + t4060 + t4061;
  t4106 = -1.*t3669*t1257;
  t4117 = t3725*t3130;
  t4119 = 0.340999127418*t609*t3411;
  t4121 = t4106 + t4117 + t4119;
  p_output1[0]=-1.*t1173*t1852 - 1.*t2026*t2229 - 1.*t1011*t889*t986;
  p_output1[1]=-1.*t1173*t2729 - 1.*t2026*t2860 - 1.*t1011*t1359*t889;
  p_output1[2]=-1.*t1173*t3130 - 1.*t2026*t3411 + t1257*t889;
  p_output1[3]=-0.366501*t3625 + 0.930418*t3768;
  p_output1[4]=-0.366501*t3859 + 0.930418*t3962;
  p_output1[5]=-0.366501*t4088 + 0.930418*t4121;
  p_output1[6]=-0.930418*t3625 - 0.366501*t3768;
  p_output1[7]=-0.930418*t3859 - 0.366501*t3962;
  p_output1[8]=-0.930418*t4088 - 0.366501*t4121;
}



void R_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
