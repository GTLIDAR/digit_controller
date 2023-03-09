#ifndef DIGIT_STATE_H_
#define DIGIT_STATE_H_

#include "digit_definition.hpp"

class DigitState {
public:
    DigitState();
    DigitState(const DigitState&);
    ~DigitState();
        
    VectorXd base_position = VectorXd::Zero(3);  
    VectorXd base_orientation = VectorXd::Zero(3); //[roll,pitch,yaw] angles in radians
    VectorXd base_orientation_unfil = VectorXd::Zero(3); //[roll,pitch,yaw] angles in radians
    VectorXd base_quaternion = VectorXd::Zero(4);
    VectorXd base_velocity = VectorXd::Zero(3); //[v_x,v_y,v_z] angles in radians
    VectorXd base_angvel = VectorXd::Zero(3);
    VectorXd IMU_quaternion = VectorXd::Zero(4);
    VectorXd IMU_acceleration = VectorXd::Zero(3);
    VectorXd IMU_angvel = VectorXd::Zero(3);
    VectorXd position_full = VectorXd::Zero(wdc::joint::N_JOINTS);
    VectorXd velocity_full = VectorXd::Zero(wdc::joint::N_JOINTS);
    VectorXd torque = VectorXd::Zero(wdc::motor::N_MOTORS); //measured torque of actuated joints
    VectorXd GRF_LR = VectorXd::Zero(4);

    static VectorXd buildState(const Eigen::VectorXd& base_position,
        const Eigen::VectorXd& base_orientation, const Eigen::VectorXd& joint_position);
    static VectorXd buildState_FixedArm(const Eigen::VectorXd& base_position,
        const Eigen::VectorXd& base_orientation, const Eigen::VectorXd& joint_position);
};

#endif