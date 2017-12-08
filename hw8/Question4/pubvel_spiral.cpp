// This program publishes randomly-generated velocity
// messages for turtlesim.
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>  // For geometry_msgs::Twist
#include <turtlesim/Pose.h>
#include <stdlib.h> // For rand() and RAND_MAX

double pi = 3.1415926535897;
int i = 0;
int j = 0;
double ppose = 0;
turtlesim::Pose turtle_pose;
void positionT(const turtlesim::Pose& k){

  turtle_pose = k;
}
int main(int argc, char **argv) {
  // Initialize the ROS system and become a node.
  ros::init(argc, argv, "publish_velocity");
  ros::NodeHandle nh;

  // Create a publisher object.
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
        "turtle1/cmd_vel", 1000); //links publisher to the node
  ros::Subscriber sub = nh.subscribe("turtle1/pose", 1000, &positionT);

  // Seed the random number generator.
  srand(time(0));
  const std::string PARAM_NAME = "omega";
  double c;
  ros::param::get(PARAM_NAME, c);
  // Loop at 2Hz until the node is shut down.
  ros::Rate rate(2);
  while(j<5) {
    // Create and fill in the message.  The other four
    // fields, which are ignored by turtlesim, default to 0.

    if (ppose > turtle_pose.theta){
        j++;}
         ppose = turtle_pose.theta;
    geometry_msgs::Twist msg; //Object msgs

    msg.angular.z =1;
    msg.linear.x = c*i;

    // Publish the message5
    i+=1;
    pub.publish(msg);

    // Send a message to rosout with the details.


    // Wait until it's time for another iteration.
    ros::spinOnce();

     ROS_INFO_STREAM( j << " Theta: " << turtle_pose.theta << " PPose:" << ppose);
    rate.sleep();
  }
}
