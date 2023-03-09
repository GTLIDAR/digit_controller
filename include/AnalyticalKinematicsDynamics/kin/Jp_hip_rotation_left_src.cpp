/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_left_src.h"

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
  double t1386;
  double t1389;
  double t1391;
  double t1385;
  double t1393;
  double t1429;
  double t1421;
  double t1422;
  double t1424;
  double t1425;
  double t1309;
  double t1387;
  double t1401;
  double t1406;
  double t1411;
  double t1412;
  double t1413;
  double t1417;
  double t1434;
  double t1437;
  double t1439;
  double t1440;
  double t1454;
  double t1456;
  double t1458;
  double t1450;
  double t1451;
  double t1452;
  double t1467;
  double t1470;
  double t1483;
  double t1484;
  double t1355;
  double t1360;
  double t1372;
  double t1378;
  double t1418;
  double t1419;
  double t1426;
  double t1438;
  double t1441;
  double t1442;
  double t1445;
  double t1446;
  double t1498;
  double t1499;
  double t1500;
  double t1503;
  double t1504;
  double t1505;
  double t1513;
  double t1514;
  double t1515;
  double t1465;
  double t1466;
  double t1471;
  double t1472;
  double t1509;
  double t1510;
  double t1511;
  double t1475;
  double t1476;
  double t1481;
  double t1482;
  double t1485;
  double t1486;
  double t1488;
  double t1489;
  double t1543;
  double t1544;
  double t1545;
  double t1539;
  double t1540;
  double t1541;
  double t1577;
  double t1578;
  double t1579;
  double t1571;
  double t1572;
  double t1573;
  double t1608;
  double t1609;
  double t1610;
  double t1603;
  double t1604;
  double t1605;
  double t1629;
  double t1630;
  double t1631;
  double t1633;
  double t1634;
  double t1635;
  double t1637;
  double t1638;
  double t1655;
  double t1656;
  double t1657;
  double t1660;
  double t1661;
  double t1663;
  double t1664;
  double t1665;
  double t1686;
  double t1687;
  double t1688;
  double t1690;
  double t1691;
  double t1692;
  double t1520;
  double t1712;
  double t1713;
  double t1714;
  double t1731;
  double t1732;
  double t1733;
  double t1735;
  double t1736;
  double t1737;
  double t1739;
  double t1740;
  double t1741;
  double t1758;
  double t1759;
  double t1760;
  double t1762;
  double t1763;
  double t1764;
  double t1779;
  double t1780;
  double t1781;
  double t1783;
  double t1784;
  double t1785;
  double t1787;
  double t1788;
  double t1789;
  double t1808;
  double t1809;
  t1386 = Cos(var1[5]);
  t1389 = Sin(var1[3]);
  t1391 = Sin(var1[4]);
  t1385 = Cos(var1[3]);
  t1393 = Sin(var1[5]);
  t1429 = Sin(var1[7]);
  t1421 = Cos(var1[4]);
  t1422 = Cos(var1[7]);
  t1424 = -1.*t1422;
  t1425 = 1. + t1424;
  t1309 = Cos(var1[6]);
  t1387 = -1.*t1385*t1386;
  t1401 = -1.*t1389*t1391*t1393;
  t1406 = t1387 + t1401;
  t1411 = -1.*t1386*t1389*t1391;
  t1412 = t1385*t1393;
  t1413 = t1411 + t1412;
  t1417 = Sin(var1[6]);
  t1434 = -0.930418*t1429;
  t1437 = 0. + t1434;
  t1439 = -0.366501*t1429;
  t1440 = 0. + t1439;
  t1454 = t1309*t1413;
  t1456 = t1406*t1417;
  t1458 = t1454 + t1456;
  t1450 = t1309*t1406;
  t1451 = -1.*t1413*t1417;
  t1452 = t1450 + t1451;
  t1467 = 0.366501*t1429;
  t1470 = 0. + t1467;
  t1483 = 0.930418*t1429;
  t1484 = 0. + t1483;
  t1355 = -1.*t1309;
  t1360 = 1. + t1355;
  t1372 = 0.091*t1360;
  t1378 = 0. + t1372;
  t1418 = 0.091*t1417;
  t1419 = 0. + t1418;
  t1426 = -0.04500040093286238*t1425;
  t1438 = 0.07877663122399998*t1437;
  t1441 = 0.031030906668*t1440;
  t1442 = 0. + t1426 + t1438 + t1441;
  t1445 = -1.000000637725*t1425;
  t1446 = 1. + t1445;
  t1498 = -1.*t1386*t1389;
  t1499 = t1385*t1391*t1393;
  t1500 = t1498 + t1499;
  t1503 = t1385*t1386*t1391;
  t1504 = t1389*t1393;
  t1505 = t1503 + t1504;
  t1513 = t1309*t1505;
  t1514 = t1500*t1417;
  t1515 = t1513 + t1514;
  t1465 = -3.2909349868922137e-7*var1[7];
  t1466 = 0.03103092645718495*t1425;
  t1471 = -0.045000372235*t1470;
  t1472 = t1465 + t1466 + t1471;
  t1509 = t1309*t1500;
  t1510 = -1.*t1505*t1417;
  t1511 = t1509 + t1510;
  t1475 = -0.134322983001*t1425;
  t1476 = 1. + t1475;
  t1481 = 1.296332362046933e-7*var1[7];
  t1482 = 0.07877668146182712*t1425;
  t1485 = -0.045000372235*t1484;
  t1486 = t1481 + t1482 + t1485;
  t1488 = -0.8656776547239999*t1425;
  t1489 = 1. + t1488;
  t1543 = t1385*t1421*t1386*t1309;
  t1544 = t1385*t1421*t1393*t1417;
  t1545 = t1543 + t1544;
  t1539 = t1385*t1421*t1309*t1393;
  t1540 = -1.*t1385*t1421*t1386*t1417;
  t1541 = t1539 + t1540;
  t1577 = t1421*t1386*t1309*t1389;
  t1578 = t1421*t1389*t1393*t1417;
  t1579 = t1577 + t1578;
  t1571 = t1421*t1309*t1389*t1393;
  t1572 = -1.*t1421*t1386*t1389*t1417;
  t1573 = t1571 + t1572;
  t1608 = -1.*t1386*t1309*t1391;
  t1609 = -1.*t1391*t1393*t1417;
  t1610 = t1608 + t1609;
  t1603 = -1.*t1309*t1391*t1393;
  t1604 = t1386*t1391*t1417;
  t1605 = t1603 + t1604;
  t1629 = t1386*t1389;
  t1630 = -1.*t1385*t1391*t1393;
  t1631 = t1629 + t1630;
  t1633 = t1309*t1631;
  t1634 = t1505*t1417;
  t1635 = t1633 + t1634;
  t1637 = -1.*t1631*t1417;
  t1638 = t1513 + t1637;
  t1655 = t1386*t1389*t1391;
  t1656 = -1.*t1385*t1393;
  t1657 = t1655 + t1656;
  t1660 = t1657*t1417;
  t1661 = t1450 + t1660;
  t1663 = t1309*t1657;
  t1664 = -1.*t1406*t1417;
  t1665 = t1663 + t1664;
  t1686 = -1.*t1421*t1309*t1393;
  t1687 = t1421*t1386*t1417;
  t1688 = t1686 + t1687;
  t1690 = t1421*t1386*t1309;
  t1691 = t1421*t1393*t1417;
  t1692 = t1690 + t1691;
  t1520 = -0.340999127418*t1425*t1511;
  t1712 = -1.*t1309*t1505;
  t1713 = -1.*t1500*t1417;
  t1714 = t1712 + t1713;
  t1731 = t1385*t1386;
  t1732 = t1389*t1391*t1393;
  t1733 = t1731 + t1732;
  t1735 = t1309*t1733;
  t1736 = -1.*t1657*t1417;
  t1737 = t1735 + t1736;
  t1739 = -1.*t1309*t1657;
  t1740 = -1.*t1733*t1417;
  t1741 = t1739 + t1740;
  t1758 = t1421*t1309*t1393;
  t1759 = -1.*t1421*t1386*t1417;
  t1760 = t1758 + t1759;
  t1762 = -1.*t1421*t1386*t1309;
  t1763 = -1.*t1421*t1393*t1417;
  t1764 = t1762 + t1763;
  t1779 = -0.0846680539949003*t1422;
  t1780 = -0.04500040093286238*t1429;
  t1781 = t1779 + t1780;
  t1783 = -0.016492681424499736*t1422;
  t1784 = 0.03103092645718495*t1429;
  t1785 = -3.2909349868922137e-7 + t1783 + t1784;
  t1787 = -0.04186915633414423*t1422;
  t1788 = 0.07877668146182712*t1429;
  t1789 = 1.296332362046933e-7 + t1787 + t1788;
  t1808 = t1733*t1417;
  t1809 = t1663 + t1808;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1378*t1406 + t1413*t1419 - 1.*t1389*t1421*t1442 - 0.045*(-1.*t1389*t1421*t1446 + t1437*t1452 + t1440*t1458) + t1458*t1472 - 0.046986*(-0.340999127418*t1425*t1452 - 1.*t1389*t1421*t1470 + t1458*t1476) + t1452*t1486 + 0.109508*(-0.340999127418*t1425*t1458 - 1.*t1389*t1421*t1484 + t1452*t1489);
  p_output1[10]=t1385*t1421*t1442 + t1378*t1500 + t1419*t1505 + t1486*t1511 + t1472*t1515 + 0.109508*(t1385*t1421*t1484 + t1489*t1511 - 0.340999127418*t1425*t1515) - 0.045*(t1385*t1421*t1446 + t1437*t1511 + t1440*t1515) - 0.046986*(t1385*t1421*t1470 + t1476*t1515 + t1520);
  p_output1[11]=0;
  p_output1[12]=t1378*t1385*t1393*t1421 + t1385*t1386*t1419*t1421 - 1.*t1385*t1391*t1442 + t1486*t1541 + t1472*t1545 + 0.109508*(-1.*t1385*t1391*t1484 + t1489*t1541 - 0.340999127418*t1425*t1545) - 0.045*(-1.*t1385*t1391*t1446 + t1437*t1541 + t1440*t1545) - 0.046986*(-1.*t1385*t1391*t1470 - 0.340999127418*t1425*t1541 + t1476*t1545);
  p_output1[13]=t1378*t1389*t1393*t1421 + t1386*t1389*t1419*t1421 - 1.*t1389*t1391*t1442 + t1486*t1573 + t1472*t1579 + 0.109508*(-1.*t1389*t1391*t1484 + t1489*t1573 - 0.340999127418*t1425*t1579) - 0.045*(-1.*t1389*t1391*t1446 + t1437*t1573 + t1440*t1579) - 0.046986*(-1.*t1389*t1391*t1470 - 0.340999127418*t1425*t1573 + t1476*t1579);
  p_output1[14]=-1.*t1378*t1391*t1393 - 1.*t1386*t1391*t1419 - 1.*t1421*t1442 + t1486*t1605 + t1472*t1610 + 0.109508*(-1.*t1421*t1484 + t1489*t1605 - 0.340999127418*t1425*t1610) - 0.045*(-1.*t1421*t1446 + t1437*t1605 + t1440*t1610) - 0.046986*(-1.*t1421*t1470 - 0.340999127418*t1425*t1605 + t1476*t1610);
  p_output1[15]=t1378*t1505 + t1419*t1631 + t1472*t1635 + t1486*t1638 - 0.046986*(t1476*t1635 - 0.340999127418*t1425*t1638) - 0.045*(t1440*t1635 + t1437*t1638) + 0.109508*(-0.340999127418*t1425*t1635 + t1489*t1638);
  p_output1[16]=t1406*t1419 + t1378*t1657 + t1472*t1661 + t1486*t1665 - 0.046986*(t1476*t1661 - 0.340999127418*t1425*t1665) - 0.045*(t1440*t1661 + t1437*t1665) + 0.109508*(-0.340999127418*t1425*t1661 + t1489*t1665);
  p_output1[17]=t1378*t1386*t1421 - 1.*t1393*t1419*t1421 + t1472*t1688 + t1486*t1692 - 0.046986*(t1476*t1688 - 0.340999127418*t1425*t1692) - 0.045*(t1440*t1688 + t1437*t1692) + 0.109508*(-0.340999127418*t1425*t1688 + t1489*t1692);
  p_output1[18]=0.091*t1417*t1500 + 0.091*t1309*t1505 + t1472*t1511 + t1486*t1714 - 0.046986*(t1476*t1511 - 0.340999127418*t1425*t1714) - 0.045*(t1440*t1511 + t1437*t1714) + 0.109508*(t1520 + t1489*t1714);
  p_output1[19]=0.091*t1309*t1657 + 0.091*t1417*t1733 + t1472*t1737 + t1486*t1741 - 0.046986*(t1476*t1737 - 0.340999127418*t1425*t1741) - 0.045*(t1440*t1737 + t1437*t1741) + 0.109508*(-0.340999127418*t1425*t1737 + t1489*t1741);
  p_output1[20]=0.091*t1309*t1386*t1421 + 0.091*t1393*t1417*t1421 + t1472*t1760 + t1486*t1764 - 0.046986*(t1476*t1760 - 0.340999127418*t1425*t1764) - 0.045*(t1440*t1760 + t1437*t1764) + 0.109508*(-0.340999127418*t1425*t1760 + t1489*t1764);
  p_output1[21]=-0.045*(-1.000000637725*t1385*t1421*t1429 - 0.930418*t1422*t1511 - 0.366501*t1422*t1515) + 0.109508*(0.930418*t1385*t1421*t1422 - 0.8656776547239999*t1429*t1511 - 0.340999127418*t1429*t1515) - 0.046986*(0.366501*t1385*t1421*t1422 - 0.340999127418*t1429*t1511 - 0.134322983001*t1429*t1515) + t1385*t1421*t1781 + t1515*t1785 + t1511*t1789;
  p_output1[22]=t1389*t1421*t1781 + t1737*t1789 + t1785*t1809 - 0.045*(-1.000000637725*t1389*t1421*t1429 - 0.930418*t1422*t1737 - 0.366501*t1422*t1809) + 0.109508*(0.930418*t1389*t1421*t1422 - 0.8656776547239999*t1429*t1737 - 0.340999127418*t1429*t1809) - 0.046986*(0.366501*t1389*t1421*t1422 - 0.340999127418*t1429*t1737 - 0.134322983001*t1429*t1809);
  p_output1[23]=-0.045*(1.000000637725*t1391*t1429 - 0.366501*t1422*t1692 - 0.930418*t1422*t1760) + 0.109508*(-0.930418*t1391*t1422 - 0.340999127418*t1429*t1692 - 0.8656776547239999*t1429*t1760) - 0.046986*(-0.366501*t1391*t1422 - 0.134322983001*t1429*t1692 - 0.340999127418*t1429*t1760) - 1.*t1391*t1781 + t1692*t1785 + t1760*t1789;
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



void Jp_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
