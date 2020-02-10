/*
 * octomap_to_gridmap_demo_node.cpp
 *
 *  Created on: May 03, 2017
 *      Author: Jeff Delmerico
 *   Institute: University of Zürich, Robotics and Perception Group
 */

#include <ros/ros.h>
#include "grid_map_demos/octomaptogridmap.hpp"

int main(int argc, char** argv)
{
  // Initialize node and publisher.
  ros::init(argc, argv, "octomap_to_gridmap");
  ros::NodeHandle nh("~");
  grid_map_demos::OctomapToGridmap octomapToGridmap(nh);
  ros::Duration(2.0).sleep();

  ros::spin();

  return 0;
}
