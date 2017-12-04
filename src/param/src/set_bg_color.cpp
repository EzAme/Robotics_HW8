// This program waits for a turtlesim to start up, and
// changes its background color.
#include <ros/ros.h>
#include <std_srvs/Empty.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "set_bg_color");
  ros::NodeHandle nh;

  // Wait until the clear service is available, which
  // indicates that turtlesim has started up, and has
  // set the background color parameters.
  ros::service::waitForService("clear");
  const std::string PARAM_NAME1 = "r";
  const std::string PARAM_NAME2 = "g";
  const std::string PARAM_NAME3 = "b";

  int red;
  int green;
  int blue;
  ros::param::get(PARAM_NAME1, red);
  ros::param::get(PARAM_NAME2, green);
  ros::param::get(PARAM_NAME3, blue);


  // Set the background color for turtlesim,
  // overriding the default blue color.
  ros::param::set("background_r", red);
  ros::param::set("background_g", green);
  ros::param::set("background_b", blue);

  // Get turtlesim to pick up the new parameter values.
  ros::ServiceClient clearClient
    = nh.serviceClient<std_srvs::Empty>("/clear");
  std_srvs::Empty srv;
  clearClient.call(srv);

}

