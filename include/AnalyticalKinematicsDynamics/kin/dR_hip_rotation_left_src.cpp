/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_hip_rotation_left_src.h"

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
  double t501;
  double t3555;
  double t3561;
  double t3558;
  double t3559;
  double t3566;
  double t3587;
  double t3540;
  double t3621;
  double t3593;
  double t3595;
  double t3630;
  double t3632;
  double t3633;
  double t3611;
  double t3624;
  double t3628;
  double t3604;
  double t3605;
  double t3647;
  double t3649;
  double t3650;
  double t3476;
  double t3508;
  double t3533;
  double t3534;
  double t3539;
  double t3679;
  double t3680;
  double t3681;
  double t3672;
  double t3673;
  double t3676;
  double t3638;
  double t3639;
  double t3640;
  double t3644;
  double t3734;
  double t3735;
  double t3736;
  double t3730;
  double t3731;
  double t3732;
  double t3677;
  double t3693;
  double t3694;
  double t3743;
  double t3744;
  double t3745;
  double t3751;
  double t3782;
  double t3787;
  double t3788;
  double t3794;
  double t3795;
  double t3796;
  double t3656;
  double t3661;
  double t3662;
  double t3652;
  double t3654;
  double t3822;
  double t3823;
  double t3629;
  double t3634;
  double t3635;
  double t3828;
  double t3829;
  double t3682;
  double t3683;
  double t3685;
  double t3687;
  double t3688;
  double t3560;
  double t3575;
  double t3585;
  double t3597;
  double t3598;
  double t3603;
  double t3850;
  double t3851;
  double t3858;
  double t3859;
  double t3755;
  double t3756;
  double t3752;
  double t3753;
  double t3733;
  double t3737;
  double t3738;
  double t3836;
  double t3712;
  double t3713;
  double t3715;
  double t3719;
  double t3720;
  double t3721;
  double t3766;
  double t3769;
  double t3778;
  double t3779;
  double t3780;
  double t3798;
  double t3799;
  double t3800;
  double t3805;
  double t3806;
  double t3807;
  double t3809;
  double t3810;
  double t3811;
  double t3821;
  double t3824;
  double t3825;
  double t3830;
  double t3831;
  double t3832;
  double t3837;
  double t3838;
  double t3840;
  double t3841;
  double t3842;
  double t3847;
  double t3848;
  double t3852;
  double t3853;
  double t3856;
  double t3857;
  double t3860;
  double t3861;
  double t3865;
  double t3866;
  double t3867;
  double t3868;
  double t3870;
  double t3871;
  double t3872;
  double t3873;
  double t3877;
  double t3878;
  double t3879;
  double t3880;
  double t3882;
  double t3883;
  double t3884;
  double t3885;
  double t3891;
  double t3892;
  double t3893;
  double t3896;
  double t3897;
  double t3898;
  double t3902;
  double t3903;
  double t3904;
  double t3906;
  double t3907;
  double t3908;
  double t3912;
  double t3913;
  double t3914;
  double t3916;
  double t3917;
  double t3918;
  double t3919;
  double t3923;
  double t3924;
  double t3925;
  double t3926;
  double t3928;
  double t3929;
  double t3930;
  double t3931;
  double t3935;
  double t3936;
  double t3937;
  double t3938;
  double t3940;
  double t3941;
  double t3942;
  double t3943;
  double t3948;
  double t3949;
  double t3950;
  double t3952;
  double t3953;
  double t3954;
  double t3958;
  double t3959;
  double t3960;
  double t3962;
  double t3963;
  double t3964;
  double t3968;
  double t3969;
  double t3970;
  double t3971;
  double t3973;
  double t3974;
  double t3975;
  double t3976;
  double t3980;
  double t3981;
  double t3982;
  double t3983;
  double t3985;
  double t3986;
  double t3987;
  double t3988;
  t501 = Cos(var1[3]);
  t3555 = Cos(var1[4]);
  t3561 = Cos(var1[5]);
  t3558 = Cos(var1[6]);
  t3559 = Sin(var1[5]);
  t3566 = Sin(var1[6]);
  t3587 = Sin(var1[7]);
  t3540 = Sin(var1[4]);
  t3621 = Sin(var1[3]);
  t3593 = -0.930418*t3587;
  t3595 = 0. + t3593;
  t3630 = -1.*t3561*t3621;
  t3632 = t501*t3540*t3559;
  t3633 = t3630 + t3632;
  t3611 = t501*t3561*t3540;
  t3624 = t3621*t3559;
  t3628 = t3611 + t3624;
  t3604 = -0.366501*t3587;
  t3605 = 0. + t3604;
  t3647 = t3561*t3621;
  t3649 = -1.*t501*t3540*t3559;
  t3650 = t3647 + t3649;
  t3476 = Cos(var1[7]);
  t3508 = -1.*t3476;
  t3533 = 1. + t3508;
  t3534 = -1.000000637725*t3533;
  t3539 = 1. + t3534;
  t3679 = -1.*t3561*t3621*t3540;
  t3680 = t501*t3559;
  t3681 = t3679 + t3680;
  t3672 = -1.*t501*t3561;
  t3673 = -1.*t3621*t3540*t3559;
  t3676 = t3672 + t3673;
  t3638 = t3558*t3633;
  t3639 = -1.*t3628*t3566;
  t3640 = t3638 + t3639;
  t3644 = t3558*t3628;
  t3734 = t501*t3561;
  t3735 = t3621*t3540*t3559;
  t3736 = t3734 + t3735;
  t3730 = t3561*t3621*t3540;
  t3731 = -1.*t501*t3559;
  t3732 = t3730 + t3731;
  t3677 = t3558*t3676;
  t3693 = t3633*t3566;
  t3694 = t3644 + t3693;
  t3743 = t3558*t3736;
  t3744 = -1.*t3732*t3566;
  t3745 = t3743 + t3744;
  t3751 = t3558*t3732;
  t3782 = t3555*t3558*t3559;
  t3787 = -1.*t3555*t3561*t3566;
  t3788 = t3782 + t3787;
  t3794 = t3555*t3561*t3558;
  t3795 = t3555*t3559*t3566;
  t3796 = t3794 + t3795;
  t3656 = t3558*t3650;
  t3661 = t3628*t3566;
  t3662 = t3656 + t3661;
  t3652 = -1.*t3650*t3566;
  t3654 = t3644 + t3652;
  t3822 = -0.8656776547239999*t3533;
  t3823 = 1. + t3822;
  t3629 = -1.*t3558*t3628;
  t3634 = -1.*t3633*t3566;
  t3635 = t3629 + t3634;
  t3828 = -0.134322983001*t3533;
  t3829 = 1. + t3828;
  t3682 = -1.*t3681*t3566;
  t3683 = t3677 + t3682;
  t3685 = t3558*t3681;
  t3687 = t3676*t3566;
  t3688 = t3685 + t3687;
  t3560 = t501*t3555*t3558*t3559;
  t3575 = -1.*t501*t3555*t3561*t3566;
  t3585 = t3560 + t3575;
  t3597 = t501*t3555*t3561*t3558;
  t3598 = t501*t3555*t3559*t3566;
  t3603 = t3597 + t3598;
  t3850 = 0.366501*t3587;
  t3851 = 0. + t3850;
  t3858 = 0.930418*t3587;
  t3859 = 0. + t3858;
  t3755 = t3732*t3566;
  t3756 = t3677 + t3755;
  t3752 = -1.*t3676*t3566;
  t3753 = t3751 + t3752;
  t3733 = -1.*t3558*t3732;
  t3737 = -1.*t3736*t3566;
  t3738 = t3733 + t3737;
  t3836 = -0.340999127418*t3533*t3640;
  t3712 = t3555*t3558*t3621*t3559;
  t3713 = -1.*t3555*t3561*t3621*t3566;
  t3715 = t3712 + t3713;
  t3719 = t3555*t3561*t3558*t3621;
  t3720 = t3555*t3621*t3559*t3566;
  t3721 = t3719 + t3720;
  t3766 = t3736*t3566;
  t3769 = t3751 + t3766;
  t3778 = -1.*t3555*t3561*t3558;
  t3779 = -1.*t3555*t3559*t3566;
  t3780 = t3778 + t3779;
  t3798 = -1.*t3555*t3558*t3559;
  t3799 = t3555*t3561*t3566;
  t3800 = t3798 + t3799;
  t3805 = -1.*t3558*t3540*t3559;
  t3806 = t3561*t3540*t3566;
  t3807 = t3805 + t3806;
  t3809 = -1.*t3561*t3558*t3540;
  t3810 = -1.*t3540*t3559*t3566;
  t3811 = t3809 + t3810;
  t3821 = -0.340999127418*t3533*t3662;
  t3824 = t3823*t3654;
  t3825 = t3821 + t3824;
  t3830 = t3829*t3662;
  t3831 = -0.340999127418*t3533*t3654;
  t3832 = t3830 + t3831;
  t3837 = t3823*t3635;
  t3838 = t3836 + t3837;
  t3840 = t3829*t3640;
  t3841 = -0.340999127418*t3533*t3635;
  t3842 = t3840 + t3841;
  t3847 = -0.340999127418*t3533*t3683;
  t3848 = t3829*t3688;
  t3852 = -1.*t3555*t3621*t3851;
  t3853 = t3847 + t3848 + t3852;
  t3856 = t3823*t3683;
  t3857 = -0.340999127418*t3533*t3688;
  t3860 = -1.*t3555*t3621*t3859;
  t3861 = t3856 + t3857 + t3860;
  t3865 = -0.340999127418*t3533*t3585;
  t3866 = t3829*t3603;
  t3867 = -1.*t501*t3540*t3851;
  t3868 = t3865 + t3866 + t3867;
  t3870 = t3823*t3585;
  t3871 = -0.340999127418*t3533*t3603;
  t3872 = -1.*t501*t3540*t3859;
  t3873 = t3870 + t3871 + t3872;
  t3877 = 0.930418*t501*t3555*t3476;
  t3878 = -0.8656776547239999*t3640*t3587;
  t3879 = -0.340999127418*t3694*t3587;
  t3880 = t3877 + t3878 + t3879;
  t3882 = 0.366501*t501*t3555*t3476;
  t3883 = -0.340999127418*t3640*t3587;
  t3884 = -0.134322983001*t3694*t3587;
  t3885 = t3882 + t3883 + t3884;
  t3891 = -0.340999127418*t3533*t3756;
  t3892 = t3823*t3753;
  t3893 = t3891 + t3892;
  t3896 = t3829*t3756;
  t3897 = -0.340999127418*t3533*t3753;
  t3898 = t3896 + t3897;
  t3902 = -0.340999127418*t3533*t3745;
  t3903 = t3823*t3738;
  t3904 = t3902 + t3903;
  t3906 = t3829*t3745;
  t3907 = -0.340999127418*t3533*t3738;
  t3908 = t3906 + t3907;
  t3912 = t3829*t3694;
  t3913 = t501*t3555*t3851;
  t3914 = t3836 + t3912 + t3913;
  t3916 = t3823*t3640;
  t3917 = -0.340999127418*t3533*t3694;
  t3918 = t501*t3555*t3859;
  t3919 = t3916 + t3917 + t3918;
  t3923 = -0.340999127418*t3533*t3715;
  t3924 = t3829*t3721;
  t3925 = -1.*t3621*t3540*t3851;
  t3926 = t3923 + t3924 + t3925;
  t3928 = t3823*t3715;
  t3929 = -0.340999127418*t3533*t3721;
  t3930 = -1.*t3621*t3540*t3859;
  t3931 = t3928 + t3929 + t3930;
  t3935 = 0.930418*t3555*t3476*t3621;
  t3936 = -0.8656776547239999*t3745*t3587;
  t3937 = -0.340999127418*t3769*t3587;
  t3938 = t3935 + t3936 + t3937;
  t3940 = 0.366501*t3555*t3476*t3621;
  t3941 = -0.340999127418*t3745*t3587;
  t3942 = -0.134322983001*t3769*t3587;
  t3943 = t3940 + t3941 + t3942;
  t3948 = -0.340999127418*t3533*t3788;
  t3949 = t3823*t3780;
  t3950 = t3948 + t3949;
  t3952 = t3829*t3788;
  t3953 = -0.340999127418*t3533*t3780;
  t3954 = t3952 + t3953;
  t3958 = -0.340999127418*t3533*t3800;
  t3959 = t3823*t3796;
  t3960 = t3958 + t3959;
  t3962 = t3829*t3800;
  t3963 = -0.340999127418*t3533*t3796;
  t3964 = t3962 + t3963;
  t3968 = -0.340999127418*t3533*t3807;
  t3969 = t3829*t3811;
  t3970 = -1.*t3555*t3851;
  t3971 = t3968 + t3969 + t3970;
  t3973 = t3823*t3807;
  t3974 = -0.340999127418*t3533*t3811;
  t3975 = -1.*t3555*t3859;
  t3976 = t3973 + t3974 + t3975;
  t3980 = -0.930418*t3476*t3540;
  t3981 = -0.8656776547239999*t3788*t3587;
  t3982 = -0.340999127418*t3796*t3587;
  t3983 = t3980 + t3981 + t3982;
  t3985 = -0.366501*t3476*t3540;
  t3986 = -0.340999127418*t3788*t3587;
  t3987 = -0.134322983001*t3796*t3587;
  t3988 = t3985 + t3986 + t3987;
  p_output1[0]=(t3539*t3555*t3621 - 1.*t3595*t3683 - 1.*t3605*t3688)*var2[3] + (-1.*t3585*t3595 - 1.*t3603*t3605 + t3539*t3540*t501)*var2[4] + (-1.*t3595*t3654 - 1.*t3605*t3662)*var2[5] + (-1.*t3595*t3635 - 1.*t3605*t3640)*var2[6] + (0.930418*t3476*t3640 + 0.366501*t3476*t3694 + 1.000000637725*t3555*t3587*t501)*var2[7];
  p_output1[1]=(-1.*t3595*t3640 - 1.*t3605*t3694 - 1.*t3539*t3555*t501)*var2[3] + (t3539*t3540*t3621 - 1.*t3595*t3715 - 1.*t3605*t3721)*var2[4] + (-1.*t3595*t3753 - 1.*t3605*t3756)*var2[5] + (-1.*t3595*t3738 - 1.*t3605*t3745)*var2[6] + (1.000000637725*t3555*t3587*t3621 + 0.930418*t3476*t3745 + 0.366501*t3476*t3769)*var2[7];
  p_output1[2]=(t3539*t3555 - 1.*t3595*t3807 - 1.*t3605*t3811)*var2[4] + (-1.*t3595*t3796 - 1.*t3605*t3800)*var2[5] + (-1.*t3595*t3780 - 1.*t3605*t3788)*var2[6] + (-1.000000637725*t3540*t3587 + 0.930418*t3476*t3788 + 0.366501*t3476*t3796)*var2[7];
  p_output1[3]=(0.366501*t3853 + 0.930418*t3861)*var2[3] + (0.366501*t3868 + 0.930418*t3873)*var2[4] + (0.930418*t3825 + 0.366501*t3832)*var2[5] + (0.930418*t3838 + 0.366501*t3842)*var2[6] + (0.930418*t3880 + 0.366501*t3885)*var2[7];
  p_output1[4]=(0.366501*t3914 + 0.930418*t3919)*var2[3] + (0.366501*t3926 + 0.930418*t3931)*var2[4] + (0.930418*t3893 + 0.366501*t3898)*var2[5] + (0.930418*t3904 + 0.366501*t3908)*var2[6] + (0.930418*t3938 + 0.366501*t3943)*var2[7];
  p_output1[5]=(0.366501*t3971 + 0.930418*t3976)*var2[4] + (0.930418*t3960 + 0.366501*t3964)*var2[5] + (0.930418*t3950 + 0.366501*t3954)*var2[6] + (0.930418*t3983 + 0.366501*t3988)*var2[7];
  p_output1[6]=(-0.930418*t3853 + 0.366501*t3861)*var2[3] + (-0.930418*t3868 + 0.366501*t3873)*var2[4] + (0.366501*t3825 - 0.930418*t3832)*var2[5] + (0.366501*t3838 - 0.930418*t3842)*var2[6] + (0.366501*t3880 - 0.930418*t3885)*var2[7];
  p_output1[7]=(-0.930418*t3914 + 0.366501*t3919)*var2[3] + (-0.930418*t3926 + 0.366501*t3931)*var2[4] + (0.366501*t3893 - 0.930418*t3898)*var2[5] + (0.366501*t3904 - 0.930418*t3908)*var2[6] + (0.366501*t3938 - 0.930418*t3943)*var2[7];
  p_output1[8]=(-0.930418*t3971 + 0.366501*t3976)*var2[4] + (0.366501*t3960 - 0.930418*t3964)*var2[5] + (0.366501*t3950 - 0.930418*t3954)*var2[6] + (0.366501*t3983 - 0.930418*t3988)*var2[7];
}



void dR_hip_rotation_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
