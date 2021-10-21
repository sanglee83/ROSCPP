#include "ros/ros.h"
#include "ros_study_2/EgoPos.h"

int main (int argc, char **argv)
{
    ros::init(argc, argv, "publisher_node");
    ros::NodeHandle nh;
    ros::NodeHandle nh1("/test");

    ros::Publisher msgPub =  nh.advertise<ros_study_2::EgoPos>("sendMsg", 1);
    ros_study_2::EgoPos Msg;

    while(0)
    {
        Msg.posx_ego = 10;
        Msg.posy_ego = 0;
        Msg.psi_ego  = 0;

        msgPub.publish(Msg);    
    }
    

}