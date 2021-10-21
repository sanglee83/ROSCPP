cmake_minimum_required(VERSION 3.0.2)
project(ros_study_1_ext)

find_package(catkin REQUIRED 
  COMPONENTS
  roscpp
)



################################################
## Declare ROS messages, services and actions ##
################################################


################################################
## Declare ROS dynamic reconfigure parameters ##
################################################

###################################
## catkin specific configuration ##
###################################
catkin_package(
)

###########
## Build ##
###########

include_directories(
 include
 ${catkin_INCLUDE_DIRS}
)


add_executable(ros1_ext_study src/ros1_ext_node.cpp)
target_link_libraries(ros1_ext_study ${catkin_LIBRARIES})


#############
## Install ##
#############


#############
## Testing ##
#############

