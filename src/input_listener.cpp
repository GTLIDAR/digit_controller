#include "input_listener.hpp"
#include "utilities.hpp"
#include "safety_manager.hpp"

InputListener::InputListener(const ControlMode* cm, double* x, double* y, double* yaw, SafetyManager& safety_manager_in) : 
  _cm(cm),
  _target_vel_x_raw(x),
  _target_vel_y_raw(y),
  _target_yaw(yaw),
  safety_manager(safety_manager_in)
{
  joy_sub = node_handler.subscribe("joy", 10, &InputListener::joyInputCallback, this);
  key_sub = node_handler.subscribe("/keyinput", 10, &InputListener::keyInputCallback, this);
}

void InputListener::joyInputCallback(const sensor_msgs::Joy::ConstPtr& joy) {
  // TODO(jtandon6): May want to use std_msgs::Float32, however this causes
  // a typecasting issue. If that can be fixed then might be better to swap to it.
  // Reason is that float is not guaranteed to be 32 bit, which is the size the node gives.
  axes = std::vector<float>(joy->axes);
  buttons = std::vector<int>(joy->buttons);

  if (joy->buttons[7] > 0) {
    ros::shutdown();
  }
  
  if (*_cm == WALKING_GAIT) {
    *_target_vel_x_raw = clamp_vel_x((double) joy->axes[1]);
    // std::cout << "Changing x vel to " << target_vel_x_raw << std::endl;
    *_target_vel_y_raw = clamp_vel_y((double) joy->axes[0]*0.1);
    // std::cout << "Changing y vel to " << target_vel_y_raw << std::endl;
    *_target_yaw += joy->axes[4] * 0.01 * M_PI/180;
    //   if (joy->buttons[2] > 0) {
    //       *_cm = STANDING;
    //   }
  }

  if (*_cm == STANDING) {
    if (joy->buttons[1] > 0) {
      request_mode(WALKING_GAIT);
      ROS_INFO("Got walking command");
    }
    if (joy->axes[5] > 0) {
      // Extend legs upwards
    } else if (joy->axes[5] < 0) {
      // Extend legs downwards
    }
    if (joy->axes[1] > 0) {
      // Adjust pitch +ve
    } else if (joy->axes[1] < 0) {
      // Adjust pitch -ve
    }
    if (joy->axes[0] > 0) {
      // Adjust roll +ve
    } else if (joy->axes[0] < 0) {
      // Adjust roll -ve
    }
  }
}

//Source: https://anzeljg.github.io/rin2/book2/2405/docs/tkinter/key-names.html
enum class TkKeys {
  left = 65361,
  up = 65362,
  right = 65363,
  down = 65364,
  space = 32,

  a = 97,
  d = 100,
  i = 105,
  j = 106,
  k = 107,
  l = 108,
  q = 113,
  r = 114,
  s = 115,
  w = 119,
};

void InputListener::keyInputCallback(const std_msgs::Int32::ConstPtr& msg) {
  TkKeys key = (TkKeys) msg->data;
  // ROS_INFO("I heard: [%i]", msg->data);
  //==============Keyboard input=========//
  if (*_cm == WALKING_GAIT) {
    switch (key) {
    case TkKeys::up:
      *_target_vel_x_raw = clamp_vel_x(*_target_vel_x_raw + 0.1);
      std::cout << "target_vel_x_raw " << *_target_vel_x_raw << std::endl;
      break;
    case TkKeys::down: //down arrow
      *_target_vel_x_raw = clamp_vel_x(*_target_vel_x_raw - 0.1);
      std::cout << "target_vel_x_raw" << *_target_vel_x_raw << std::endl;
      break;
    case TkKeys::left: //left arrow
      *_target_yaw += deg2rad(15);
      std::cout << "target_yaw  " << *_target_yaw  << std::endl;
      break;
    case TkKeys::right: //right arrow
      *_target_yaw -= deg2rad(15);
      std::cout << "target_yaw  " << *_target_yaw  << std::endl;
      break;
    
    case TkKeys::space:
      request_mode(STANDING);
      ROS_INFO("Got standing command");
      break;
    case TkKeys::q:
      // *_cm = STANDING;
      break;
    case TkKeys::r: // r
      // *_cm = STANDING;
      // *_target_vel_x_raw = 0;
      // *_target_vel_y_raw = 0;
      // *_target_yaw = 0;
      // q_left_toe_pitch = 0;
      // q_left_toe_roll = 0;
      break;
    }
  }

  else if (*_cm == STANDING) {
    switch (key) {
    case TkKeys::space:
      request_mode(WALKING_GAIT);
      ROS_INFO("Got walking command");
      break;
    }
  }

  else if (*_cm == HANGING) {
    switch(key) {    //Assuming these toe commands are not useful outside of hanging mode
    case TkKeys::w:
      q_left_toe_pitch += deg2rad(5);
      std::cout << "q_left_toe_pitch  " << q_left_toe_pitch  << std::endl;
      break;
    case TkKeys::s:
      q_left_toe_pitch -= deg2rad(5);
      std::cout << "q_left_toe_pitch  " << q_left_toe_pitch  << std::endl;
      break;
    case TkKeys::a:
      q_left_toe_roll += deg2rad(5);
      std::cout << "q_left_toe_roll  " << q_left_toe_roll  << std::endl;
      break;
    case TkKeys::d:
      q_left_toe_roll -= deg2rad(5);
      std::cout << "q_left_toe_roll  " << q_left_toe_roll  << std::endl;
      break;
    case TkKeys::i:
      q_right_toe_pitch += deg2rad(5);
      std::cout << "q_right_toe_pitch  " << q_right_toe_pitch  << std::endl;
      break;
    case TkKeys::k:
      q_right_toe_pitch -= deg2rad(5);
      std::cout << "q_right_toe_pitch  " << q_right_toe_pitch  << std::endl;
      break;
    case TkKeys::j:
      q_right_toe_roll += deg2rad(5);
      std::cout << "q_right_toe_roll  " << q_right_toe_roll  << std::endl;
      break;
    case TkKeys::l:
      q_right_toe_roll -= deg2rad(5);
      std::cout << "q_right_toe_roll  " << q_right_toe_roll  << std::endl;
      break;
    }
  }
}

// ZG: This is not a good way. 
void InputListener::request_mode(ControlMode mode) {
  safety_manager.buttons.buttons[wdc::button::REMOTE_STANDSTILL].isPressed = (mode == STANDING);
  safety_manager.buttons.buttons[wdc::button::REMOTE_WALK].isPressed = (mode == WALKING_GAIT);
  safety_manager.buttons.buttons[wdc::button::REMOTE_ZERO_POSITION].isPressed = false;
  safety_manager.buttons.buttons[wdc::button::REMOTE_TURN_AROUND].isPressed = false;
}