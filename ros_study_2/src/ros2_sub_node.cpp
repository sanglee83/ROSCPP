#include "ros/ros.h"
#include "ros_study_2/Pos.h"

void callback(const ros_study_2::Pos::ConstPtr& Msg )
{
    Msg->x;
    Msg->y;
    ROS_INFO("X: [%f]", Msg->x);
    ROS_INFO("Y: [%f]", Msg->y);
}

int main (int argc, char **argv)
{
    ros::init(argc, argv, "subscriber_node");
    ros::NodeHandle nh;

    ros::Subscriber msgSub = nh.subscribe<ros_study_2::Pos>("sendMsg", 1, callback);
    // Subscriber 선언

    
    while(ros::ok())
    {

    }
   // ros::spin();
}
