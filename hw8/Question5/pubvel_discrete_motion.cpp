// This program toggles between rotatation and translation
// commands, based on calls to a service.
#include <ros/ros.h>
#include <std_srvs/Empty.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Pose.h>
#include <time.h>
double t;
double ang;
ros::Time begin;
bool forward;
bool turn;
turtlesim::Pose turtle_pose;
bool toggleForward(
    std_srvs::Empty::Request &req,
    std_srvs::Empty::Response &resp
    ) {
  forward = true;
  return true;
}
bool toggleTurn(
    std_srvs::Empty::Request &req,
    std_srvs::Empty::Response &resp
    ) {
  turn = true;
  return true;
}
void positionT(const turtlesim::Pose& k){

  turtle_pose = k;
}
int main(int argc, char **argv) {
  ros::init(argc, argv, "pubvel_discrete");
  ros::NodeHandle nh;

  // Register our service with the master.
  ros::ServiceServer server = nh.advertiseService(
        "forward_unit", &toggleForward);
  ros::ServiceServer server2 = nh.advertiseService(
        "turn_unit", &toggleTurn);
  ros::Subscriber sub = nh.subscribe("Leo/pose", 1000, &positionT);
  // Publish commands, using the latest value for forward,
  // until the node shuts down.
  // ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
  //   "turtle1/cmd_vel", 1000);
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
        "Leo/cmd_vel", 1000);
  ros::Rate rate(2);
  while(ros::ok()) {
    geometry_msgs::Twist msg;
//    begin = ros::Time::now();
    t = ros::Time::now().toSec();
    if (forward==true)
    {
      msg.angular.z= 0.0;
      msg.linear.x=0.5;
      begin= ros::Time::now();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
      msg.linear.x=0.0;
      forward = false;
    }
    if (turn==true)
    {ros::spinOnce();
      msg.angular.z= 0.785;
      msg.linear.x=0.0;
      begin= ros::Time::now();
      while ((ros::Time::now().toSec()-t) <= 2)
      {

        pub.publish(msg);
        ros::spinOnce();
      }
      msg.angular.z=0.0;
      turn = false;
    }

    pub.publish(msg);
    ros::spinOnce();
    rate.sleep();
  }
}

