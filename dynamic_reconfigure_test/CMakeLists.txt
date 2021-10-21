cmake_minimum_required(VERSION 3.0.2)
project(dynamic_reconfigure_test)

find_package(catkin REQUIRED COMPONENTS
  dynamic_reconfigure
  roscpp
  rospy
)



################################################
## Declare ROS messages, services and actions ##
################################################


################################################
## Declare ROS dynamic reconfigure parameters ##
################################################
generate_dynamic_reconfigure_options(
    cfg/rosx_dyn_recfg.cfg
)

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

#add_executable(rosx_dyn_recgf_study src/rosx_dyn_recgf_node.cpp)
#target_link_libraries(rosx_dyn_recgf_study ${catkin_LIBRARIES})
#add_dependencies(rosx_dyn_recgf_study ${PROJECT_NAME}_gencfg)

#############
## Install ##
#############


#############
## Testing ##
#############

