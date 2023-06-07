/*
 * manager_node.cpp
 *
 */

#include "label_manager/manager.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "label_manager");
  ros::NodeHandle nodeHandle("~");

  label_manager::LabelManager lm(nodeHandle);

  ros::spin();
  return 0;
}
