// This program publishes randomly-generated velocity
// messages for turtlesim.
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>  // For geometry_msgs::Twist
#include <turtlesim/Pose.h>
#include <stdlib.h> // For rand() and RAND_MAX

void positionT(const turtlesim::Pose& k){
  ROS_INFO_STREAM(std::setprecision(2) << std::fixed
    << "position=(" <<  k.x << "," << k.y << ")"
    << " direction=" << k.theta);
}

int main(int argc, char **argv) {
  // Initialize the ROS system and become a node.
  ros::init(argc, argv, "publish_velocity");
  ros::NodeHandle nh;

  // Create a publisher object.

  // Seed the random number generator.
  srand(time(0));
  ros::Subscriber sub = nh.subscribe("turtle1/pose", 1000,
    &positionT);
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
    "turtle1/cmd_vel", 1000); //links publisher to the node
  // Loop at 2Hz until the node is shut down.
  ros::Rate rate(2);
  while(ros::ok()) {
    // Create and fill in the message.  The other four
    // fields, which are ignored by turtlesim, default to 0.
    geometry_msgs::Twist msg; //Object msgs

    msg.linear.x = double(rand())/double(RAND_MAX);
    msg.angular.z = 2*double(rand())/double(RAND_MAX) - 1;
    // Publish the message.
    pub.publish(msg);

    // Send a message to rosout with the details.    ROS_INFO_STREAM("Sending random velocity command:"
   //c ROS_INFO_STREAM("Sending random velocity command:"
      //<< " linear=" << msg.linear.x
      //<< " angular=" << msg.linear.y);
    // Wait until it's time for another iteration.
    rate.sleep();
  }
}
