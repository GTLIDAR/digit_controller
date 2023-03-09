# Gait controller for Digit

<div align='center'>
<img src="misc/hardware.gif" style="display: inline; border-width: 0px;" width=410px></img>
<img src="misc/simulation.gif" style="display: inline; border-width: 0px;" width=410px></img>
</div>
A modification of angular momentum controller and a passivity-based controller for tracking phase-space plan and achieving Digit walking and turning.

The source code on this repository is dependent on the Digit API and Digit simulator provided by Agility Robotics. In addition, to enable the communication between the main control code with the websocket server and external keyboard inputs, it is necessary to have ROS installed in your system.

BibTex
```
@misc{ShamsahSafeNav,
  doi = {10.48550/ARXIV.2110.12097},
  url = {https://arxiv.org/abs/2110.12097},
  author = {Shamsah, Abdulaziz and Gu, Zhaoyuan and Warnke, Jonas and Hutchinson, Seth and Zhao, Ye},
  title = {Integrated Task and Motion Planning for Safe Legged Navigation in Partially Observable Environments},
  publisher = {arXiv},
  year = {2023},
  copyright = {arXiv.org perpetual, non-exclusive license}
}
```

## Important note
Compiling the control code requires an updated version of gcc and g++ (version 7.5 should work fine). If you find problems compiling the code, please check this link to see how to update your gcc/g++ compiler: https://tuxamito.com/wiki/index.php/Installing_newer_GCC_versions_in_Ubuntu


## Requirements to run the main control code
- [ ] Install ROS melodic (Ubuntu 18.04) or ROS noetic (Ubuntu 20.04) in your system.
- [ ] Download the repository **digit_main** within the "catkin_ws/src" directory in your system. In the following examples, we assume the catkin workspace is installed in your home directory, i.e., you catkin workspace is "~/catkin_ws". You can use the following commands create a workspace and download the repository:

```bash
cd ~/catkin_ws
mkdir src
cd src
git clone https://github.gatech.edu/GeorgiaTechLIDARGroup/digit_main.git

sudo apt install python3-pip python3-yaml python3-catkin-tools sshpass
sudo pip3 install rospkg catkin_pkg ws4py getch
sudo apt install ros-YOURROSVERSION-plotjuggler-ros ros-YOURROSVERSION-joy # YOURROSVERSION = melodic or noetic
```


## Include simulator and API files provided by Agility Robotics
- The simulator is not included in the git repo. The full software is too large to include in GitHub. Do not push to git when updating your code. 
- Download the 2022 version of the simulator file from the Releases section of this repo. Here, it is assumed the file is downloaded in the "~/Downloads" directory. 
- Give execution permissions to the downloaded simulator:
```bash
cd ~/Downloads
chmod +x ar-control.22a
```

- To start the Digit simulator, just run the following command:
```bash
./ar-control.22a
```
This will start a webpage at localhost:8080. Open this link with your browser. You can read the detailed Digit documentation or simulate Digit robot in this webpage.

- Get the "lowlevelapi.tar.gz" from http://localhost:8080/doc/software/lowlevelapi.html. Right click the file and "Extract Here" to the "Downloads/"). The new lowlevel API files will be inside "lowlevelapi" folder. Now we need to place the lowlevel API files (header and cpp) and the controller into our workspace.

```bash
cp -r ~/Downloads/lowlevelapi ~/catkin_ws/src/digit_main/lowlevelapi_22
cp ~/Downloads/ar-control.22a ~/catkin_ws/src/digit_main/lowlevelapi_22/ar-control

```

# Compiling the code:
```bash
cd ~/catkin_ws
source /opt/ros/noetic/setup.bash
catkin build
source devel/setup.bash
```

# Running the simulator and controller
- Open a new terminal window, go to the directory where the simulator executable file is located:
```bash
cd ~/catkin_ws/src/digit_main/lowlevelapi_22
./ar-control examples/lowlevelapi_example.toml 
```

- Open the following url address in your browser (http://localhost:8080/) to see the simulator home page and select the option Gamepad.

- In a new terminal window run the main.launch file using roslaunch:
```bash
cd ~/catkin_ws
roslaunch digit_main main.launch
```
The Digit robot should start walking and turning by itself. 

If you launch the `teleop.launch`, it will enter teleoperation mode. You can use the "Keyboard Input" window to increase/decrease the desired velocity and yaw with the up/down/left/right arrow keys.

If you plug in a PS4 joy stick, you can also control the robot speed from the stick.

# Running on hardware

Disclaimer: this repository is not liable for any damage caused to the hardware experiment.

Boot up the Digit robot and make it stand up. Make sure your computer is connect with Digit through ethernet. Check on your computer's web browser that http://10.10.1.1:8080/gamepad/ shows the Digit's current state.

- Open a new terminal window, go to the directory where the simulator executable file is located. This is also needed for hardware test:
```bash
cd ~/catkin_ws/src/digit_main/lowlevelapi_22
./ar-control examples/lowlevelapi_example.toml 
```

- In a new terminal window run the launch file using roslaunch:
```bash
cd ~/catkin_ws
roslaunch digit_main digit_hardware.launch
```

# Running Unit Tests
This branch uses `doctest` (invoked using `ctests`) for unit testing the generated FROST functions. The latest version of `doctest.h` is automatically downloaded when CMake runs, and is stored in the `digit_main/test` directory. This is done using the `FetchContent` package, which should be included with a standard distribution of CMake(>=3.11). If your CMake version is older than that (eg. Ubuntu 18.04 ships with CMake 3.10), then including the [FetchContent CMake module](https://github.com/Kitware/CMake/blob/master/Modules/FetchContent.cmake) in the `Modules` directory of your Cmake installation should work.

The source files for the tests are contained in the `digit_main/test` directory and are compiled by default.

To run the tests
1. Navigate to the root of your catkin workspace (`cd ~/catkin_ws` in this readme)
2. Build the package using `catkin_make`
3. `cd build/digit_main`
4. `ctest` (or optionally `ctest --verbose` for more information) to run the tests. This will run all the tests in order. 
  - If you have other packages in your workspace, CTest will run tests for those as well. If you don't want that, then use `ctest -R "digit_main_*"`
  - If you want to run or exclude any other particular test, use the `-R` or the `-E` flags respectively. Also look at [this section](https://cmake.org/cmake/help/book/mastering-cmake/chapter/Testing%20With%20CMake%20and%20CTest.html#testing-using-ctest) of the CMake docs to see other options.

If you don't want the test executable to be built (can be useful for saving on overall code size, compile time, or maybe you just don't need the testing), you can use `catkin_make -DENABLE_TESTS=OFF`. **Beware that CMake variables are persistent, so if you want the tests to be built afterwards, make sure to use `catkin_make -DENABLE_TESTS=ON`.**

To run individual test, use `rosrun digit_main test_executable_name`.

# Logging and playing back visualizer logs in simulator

To enable replay the simulation result, add the following lines to the `.toml` file that you are using for launching the simulator.

```
[logging]
enable-visualizer-log = true
log-directory = "/tmp/control"
```

The file is now configured by default to log the visualization events in `/tmp/control/visualizer.log`. Note that the log cannot be played back when the simulator is launched with this configuration file loaded in. In order to replay the last log, exit the simulator and then launch it in playback mode using `./ar-control visualizer-playback` and type in the log file location in the "Load File" textbox.

We use juggler for data bag visualization. Change the `filename` in your `log/PSP_tracking.xml` to your data bag in log_data or log_data_hw. Then launch juggler.
```
roslaunch digit_main juggler.launch
```

# Naming conventions

Variables representing physical quantities are named according to Drake's naming conventions: https://drake.mit.edu/doxygen_cxx/group__multibody__notation__basics.html

The convention is as follows: `{quantity}_{reference}{target}_{frame}_{time suffix}`. The frame or the time suffix may be omitted. If no frame is specified, the quantity is assumed to be in the frame of the reference. For example, p_PTL is the position of the left toe with respect to the pelvis, in the pelvis frame.

Quantity abbreviations: p (position), v (velocity), T (transform), R (rotation matrix), q (joint state), dq (derivative of joint state), F (force), J (Jacobian), Kp (proportional gain), Kd (derivative gain), L (angular momentum), h (height)

Frames, components, measurements: P (pelvis), Tl/Tr (left and right toes), C (center of mass), M (middle point between toes), W (world), B (body), St (stance toe), Sw (swing toe), Wpc/Wpn (waypoint current/next), LL (leg length), LA (leg angle), LIP (linear inverted pendulum)

Time suffixes: _I (initial, right after contact), _d (desired), _F (final, right before contact), _A (apex time), _0 (current step, before upcoming contact), _1 (next step, after upcoming contact), _2 (next next step).

A diagram of Digit's leg specifying some of these measurements can be found [here](https://github.gatech.edu/GeorgiaTechLIDARGroup/Digit_CFROST).

![Digit frames](/misc/digit_frame_definition.png)

# Dependency
This code is based on the angular momentum controller from UMich. The kinematics functions are generated with FROST. This package is adapted from [cyberbotics lab from OSU](https://mae.osu.edu/cyberbotics).