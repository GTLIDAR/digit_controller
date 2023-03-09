/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_hip_abduction_left_src.h"

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
  double t460;
  double t487;
  double t488;
  double t494;
  double t503;
  double t504;
  double t489;
  double t490;
  double t491;
  double t493;
  double t527;
  double t470;
  double t506;
  double t510;
  double t529;
  double t530;
  double t531;
  double t537;
  double t539;
  double t540;
  double t549;
  double t550;
  double t551;
  double t553;
  double t554;
  double t555;
  double t567;
  double t568;
  double t570;
  double t603;
  double t605;
  double t606;
  double t616;
  double t617;
  double t618;
  double t480;
  double t497;
  double t511;
  double t512;
  double t514;
  double t516;
  double t520;
  double t525;
  double t528;
  double t583;
  double t584;
  double t585;
  double t586;
  double t587;
  double t588;
  double t589;
  double t590;
  double t592;
  double t653;
  double t654;
  double t655;
  double t656;
  double t657;
  double t658;
  double t659;
  double t536;
  double t541;
  double t542;
  double t543;
  double t544;
  double t545;
  double t566;
  double t571;
  double t572;
  double t573;
  double t574;
  double t576;
  double t578;
  double t685;
  double t686;
  double t687;
  double t688;
  double t689;
  double t690;
  double t691;
  double t736;
  double t737;
  double t738;
  double t593;
  double t594;
  double t595;
  double t596;
  double t599;
  double t600;
  double t607;
  double t608;
  double t609;
  double t610;
  double t611;
  double t612;
  double t613;
  double t695;
  double t697;
  double t698;
  double t699;
  double t700;
  double t701;
  double t704;
  double t705;
  double t706;
  double t707;
  double t708;
  double t709;
  double t710;
  double t642;
  double t643;
  double t644;
  double t645;
  double t646;
  double t648;
  double t651;
  double t724;
  double t725;
  double t726;
  double t727;
  double t728;
  double t729;
  double t730;
  double t552;
  double t556;
  double t558;
  double t560;
  double t561;
  double t562;
  double t563;
  double t673;
  double t674;
  double t675;
  double t676;
  double t677;
  double t678;
  double t679;
  double t735;
  double t739;
  double t740;
  double t741;
  double t742;
  double t743;
  double t744;
  double t615;
  double t619;
  double t620;
  double t621;
  double t622;
  double t625;
  double t626;
  double t750;
  double t751;
  double t752;
  double t753;
  double t754;
  double t755;
  double t756;
  double t712;
  double t713;
  double t714;
  double t715;
  double t716;
  double t717;
  double t718;
  t460 = Sin(var1[3]);
  t487 = Cos(var1[4]);
  t488 = Cos(var1[6]);
  t494 = Sin(var1[5]);
  t503 = Cos(var1[5]);
  t504 = Sin(var1[6]);
  t489 = -1.*t488;
  t490 = 1. + t489;
  t491 = 0.091*t490;
  t493 = 0. + t491;
  t527 = Cos(var1[3]);
  t470 = Sin(var1[4]);
  t506 = 0.091*t504;
  t510 = 0. + t506;
  t529 = t503*t460;
  t530 = -1.*t527*t470*t494;
  t531 = t529 + t530;
  t537 = -1.*t527*t503*t470;
  t539 = -1.*t460*t494;
  t540 = t537 + t539;
  t549 = -1.*t503*t460*t470;
  t550 = t527*t494;
  t551 = t549 + t550;
  t553 = -1.*t527*t503;
  t554 = -1.*t460*t470*t494;
  t555 = t553 + t554;
  t567 = t527*t503;
  t568 = t460*t470*t494;
  t570 = t567 + t568;
  t603 = t527*t503*t470;
  t605 = t460*t494;
  t606 = t603 + t605;
  t616 = -1.*t503*t460;
  t617 = t527*t470*t494;
  t618 = t616 + t617;
  t480 = -0.001*t460*t470;
  t497 = -1.*t487*t493*t460*t494;
  t511 = -1.*t487*t503*t460*t510;
  t512 = -1.*t487*t488*t460*t494;
  t514 = t487*t503*t460*t504;
  t516 = t512 + t514;
  t520 = 0.091*t516;
  t525 = t480 + t497 + t511 + t520;
  t528 = 0.001*t527*t487;
  t583 = 0.001*t527*t470;
  t584 = t527*t487*t493*t494;
  t585 = t527*t487*t503*t510;
  t586 = t527*t487*t488*t494;
  t587 = -1.*t527*t487*t503*t504;
  t588 = t586 + t587;
  t589 = 0.091*t588;
  t590 = t583 + t584 + t585 + t589;
  t592 = 0.001*t487*t460;
  t653 = t527*t487*t503*t493;
  t654 = -1.*t527*t487*t494*t510;
  t655 = t527*t487*t503*t488;
  t656 = t527*t487*t494*t504;
  t657 = t655 + t656;
  t658 = 0.091*t657;
  t659 = t653 + t654 + t658;
  t536 = t493*t531;
  t541 = t540*t510;
  t542 = t488*t531;
  t543 = -1.*t540*t504;
  t544 = t542 + t543;
  t545 = 0.091*t544;
  t566 = t493*t551;
  t571 = t570*t510;
  t572 = t488*t551;
  t573 = -1.*t570*t504;
  t574 = t572 + t573;
  t576 = 0.091*t574;
  t578 = t566 + t571 + t576;
  t685 = t487*t503*t493*t460;
  t686 = -1.*t487*t460*t494*t510;
  t687 = t487*t503*t488*t460;
  t688 = t487*t460*t494*t504;
  t689 = t687 + t688;
  t690 = 0.091*t689;
  t691 = t685 + t686 + t690;
  t736 = t503*t460*t470;
  t737 = -1.*t527*t494;
  t738 = t736 + t737;
  t593 = t493*t555;
  t594 = t551*t510;
  t595 = t488*t555;
  t596 = -1.*t551*t504;
  t599 = t595 + t596;
  t600 = 0.091*t599;
  t607 = t493*t606;
  t608 = t531*t510;
  t609 = t488*t606;
  t610 = -1.*t531*t504;
  t611 = t609 + t610;
  t612 = 0.091*t611;
  t613 = t607 + t608 + t612;
  t695 = -1.*t487*t493*t494;
  t697 = -1.*t487*t503*t510;
  t698 = -1.*t487*t488*t494;
  t699 = t487*t503*t504;
  t700 = t698 + t699;
  t701 = 0.091*t700;
  t704 = -1.*t503*t493*t470;
  t705 = t470*t494*t510;
  t706 = -1.*t503*t488*t470;
  t707 = -1.*t470*t494*t504;
  t708 = t706 + t707;
  t709 = 0.091*t708;
  t710 = t704 + t705 + t709;
  t642 = 0.091*t527*t487*t503*t488;
  t643 = 0.091*t527*t487*t494*t504;
  t644 = -1.*t527*t487*t503*t488;
  t645 = -1.*t527*t487*t494*t504;
  t646 = t644 + t645;
  t648 = 0.091*t646;
  t651 = t642 + t643 + t648;
  t724 = 0.091*t488*t531;
  t725 = 0.091*t606*t504;
  t726 = -1.*t488*t531;
  t727 = -1.*t606*t504;
  t728 = t726 + t727;
  t729 = 0.091*t728;
  t730 = t724 + t725 + t729;
  t552 = 0.091*t488*t551;
  t556 = 0.091*t555*t504;
  t558 = -1.*t488*t551;
  t560 = -1.*t555*t504;
  t561 = t558 + t560;
  t562 = 0.091*t561;
  t563 = t552 + t556 + t562;
  t673 = 0.091*t487*t503*t488*t460;
  t674 = 0.091*t487*t460*t494*t504;
  t675 = -1.*t487*t503*t488*t460;
  t676 = -1.*t487*t460*t494*t504;
  t677 = t675 + t676;
  t678 = 0.091*t677;
  t679 = t673 + t674 + t678;
  t735 = 0.091*t488*t555;
  t739 = 0.091*t738*t504;
  t740 = -1.*t488*t555;
  t741 = -1.*t738*t504;
  t742 = t740 + t741;
  t743 = 0.091*t742;
  t744 = t735 + t739 + t743;
  t615 = 0.091*t488*t606;
  t619 = 0.091*t618*t504;
  t620 = -1.*t488*t606;
  t621 = -1.*t618*t504;
  t622 = t620 + t621;
  t625 = 0.091*t622;
  t626 = t615 + t619 + t625;
  t750 = -0.091*t487*t488*t494;
  t751 = 0.091*t487*t503*t504;
  t752 = t487*t488*t494;
  t753 = -1.*t487*t503*t504;
  t754 = t752 + t753;
  t755 = 0.091*t754;
  t756 = t750 + t751 + t755;
  t712 = -0.091*t503*t488*t470;
  t713 = -0.091*t470*t494*t504;
  t714 = t503*t488*t470;
  t715 = t470*t494*t504;
  t716 = t714 + t715;
  t717 = 0.091*t716;
  t718 = t712 + t713 + t717;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t528 + t536 + t541 + t545)*var2[3] + t525*var2[4] + t578*var2[5] + t563*var2[6];
  p_output1[10]=(t592 + t593 + t594 + t600)*var2[3] + t590*var2[4] + t613*var2[5] + t626*var2[6];
  p_output1[11]=0;
  p_output1[12]=t525*var2[3] + (-1.*t470*t493*t494*t527 - 1.*t470*t503*t510*t527 + 0.091*(-1.*t470*t488*t494*t527 + t470*t503*t504*t527) + t528)*var2[4] + t659*var2[5] + t651*var2[6];
  p_output1[13]=t590*var2[3] + (-1.*t460*t470*t493*t494 + 0.091*(-1.*t460*t470*t488*t494 + t460*t470*t503*t504) - 1.*t460*t470*t503*t510 + t592)*var2[4] + t691*var2[5] + t679*var2[6];
  p_output1[14]=(-0.001*t470 + t695 + t697 + t701)*var2[4] + t710*var2[5] + t718*var2[6];
  p_output1[15]=t578*var2[3] + t659*var2[4] + (t536 + t541 + t545)*var2[5] + t730*var2[6];
  p_output1[16]=t613*var2[3] + t691*var2[4] + (t593 + t594 + t600)*var2[5] + t744*var2[6];
  p_output1[17]=t710*var2[4] + (t695 + t697 + t701)*var2[5] + t756*var2[6];
  p_output1[18]=t563*var2[3] + t651*var2[4] + t730*var2[5] + (-0.091*t504*t606 + 0.091*t488*t618 + 0.091*(t504*t606 - 1.*t488*t618))*var2[6];
  p_output1[19]=t626*var2[3] + t679*var2[4] + t744*var2[5] + (0.091*t488*t570 - 0.091*t504*t738 + 0.091*(-1.*t488*t570 + t504*t738))*var2[6];
  p_output1[20]=t718*var2[4] + t756*var2[5] + (0.091*t487*t488*t494 - 0.091*t487*t503*t504 + t701)*var2[6];
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
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
}



void dJp_hip_abduction_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
