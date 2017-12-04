// This header defines the standard ROS classes.
#include <ros/ros.h>

int main(int argc, char **argv) {
  // Initialize the ROS system.
  ros::init(argc, argv, "my_name");

  // Establish this program as a ROS node.
  ros::NodeHandle nh;

  // Send some output as a log message.
  ROS_INFO_STREAM("Hello, Ezra Ameperosa!");
}

