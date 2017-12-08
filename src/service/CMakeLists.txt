cmake_minimum_required(VERSION 2.8.3)
project(service)

find_package(catkin REQUIRED roscpp geometry_msgs turtlesim)

catkin_package()
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(spawn_turtle src/spawn_turtle.cpp)
add_executable(pubvel_toggle src/pubvel_toggle.cpp)
add_executable(pubvel_discrete_motion src/pubvel_discrete_motion.cpp)

target_link_libraries(spawn_turtle ${catkin_LIBRARIES})
target_link_libraries(pubvel_toggle ${catkin_LIBRARIES})
target_link_libraries(pubvel_discrete_motion ${catkin_LIBRARIES})

