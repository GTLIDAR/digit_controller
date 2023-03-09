/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_hip_abduction_left_src.h"

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
  double t578;
  double t615;
  double t664;
  double t608;
  double t629;
  double t642;
  double t564;
  double t671;
  double t677;
  double t682;
  double t561;
  double t715;
  double t689;
  double t710;
  double t748;
  double t750;
  double t756;
  double t770;
  double t773;
  double t759;
  double t760;
  double t718;
  double t803;
  double t804;
  double t805;
  double t722;
  double t653;
  double t691;
  double t796;
  double t815;
  double t723;
  double t765;
  double t766;
  double t774;
  double t781;
  double t785;
  double t786;
  double t790;
  double t802;
  double t806;
  double t807;
  double t809;
  double t811;
  double t816;
  double t817;
  double t819;
  double t824;
  double t825;
  double t831;
  double t832;
  double t890;
  double t891;
  double t892;
  double t893;
  double t895;
  double t896;
  double t897;
  double t888;
  double t889;
  double t900;
  double t901;
  double t903;
  double t904;
  double t905;
  double t907;
  double t908;
  double t918;
  double t922;
  double t912;
  double t913;
  double t914;
  double t947;
  double t948;
  double t949;
  double t944;
  double t980;
  double t982;
  double t970;
  double t971;
  double t972;
  double t1036;
  double t1037;
  double t1038;
  double t1039;
  double t1041;
  double t1042;
  double t1043;
  double t1044;
  double t879;
  double t880;
  double t881;
  double t882;
  double t883;
  double t884;
  double t885;
  double t886;
  double t887;
  double t1023;
  double t1033;
  double t1052;
  double t1053;
  double t1091;
  double t1092;
  double t1060;
  double t1061;
  double t1094;
  double t1095;
  t578 = Cos(var1[6]);
  t615 = Sin(var1[6]);
  t664 = Cos(var1[5]);
  t608 = 0.366501*t578;
  t629 = -0.930418*t615;
  t642 = t608 + t629;
  t564 = Sin(var1[5]);
  t671 = 0.930418*t578;
  t677 = 0.366501*t615;
  t682 = t671 + t677;
  t561 = Sin(var1[3]);
  t715 = Sin(var1[4]);
  t689 = t664*t682;
  t710 = Cos(var1[3]);
  t748 = -0.366501*t578;
  t750 = 0.930418*t615;
  t756 = t748 + t750;
  t770 = -1.*t564*t682;
  t773 = t664*t756;
  t759 = t564*t756;
  t760 = 0. + t689 + t759;
  t718 = t664*t642;
  t803 = -0.930418*t578;
  t804 = -0.366501*t615;
  t805 = t803 + t804;
  t722 = t564*t682;
  t653 = -1.*t564*t642;
  t691 = t653 + t689;
  t796 = Cos(var1[4]);
  t815 = 0. + t718 + t722;
  t723 = t718 + t722;
  t765 = t715*t760;
  t766 = 0. + t765;
  t774 = 0. + t770 + t773;
  t781 = t770 + t773;
  t785 = -1.*t664*t682;
  t786 = -1.*t564*t756;
  t790 = t785 + t786;
  t802 = t564*t642;
  t806 = t664*t805;
  t807 = t802 + t806;
  t809 = -1.*t564*t805;
  t811 = t718 + t809;
  t816 = t715*t815;
  t817 = 0. + t816;
  t819 = 0. + t653 + t689;
  t824 = -1.*t664*t642;
  t825 = t824 + t770;
  t831 = -1.*t796;
  t832 = 0. + t831;
  t890 = -1.*t578;
  t891 = 1. + t890;
  t892 = 0.091*t891;
  t893 = 0.091*t578;
  t895 = 0. + t892 + t893;
  t896 = t895*t564;
  t897 = 0. + t896;
  t888 = 0. + t715;
  t889 = 0.001*t715;
  t900 = t796*t897;
  t901 = 0. + t889 + t900;
  t903 = -0.001*t796;
  t904 = t715*t897;
  t905 = 0. + t903 + t904;
  t907 = t664*t895;
  t908 = 0. + t907;
  t918 = t796*t815;
  t922 = 0. + t918;
  t912 = t888*t901;
  t913 = t832*t905;
  t914 = 0. + t912 + t913;
  t947 = 0.001*t796;
  t948 = -1.*t715*t897;
  t949 = t947 + t948;
  t944 = t889 + t900;
  t980 = t796*t760;
  t982 = 0. + t980;
  t970 = -1.*t888*t901;
  t971 = -1.*t832*t905;
  t972 = 0. + t970 + t971;
  t1036 = -1.*t901*t982;
  t1037 = -1.*t905*t766;
  t1038 = -1.*t908*t774;
  t1039 = t1036 + t1037 + t1038;
  t1041 = t901*t922;
  t1042 = t905*t817;
  t1043 = t908*t819;
  t1044 = t1041 + t1042 + t1043;
  t879 = var2[6]*t796*t723;
  t880 = var2[5]*t796*t781;
  t881 = -1.*var2[4]*t715*t760;
  t882 = t879 + t880 + t881;
  t883 = var2[6]*t796*t807;
  t884 = var2[5]*t796*t691;
  t885 = -1.*var2[4]*t715*t815;
  t886 = t883 + t884 + t885;
  t887 = var2[4]*t796;
  t1023 = -1.*t908*t691;
  t1033 = t908*t811;
  t1052 = t895*t564*t774;
  t1053 = -1.*t908*t790;
  t1091 = -1.*t897*t760;
  t1092 = 0. + t1038 + t1091;
  t1060 = -1.*t895*t564*t819;
  t1061 = t908*t825;
  t1094 = t897*t815;
  t1095 = 0. + t1043 + t1094;
  p_output1[0]=(-1.*t561*t766 - 1.*t710*t774)*var2[3] + t710*t760*t796*var2[4] + (t710*t715*t781 - 1.*t561*t790)*var2[5] + (-1.*t561*t691 + t710*t715*t723)*var2[6];
  p_output1[1]=(-1.*t561*t817 - 1.*t710*t819)*var2[3] + t710*t796*t815*var2[4] + (t691*t710*t715 - 1.*t561*t825)*var2[5] + (t710*t715*t807 - 1.*t561*t811)*var2[6];
  p_output1[2]=-1.*t561*t832*var2[3] + t710*t715*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(t710*t766 - 1.*t561*t774)*var2[3] + t561*t760*t796*var2[4] + (t561*t715*t781 + t710*t790)*var2[5] + (t691*t710 + t561*t715*t723)*var2[6];
  p_output1[7]=(t710*t817 - 1.*t561*t819)*var2[3] + t561*t796*t815*var2[4] + (t561*t691*t715 + t710*t825)*var2[5] + (t561*t715*t807 + t710*t811)*var2[6];
  p_output1[8]=t710*t832*var2[3] + t561*t715*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t882;
  p_output1[13]=t886;
  p_output1[14]=t887;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t715*t815*t914 + t796*(-1.*t817*t905 - 1.*t819*t908 - 1.*t901*t922) + t922*(t796*t901 + t715*t905 + t832*t944 + t888*t949) + t888*(t715*t815*t901 - 1.*t796*t815*t905 - 1.*t817*t944 - 1.*t922*t949))*var2[4] + (t691*t796*t914 + (t664*t715*t832*t895 + t664*t796*t888*t895)*t922 + t888*(-1.*t664*t715*t817*t895 + t564*t819*t895 - 1.*t691*t796*t901 - 1.*t691*t715*t905 - 1.*t825*t908 - 1.*t664*t796*t895*t922))*var2[5] + (0. + t888*(0. - 1.*t796*t807*t901 - 1.*t715*t807*t905 - 1.*t811*t908) + t796*t807*t914)*var2[6];
  p_output1[19]=(-1.*t715*t760*t972 + (-1.*t796*t901 - 1.*t715*t905 - 1.*t832*t944 - 1.*t888*t949)*t982 + t796*(t766*t905 + t774*t908 + t901*t982) + t888*(-1.*t715*t760*t901 + t760*t796*t905 + t766*t944 + t949*t982))*var2[4] + (t781*t796*t972 + (-1.*t664*t715*t832*t895 - 1.*t664*t796*t888*t895)*t982 + t888*(t664*t715*t766*t895 - 1.*t564*t774*t895 + t781*t796*t901 + t715*t781*t905 + t790*t908 + t664*t796*t895*t982))*var2[5] + (0. + t888*(0. + t723*t796*t901 + t715*t723*t905 + t691*t908) + t723*t796*t972)*var2[6];
  p_output1[20]=(-1.*t1044*t715*t760 - 1.*t1039*t715*t815 + (-1.*t715*t815*t901 + t796*t815*t905 + t817*t944 + t922*t949)*t982 + t922*(t715*t760*t901 - 1.*t760*t796*t905 - 1.*t766*t944 - 1.*t949*t982))*var2[4] + (t1039*t691*t796 + t1044*t781*t796 + (t1060 + t1061 + t664*t715*t817*t895 + t691*t796*t901 + t691*t715*t905 + t664*t796*t895*t922)*t982 + t922*(t1052 + t1053 - 1.*t664*t715*t766*t895 - 1.*t781*t796*t901 - 1.*t715*t781*t905 - 1.*t664*t796*t895*t982))*var2[5] + (t1044*t723*t796 + t1039*t796*t807 + (0. + t1023 - 1.*t723*t796*t901 - 1.*t715*t723*t905)*t922 + (0. + t1033 + t796*t807*t901 + t715*t807*t905)*t982)*var2[6];
  p_output1[21]=t882;
  p_output1[22]=t886;
  p_output1[23]=t887;
  p_output1[24]=0.001*t825*var2[5] + 0.001*t811*var2[6];
  p_output1[25]=-0.001*t790*var2[5] - 0.001*t691*var2[6];
  p_output1[26]=(t1095*t790 + t1092*t825 + t774*(t1060 + t1061 + t664*t815*t895 + t691*t897) + t819*(t1052 + t1053 - 1.*t664*t760*t895 - 1.*t781*t897))*var2[5] + (t1095*t691 + t1092*t811 + t819*(0. + t1023 - 1.*t723*t897) + t774*(0. + t1033 + t807*t897))*var2[6];
  p_output1[27]=t790*var2[5] + t691*var2[6];
  p_output1[28]=t825*var2[5] + t811*var2[6];
  p_output1[29]=0;
  p_output1[30]=-1.*(0. - 1.*t642*t895)*var2[6];
  p_output1[31]=-1.*(0. + t682*t895)*var2[6];
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



void dJb_hip_abduction_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
