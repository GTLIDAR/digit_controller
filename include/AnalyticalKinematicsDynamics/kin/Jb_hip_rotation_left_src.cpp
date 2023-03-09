/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_hip_rotation_left_src.h"

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
  double t1659;
  double t1680;
  double t1665;
  double t1672;
  double t1653;
  double t1699;
  double t1704;
  double t1728;
  double t1679;
  double t1708;
  double t1721;
  double t1650;
  double t1732;
  double t1734;
  double t1743;
  double t1756;
  double t1613;
  double t1614;
  double t1616;
  double t1810;
  double t1812;
  double t1813;
  double t1815;
  double t1817;
  double t1786;
  double t1788;
  double t1792;
  double t1794;
  double t1807;
  double t1561;
  double t1649;
  double t1809;
  double t1821;
  double t1822;
  double t1830;
  double t1831;
  double t1834;
  double t1600;
  double t1879;
  double t1880;
  double t1870;
  double t1872;
  double t1875;
  double t1878;
  double t1881;
  double t1882;
  double t1884;
  double t1886;
  double t1888;
  double t1623;
  double t1634;
  double t1646;
  double t1726;
  double t1744;
  double t1746;
  double t1748;
  double t1749;
  double t1766;
  double t1770;
  double t1773;
  double t1824;
  double t1837;
  double t1838;
  double t1840;
  double t1841;
  double t1845;
  double t1848;
  double t1854;
  double t1859;
  double t1860;
  double t1861;
  double t1864;
  double t1883;
  double t1889;
  double t1890;
  double t1899;
  double t1903;
  double t1908;
  double t1909;
  double t1910;
  double t1911;
  double t1913;
  double t1915;
  double t1917;
  double t1963;
  double t1965;
  double t1967;
  double t1968;
  double t1969;
  double t1970;
  double t1974;
  double t1975;
  double t1980;
  double t1982;
  double t1983;
  double t1984;
  double t1986;
  double t1989;
  double t1990;
  double t1992;
  double t1960;
  double t1961;
  double t1962;
  double t1978;
  double t1993;
  double t1994;
  double t2002;
  double t2003;
  double t2004;
  double t2007;
  double t2011;
  double t2012;
  double t2014;
  double t2016;
  double t2017;
  double t2019;
  double t2021;
  double t2024;
  double t2025;
  double t2026;
  double t2028;
  double t2029;
  double t1952;
  double t1953;
  double t1955;
  double t1956;
  double t1957;
  double t1959;
  double t1999;
  double t2008;
  double t2009;
  double t2015;
  double t2030;
  double t2033;
  double t2035;
  double t2036;
  double t2037;
  double t1944;
  double t1948;
  double t1949;
  double t2041;
  double t2010;
  double t2060;
  double t2049;
  double t2075;
  double t2065;
  double t2088;
  double t2084;
  double t2099;
  double t2094;
  double t2111;
  double t2105;
  double t2158;
  double t2155;
  double t2173;
  t1659 = Sin(var1[7]);
  t1680 = Cos(var1[6]);
  t1665 = 0.366501*t1659;
  t1672 = 0. + t1665;
  t1653 = Sin(var1[6]);
  t1699 = 0.930418*t1659;
  t1704 = 0. + t1699;
  t1728 = Cos(var1[5]);
  t1679 = t1653*t1672;
  t1708 = t1680*t1704;
  t1721 = t1679 + t1708;
  t1650 = Sin(var1[5]);
  t1732 = t1680*t1672;
  t1734 = -1.*t1653*t1704;
  t1743 = t1732 + t1734;
  t1756 = Sin(var1[3]);
  t1613 = Cos(var1[7]);
  t1614 = -1.*t1613;
  t1616 = 1. + t1614;
  t1810 = -0.134322983001*t1616;
  t1812 = 1. + t1810;
  t1813 = 0.366501*t1812;
  t1815 = -0.3172717261340007*t1616;
  t1817 = t1813 + t1815;
  t1786 = -0.8656776547239999*t1616;
  t1788 = 1. + t1786;
  t1792 = 0.930418*t1788;
  t1794 = -0.12497652119782442*t1616;
  t1807 = t1792 + t1794;
  t1561 = Cos(var1[3]);
  t1649 = Sin(var1[4]);
  t1809 = t1680*t1807;
  t1821 = t1817*t1653;
  t1822 = 0. + t1809 + t1821;
  t1830 = t1680*t1817;
  t1831 = -1.*t1807*t1653;
  t1834 = 0. + t1830 + t1831;
  t1600 = Cos(var1[4]);
  t1879 = -0.930418*t1812;
  t1880 = t1879 + t1794;
  t1870 = 0.366501*t1788;
  t1872 = 0.3172717261340007*t1616;
  t1875 = t1870 + t1872;
  t1878 = t1680*t1875;
  t1881 = t1880*t1653;
  t1882 = 0. + t1878 + t1881;
  t1884 = t1680*t1880;
  t1886 = -1.*t1875*t1653;
  t1888 = 0. + t1884 + t1886;
  t1623 = 1.000000637725*t1616;
  t1634 = -1. + t1623;
  t1646 = t1600*t1634;
  t1726 = t1650*t1721;
  t1744 = t1728*t1743;
  t1746 = t1726 + t1744;
  t1748 = t1649*t1746;
  t1749 = t1646 + t1748;
  t1766 = t1728*t1721;
  t1770 = -1.*t1650*t1743;
  t1773 = t1766 + t1770;
  t1824 = t1728*t1822;
  t1837 = -1.*t1650*t1834;
  t1838 = 0. + t1824 + t1837;
  t1840 = t1650*t1822;
  t1841 = t1728*t1834;
  t1845 = 0. + t1840 + t1841;
  t1848 = t1649*t1845;
  t1854 = 0.366501*t1672;
  t1859 = 0.930418*t1704;
  t1860 = 0. + t1854 + t1859;
  t1861 = t1600*t1860;
  t1864 = 0. + t1848 + t1861;
  t1883 = t1728*t1882;
  t1889 = -1.*t1650*t1888;
  t1890 = 0. + t1883 + t1889;
  t1899 = t1650*t1882;
  t1903 = t1728*t1888;
  t1908 = 0. + t1899 + t1903;
  t1909 = t1649*t1908;
  t1910 = -0.930418*t1672;
  t1911 = 0.366501*t1704;
  t1913 = 0. + t1910 + t1911;
  t1915 = t1600*t1913;
  t1917 = 0. + t1909 + t1915;
  t1963 = -3.2909349868922137e-7*var1[7];
  t1965 = -0.046986*t1812;
  t1967 = -0.0063112059881053895*t1616;
  t1968 = -0.366501*t1659;
  t1969 = 0. + t1968;
  t1970 = -0.045*t1969;
  t1974 = -0.045000372235*t1672;
  t1975 = t1963 + t1965 + t1967 + t1970 + t1974;
  t1980 = 1.296332362046933e-7*var1[7];
  t1982 = 0.109508*t1788;
  t1983 = 0.09479886646268927*t1616;
  t1984 = -0.930418*t1659;
  t1986 = 0. + t1984;
  t1989 = -0.045*t1986;
  t1990 = -0.045000372235*t1704;
  t1992 = t1980 + t1982 + t1983 + t1989 + t1990;
  t1960 = -1.*t1680;
  t1961 = 1. + t1960;
  t1962 = 0.091*t1961;
  t1978 = t1653*t1975;
  t1993 = t1680*t1992;
  t1994 = 0. + t1962 + t1978 + t1993;
  t2002 = 0.091*t1653;
  t2003 = t1680*t1975;
  t2004 = -1.*t1653*t1992;
  t2007 = 0. + t2002 + t2003 + t2004;
  t2011 = t1650*t1994;
  t2012 = t1728*t2007;
  t2014 = 0. + t2011 + t2012;
  t2016 = -1.000000637725*t1616;
  t2017 = 1. + t2016;
  t2019 = -0.045*t2017;
  t2021 = -0.04500040093286238*t1616;
  t2024 = 0.07877663122399998*t1986;
  t2025 = 0.031030906668*t1969;
  t2026 = -0.046986*t1672;
  t2028 = 0.109508*t1704;
  t2029 = 0. + t2019 + t2021 + t2024 + t2025 + t2026 + t2028;
  t1952 = t1600*t1845;
  t1953 = -1.*t1649*t1860;
  t1955 = 0. + t1952 + t1953;
  t1956 = t1600*t1908;
  t1957 = -1.*t1649*t1913;
  t1959 = 0. + t1956 + t1957;
  t1999 = t1728*t1994;
  t2008 = -1.*t1650*t2007;
  t2009 = 0. + t1999 + t2008;
  t2015 = t1649*t2014;
  t2030 = t1600*t2029;
  t2033 = 0. + t2015 + t2030;
  t2035 = t1600*t2014;
  t2036 = -1.*t1649*t2029;
  t2037 = 0. + t2035 + t2036;
  t1944 = -1.*t1634*t1649;
  t1948 = t1600*t1746;
  t1949 = t1944 + t1948;
  t2041 = t1890*t2009;
  t2010 = -1.*t1838*t2009;
  t2060 = t2009*t1773;
  t2049 = -1.*t1890*t2009;
  t2075 = -1.*t2009*t1773;
  t2065 = t1838*t2009;
  t2088 = -1.*t2029*t1860;
  t2084 = t2029*t1913;
  t2099 = -1.*t2029*t1913;
  t2094 = t1634*t2029;
  t2111 = t2029*t1860;
  t2105 = -1.*t1634*t2029;
  t2158 = t1910 + t1911;
  t2155 = t1854 + t1859;
  t2173 = -1. + t1623;
  p_output1[0]=t1561*t1749 - 1.*t1756*t1773;
  p_output1[1]=0. - 1.*t1756*t1838 + t1561*t1864;
  p_output1[2]=0. - 1.*t1756*t1890 + t1561*t1917;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1749*t1756 + t1561*t1773;
  p_output1[7]=0. + t1561*t1838 + t1756*t1864;
  p_output1[8]=0. + t1561*t1890 + t1756*t1917;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1949;
  p_output1[13]=t1955;
  p_output1[14]=t1959;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1959*(t2010 - 1.*t1864*t2033 - 1.*t1955*t2037) + t1955*(t1917*t2033 + t1959*t2037 + t2041);
  p_output1[19]=t1949*(-1.*t1917*t2033 - 1.*t1959*t2037 + t2049) + t1959*(t1749*t2033 + t1949*t2037 + t2060);
  p_output1[20]=t1949*(t1864*t2033 + t1955*t2037 + t2065) + t1955*(-1.*t1749*t2033 - 1.*t1949*t2037 + t2075);
  p_output1[21]=t1949;
  p_output1[22]=t1955;
  p_output1[23]=t1959;
  p_output1[24]=t1838*(t1908*t2014 + t2041 + t2084) + t1890*(t2010 - 1.*t1845*t2014 + t2088);
  p_output1[25]=t1890*(t1746*t2014 + t2060 + t2094) + t1773*(-1.*t1908*t2014 + t2049 + t2099);
  p_output1[26]=t1838*(-1.*t1746*t2014 + t2075 + t2105) + t1773*(t1845*t2014 + t2065 + t2111);
  p_output1[27]=t1773;
  p_output1[28]=t1838;
  p_output1[29]=t1890;
  p_output1[30]=t1860*(t1882*t1994 + t1888*t2007 + t2084) + t1913*(-1.*t1822*t1994 - 1.*t1834*t2007 + t2088);
  p_output1[31]=t1913*(t1721*t1994 + t1743*t2007 + t2094) + t1634*(-1.*t1882*t1994 - 1.*t1888*t2007 + t2099);
  p_output1[32]=t1860*(-1.*t1721*t1994 - 1.*t1743*t2007 + t2105) + t1634*(t1822*t1994 + t1834*t2007 + t2111);
  p_output1[33]=t1634;
  p_output1[34]=t1860;
  p_output1[35]=t1913;
  p_output1[36]=0.091*t1672 - 1.*(-1.*t1817*t1975 - 1.*t1807*t1992 - 1.*t2029*t2155)*t2158 - 1.*t2155*(t1880*t1975 + t1875*t1992 + t2029*t2158);
  p_output1[37]=0.091*t1817 - 1.*(-1.*t1880*t1975 - 1.*t1875*t1992 - 1.*t2029*t2158)*t2173 - 1.*t2158*(t1672*t1975 + t1704*t1992 + t2029*t2173);
  p_output1[38]=0.091*t1880 - 1.*(t1817*t1975 + t1807*t1992 + t2029*t2155)*t2173 - 1.*t2155*(-1.*t1672*t1975 - 1.*t1704*t1992 - 1.*t2029*t2173);
  p_output1[39]=1. + t2016;
  p_output1[40]=0. - 0.366501*t1672 - 0.930418*t1704;
  p_output1[41]=0. + 0.930418*t1672 - 0.366501*t1704;
  p_output1[42]=1.4764722830462595e-7;
  p_output1[43]=-3.43537375005476e-7;
  p_output1[44]=3.5370499999916316e-7;
  p_output1[45]=0.;
  p_output1[46]=0.;
  p_output1[47]=1.000000637725;
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



void Jb_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
