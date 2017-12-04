cmake_minimum_required(VERSION 2.8.3)
project(param)

find_package(catkin REQUIRED roscpp geometry_msgs turtlesim)

catkin_package()
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(set_bg_color src/set_bg_color.cpp)
add_executable(pubvel_with_max src/pubvel_with_max.cpp)
add_executable(pubvel_spiral src/pubvel_spiral.cpp)

target_link_libraries(set_bg_color ${catkin_LIBRARIES})
target_link_libraries(pubvel_with_max ${catkin_LIBRARIES})

