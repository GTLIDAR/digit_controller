/**
* Author:       Zhaoyuan Gu, Aziz Shamsah
* Email:        {zgu78, ashamsah3}@gatech.edu
* Modified:     02-25-2023
* Copyright:    LIDAR @ Georgia Tech
**/
#include "PS_planner.hpp"


PSPlanner::PSPlanner() {

}

void PSPlanner::read_PSP(std::string filename) {
  std::ifstream infile(filename);
  if (infile.fail()) {
    std::cerr << "Input file" + filename + "opening failed. \n";
    std::exit(1);
  }

  Eigen::VectorXd traj = Eigen::VectorXd(15);
  Eigen::Vector2d traj_v;
  double traj_t;
  double traj_stepw;
  double traj_stepl;
  double traj_delta_theta;
  double psp_t2;
  double psp_t1;
  double v_apex;
  Eigen::Vector2d traj_waypoint;
  Eigen::Vector2d traj_switch;
  Eigen::Vector2d traj_W_foot;

  std::string line;
  int row = 0;
  while (std::getline(infile, line)) {
    std::istringstream ss(line);
    std::string number;
    int col = 0;
    while (std::getline(ss, number, ' ')) {  
      traj(col,0) = std::stod(number);
      col++;
    }
    traj_v = traj.head(2); //, traj(3,0), traj(4,0), traj(5,0), traj(6,0), traj(7,0), traj(8,0), traj(9,0);
    target_vel_PSP.push_back(traj_v);
    traj_t = traj(4,0);
    step_t.push_back(traj_t);
    traj_stepw = traj(3,0);
    step_w.push_back(traj_stepw);
    traj_stepl = traj(2,0);
    step_l.push_back(traj_stepl);

    traj_delta_theta= traj(5,0);
    delta_theta.push_back(traj_delta_theta);
    psp_t1 = traj(6,0);
    psp_t2 = traj(7,0);
    step_t1.push_back(psp_t1);
    step_t2.push_back(psp_t2);
    v_apex = traj(8,0);
    step_v_apex.push_back(v_apex);

    traj_W_foot << traj(9,0), traj(10,0);
    W_foot.push_back(traj_W_foot);

    traj_waypoint << traj(11,0) , traj(12, 0);
    waypoint_PSP.push_back(traj_waypoint);

    traj_switch << traj(13,0) , traj(14, 0);
    switch_PSP_list.push_back(traj_switch);

    row++;
  }
  infile.close();
  num_steps = row;
  std::cout << "++++++++++++++++ READ PSP TRAJ +++++++++++++++++++   " << num_steps << " steps" << std::endl << std::endl << std::endl;
  //return {PSP, PSP_v, PSP_a};
}


// void PSPlanner::getPSP_step(double step_index, double& v_StB_Wpn_d_x, double& v_StB_Wpn_d_y, double& stept, double& stept_n, double& W_Wpc_d, double& heading_change,
//  double& L_Wpc_d, Vector2d& waypoint, Vector2d& foot_w_psp, Vector2d& switch_PSP) {

  
//   if(step_index+1 >= num_steps){ //stop when there is no more steps in psp plan
//     v_StB_Wpn_d_x = std::max(v_StB_Wpn_d_x - 0.1, 0.0);
//     v_StB_Wpn_d_y = 0;
//     stept = 0.4;
//     stept_n = 0.4;
//     W_Wpc_d = 0.25;
//     L_Wpc_d = 0.0;
//     heading_change = 0.0;
//     v_StB_Wpn_d_x = 0.0;
//     waypoint = waypoint_PSP.back(); //[num_steps-1];
//     foot_w_psp = W_foot.back(); //[num_steps-1];
//     std::cout << "PSP plan ended" << std::endl;
//   }else{ // next PSP step
//     v_StB_Wpn_d_x = target_vel_PSP[step_index+1][1];
//     v_StB_Wpn_d_y = target_vel_PSP[step_index+1][0];
//     // //=====uncomment for PSP Input :
//     if (v_StB_Wpn_d_x == 0){ //when the target is stopping use huerstics for step time and step width
//       stept = 0.4;
//       stept_n = 0.4;
//       W_Wpc_d = 0.4;
//       L_Wpc_d = 0.0;
//       heading_change = 0;
//       v_StB_Wpn_d_y =   0.5 * 0.4 * std::sqrt(9.81/1.01) * std::sinh(std::sqrt(9.81/1.01) * 0.4) / (1+std::cosh(std::sqrt(9.81/1.01) * 0.4));
//       std::cout << "target stop & stopping" <<  std::endl;
//     }else if(v_StB_Wpn_d_x != 0 && target_vel_PSP[step_index][1] == 0){ //currently stopping and targeting forward velocity, target step time is onlyn t_1
//       stept = stept_n; 
//       stept_n = step_t1[step_index+1];
//       W_Wpc_d = 0.4;
//       heading_change = 0;
//       v_StB_Wpn_d_y =   0.5 * 0.4 * std::sqrt(9.81/1.01) * std::sinh(std::sqrt(9.81/1.01) * 0.4) / (1+std::cosh(std::sqrt(9.81/1.01) * 0.4));
//       std::cout << "stopping & target walking"  << std::endl;
//     }else{ // for every other walking step
//       stept = stept_n;
//       stept_n = step_t2[step_index] + step_t1[step_index+1];
//       L_Wpc_d = step_l[step_index];
//       W_Wpc_d = step_w[step_index];
//       heading_change = delta_theta[step_index+1]; //At the start of the turning step in PSP, stance leg is already matches target
//       std::cout << "walking" << std::endl;
//     }
//     //for logging
//     waypoint = waypoint_PSP[step_index];
//     foot_w_psp = W_foot[step_index];
//     if(step_index == 0){
//       switch_PSP = switch_PSP_list[step_index];
//       waypoint = waypoint_PSP[step_index];
//       foot_w_psp = W_foot[step_index];
//     }
//     else{
//        switch_PSP = switch_PSP_list[step_index-1];
//        waypoint = waypoint_PSP[step_index-1];
//        foot_w_psp = W_foot[step_index-1];
//     }
   
//   }
//   // std::cout << " current step = " << step_index << " total steps = " << num_steps << "current vel" << target_vel_x_raw << std::endl << std::endl << std::endl ;
// }


void PSPlanner::getPSP_step(double step_index) {

  
  if(step_index+1 >= num_steps){ //stop when there is no more steps in psp plan
    PS_parameters_curr.v_StB_Wpn_d_x = std::max(PS_parameters_curr.v_StB_Wpn_d_x - 0.1, 0.0);
    PS_parameters_curr.v_StB_Wpn_d_y = 0;
    PS_parameters_curr.stept = 0.4;
    PS_parameters_curr.stept_n = 0.4;
    PS_parameters_curr.W_Wpc_d = 0.25;
    PS_parameters_curr.L_Wpc_d = 0.0;
    PS_parameters_curr.heading_change = 0.0;
    PS_parameters_curr.v_StB_Wpn_d_x = 0.0;
    PS_parameters_curr.waypointPSP = waypoint_PSP.back(); //[num_steps-1];
    PS_parameters_curr.psp_foot_w = W_foot.back(); //[num_steps-1];
    std::cout << "PSP plan ended" << std::endl;
  }else{ // next PSP step
    PS_parameters_curr.v_StB_Wpn_d_x = target_vel_PSP[step_index+1][1];
    PS_parameters_curr.v_StB_Wpn_d_y = target_vel_PSP[step_index+1][0];
    // //=====uncomment for PSP Input :
    if (PS_parameters_curr.v_StB_Wpn_d_x == 0){ //when the target is stopping use huerstics for step time and step width
      PS_parameters_curr.stept = 0.4;
      PS_parameters_curr.stept_n = 0.4;
      PS_parameters_curr.W_Wpc_d = 0.3;
      PS_parameters_curr.L_Wpc_d = 0.0;
      PS_parameters_curr.heading_change = 0;
      PS_parameters_curr.v_StB_Wpn_d_y =   0.5 * 0.3 * std::sqrt(9.81/1.01) * std::sinh(std::sqrt(9.81/1.01) * 0.4) / (1+std::cosh(std::sqrt(9.81/1.01) * 0.4));
      std::cout << "target stop & stopping" <<  std::endl;
    }else if(PS_parameters_curr.v_StB_Wpn_d_x != 0 && target_vel_PSP[step_index][1] == 0){ //currently stopping and targeting forward velocity, target step time is onlyn t_1
      PS_parameters_curr.stept = PS_parameters_curr.stept_n; 
      PS_parameters_curr.stept_n = step_t1[step_index+1];
      PS_parameters_curr.W_Wpc_d = 0.4;
      PS_parameters_curr.heading_change = 0;
      PS_parameters_curr.v_StB_Wpn_d_y =   0.5 * 0.4 * std::sqrt(9.81/1.01) * std::sinh(std::sqrt(9.81/1.01) * 0.4) / (1+std::cosh(std::sqrt(9.81/1.01) * 0.4));
      std::cout << "stopping & target walking"  << std::endl;
    }else{ // for every other walking step
      PS_parameters_curr.stept = PS_parameters_curr.stept_n;
      PS_parameters_curr.stept_n = step_t2[step_index] + step_t1[step_index+1];
      PS_parameters_curr.L_Wpc_d = step_l[step_index];
      PS_parameters_curr.W_Wpc_d = step_w[step_index];
      PS_parameters_curr.heading_change = delta_theta[step_index+1]; //At the start of the turning step in PSP, stance leg is already matches target
      std::cout << "walking" << std::endl;
    }
    //for logging
    PS_parameters_curr.waypointPSP = waypoint_PSP[step_index];
    PS_parameters_curr.psp_foot_w = W_foot[step_index];
    if(step_index == 0){
      PS_parameters_curr.switch_PSP = switch_PSP_list[step_index];
      PS_parameters_curr.waypointPSP = waypoint_PSP[step_index];
      PS_parameters_curr.psp_foot_w = W_foot[step_index];
    }
    else{
      PS_parameters_curr.switch_PSP = switch_PSP_list[step_index-1];
      PS_parameters_curr.waypointPSP = waypoint_PSP[step_index-1];
      PS_parameters_curr.psp_foot_w = W_foot[step_index-1];
    }
   
  }

  //Transforming velocity to the current waypoint frame
  Matrix3d R_Wp_cn = AngleAxisd(PS_parameters_curr.heading_change, Vector3d::UnitZ()).toRotationMatrix();
  PS_parameters_curr.v_StB_Wpn_d = Vector3d{PS_parameters_curr.v_StB_Wpn_d_x, PS_parameters_curr.v_StB_Wpn_d_y, 0};
  PS_parameters_curr.v_StB_Wpc_d = R_Wp_cn * PS_parameters_curr.v_StB_Wpn_d;               
    // std::cout << " current step = " << step_index << " total steps = " << num_steps << "current vel" << target_vel_x_raw << std::endl << std::endl << std::endl ;
}

void PSPlanner::waypoint_tracking(VectorXd base_position, double target_yaw){

  Vector4d waypoint_B = T_PSPB_0 * Vector4d{PS_parameters_curr.waypointPSP(0)-waypoint_PSP[0](0), PS_parameters_curr.waypointPSP(1)-waypoint_PSP[0](1), 0, 1};
  Vector4d psp_foot_B = T_PSPB_0 * Vector4d{PS_parameters_curr.psp_foot_w(0)-W_foot[0](0),PS_parameters_curr.psp_foot_w(1)-W_foot[1](1), 0, 1}; 
  Vector4d switch_PSP_B = T_PSPB_0 * Vector4d{PS_parameters_curr.switch_PSP(0)-waypoint_PSP[0](0),PS_parameters_curr.switch_PSP(1)-waypoint_PSP[0](1), 0, 1}; 
  
  PS_parameters_curr.waypoint(0) = waypoint_B(0);
  PS_parameters_curr.waypoint(1) = waypoint_B(1); 
  PS_parameters_curr.psp_foot(0) = psp_foot_B(0);
  PS_parameters_curr.psp_foot(1) = psp_foot_B(1);
  PS_parameters_curr.switch_d(0) = switch_PSP_B(0);
  PS_parameters_curr.switch_d(1) = switch_PSP_B(1); 



  Vector3d P_W_error = {PS_parameters_curr.switch_d(0) - base_position(0), PS_parameters_curr.switch_d(1) - base_position(1), 0};
  Matrix3d R_WB = AngleAxisd(target_yaw, Vector3d::UnitZ()).toRotationMatrix();
  Vector3d P_B_error = R_WB.transpose() * P_W_error; 
  

  if (PS_parameters_curr.L_Wpc_d  == 0 || PS_parameters_curr.v_StB_Wpc_d(0) == 0.0) {
  
    PS_parameters_curr.vx_pid = 0.5 * P_B_error(0);
    PS_parameters_curr.vy_pid = 0.3 * P_B_error(1);
    PS_parameters_curr.vy_pid = std::clamp(PS_parameters_curr.vy_pid, -0.1, 0.1);
    
  } else if (PS_parameters_curr.heading_change != 0) {

    PS_parameters_curr.vx_pid = 0 ;//* 0.2 * P_B_error(0);
    PS_parameters_curr.vy_pid = 0 ;//* 0.2 * P_B_error(1);
    // PS_parameters_curr.vy_pid = std::clamp(PS_parameters_curr.vy_pid, -0.1, 0.1);

  } else {

    PS_parameters_curr.vx_pid = 0.2 * P_B_error(0);
    PS_parameters_curr.vy_pid = 0.2 * P_B_error(1);
    PS_parameters_curr.vy_pid = std::clamp(PS_parameters_curr.vy_pid, -0.25, 0.25);

  }
  
  PS_parameters_curr.vx_pid = std::clamp(PS_parameters_curr.vx_pid, 0.0, 0.2);
  // this->vx_pid = PS_parameters_curr.vx_pid; // For logging.
  // this->vy_pid = PS_parameters_curr.vy_pid; 
  Vector3d v_pid {PS_parameters_curr.vx_pid, PS_parameters_curr.vy_pid, 0};
  PS_parameters_curr.v_StB_Wpc_d = v_pid + Vector3d{PS_parameters_curr.v_StB_Wpc_d(0), 0, 0};


}

void PSPlanner::getObs_step(double step_index) {

  if (step_index+1 >= num_steps_obs){
    obs = obs_list.back();
  }else{
    obs = obs_list[step_index];
  }
  // obs = obs_list[step_index];
}


void PSPlanner::read_obs(std::string filename) {
  std::ifstream infile(filename);
  if (infile.fail()) {
    std::cerr << "Input file" + filename + "opening failed. \n";
    std::exit(1);
  }

  Eigen::VectorXd traj = Eigen::VectorXd(6);
  Eigen::Vector4d traj_obs;
  

  std::string line;
  int row = 0;
  while (std::getline(infile, line)) {
    std::istringstream ss(line);
    std::string number;
    int col = 0;
    while (std::getline(ss, number, ' ')) {  
      traj(col,0) = std::stod(number);
      col++;
    }
    

    traj_obs << traj(0,0) , traj(1, 0), traj(3,0) , traj(4, 0);
    obs_list.push_back(traj_obs);



    row++;
  }
  infile.close();
  num_steps_obs= row;
  std::cout << "++++++++++++++++ READ PSP TRAJ +++++++++++++++++++   " << num_steps << " steps" << std::endl << std::endl << std::endl;
  //return {PSP, PSP_v, PSP_a};
}

void PSPlanner::set_T_PSPB(Vector3d base_position, double target_yaw) {
  double init_psp_yaw_offset = -(M_PI_2 - target_yaw);        
  Matrix3d R_WPSP = AngleAxisd(init_psp_yaw_offset, Vector3d::UnitZ()).toRotationMatrix();
  Vector3d init_p_offset = {base_position(0),  base_position(1), 0};
  T_PSPB_0.block<3,1>(0,3) = init_p_offset;
  T_PSPB_0.block<3,3>(0,0) = R_WPSP;
}

DigitControlHyperparameters PSPlanner::getControlHyperparameters(){
  // double step_time_crnt, double step_time_next,Vector3d v_StB_d, double stepl_d, double stepw_d
  
      
  return DigitControlHyperparameters(PS_parameters_curr.stept, 
  PS_parameters_curr.stept_n, PS_parameters_curr.v_StB_Wpc_d, 
  PS_parameters_curr.L_Wpc_d, PS_parameters_curr.W_Wpc_d);
}