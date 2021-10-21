#include "ros/ros.h"
#include "ros_study_2/EgoPos.h"

void callback(ros_study_2::EgoPos::ConstPtr& Msg )
{

}

int main (int argc, char **argv)
{
    ros::init(argc, argv, "subscriber_node");
    ros::NodeHandle nh;

    //ros::Subscriber msgSub = nh.subscribe<ros_study_2::EgoPos>("sendMsg", 1, callback);

}