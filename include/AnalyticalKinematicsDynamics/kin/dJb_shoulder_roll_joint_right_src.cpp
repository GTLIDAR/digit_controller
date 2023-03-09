/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_shoulder_roll_joint_right_src.h"

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
  double t323;
  double t549;
  double t292;
  double t519;
  double t566;
  double t571;
  double t597;
  double t635;
  double t32;
  double t875;
  double t991;
  double t1006;
  double t1313;
  double t603;
  double t604;
  double t630;
  double t873;
  double t1577;
  double t1850;
  double t666;
  double t697;
  double t49;
  double t1366;
  double t1370;
  double t3030;
  double t3039;
  double t3042;
  double t1116;
  double t1119;
  double t3026;
  double t1402;
  double t2014;
  double t2033;
  double t2074;
  double t2182;
  double t2444;
  double t2514;
  double t2591;
  double t3052;
  double t3102;
  double t3110;
  double t3183;
  double t3210;
  double t3349;
  double t3362;
  double t3464;
  double t3473;
  double t3498;
  double t3550;
  double t3551;
  double t3746;
  double t3752;
  double t3754;
  double t3755;
  double t3763;
  double t3765;
  double t3779;
  double t3783;
  double t3784;
  double t3788;
  double t3792;
  double t3720;
  double t3744;
  double t3793;
  double t3796;
  double t3826;
  double t3847;
  double t3851;
  double t3864;
  double t3867;
  double t3915;
  double t3813;
  double t3853;
  double t3857;
  double t3868;
  double t3934;
  double t3941;
  double t4025;
  double t4028;
  double t4029;
  double t4019;
  double t4098;
  double t4100;
  double t4101;
  double t3964;
  double t3971;
  double t3973;
  double t4132;
  double t4135;
  double t4238;
  double t4239;
  double t4240;
  double t4242;
  double t4269;
  double t4271;
  double t4273;
  double t4277;
  double t3695;
  double t3698;
  double t3701;
  double t3702;
  double t3705;
  double t3709;
  double t3714;
  double t3715;
  double t3716;
  double t4289;
  double t4301;
  double t4405;
  double t4411;
  double t4210;
  double t4211;
  double t4418;
  double t4421;
  double t4246;
  double t4248;
  t323 = Cos(var1[24]);
  t549 = Sin(var1[24]);
  t292 = Cos(var1[5]);
  t519 = 0.984808*t323;
  t566 = 0.173648*t549;
  t571 = t519 + t566;
  t597 = t292*t571;
  t635 = Sin(var1[5]);
  t32 = Cos(var1[3]);
  t875 = 0.173648*t323;
  t991 = -0.984808*t549;
  t1006 = t875 + t991;
  t1313 = Sin(var1[4]);
  t603 = -0.173648*t323;
  t604 = 0.984808*t549;
  t630 = t603 + t604;
  t873 = Sin(var1[3]);
  t1577 = t292*t630;
  t1850 = -1.*t571*t635;
  t666 = t630*t635;
  t697 = 0. + t597 + t666;
  t49 = Cos(var1[4]);
  t1366 = t292*t1006;
  t1370 = t571*t635;
  t3030 = -0.984808*t323;
  t3039 = -0.173648*t549;
  t3042 = t3030 + t3039;
  t1116 = -1.*t1006*t635;
  t1119 = t597 + t1116;
  t3026 = 0. + t1366 + t1370;
  t1402 = t1366 + t1370;
  t2014 = t1577 + t1850;
  t2033 = -1.*t292*t571;
  t2074 = -1.*t630*t635;
  t2182 = t2033 + t2074;
  t2444 = 0. + t1577 + t1850;
  t2514 = t1313*t697;
  t2591 = 0. + t2514;
  t3052 = t292*t3042;
  t3102 = t1006*t635;
  t3110 = t3052 + t3102;
  t3183 = -1.*t3042*t635;
  t3210 = t1366 + t3183;
  t3349 = -1.*t292*t1006;
  t3362 = t3349 + t1850;
  t3464 = 0. + t597 + t1116;
  t3473 = t1313*t3026;
  t3498 = 0. + t3473;
  t3550 = -1.*t49;
  t3551 = 0. + t3550;
  t3746 = -1.*t323;
  t3752 = 1. + t3746;
  t3754 = 0.4*t3752;
  t3755 = 0.4*t323;
  t3763 = 0. + t3754 + t3755;
  t3765 = t3763*t292;
  t3779 = -0.12*t3752;
  t3783 = -0.12*t323;
  t3784 = 0. + t3779 + t3783;
  t3788 = t3784*t635;
  t3792 = 0. + t3765 + t3788;
  t3720 = 0. + t1313;
  t3744 = 0.001*t1313;
  t3793 = t49*t3792;
  t3796 = 0. + t3744 + t3793;
  t3826 = -0.001*t49;
  t3847 = t1313*t3792;
  t3851 = 0. + t3826 + t3847;
  t3864 = t3784*t292;
  t3867 = -1.*t3763*t635;
  t3915 = t3864 + t3867;
  t3813 = t3720*t3796;
  t3853 = t3551*t3851;
  t3857 = 0. + t3813 + t3853;
  t3868 = 0. + t3864 + t3867;
  t3934 = t49*t3026;
  t3941 = 0. + t3934;
  t4025 = 0.001*t49;
  t4028 = -1.*t1313*t3792;
  t4029 = t4025 + t4028;
  t4019 = t3744 + t3793;
  t4098 = -1.*t3720*t3796;
  t4100 = -1.*t3551*t3851;
  t4101 = 0. + t4098 + t4100;
  t3964 = -1.*t3763*t292;
  t3971 = -1.*t3784*t635;
  t3973 = t3964 + t3971;
  t4132 = t49*t697;
  t4135 = 0. + t4132;
  t4238 = t3868*t3464;
  t4239 = t3796*t3941;
  t4240 = t3851*t3498;
  t4242 = t4238 + t4239 + t4240;
  t4269 = -1.*t3868*t2444;
  t4271 = -1.*t3796*t4135;
  t4273 = -1.*t3851*t2591;
  t4277 = t4269 + t4271 + t4273;
  t3695 = var2[5]*t49*t2014;
  t3698 = var2[24]*t49*t1402;
  t3701 = -1.*var2[4]*t1313*t697;
  t3702 = t3695 + t3698 + t3701;
  t3705 = var2[5]*t49*t1119;
  t3709 = var2[24]*t49*t3110;
  t3714 = -1.*var2[4]*t1313*t3026;
  t3715 = t3705 + t3709 + t3714;
  t3716 = var2[4]*t49;
  t4289 = t3868*t3210;
  t4301 = -1.*t3868*t1119;
  t4405 = t3792*t3026;
  t4411 = 0. + t4238 + t4405;
  t4210 = t3973*t3464;
  t4211 = t3868*t3362;
  t4418 = -1.*t3792*t697;
  t4421 = 0. + t4269 + t4418;
  t4246 = -1.*t3973*t2444;
  t4248 = -1.*t3868*t2182;
  p_output1[0]=(-1.*t2444*t32 - 1.*t2591*t873)*var2[3] + t32*t49*t697*var2[4] + (t1313*t2014*t32 - 1.*t2182*t873)*var2[5] + (t1313*t1402*t32 - 1.*t1119*t873)*var2[24];
  p_output1[1]=(-1.*t32*t3464 - 1.*t3498*t873)*var2[3] + t3026*t32*t49*var2[4] + (t1119*t1313*t32 - 1.*t3362*t873)*var2[5] + (t1313*t3110*t32 - 1.*t3210*t873)*var2[24];
  p_output1[2]=-1.*t3551*t873*var2[3] + t1313*t32*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(t2591*t32 - 1.*t2444*t873)*var2[3] + t49*t697*t873*var2[4] + (t2182*t32 + t1313*t2014*t873)*var2[5] + (t1119*t32 + t1313*t1402*t873)*var2[24];
  p_output1[7]=(t32*t3498 - 1.*t3464*t873)*var2[3] + t3026*t49*t873*var2[4] + (t32*t3362 + t1119*t1313*t873)*var2[5] + (t32*t3210 + t1313*t3110*t873)*var2[24];
  p_output1[8]=t32*t3551*var2[3] + t1313*t873*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3702;
  p_output1[13]=t3715;
  p_output1[14]=t3716;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t1313*t3026*t3857 + (-1.*t3498*t3851 - 1.*t3464*t3868 - 1.*t3796*t3941)*t49 + t3941*(t1313*t3851 + t3551*t4019 + t3720*t4029 + t3796*t49) + t3720*(t1313*t3026*t3796 - 1.*t3498*t4019 - 1.*t3941*t4029 - 1.*t3026*t3851*t49))*var2[4] + (t1119*t3857*t49 + t3941*(t1313*t3551*t3915 + t3720*t3915*t49) + t3720*(-1.*t1119*t1313*t3851 - 1.*t3362*t3868 - 1.*t1313*t3498*t3915 - 1.*t3464*t3973 - 1.*t1119*t3796*t49 - 1.*t3915*t3941*t49))*var2[5] + (0. + t3110*t3857*t49 + t3720*(0. - 1.*t1313*t3110*t3851 - 1.*t3210*t3868 - 1.*t3110*t3796*t49))*var2[24];
  p_output1[19]=((t2591*t3851 + t2444*t3868 + t3796*t4135)*t49 + t4135*(-1.*t1313*t3851 - 1.*t3551*t4019 - 1.*t3720*t4029 - 1.*t3796*t49) - 1.*t1313*t4101*t697 + t3720*(t2591*t4019 + t4029*t4135 - 1.*t1313*t3796*t697 + t3851*t49*t697))*var2[4] + (t2014*t4101*t49 + t4135*(-1.*t1313*t3551*t3915 - 1.*t3720*t3915*t49) + t3720*(t1313*t2014*t3851 + t2182*t3868 + t1313*t2591*t3915 + t2444*t3973 + t2014*t3796*t49 + t3915*t4135*t49))*var2[5] + (0. + t1402*t4101*t49 + t3720*(0. + t1313*t1402*t3851 + t1119*t3868 + t1402*t3796*t49))*var2[24];
  p_output1[20]=(-1.*t1313*t3026*t4277 + t4135*(-1.*t1313*t3026*t3796 + t3498*t4019 + t3941*t4029 + t3026*t3851*t49) - 1.*t1313*t4242*t697 + t3941*(-1.*t2591*t4019 - 1.*t4029*t4135 + t1313*t3796*t697 - 1.*t3851*t49*t697))*var2[4] + (t2014*t4242*t49 + t1119*t4277*t49 + t4135*(t1119*t1313*t3851 + t1313*t3498*t3915 + t4210 + t4211 + t1119*t3796*t49 + t3915*t3941*t49) + t3941*(-1.*t1313*t2014*t3851 - 1.*t1313*t2591*t3915 + t4246 + t4248 - 1.*t2014*t3796*t49 - 1.*t3915*t4135*t49))*var2[5] + (t1402*t4242*t49 + t3110*t4277*t49 + t3941*(0. - 1.*t1313*t1402*t3851 + t4301 - 1.*t1402*t3796*t49) + t4135*(0. + t1313*t3110*t3851 + t4289 + t3110*t3796*t49))*var2[24];
  p_output1[21]=t3702;
  p_output1[22]=t3715;
  p_output1[23]=t3716;
  p_output1[24]=0.001*t3362*var2[5] + 0.001*t3210*var2[24];
  p_output1[25]=-0.001*t2182*var2[5] - 0.001*t1119*var2[24];
  p_output1[26]=(t2444*(t1119*t3792 + t3026*t3915 + t4210 + t4211) + t2182*t4411 + t3362*t4421 + t3464*(-1.*t2014*t3792 + t4246 + t4248 - 1.*t3915*t697))*var2[5] + (t2444*(0. + t3110*t3792 + t4289) + t3464*(0. - 1.*t1402*t3792 + t4301) + t1119*t4411 + t3210*t4421)*var2[24];
  p_output1[27]=t2182*var2[5] + t1119*var2[24];
  p_output1[28]=t3362*var2[5] + t3210*var2[24];
  p_output1[29]=0;
  p_output1[30]=-1.*(0. - 1.*t3042*t3763 - 1.*t1006*t3784)*var2[24];
  p_output1[31]=-1.*(0. + t1006*t3763 + t3784*t571)*var2[24];
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
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



void dJb_shoulder_roll_joint_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
