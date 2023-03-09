/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_shoulder_roll_joint_left_src.h"

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
  double t69;
  double t444;
  double t25;
  double t347;
  double t446;
  double t508;
  double t622;
  double t748;
  double t7;
  double t1111;
  double t1280;
  double t1421;
  double t1665;
  double t651;
  double t713;
  double t724;
  double t1055;
  double t2135;
  double t2140;
  double t798;
  double t802;
  double t13;
  double t1677;
  double t1796;
  double t1592;
  double t1604;
  double t3255;
  double t3259;
  double t3261;
  double t3083;
  double t1830;
  double t2146;
  double t2254;
  double t2256;
  double t2548;
  double t2877;
  double t2983;
  double t2990;
  double t3212;
  double t3216;
  double t3264;
  double t3283;
  double t3285;
  double t3352;
  double t3362;
  double t3405;
  double t3449;
  double t3451;
  double t3480;
  double t3493;
  double t3713;
  double t3719;
  double t3720;
  double t3723;
  double t3729;
  double t3735;
  double t3738;
  double t3750;
  double t3756;
  double t3757;
  double t3776;
  double t3707;
  double t3708;
  double t3785;
  double t3793;
  double t3808;
  double t3834;
  double t3839;
  double t3865;
  double t3869;
  double t3935;
  double t3801;
  double t3843;
  double t3848;
  double t3876;
  double t3958;
  double t3963;
  double t4015;
  double t4019;
  double t4021;
  double t4006;
  double t4079;
  double t4080;
  double t4081;
  double t3971;
  double t3972;
  double t3979;
  double t4105;
  double t4112;
  double t4235;
  double t4245;
  double t4248;
  double t4249;
  double t4288;
  double t4290;
  double t4292;
  double t4298;
  double t3662;
  double t3676;
  double t3678;
  double t3680;
  double t3685;
  double t3687;
  double t3696;
  double t3699;
  double t3706;
  double t4313;
  double t4304;
  double t4430;
  double t4431;
  double t4204;
  double t4205;
  double t4448;
  double t4449;
  double t4258;
  double t4262;
  t69 = Cos(var1[13]);
  t444 = Sin(var1[13]);
  t25 = Cos(var1[5]);
  t347 = 0.984808*t69;
  t446 = -0.173648*t444;
  t508 = t347 + t446;
  t622 = t25*t508;
  t748 = Sin(var1[5]);
  t7 = Cos(var1[3]);
  t1111 = -0.173648*t69;
  t1280 = -0.984808*t444;
  t1421 = t1111 + t1280;
  t1665 = Sin(var1[4]);
  t651 = 0.173648*t69;
  t713 = 0.984808*t444;
  t724 = t651 + t713;
  t1055 = Sin(var1[3]);
  t2135 = t25*t724;
  t2140 = -1.*t508*t748;
  t798 = t724*t748;
  t802 = 0. + t622 + t798;
  t13 = Cos(var1[4]);
  t1677 = t25*t1421;
  t1796 = t508*t748;
  t1592 = -1.*t1421*t748;
  t1604 = t622 + t1592;
  t3255 = -0.984808*t69;
  t3259 = 0.173648*t444;
  t3261 = t3255 + t3259;
  t3083 = 0. + t1677 + t1796;
  t1830 = t1677 + t1796;
  t2146 = t2135 + t2140;
  t2254 = -1.*t25*t508;
  t2256 = -1.*t724*t748;
  t2548 = t2254 + t2256;
  t2877 = 0. + t2135 + t2140;
  t2983 = t1665*t802;
  t2990 = 0. + t2983;
  t3212 = -1.*t25*t1421;
  t3216 = t3212 + t2140;
  t3264 = t25*t3261;
  t3283 = t1421*t748;
  t3285 = t3264 + t3283;
  t3352 = -1.*t3261*t748;
  t3362 = t1677 + t3352;
  t3405 = 0. + t622 + t1592;
  t3449 = t1665*t3083;
  t3451 = 0. + t3449;
  t3480 = -1.*t13;
  t3493 = 0. + t3480;
  t3713 = -1.*t69;
  t3719 = 1. + t3713;
  t3720 = 0.4*t3719;
  t3723 = 0.4*t69;
  t3729 = 0. + t3720 + t3723;
  t3735 = t3729*t25;
  t3738 = 0.12*t3719;
  t3750 = 0.12*t69;
  t3756 = 0. + t3738 + t3750;
  t3757 = t3756*t748;
  t3776 = 0. + t3735 + t3757;
  t3707 = 0. + t1665;
  t3708 = 0.001*t1665;
  t3785 = t13*t3776;
  t3793 = 0. + t3708 + t3785;
  t3808 = -0.001*t13;
  t3834 = t1665*t3776;
  t3839 = 0. + t3808 + t3834;
  t3865 = t3756*t25;
  t3869 = -1.*t3729*t748;
  t3935 = t3865 + t3869;
  t3801 = t3707*t3793;
  t3843 = t3493*t3839;
  t3848 = 0. + t3801 + t3843;
  t3876 = 0. + t3865 + t3869;
  t3958 = t13*t3083;
  t3963 = 0. + t3958;
  t4015 = 0.001*t13;
  t4019 = -1.*t1665*t3776;
  t4021 = t4015 + t4019;
  t4006 = t3708 + t3785;
  t4079 = -1.*t3707*t3793;
  t4080 = -1.*t3493*t3839;
  t4081 = 0. + t4079 + t4080;
  t3971 = -1.*t3729*t25;
  t3972 = -1.*t3756*t748;
  t3979 = t3971 + t3972;
  t4105 = t13*t802;
  t4112 = 0. + t4105;
  t4235 = t3876*t3405;
  t4245 = t3793*t3963;
  t4248 = t3839*t3451;
  t4249 = t4235 + t4245 + t4248;
  t4288 = -1.*t3876*t2877;
  t4290 = -1.*t3793*t4112;
  t4292 = -1.*t3839*t2990;
  t4298 = t4288 + t4290 + t4292;
  t3662 = var2[5]*t13*t2146;
  t3676 = var2[13]*t13*t1830;
  t3678 = -1.*var2[4]*t1665*t802;
  t3680 = t3662 + t3676 + t3678;
  t3685 = var2[5]*t13*t1604;
  t3687 = var2[13]*t13*t3285;
  t3696 = -1.*var2[4]*t1665*t3083;
  t3699 = t3685 + t3687 + t3696;
  t3706 = var2[4]*t13;
  t4313 = -1.*t3876*t1604;
  t4304 = t3876*t3362;
  t4430 = t3776*t3083;
  t4431 = 0. + t4235 + t4430;
  t4204 = t3979*t3405;
  t4205 = t3876*t3216;
  t4448 = -1.*t3776*t802;
  t4449 = 0. + t4288 + t4448;
  t4258 = -1.*t3979*t2877;
  t4262 = -1.*t3876*t2548;
  p_output1[0]=(-1.*t1055*t2990 - 1.*t2877*t7)*var2[3] + t13*t7*t802*var2[4] + (-1.*t1055*t2548 + t1665*t2146*t7)*var2[5] + (-1.*t1055*t1604 + t1665*t1830*t7)*var2[13];
  p_output1[1]=(-1.*t1055*t3451 - 1.*t3405*t7)*var2[3] + t13*t3083*t7*var2[4] + (-1.*t1055*t3216 + t1604*t1665*t7)*var2[5] + (-1.*t1055*t3362 + t1665*t3285*t7)*var2[13];
  p_output1[2]=-1.*t1055*t3493*var2[3] + t1665*t7*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1055*t2877 + t2990*t7)*var2[3] + t1055*t13*t802*var2[4] + (t1055*t1665*t2146 + t2548*t7)*var2[5] + (t1055*t1665*t1830 + t1604*t7)*var2[13];
  p_output1[7]=(-1.*t1055*t3405 + t3451*t7)*var2[3] + t1055*t13*t3083*var2[4] + (t1055*t1604*t1665 + t3216*t7)*var2[5] + (t1055*t1665*t3285 + t3362*t7)*var2[13];
  p_output1[8]=t3493*t7*var2[3] + t1055*t1665*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3680;
  p_output1[13]=t3699;
  p_output1[14]=t3706;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t1665*t3083*t3848 + t13*(-1.*t3451*t3839 - 1.*t3405*t3876 - 1.*t3793*t3963) + t3963*(t13*t3793 + t1665*t3839 + t3493*t4006 + t3707*t4021) + t3707*(t1665*t3083*t3793 - 1.*t13*t3083*t3839 - 1.*t3451*t4006 - 1.*t3963*t4021))*var2[4] + (t13*t1604*t3848 + (t1665*t3493*t3935 + t13*t3707*t3935)*t3963 + t3707*(-1.*t13*t1604*t3793 - 1.*t1604*t1665*t3839 - 1.*t3216*t3876 - 1.*t1665*t3451*t3935 - 1.*t13*t3935*t3963 - 1.*t3405*t3979))*var2[5] + (0. + t13*t3285*t3848 + t3707*(0. - 1.*t13*t3285*t3793 - 1.*t1665*t3285*t3839 - 1.*t3362*t3876))*var2[13];
  p_output1[19]=((-1.*t13*t3793 - 1.*t1665*t3839 - 1.*t3493*t4006 - 1.*t3707*t4021)*t4112 + t13*(t2990*t3839 + t2877*t3876 + t3793*t4112) - 1.*t1665*t4081*t802 + t3707*(t2990*t4006 + t4021*t4112 - 1.*t1665*t3793*t802 + t13*t3839*t802))*var2[4] + (t13*t2146*t4081 + (-1.*t1665*t3493*t3935 - 1.*t13*t3707*t3935)*t4112 + t3707*(t13*t2146*t3793 + t1665*t2146*t3839 + t2548*t3876 + t1665*t2990*t3935 + t2877*t3979 + t13*t3935*t4112))*var2[5] + (0. + t3707*(0. + t13*t1830*t3793 + t1665*t1830*t3839 + t1604*t3876) + t13*t1830*t4081)*var2[13];
  p_output1[20]=((-1.*t1665*t3083*t3793 + t13*t3083*t3839 + t3451*t4006 + t3963*t4021)*t4112 - 1.*t1665*t3083*t4298 - 1.*t1665*t4249*t802 + t3963*(-1.*t2990*t4006 - 1.*t4021*t4112 + t1665*t3793*t802 - 1.*t13*t3839*t802))*var2[4] + (t4112*(t13*t1604*t3793 + t1604*t1665*t3839 + t1665*t3451*t3935 + t13*t3935*t3963 + t4204 + t4205) + t13*t2146*t4249 + t3963*(-1.*t13*t2146*t3793 - 1.*t1665*t2146*t3839 - 1.*t1665*t2990*t3935 - 1.*t13*t3935*t4112 + t4258 + t4262) + t13*t1604*t4298)*var2[5] + (t13*t1830*t4249 + t13*t3285*t4298 + t4112*(0. + t13*t3285*t3793 + t1665*t3285*t3839 + t4304) + t3963*(0. - 1.*t13*t1830*t3793 - 1.*t1665*t1830*t3839 + t4313))*var2[13];
  p_output1[21]=t3680;
  p_output1[22]=t3699;
  p_output1[23]=t3706;
  p_output1[24]=0.001*t3216*var2[5] + 0.001*t3362*var2[13];
  p_output1[25]=-0.001*t2548*var2[5] - 0.001*t1604*var2[13];
  p_output1[26]=(t2877*(t1604*t3776 + t3083*t3935 + t4204 + t4205) + t2548*t4431 + t3216*t4449 + t3405*(-1.*t2146*t3776 + t4258 + t4262 - 1.*t3935*t802))*var2[5] + (t2877*(0. + t3285*t3776 + t4304) + t3405*(0. - 1.*t1830*t3776 + t4313) + t1604*t4431 + t3362*t4449)*var2[13];
  p_output1[27]=t2548*var2[5] + t1604*var2[13];
  p_output1[28]=t3216*var2[5] + t3362*var2[13];
  p_output1[29]=0;
  p_output1[30]=-1.*(0. - 1.*t3261*t3729 - 1.*t1421*t3756)*var2[13];
  p_output1[31]=-1.*(0. + t1421*t3729 + t3756*t508)*var2[13];
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



void dJb_shoulder_roll_joint_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
