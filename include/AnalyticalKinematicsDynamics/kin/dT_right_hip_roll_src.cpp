/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_right_hip_roll_src.h"

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
  double t591;
  double t1164;
  double t1356;
  double t1176;
  double t1220;
  double t1365;
  double t1829;
  double t1730;
  double t1812;
  double t1873;
  double t1906;
  double t1937;
  double t1943;
  double t1999;
  double t2193;
  double t2456;
  double t2462;
  double t2646;
  double t2660;
  double t2707;
  double t2709;
  double t2713;
  double t2715;
  double t2183;
  double t2465;
  double t2472;
  double t2040;
  double t2734;
  double t3076;
  double t3078;
  double t3109;
  double t3386;
  double t3388;
  double t3416;
  double t1331;
  double t1389;
  double t1399;
  double t1506;
  double t1536;
  double t1632;
  double t1921;
  double t2023;
  double t2026;
  double t2047;
  double t2064;
  double t2506;
  double t2509;
  double t2532;
  double t2708;
  double t2748;
  double t2752;
  double t2753;
  double t2771;
  double t2837;
  double t2838;
  double t2843;
  double t2889;
  double t2897;
  double t2916;
  double t2501;
  double t2994;
  double t3004;
  double t3195;
  double t3196;
  double t3215;
  double t3241;
  double t3254;
  double t3352;
  double t3434;
  double t3464;
  double t3479;
  double t3482;
  double t3488;
  double t3641;
  double t3648;
  double t3653;
  double t3705;
  double t3708;
  double t3721;
  double t3732;
  double t3734;
  double t3737;
  double t3759;
  double t3768;
  double t3783;
  double t3865;
  double t3866;
  double t3870;
  double t3893;
  double t3901;
  double t3937;
  double t5017;
  double t5026;
  double t5029;
  double t5060;
  double t4967;
  double t4970;
  t591 = Cos(var1[3]);
  t1164 = Cos(var1[4]);
  t1356 = Cos(var1[17]);
  t1176 = Cos(var1[5]);
  t1220 = Sin(var1[17]);
  t1365 = Sin(var1[5]);
  t1829 = Sin(var1[3]);
  t1730 = Sin(var1[4]);
  t1812 = t591*t1176*t1730;
  t1873 = t1829*t1365;
  t1906 = t1812 + t1873;
  t1937 = t1176*t1829;
  t1943 = -1.*t591*t1730*t1365;
  t1999 = t1937 + t1943;
  t2193 = -1.*t1176*t1829;
  t2456 = t591*t1730*t1365;
  t2462 = t2193 + t2456;
  t2646 = -1.*t1176*t1829*t1730;
  t2660 = t591*t1365;
  t2707 = t2646 + t2660;
  t2709 = -1.*t591*t1176;
  t2713 = -1.*t1829*t1730*t1365;
  t2715 = t2709 + t2713;
  t2183 = -1.*t1220*t1906;
  t2465 = t1356*t2462;
  t2472 = t2183 + t2465;
  t2040 = t1356*t1906;
  t2734 = t1356*t2715;
  t3076 = t1176*t1829*t1730;
  t3078 = -1.*t591*t1365;
  t3109 = t3076 + t3078;
  t3386 = t591*t1176;
  t3388 = t1829*t1730*t1365;
  t3416 = t3386 + t3388;
  t1331 = -1.*t591*t1164*t1176*t1220;
  t1389 = t1356*t591*t1164*t1365;
  t1399 = t1331 + t1389;
  t1506 = t1356*t591*t1164*t1176;
  t1536 = t591*t1164*t1220*t1365;
  t1632 = t1506 + t1536;
  t1921 = t1220*t1906;
  t2023 = t1356*t1999;
  t2026 = t1921 + t2023;
  t2047 = -1.*t1220*t1999;
  t2064 = t2040 + t2047;
  t2506 = -1.*t1356*t1906;
  t2509 = -1.*t1220*t2462;
  t2532 = t2506 + t2509;
  t2708 = -1.*t1220*t2707;
  t2748 = t2708 + t2734;
  t2752 = t1356*t2707;
  t2753 = t1220*t2715;
  t2771 = t2752 + t2753;
  t2837 = -1.*t1164*t1176*t1220*t1829;
  t2838 = t1356*t1164*t1829*t1365;
  t2843 = t2837 + t2838;
  t2889 = t1356*t1164*t1176*t1829;
  t2897 = t1164*t1220*t1829*t1365;
  t2916 = t2889 + t2897;
  t2501 = 0.930418*t2472;
  t2994 = t1220*t2462;
  t3004 = t2040 + t2994;
  t3195 = t1220*t3109;
  t3196 = t3195 + t2734;
  t3215 = t1356*t3109;
  t3241 = -1.*t1220*t2715;
  t3254 = t3215 + t3241;
  t3352 = -1.*t1220*t3109;
  t3434 = t1356*t3416;
  t3464 = t3352 + t3434;
  t3479 = -1.*t1356*t3109;
  t3482 = -1.*t1220*t3416;
  t3488 = t3479 + t3482;
  t3641 = -1.*t1164*t1176*t1220;
  t3648 = t1356*t1164*t1365;
  t3653 = t3641 + t3648;
  t3705 = -1.*t1356*t1164*t1176;
  t3708 = -1.*t1164*t1220*t1365;
  t3721 = t3705 + t3708;
  t3732 = t1164*t1176*t1220;
  t3734 = -1.*t1356*t1164*t1365;
  t3737 = t3732 + t3734;
  t3759 = t1356*t1164*t1176;
  t3768 = t1164*t1220*t1365;
  t3783 = t3759 + t3768;
  t3865 = t1176*t1220*t1730;
  t3866 = -1.*t1356*t1730*t1365;
  t3870 = t3865 + t3866;
  t3893 = -1.*t1356*t1176*t1730;
  t3901 = -1.*t1220*t1730*t1365;
  t3937 = t3893 + t3901;
  t5017 = -1.*t1356;
  t5026 = 1. + t5017;
  t5029 = -0.091*t5026;
  t5060 = 0. + t5029;
  t4967 = -0.091*t1220;
  t4970 = 0. + t4967;
  p_output1[0]=(0.366501*t2748 + 0.930418*t2771)*var2[3] + (0.366501*t1399 + 0.930418*t1632)*var2[4] + (0.930418*t2026 + 0.366501*t2064)*var2[5] + (t2501 + 0.366501*t2532)*var2[17];
  p_output1[1]=(0.366501*t2472 + 0.930418*t3004)*var2[3] + (0.366501*t2843 + 0.930418*t2916)*var2[4] + (0.930418*t3196 + 0.366501*t3254)*var2[5] + (0.930418*t3464 + 0.366501*t3488)*var2[17];
  p_output1[2]=(0.366501*t3870 + 0.930418*t3937)*var2[4] + (0.930418*t3737 + 0.366501*t3783)*var2[5] + (0.930418*t3653 + 0.366501*t3721)*var2[17];
  p_output1[3]=0;
  p_output1[4]=(0.930418*t2748 - 0.366501*t2771)*var2[3] + (0.930418*t1399 - 0.366501*t1632)*var2[4] + (-0.366501*t2026 + 0.930418*t2064)*var2[5] + (-0.366501*t2472 + 0.930418*t2532)*var2[17];
  p_output1[5]=(t2501 - 0.366501*t3004)*var2[3] + (0.930418*t2843 - 0.366501*t2916)*var2[4] + (-0.366501*t3196 + 0.930418*t3254)*var2[5] + (-0.366501*t3464 + 0.930418*t3488)*var2[17];
  p_output1[6]=(0.930418*t3870 - 0.366501*t3937)*var2[4] + (-0.366501*t3737 + 0.930418*t3783)*var2[5] + (-0.366501*t3653 + 0.930418*t3721)*var2[17];
  p_output1[7]=0;
  p_output1[8]=t1164*t1829*var2[3] + t1730*t591*var2[4];
  p_output1[9]=-1.*t1164*t591*var2[3] + t1730*t1829*var2[4];
  p_output1[10]=t1164*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.03244*t1164*t1829 - 0.091945*t2748 - 0.001745*t2771 + t2707*t4970 + t2715*t5060)*var2[3] + (-0.091945*t1399 - 0.001745*t1632 + 0.03244*t1730*t591 + t1164*t1176*t4970*t591 + t1164*t1365*t5060*t591)*var2[4] + (-0.001745*t2026 - 0.091945*t2064 + t1999*t4970 + t1906*t5060)*var2[5] + (-0.091*t1356*t1906 - 0.091*t1220*t2462 - 0.001745*t2472 - 0.091945*t2532)*var2[17];
  p_output1[13]=var2[1] + (-0.091945*t2472 - 0.001745*t3004 + t1906*t4970 + t2462*t5060 - 0.03244*t1164*t591)*var2[3] + (0.03244*t1730*t1829 - 0.091945*t2843 - 0.001745*t2916 + t1164*t1176*t1829*t4970 + t1164*t1365*t1829*t5060)*var2[4] + (-0.001745*t3196 - 0.091945*t3254 + t2715*t4970 + t3109*t5060)*var2[5] + (-0.091*t1356*t3109 - 0.091*t1220*t3416 - 0.001745*t3464 - 0.091945*t3488)*var2[17];
  p_output1[14]=var2[2] + (0.03244*t1164 - 0.091945*t3870 - 0.001745*t3937 - 1.*t1176*t1730*t4970 - 1.*t1365*t1730*t5060)*var2[4] + (-0.001745*t3737 - 0.091945*t3783 - 1.*t1164*t1365*t4970 + t1164*t1176*t5060)*var2[5] + (-0.091*t1164*t1176*t1356 - 0.091*t1164*t1220*t1365 - 0.001745*t3653 - 0.091945*t3721)*var2[17];
  p_output1[15]=0;
}



void dT_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
