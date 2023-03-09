#ifndef JOINT_FILTER_H_
#define JOINT_FILTER_H_

#include <queue>
#include "Eigen"

using namespace Eigen;

class JointFilter {
public:
  JointFilter(int period);
  JointFilter() : JointFilter(3) {};
  int addPoint(double data_point);

  double getFilteredData();

private:
  std::queue<double> data;
  unsigned int period;

  double total = 0; // Cache the total so we don't sum everything each time.

};

class FirstOrderFilter {
public:
  double first_order_filter(double prev_value, double new_value, double param) {
    return param*new_value + (1 - param)*prev_value;
  }
};

#endif
