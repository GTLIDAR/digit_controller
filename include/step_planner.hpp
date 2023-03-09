#ifndef STEP_PLANNER_H_
#define STEP_PLANNER_H_

#include "Eigen/Dense"

using namespace Eigen;

class StepPlanner{
 public:
  StepPlanner();
  Vector3d getXYYaw(double step_index);

};

#endif // STEP_PLANNER_H_
