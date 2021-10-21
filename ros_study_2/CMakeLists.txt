cmake_minimum_required(VERSION 3.0.2)
project(ros_study_2)

find_package(catkin REQUIRED COMPONENTS
  rospy
  roscpp
  message_generation
  
)



################################################
## Declare ROS messages, services and actions ##
################################################
add_message_files(
  FILES
  EgoPos.msg
)

generate_messages(

)

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


add_executable(ros2_pub_study src/ros2_pub_node.cpp)
target_link_libraries(ros2_pub_study ${catkin_LIBRARIES})

add_executable(ros2_sub_study src/ros2_sub_node.cpp)
target_link_libraries(ros2_sub_study ${catkin_LIBRARIES})


#############
## Install ##
#############


#############
## Testing ##
#############

