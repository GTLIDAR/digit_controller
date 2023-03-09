/**
* Author:       Victor Paredes
* Email:        paredescauna.1@osu.edu
* Modified:     01-25-2022
* Copyright:    Cyberbotics Lab @The Ohio State University
**/

#include "filter.hpp"

JointFilter::JointFilter(int period) :
    period(period),
    total(0) {
  assert(period >= 1);
}


double JointFilter::getFilteredData() {
  // std::cout << (double) size;
  if (data.size() == 0) {
    return 0; // No entries => 0 average
  }
  return total / (double) data.size(); // Cast to double for floating point arithmetic
}

int JointFilter::addPoint(double data_point) {
  if (data.size() == period) {
    total -= data.front();
    data.pop();
  }

  data.push(data_point);
  total += data_point;

  return 0;

}
