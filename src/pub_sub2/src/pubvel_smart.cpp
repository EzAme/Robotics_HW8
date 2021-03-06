
// This program publishes randomly-generated velocity
// messages for turtlesim.
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>  // For geometry_msgs::Twist
#include <turtlesim/Pose.h>
#include <stdlib.h> // For rand() and RAND_MAX
#include <time.h>
double t;

turtlesim::Pose turtle_pose;
int maxT = 9;
int minT = 2;
double pi = 3.14;

void positionT(const turtlesim::Pose& k){
  //  ROS_INFO_STREAM(std::setprecision(2) << std::fixed
  //    << "position=(" <<  k.x << "," << k.y << ")"
  //    << " direction=" << k.theta);
  turtle_pose = k;
}

int main(int argc, char **argv) {
  // Initialize the ROS system and become a node.
  ros::init(argc, argv, "smart_velocity");
  ros::NodeHandle nh;

  // Create a publisher object.

  // Seed the random number generator.
  srand(time(0));
  //ros::Subscriber sub = nh.subscribe("turtle1/pose", 1000,
  //    &positionT);
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
        "turtle1/cmd_vel", 1000); //links publisher to the node
  // Loop at 2Hz until the node is shut down.
  ros::Rate rate(2);

  // subscribe to message
  ros::Subscriber sub = nh.subscribe("turtle1/pose", 1000, &positionT);

  while(ros::ok()) {

    // Create and fill in the message.  The other four
    // fields, which are ignored by turtlesim, default to 0.
    geometry_msgs::Twist msg; //Object msgs

    msg.linear.x = 2*double(rand())/double(RAND_MAX);
    msg.angular.z = 4*double(rand())/double(RAND_MAX) - 1;
    // Publish the message.

    //ROS_INFO_STREAM(positionT());

    ROS_INFO_STREAM(std::setprecision(2) << std::fixed
                    << "position=(" <<  turtle_pose.x << "," << turtle_pose.y << ")"
                    << " direction=" << turtle_pose.theta);


    ros::spinOnce();
    if (turtle_pose.x >=maxT) {
      msg.angular.z= 1.5;
      msg.linear.x=0.0;
      t =ros::Time::now().toSec();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
      msg.angular.z= 0;
      msg.linear.x=0.5;
      t =ros::Time::now().toSec();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
    }
    if (turtle_pose.x <=minT) {
      msg.angular.z= 1.50;
      msg.linear.x=0.0;
      t =ros::Time::now().toSec();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
      msg.angular.z= 0;
      msg.linear.x=0.5;
      t =ros::Time::now().toSec();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
    }

    if (turtle_pose.y >=maxT) {
      msg.angular.z= 1.50;
      msg.linear.x=0.0;
      t =ros::Time::now().toSec();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
      msg.angular.z= 0;
      msg.linear.x=0.5;
      t =ros::Time::now().toSec();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
    }
    if (turtle_pose.y <=minT) {
      msg.angular.z= 1.5;
      msg.linear.x=0.0;
      t =ros::Time::now().toSec();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
      msg.angular.z= 0;
      msg.linear.x=0.5;
      t =ros::Time::now().toSec();
      while ((ros::Time::now().toSec()-t) <= 2)
      {
        pub.publish(msg);
        ros::spinOnce();
      }
    }

    pub.publish(msg);

    rate.sleep();
  }
}
