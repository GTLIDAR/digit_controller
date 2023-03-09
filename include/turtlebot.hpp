#ifndef TURTLEBOT_H_
#define TURTLEBOT_H_

#include "Eigen/Dense"
#include "ros/ros.h"
#include "std_msgs/Bool.h"
#include "nav_msgs/Odometry.h"

using namespace Eigen;


class Turtlebot {
 public:
  Turtlebot(ros::NodeHandle &nh);
  ~Turtlebot();

  void odometryCallback(const nav_msgs::Odometry& msg);
  void setStartCommand(bool digit_start_command) {
    _digit_start_command = digit_start_command;
  }
  void pubDigitCommand();
  void pubDigitCommand(bool digit_start_command);

  Vector3d bot1_odom = Vector3d::Zero();
  Vector3d bot2_odom = Vector3d::Zero();
  bool pub_turtle;
 private:
  ros::Subscriber odometry_sub;
  ros::Publisher digit_start_pub;
  bool _digit_start_command = false;
};

#endif // TURTLEBOT_H_
