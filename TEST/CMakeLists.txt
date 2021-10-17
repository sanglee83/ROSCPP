cmake_minimum_required(VERSION 3.0.2)
project(ROS_STUDY)

find_package(catkin REQUIRED COMPONENTS roscpp)



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


add_executable(tmp src/ros1_node.cpp)
#target_link_libraries(tmp ${catkin_LIBRARIES}) # Libraries Link: 


#############
## Install ##
#############


#############
## Testing ##
#############

