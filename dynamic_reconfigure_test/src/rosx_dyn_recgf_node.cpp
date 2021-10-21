#include <ros/ros.h>

#include <dynamic_reconfigure/server.h>
#include <ros_study/rosx_paramConfig.h>

void callback(ros_study::rosx_paramConfig &config, uint32_t level) {
  ROS_INFO("Reconfigure Request: %d %f %s %s %d", 
            config.int_param, config.double_param, 
            config.str_param.c_str(), 
            config.bool_param?"True":"False", 
            config.size);
  int8_t a = 1;
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosx_paramConfig");

  dynamic_reconfigure::Server<ros_study::rosx_paramConfig> server;
  dynamic_reconfigure::Server<ros_study::rosx_paramConfig>::CallbackType f;

  f = boost::bind(&callback, _1, _2);
  server.setCallback(f);

  ROS_INFO("Spinning node");
  ros::spin();
  return 0;
}