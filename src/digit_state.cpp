#include "digit_state.hpp"

DigitState::DigitState() {};

DigitState::DigitState(const DigitState& another) {
  VectorXd base_position = another.base_position;
  VectorXd base_orientation = another.base_orientation;
  VectorXd base_orientation_unfil = another.base_orientation_unfil;
  VectorXd base_quaternion = another.base_quaternion;
  VectorXd base_velocity = another.base_velocity;
  VectorXd base_angvel = another.base_angvel;
  VectorXd IMU_quaternion = another.IMU_quaternion;
  VectorXd IMU_acceleration = another.IMU_acceleration;
  VectorXd IMU_angvel = another.IMU_angvel;
  VectorXd position_full = another.position_full;
  VectorXd velocity_full = another.velocity_full;
  VectorXd torque = another.torque;
  VectorXd GRF_LR = another.GRF_LR;
}

DigitState::~DigitState() {};

VectorXd DigitState::buildState(const Eigen::VectorXd& base_position, 
  const Eigen::VectorXd& base_orientation, const Eigen::VectorXd& joint_position) {

  VectorXd q(static_cast<int>(dd::NumJoints));
  q << base_position[0], base_position[1], base_position[2],

    base_orientation[2], base_orientation[1], base_orientation[0],

    joint_position[wdc::joint::LEFT_HIP_ROLL], joint_position[wdc::joint::LEFT_HIP_YAW],
    joint_position[wdc::joint::LEFT_HIP_PITCH],
    joint_position[wdc::joint::LEFT_KNEE], joint_position[wdc::joint::LEFT_TARSUS],
    joint_position[wdc::joint::LEFT_TOE_PITCH], joint_position[wdc::joint::LEFT_TOE_ROLL],
    joint_position[wdc::joint::LEFT_SHOULDER_ROLL], joint_position[wdc::joint::LEFT_SHOULDER_PITCH],
    joint_position[wdc::joint::LEFT_SHOULDER_YAW],
    joint_position[wdc::joint::LEFT_ELBOW],

    joint_position[wdc::joint::RIGHT_HIP_ROLL], joint_position[wdc::joint::RIGHT_HIP_YAW],
    joint_position[wdc::joint::RIGHT_HIP_PITCH],
    joint_position[wdc::joint::RIGHT_KNEE], joint_position[wdc::joint::RIGHT_TARSUS],
    joint_position[wdc::joint::RIGHT_TOE_PITCH], joint_position[wdc::joint::RIGHT_TOE_ROLL],
    joint_position[wdc::joint::RIGHT_SHOULDER_ROLL], joint_position[wdc::joint::RIGHT_SHOULDER_PITCH],
    joint_position[wdc::joint::RIGHT_SHOULDER_YAW],
    joint_position[wdc::joint::RIGHT_ELBOW];
  return q;
}

VectorXd DigitState::buildState_FixedArm(const Eigen::VectorXd& base_position, 
  const Eigen::VectorXd& base_orientation, const Eigen::VectorXd& joint_position) {

  VectorXd q(static_cast<int>(ddfa::NumJoints));
  q << base_position[0], base_position[1], base_position[2],

  base_orientation[2], base_orientation[1], base_orientation[0],

  joint_position[wdc::joint::LEFT_HIP_ROLL], joint_position[wdc::joint::LEFT_HIP_YAW],
  joint_position[wdc::joint::LEFT_HIP_PITCH], joint_position[wdc::joint::LEFT_KNEE],
  joint_position[wdc::joint::LEFT_TARSUS], joint_position[wdc::joint::LEFT_TOE_PITCH],
  joint_position[wdc::joint::LEFT_TOE_ROLL], joint_position[wdc::joint::RIGHT_HIP_ROLL],
  joint_position[wdc::joint::RIGHT_HIP_YAW], joint_position[wdc::joint::RIGHT_HIP_PITCH],
  joint_position[wdc::joint::RIGHT_KNEE], joint_position[wdc::joint::RIGHT_TARSUS],
  joint_position[wdc::joint::RIGHT_TOE_PITCH], joint_position[wdc::joint::RIGHT_TOE_ROLL];
  return q;
}
