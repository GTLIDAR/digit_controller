Header header
# sensor_msgs/JointState joint_states

int32 is_turning
int32 turning_step_index
float64 roll_df
float64 T_left
float64 T
float64 phase_variable
float64 stepw_d
float64 stepl_d
float64 stepl_error
float64 L_Wpc_d
float64 W_Wpc_d

float64 vx_pid
float64 vy_pid
float64 time_elapsed
float64 robot_time
float64 loop_elapsed
float64 sw_yaw_error
float64 st_yaw_error
float64 target_yaw
bool hasSwitched
float64 yaw_WSt
float64 yaw_WpcB
float64 heading_change

float64[3] base_position
float64[3] base_orientation

float64[3] base_velocity
float64[3] base_angvel
float64[3] IMU_acceleration
float64[3] IMU_angvel

float64[30] position_full
float64[20] pos_reference
float64[20] gains

float64[30] velocity_full
float64[20] vel_reference
float64[20] acc_reference

float64[20] command
float64[20] gc_command
float64[20] ff_command
float64[20] fb_command
float64[10] gc_8
float64[10] ff_8
float64[10] fb_8
float64[10] q_d
float64[10] dq_d
float64[10] ddq_d

float64[20] torque
float64[4] GRF_LR
float64[3] target_vel
float64[3] final_vel
float64[3] p_MC_M
float64[3] p_MC_M_d
float64[8] leg_length
float64[3] p_StSw_d_final
float64[3] p_BSw_final
float64[3] v_StB_f
float64[3] v_StB_L
float64[3] v_StB_kin
float64[3] p_StB_f
float64[3] p_StSw_m
float64[3] p_StSw_d
float64[3] v_StSw_d
float64[3] a_StSw_d
float64[3] p_WSt_f_dscrt
float64[3] p_WC
float64[3] p_C_switch
float64[3] p_CSt
float64[3] p_BSw
float64[3] p_BSw_d
float64[3] p_CSw
float64[3] p_CSw_df
float64[3] p_BC

float64[3] L_pCSt
float64[3] L_pCOM
float64[3] L_pCSt_est

float64[3] v_WB_B_d
float64[3] v_StB_Wpc_L
float64[3] v_StB_LIP
float64[3] v_StB_LIP_d
float64[3] p_StB_LIP_d
float64[3] p_StB

float64[2] waypoint
float64[2] waypointPSP
float64[2] psp_foot_w
float64[2] psp_foot
float64[2] switch_d

float64[4] obs

bool run_sim
int32 domain