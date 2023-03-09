% close all, clc, clear
clc, clear
%close all;
% filename = uigetfile
%%% 05-18-22_153230 %%%
% COM_init(0, 0) = 0.032465 + 0.03*std::sin(inc*3.14/15000);
% COM_init(1, 0) = 0.0 - 0.02*std::sin(inc*3.14/15000);
% COM_init(2, 0) = 0.933 + 0.05*std::cos(inc*3.14/15000);
%%%%%%%%%%%%%%%%%%%%%%%%
dir = 'kp05_kd004_hp03_hd_004_proll01_droll_001_ppitch02_dpitch001'; % dir = '04-26-22_132808';
% logAPI = toml.read('log_history/10-27-2020_18-46/logAPI_file.toml')
log_data = readtable(append(dir,'/log_data.csv')); %extra data e.g. phase variable2, time, enable, domain
log_base = readtable(append(dir,'/log_base.csv'));
log_basevel = readtable(append(dir,'/log_basevel.csv'));
log_GRF = readtable(append(dir,'/log_GRF.csv'));
log_joints = readtable(append(dir,'/log_joints.csv'));
log_motors = readtable(append(dir,'/log_motors.csv'));
log_regulations = readtable(append(dir,'/log_regulations.csv'));
log_leg = readtable('log_leg.csv');
log_com = readtable('log_COM.csv');
log_com_d = readtable('log_COM_d.csv');
log_leglength = readtable('log_leglength.csv');
addpath('~/github_repo')

nActJoints = 30;
nMotors = 20;
nOrientation = 4;
nTranslation = 3;
nGRF = 4;


MotorLabel = ["LeftHipRoll", "LeftHipYaw", "LeftHipPitch", "LeftKnee", "LeftToeA", "LeftToeB", "RightHipRoll", "RightHipYaw", "RightHipPitch", "RightKnee", "RightToeA", "RightToeB", ...
        "LeftShoulderRoll", "LeftShoulderPitch", "LeftShoulderYaw", "LeftElbow","RightShoulderRoll", "RightShoulderPitch", "RightShoulderYaw", "RightElbow"];

JointLabel = ["LeftHipRoll", "LeftHipYaw", "LeftHipPitch", "LeftKnee", "LeftToeA", "LeftToeB", ...
              "RightHipRoll", "RightHipYaw", "RightHipPitch", "RightKnee", "RightToeA", "RightToeB", ...
              "LeftShoulderRoll", "LeftShoulderPitch", "LeftShoulderYaw", "LeftElbow", ...
              "RightShoulderRoll", "RightShoulderPitch", "RightShoulderYaw", "RightElbow", ...
              "LeftShin", "LeftTarsus", "LeftToePitch", "LeftToeRoll", "LeftHeelSpring", ...
              "RightShin", "RightTarsus", "RightToePitch", "RightToeRoll", "RightHeelSpring"];

maxvalidvalue = floor(size(log_motors,1)/20);   % 20 motors -> obtain the number of time steps

codemaxvalidvalue=floor(size(log_leglength,1)/4);

BasePosition = log_base.BaseTranslation;
BasePosition = BasePosition(1:maxvalidvalue*3);
total_length = length(BasePosition);
BasePosition = reshape(BasePosition, [nTranslation,total_length/nTranslation]);  

p_M_COM_M = log_com.p_M_COM_M;
p_M_COM_M = p_M_COM_M(1:maxvalidvalue*3);
total_length = length(p_M_COM_M);
p_M_COM_M = reshape(p_M_COM_M, [nTranslation,total_length/nTranslation]);  

p_M_COM_M_d = log_com_d.p_M_COM_M_d;
p_M_COM_M_d = p_M_COM_M_d(1:maxvalidvalue*3);
total_length = length(p_M_COM_M_d);
p_M_COM_M_d = reshape(p_M_COM_M_d, [nTranslation,total_length/nTranslation]);  

leg_length = log_leglength.leg_length;
leg_length = leg_length(1:maxvalidvalue*4);
total_length = length(leg_length);
leg_length = reshape(leg_length, [4,total_length/4]);  


BaseOrientation = log_base.BaseOrientation;
BaseOrientation = BaseOrientation(1:maxvalidvalue*3);
total_length = length(BaseOrientation);
BaseOrientation = reshape(BaseOrientation, [nTranslation,total_length/nTranslation]);
%BaseOrientation = [roll, pitch, yaw]

BaseVelocity = log_base.BaseVelocity;
BaseVelocity = BaseVelocity(1:maxvalidvalue*3);
total_length = length(BaseVelocity);
BaseVelocity = reshape(BaseVelocity, [nTranslation,total_length/nTranslation]);

BaseTargetVelocity = log_basevel.BaseTargetVel;
BaseTargetVelocity = BaseTargetVelocity(1:maxvalidvalue*3);
total_length = length(BaseTargetVelocity);
BaseTargetVelocity = reshape(BaseTargetVelocity, [3,total_length/3]);

BaseEndStepVelocity = log_basevel.BaseEndStepVel;
BaseEndStepVelocity = BaseEndStepVelocity(1:maxvalidvalue*3);
total_length = length(BaseEndStepVelocity);
BaseEndStepVelocity = reshape(BaseEndStepVelocity, [3,total_length/3]);

BaseAngVelocity = log_base.BaseAngvelocity;
BaseAngVelocity = BaseAngVelocity(1:maxvalidvalue*3);
total_length = length(BaseAngVelocity);
BaseAngVelocity = reshape(BaseAngVelocity, [nTranslation,total_length/nTranslation]);

Time = log_data.Time(1:maxvalidvalue);
codeTime = log_data.Time(1:maxvalidvalue);
Enabled = log_data.Enabled(1:maxvalidvalue);
PhaseVariable = log_data.PhaseVariable(1:maxvalidvalue);
Domain = log_data.Domain(1:maxvalidvalue);   %0=left_support, 1=right_support


JointsPosition = log_joints.JointsPosition;
JointsPosition = JointsPosition(1:maxvalidvalue*30);
total_length = length(JointsPosition);
JointsPosition = reshape(JointsPosition, [nActJoints,total_length/nActJoints]);

JointsVelocity = log_joints.JointsVelocity;
JointsVelocity = JointsVelocity(1:maxvalidvalue*30);
total_length = length(JointsVelocity);
JointsVelocity = reshape(JointsVelocity, [nActJoints,total_length/nActJoints]);

JointsPositionReference = log_motors.JointsPositionReference;
JointsPositionReference = JointsPositionReference(1:maxvalidvalue*20);
total_length = length(JointsPositionReference);
JointsPositionReference = reshape(JointsPositionReference, [nMotors,total_length/nMotors]);

JointsVelocityReference = log_motors.JointsVelocityReference;
JointsVelocityReference = JointsVelocityReference(1:maxvalidvalue*20);
total_length = length(JointsVelocityReference);
JointsVelocityReference = reshape(JointsVelocityReference, [nMotors,total_length/nMotors]);

JointsPositionOriginal = log_motors.JointsPositionOriginal;
JointsPositionOriginal = JointsPositionOriginal(1:maxvalidvalue*20);
total_length = length(JointsPositionOriginal);
JointsPositionOriginal = reshape(JointsPositionOriginal, [nMotors,total_length/nMotors]);

JointsVelocityOriginal = log_motors.JointsVelocityOriginal;
JointsVelocityOriginal = JointsVelocityOriginal(1:maxvalidvalue*20);
total_length = length(JointsVelocityOriginal);
JointsVelocityOriginal = reshape(JointsVelocityOriginal, [nMotors,total_length/nMotors]);

JointsPositionRegulation = log_regulations.JointsPositionRegulation;
JointsPositionRegulation = JointsPositionRegulation(1:maxvalidvalue*2);
total_length = length(JointsPositionRegulation);
JointsPositionRegulation = reshape(JointsPositionRegulation, [2,total_length/2]); %[HipRoll regulation, HipPitch regulation]

JointsVelocityRegulation = log_regulations.JointsVelocityRegulation;
JointsVelocityRegulation = JointsVelocityRegulation(1:maxvalidvalue*2);
total_length = length(JointsVelocityRegulation);
JointsVelocityRegulation = reshape(JointsVelocityRegulation, [2,total_length/2]);

JointsCommandedTorque = log_motors.JointsCommandedTorque;
JointsCommandedTorque = JointsCommandedTorque(1:maxvalidvalue*20);
total_length = length(JointsCommandedTorque);
JointsCommandedTorque = reshape(JointsCommandedTorque, [nMotors,total_length/nMotors]);

JointsMeasuredTorque = log_motors.JointsMeasuredTorque;
JointsMeasuredTorque = JointsMeasuredTorque(1:maxvalidvalue*20);
total_length = length(JointsMeasuredTorque);
JointsMeasuredTorque = reshape(JointsMeasuredTorque, [nMotors,total_length/nMotors]);

GRF = log_GRF.GRF;
GRF = GRF(1:maxvalidvalue*4);
total_length = length(GRF);
GRF = reshape(GRF, [nGRF,total_length/nGRF]);

Label_GRF = {'GRF_L horizontal', 'GRF_L normal', 'GRF_R horizontal', 'GRF_R normal'};

xlimits = 0;

%%
% Load deasired bounds for plots
xb = 10;
xu = 12;
xlimits = 1;
%     i = find

%% dont understand what the baseEndVelocity represent. / cant g it from C++ codes.
% CurvaJV = figure('Name','BaseEndVelocity');
% hold on
% plot(Time,180/3.14159*BaseEndStepVelocity(1,:));
% plot(Time,180/3.14159*BaseEndStepVelocity(2,:));


%% 
% CurvaJV = figure('Name','LeftHipRoll');
% jointName = 'LeftHipRoll';
% idx = find(ismember(JointLabel, jointName));
% for i = idx:idx
%     title(jointName);
%     yyaxis left
%     hold on
%     plot(Time,JointsPosition(i,:), 'LineWidth', 3)  % read from motor data
%     plot(Time,JointsPositionReference(i,:), 'b--', 'LineWidth', 1.2) % user give(from IK)
% %     plot(Time,JointsPositionOriginal(i,:), 'c--', 'LineWidth', 1.2) % adjusted position reference (right now, same as JointsPositionReference)
% %     plot(Time,JointsPositionRegulation(1,:), 'r--', 'LineWidth', 1.2) % regulation term (0 in our case)
% 
%     yyaxis right
% % %     ylim([-20 20])
%     hold on
%     plot(Time,JointsMeasuredTorque(i,:), 'LineWidth', 1.2)
%     plot(Time,JointsCommandedTorque(i,:), 'r--', 'LineWidth', 1.2)
%     legend("Measured position", "Given position", "Measured torque", "Commanded torque");
% %     plot(Time,PhaseVariable*50, 'k', 'LineWidth', 1.2)
% %     plot(Time,Domain*50, 'g--', 'LineWidth', 1.2) % we hang the robot in
% %     the air
%     
%     if (xlimits == 1)
%         xlim([xb xu]);
%     end    
% end

%%
CurvaJV = figure('Name','LeftHipPitch');
jointName = 'LeftHipPitch';
idx = find(ismember(JointLabel, jointName));
for i = idx:idx
    title(jointName);
    yyaxis left
    hold on
    plot(Time,JointsPosition(i,:), 'LineWidth', 3)
    plot(Time,JointsPositionReference(i,:), 'b--', 'LineWidth', 1.2)
%     plot(Time,JointsPositionOriginal(i,:), 'c--', 'LineWidth', 1.2)
    plot(Time,JointsPositionRegulation(2,:), 'r--', 'LineWidth', 1.2)    
%     plot(Time,BaseOrientation(1,:), 'm-', 'LineWidth', 1.2)
%     plot(Time,BaseAngVelocity(1,:), 'm--', 'LineWidth', 1.2)
%     plot(Time,JointsVelocity(i,:), 'k-', 'LineWidth', 1.2)
%     plot(Time,JointsVelocityReference(i,:), 'k--', 'LineWidth', 1.2)    

%     
%     yyaxis right
% % %     ylim([-20 20])
%     hold on
%     plot(Time,JointsMeasuredTorque(i,:), 'LineWidth', 1.2)
%     plot(Time,JointsCommandedTorque(i,:), 'r--', 'LineWidth', 1.2)
%     legend("Measured position", "Given position", "Measured torque", "Commanded torque");
%     plot(Time,PhaseVariable*50, 'k', 'LineWidth', 1.2)
%     plot(Time,Domain*50, 'g--', 'LineWidth', 1.2)
%     
%     if (xlimits == 1)
%         xlim([xb xu]);
%         
    end    



%% Actuated leg joints position
CurvaJV = figure('Name','LeftLegJoints');
for i = 1:6
    subplot(2,3,i)
    yyaxis left
    plot(Time,JointsPosition(i,:), 'LineWidth', 1.2)
    hold on
    plot(Time,JointsPositionReference(i,:), 'k--', 'LineWidth', 1.2)
    yyaxis right
%     ylim([-20 20])
    hold on
    plot(Time,JointsMeasuredTorque(i,:), 'r--', 'LineWidth', 1.2)
    plot(Time,JointsCommandedTorque(i,:), 'g', 'LineWidth', 1.2)
%     hold on
    xlabel(JointLabel{i});
%     if (xlimits == 1)
%         xlim([xb xu]);
%     end
end
legend("Measured position", "Given position", "Measured torque", "Commanded torque");

CurvaJV = figure('Name','RightLegJoints');
for i = 7:12
    subplot(2,3,i-6)
    yyaxis left
    plot(Time,JointsPosition(i,:), 'LineWidth', 1.2)
    hold on
    plot(Time,JointsPositionReference(i,:), 'k--', 'LineWidth', 1.2)
    yyaxis right
%     ylim([-20 20])
    hold on
    plot(Time,JointsMeasuredTorque(i,:), 'r--', 'LineWidth', 1.2)
    plot(Time,JointsCommandedTorque(i,:), 'g', 'LineWidth', 1.2)
%     hold on05-17-22_232953
    xlabel(JointLabel{i});
%     if (xlimits == 1)
%         xlim([xb xu]);
%     end
end
 legend("Measured position", "Given position", "Measured torque", "Commanded torque");
% 
%% Actuated leg joints velocity
CurvaJV = figure('Name','LeftLegJointsVelocity');
for i = 1:6
    subplot(2,3,i)
    yyaxis left
    plot(Time,JointsVelocity(i,:), 'LineWidth', 1.2)
    hold on
    plot(Time,JointsVelocityReference(i,:), 'r--', 'LineWidth', 1.2)
    yyaxis right
%     ylim([-20 20])
    hold on
%     plot(Time,JointsCommandedTorque(i,:), 'g', 'LineWidth', 1.2)
%     hold on
    xlabel(JointLabel{i});
%     if (xlimits == 1)
%         xlim([xb xu]);
%     end
end
legend("Measured velocity", "Given velocity");

CurvaJV = figure('Name','RightLegJointsVelocity');
for i = 7:12
    subplot(2,3,i-6)
    yyaxis left
    plot(Time,JointsVelocity(i,:), 'LineWidth', 1.2)
    hold on
    plot(Time,JointsVelocityReference(i,:), 'r--', 'LineWidth', 1.2)
    yyaxis right
%     ylim([-20 20])
    hold on
%     plot(Time,JointsCommandedTorque(i,:), 'g', 'LineWidth', 1.2)
%     hold on
    xlabel(JointLabel{i});
%     if (xlimits == 1)
%         xlim([xb xu]);
%     end
end
legend("Measured velocity", "Given velocity");

% %% Actuated arm joints position
% CurvaJV = figure('Name','LeftArmJoints');
% for i = 13:16
%     subplot(2,2,i-12)
%     yyaxis left
%     plot(JointsPosition(i,:), 'LineWidth', 3)
%     hold on
%     plot(JointsPositionReference(i,:), 'k--', 'LineWidth', 1.2)
% %     yyaxis right
% % %     ylim([-20 20])
% %     hold on
%     plot(Time,JointsMeasuredTorque(i,:), 'r--', 'LineWidth', 1.2)
%     plot(Time,JointsCommandedTorque(i,:), 'g', 'LineWidth', 1.2)
% % %     hold on
% %     xlabel(JointLabel{i});
% %     if (xlimits == 1)
% %         xlim([xb xu]);
% %     end
% end
% legend("Measured position", "Given position", "Measured torque", "Commanded torque");
% 
% CurvaJV = figure('Name','RightArmJoints');
% for i = 17:20
%     subplot(2,2,i-16)
%     yyaxis left
%     plot(JointsPosition(i,:), 'LineWidth', 3)
%     hold on
%     plot(JointsPositionReference(i,:), 'k--', 'LineWidth', 1.2)
% %     yyaxis right
% % %     ylim([-20 20])
% %     hold on
%     plot(Time,JointsMeasuredTorque(i,:), 'r--', 'LineWidth', 1.2)
%     plot(Time,JointsCommandedTorque(i,:), 'g', 'LineWidth', 1.2)
%     
%     %     hold on
% %     xlabel(JointLabel{i});
% %     if (xlimits == 1)
% %         xlim([xb xu]);
% %     end
% end
% legend("Measured position", "Given position", "Measured torque", "Commanded torque");
% 
%% Ground reaction force
CurvaJV = figure('Name','GroundReactionForce');
for i = 1:4
    hold on
    subplot(2,2,i)
    yyaxis left
    plot(Time,GRF(i,:), 'b', 'LineWidth', 1.2)
    ylim([-10 400]);
    yyaxis right
    hold on
    plot(Time,PhaseVariable, 'r', 'LineWidth', 1.0)
    plot(Time,Domain, 'g--', 'LineWidth', 1.0)
    xlabel(Label_GRF{i});
    xlimits = 1
    if (xlimits == 1)
        xlim([10 11]);
        
    end
end
% 

%% com offset Position
length = size(Time,1);
x = linspace(0,length,length);
CurvaJV = figure('Name','TorsoPosition');
hold on

plot(Time, p_M_COM_M(1,:),'b','LineWidth', 1.2)
plot(Time, BasePosition(1,:),'b-.', 'LineWidth', 1.2)
plot(Time, p_M_COM_M(2,:),'r','LineWidth', 1.2)
plot(Time, BasePosition(2,:),'r-.', 'LineWidth', 1.2)
plot(Time, p_M_COM_M(3,:),'k', 'LineWidth', 1.2)
plot(Time, BasePosition(3,:),'k-.', 'LineWidth', 1.2)
% plot(Time, 0*ones(1,length(BasePosition(1,:))))
% plot(Time, -0.023*ones(1,length(BasePosition(1,:))))
% legend({'Roll, Pitch'})

plot(Time,0.032465-0.0*sin(Time*3.14/30000),'b--', 'LineWidth', 1.2)
plot(Time+10,0.05*sin(x*3.14/39000),'r--', 'LineWidth', 1.2)
plot(Time, 0.945+0.0*cos(Time*3.14/20000),'k--', 'LineWidth', 1.2)
legend({'com_x','pelvis_x','com_y', 'pelvis_y','com_z','pelvis_z','commanded_x','commanded_y','commanded_z'})


%% com offset Position
length = size(Time,1);
x = linspace(0,length,length);
CurvaJV = figure('Name','TorsoPosition');
hold on

plot(codeTime, p_M_COM_M(1,:),'b','LineWidth', 1.2)
plot(Time, BasePosition(1,:),'b-.', 'LineWidth', 1.2)
plot(codeTime, p_M_COM_M(2,:),'r','LineWidth', 1.2)
plot(Time, BasePosition(2,:),'r-.', 'LineWidth', 1.2)
plot(codeTime, p_M_COM_M(3,:),'k', 'LineWidth', 1.2)
plot(Time, BasePosition(3,:),'k-.', 'LineWidth', 1.2)
% plot(Time, 0*ones(1,length(BasePosition(1,:))))
% plot(Time, -0.023*ones(1,length(BasePosition(1,:))))
% legend({'Roll, Pitch'})

plot(Time,0.032465-0.0*sin(Time*3.14/30000),'b--', 'LineWidth', 1.2)
plot(Time+10,0.07*sin(x*0.5*3.14/39000),'r--', 'LineWidth', 1.2)
plot(Time+10, 0.985-0.05*sin(x*3.14/39000),'k--', 'LineWidth', 1.2)

plot(Time, BaseOrientation(1,:), 'LineWidth', 1.2)
plot(Time, BaseAngVelocity(1,:), 'LineWidth', 1.2)
legend({'com_x','pelvis_x','com_y', 'pelvis_y','com_z','pelvis_z','commanded_x','commanded_y','commanded_z','roll','droll'})

%%


length = size(Time,1);
x = linspace(0,length,length);
CurvaJV = figure('Name','TorsoPosition');
hold on


plot(Time, p_M_COM_M(3,:),'r','LineWidth', 1.2)
%plot(Time, BasePosition(3,:),'r-.', 'LineWidth', 1.2)

% plot(Time, 0*ones(1,length(BasePosition(1,:))))
% plot(Time, -0.023*ones(1,length(BasePosition(1,:))))
% legend({'Roll, Pitch'})

%plot(Time+30,0.985-0.05*sin(x*3.14/39000),'r--', 'LineWidth', 1.2)
plot(linspace(0,30,300),0.985+0*linspace(0,30,300),'r--', 'LineWidth', 1.2)
plot(linspace(30,50,100),0.985-0.05*sin(linspace(0,20,100)*3.14/20),'r--', 'LineWidth', 1.2)
plot(linspace(50,60,300),0.985+0*linspace(50,60,300),'r--', 'LineWidth', 1.2)



%plot(Time, BaseOrientation(1,:), 'LineWidth', 1.2)
%plot(Time, BaseAngVelocity(1,:), 'LineWidth', 1.2)
%legend({'com_y', 'pelvis_y','commanded_y','roll','droll'})
legend({'com_z','commanded_z'})



%% com offset Position
length = size(Time,1);
x = linspace(0,length,length);
CurvaJV = figure('Name','TorsoPosition');
hold on

plot(codeTime, p_M_COM_M(1,:),'b','LineWidth', 1.2)
%plot(Time, BasePosition(1,:),'b-.', 'LineWidth', 1.2)
plot(codeTime, p_M_COM_M(2,:),'r','LineWidth', 1.2)
%plot(Time, BasePosition(2,:),'r-.', 'LineWidth', 1.2)
%plot(codeTime, p_M_COM_M(3,:),'k', 'LineWidth', 1.2)
%plot(Time, BasePosition(3,:),'k-.', 'LineWidth', 1.2)
% plot(Time, 0*ones(1,length(BasePosition(1,:))))
% plot(Time, -0.023*ones(1,length(BasePosition(1,:))))
% legend({'Roll, Pitch'})

%plot(Time,0.032465-0.0*sin(Time*3.14/30000),'b--', 'LineWidth', 1.2)
%plot(Time,0.0*sin(x*0.5*3.14/39000),'r--', 'LineWidth', 1.2)
%plot(Time+10, 0.985-0.05*sin(x*3.14/39000),'k--', 'LineWidth', 1.2)

%plot(Time, BaseOrientation(1,:), 'LineWidth', 1.2)
%plot(Time, BaseAngVelocity(1,:), 'LineWidth', 1.2)
legend({'com_x','com_y'})


%% Torso Position
length = size(Time,1);
x = linspace(0,length,length);
CurvaJV = figure('Name','TorsoPosition');
hold on

plot(Time, BasePosition(1,:),'b', 'LineWidth', 1.2)
plot(Time, BasePosition(2,:),'r', 'LineWidth', 1.2)
plot(Time, BasePosition(3,:),'y', 'LineWidth', 1.2)
% plot(Time, 0*ones(1,length(BasePosition(1,:))))
% plot(Time, -0.023*ones(1,length(BasePosition(1,:))))
% legend({'Roll, Pitch'})

plot(Time+10,0.032465-0.05*sin(x*3.14/30000),'b--', 'LineWidth', 1.2)
plot(Time+5,-0.075+0*sin(x*3.14/30000),'r--', 'LineWidth', 1.2)
plot(Time+10,0.933+0.05*cos(x*3.14/20000),'y--', 'LineWidth', 1.2)
legend({'x','y','z'})

%% COM Position
length = size(Time,1);
x = linspace(0,length,length);
CurvaJV = figure('Name','TorsoPosition');
hold on

plot(Time, p_M_COM_M(1,:),'b', 'LineWidth', 1.2)
plot(Time, p_M_COM_M(2,:),'r', 'LineWidth', 1.2)
plot(Time, p_M_COM_M(3,:),'g', 'LineWidth', 1.2)

plot(Time, p_M_COM_M_d(1,:),'b--', 'LineWidth', 1.2)
plot(Time, p_M_COM_M_d(2,:),'r--', 'LineWidth', 1.2)
plot(Time, p_M_COM_M_d(3,:),'g--', 'LineWidth', 1.2)

legend({'com_x','com_y','com_z','com_x_d','com_y_d','com_z_d'})

%% Torso velocity
CurvaJV = figure('Name','TorsoVelocity');
hold on
plot(Time, BaseVelocity(1,:), 'LineWidth', 1.2)
plot(Time, BaseVelocity(2,:), 'LineWidth', 1.2)
plot(Time, BaseVelocity(3,:), 'LineWidth', 1.2)
% plot(Time,0.2*Domain, 'g--', 'LineWidt0h', 1.0)    

legend({'Vx','Vy','Vz'})
title('TorsoVelocity')
% if (xlimits == 1)
%     xlim([xb xu]);
% end

%% Torso Orientation
CurvaJV = figure('Name','TorsoOrientation');
hold on
plot(Time, BaseOrientation(1,:), 'LineWidth', 1.2)
plot(Time, BaseOrientation(2,:), 'LineWidth', 1.2)
plot(Time, BaseOrientation(3,:)-BaseOrientation(3,1), 'LineWidth', 1.2)
% Dont understand the following two lines
% plot(Time, 0*ones(1,length(BaseOrientation(1,:)))) 
% plot(Time, -0.023*ones(1,length(BaseOrientation(1,:))))
% legend({'Roll, Pitch'})
legend({'Roll','Pitch','Yaw'})
%ylim([-0.1,0.02])
% if (xlimits == 1)
%     xlim([xb xu]);
% end
% 
% 
%% Torso Angular Velocity
CurvaJV = figure('Name','TorsoAngularVelocity');
hold on
plot(Time, BaseAngVelocity(1,:), 'LineWidth', 1.2)
plot(Time, BaseAngVelocity(2,:), 'LineWidth', 1.2)
plot(Time, BaseAngVelocity(3,:), 'LineWidth', 1.2)
legend({'droll','dpitch','dyaw'})
%legend({'wx'})

% if (xlimits == 1)
%     xlim([xb xu]);
% end
% 
% 
% %% Filtered velocity 
% % windowSize = 1500; 
% % b = (1/windowSize)*ones(1,windowSize);
% % a = 1;
% % vx_fil = filter(b,a,BaseVelocity(1,:));
% % vy_fil = filter(b,a,BaseVelocity(2,:));
% % figure
% % hold on
% % plot(Time,vx_fil,'LineWidth',1.5)
% % plot(Time,vy_fil,'LineWidth',1.5)

%% leg length

CurvaJV = figure('Name','leg length');
hold on
plot(codeTime,leg_length(1,:),'r', 'LineWidth', 1.2)
plot(codeTime,leg_length(2,:),'b', 'LineWidth', 1.2)
plot(codeTime,leg_length(3,:),'r--', 'LineWidth', 1.2)
plot(codeTime,leg_length(4,:),'b--', 'LineWidth', 1.2)

legend({'commanded L', 'commanded r', 'measured l', 'measured r'})





%% error mountain plot 
kplat = 0.05;
kproll = 1;
kdroll= 0.01;
kdlat = 0.06;


figure(1)
hold on

area(Time,abs(kproll*BaseOrientation(1,:)))
area(Time,abs(kplat*p_M_COM_M(2,:)))
area(Time,abs(kdroll*BaseAngVelocity(1,:)))
area(Time,abs(kdlat*BaseVelocity(2,:)))
legend({'roll FB','COM_y FB','droll FB','base_vel_y'})


newcolors = [ [0 0.4470 0.7410];[0.8500 0.3250 0.0980];[0.9290 0.6940 0.1250];[0.9290 0 0.1250]];
colororder(newcolors)
hold off

%% error plots
% error leg length

CurvaJV = figure('Name','leg length');
hold on
plot(codeTime,leg_length(1,:)-leg_length(3,:),'r', 'LineWidth', 1.2)
plot(codeTime,leg_length(2,:)-leg_length(4,:),'b', 'LineWidth', 1.2)

title('leg length error')
legend({'commanded L - measured l', 'commanded r - measured r'})

% rpy error
CurvaJV = figure('Name','TorsoOrientation');
hold on
plot(Time, 0-BaseOrientation(1,:), 'LineWidth', 1.2)
plot(Time, 0-BaseOrientation(2,:), 'LineWidth', 1.2)
plot(Time, 0-(BaseOrientation(3,:)-BaseOrientation(3,1)), 'LineWidth', 1.2)
% Dont understand the following two lines
% plot(Time, 0*ones(1,length(BaseOrientation(1,:)))) 
% plot(Time, -0.023*ones(1,length(BaseOrientation(1,:))))
title('rpy error')
legend({'Roll','Pitch','Yaw'})
%ylim([-0.1,0.02])

% COM Position
length = size(Time,1);
x = linspace(0,length,length);
CurvaJV = figure('Name','TorsoPosition');
hold on

plot(Time, p_M_COM_M_d(1,:)-p_M_COM_M(1,:)+0.03,'b', 'LineWidth', 1.2)
plot(Time, p_M_COM_M_d(2,:)-p_M_COM_M(2,:),'r', 'LineWidth', 1.2)
plot(Time, p_M_COM_M_d(3,:)-p_M_COM_M(3,:),'g', 'LineWidth', 1.2)

title('COM error')

legend({'com_x','com_y','com_z'})
