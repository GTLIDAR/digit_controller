#pragma once

#include "ros/ros.h"
#include "sensor_msgs/Joy.h"
#include "std_msgs/Int32.h"

// Control Mode
//This should probably be defined somewhere else
enum ControlMode { // Remove this and use domain control.
  ZERO_POSITION,
  STANDING,
  WALKING_GAIT,
  HANGING
};

class SafetyManager;

class InputListener {
  /*
   * Hanging mode:
   *  dpad up / down: extend leg (axes[5] > 0 & < 0)
   *  left stick up / down: body pitch (axes[1] > 0 & < 0)
   *  left stick left / right: body roll (axes[0] > 0 & < 0)
   *
   * Standing mode:
   *  A: switch to walking mode (buttons 1)
   *
   * Walking mode:
   *  Left stick up/down: channel 1 (forward / backwards vel)
   *  Left stick left/right: channel 2 (left / right vel)
   *  Right stick left / right: channel 3 (turning vel) (axes[2] > 0 & < 0)
   *  B: switch to standing mode (buttons[2])
   *
   * All modes:
   *  RT: emergency shutdown (terminate program) (buttons[7])
   */

public:
  InputListener(const ControlMode* cm, double* x, double* y, double* yaw, SafetyManager& safety_manager_in);

  std::vector<float> axes;
  std::vector<int> buttons;
  //int keyvalue = 0;

  double q_left_toe_pitch = 0;
  double q_left_toe_roll = 0;
  double q_right_toe_pitch = 0;
  double q_right_toe_roll = 0;

private:
  void joyInputCallback(const sensor_msgs::Joy::ConstPtr& joy);
  void keyInputCallback(const std_msgs::Int32::ConstPtr& msg);

  ros::NodeHandle node_handler;
  ros::Subscriber joy_sub;
  ros::Subscriber key_sub;

  const ControlMode* _cm;
  double* _target_vel_x_raw;
  double* _target_vel_y_raw;
  double* _target_yaw;

  SafetyManager& safety_manager;

  double clamp_vel_x(double vel_x) {
    return std::clamp(vel_x, -0.2, 0.6);
  }
  double clamp_vel_y(double vel_y) {
    return std::clamp(vel_y, -0.1, 0.1);
  }
  void request_mode(ControlMode mode);
};