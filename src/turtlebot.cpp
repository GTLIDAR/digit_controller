#include "turtlebot.hpp"


Turtlebot::Turtlebot(ros::NodeHandle &nh) : _digit_start_command(false), pub_turtle(true) {
  odometry_sub = nh.subscribe("/odom", 1000, &Turtlebot::odometryCallback, this);
  digit_start_pub = nh.advertise<std_msgs::Bool>("/digit_start", 10);
}

void Turtlebot::odometryCallback(const nav_msgs::Odometry& msg) {
  bot1_odom << msg.pose.pose.position.x, msg.pose.pose.position.y, msg.pose.pose.orientation.w;
}

void Turtlebot::pubDigitCommand() {
  std_msgs::Bool digit_start_msg;
  digit_start_msg.data = _digit_start_command;
  digit_start_pub.publish(digit_start_msg);
}

void Turtlebot::pubDigitCommand(bool digit_start_command) {
  std_msgs::Bool digit_start_msg;
  digit_start_msg.data = digit_start_command;
  digit_start_pub.publish(digit_start_msg);
}

Turtlebot::~Turtlebot() {
}
