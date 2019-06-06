/* Raven 2 Control - Control software for the Raven II robot
 * Copyright (C) 2005-2018  Andrew Lewis, Yun-Hsuan Su, Blake Hannaford, 
 * and the University of Washington BioRobotics Laboratory
 *
 * This file is part of Raven 2 Control.
 *
 * Raven 2 Control is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Raven 2 Control is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Raven 2 Control.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * main.cpp
 *
 * \brief Class file for CRTK API state and status flags
 *
 *
 * \date Oct 18, 2018
 * \author Andrew Lewis
 * \author Melody Yun-Hsuan Su
 *
 */

#ifndef MAIN_
#define MAIN_


#include <crtk_lib_cpp/defines.h>
#include <crtk_lib_cpp/crtk_robot_state.h>
#include <crtk_lib_cpp/crtk_robot.h>
#include <crtk_lib_cpp/crtk_motion.h>
#include <crtk_msgs/operating_state.h>
#include <crtk_msgs/StringStamped.h>
#include <sstream>
#include <ctime>
#include <iostream>
#include <string>
#include <ros/ros.h>


#include "main.h"


using namespace std;


/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */


/**
 * @brief      The main function
 *
 * @param[in]  argc  The argc
 * @param      argv  The argv
 *
 * @return     0
 */
int main(int argc, char **argv)
{

  time_t current_time;
  ros::init(argc, argv, "crtk_robot_omega");
  static ros::NodeHandle n; 
  ros::Rate loop_rate(LOOP_RATE); 

  CRTK_robot robot(n);

  ROS_INFO("Please launch stand alone roscore.");
  while (ros::ok()){
    // current_time = time(NULL);
    // robot.run();
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}


#endif
