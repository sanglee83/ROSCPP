#include "ros/ros.h"
#include "ros_study_2/Pos.h"

int main (int argc, char **argv)
{
    ros::init(argc, argv, "publisher_node");
    ros::NodeHandle nh;
    ros::NodeHandle nh1("/test");

    ros::Publisher msgPub =  nh.advertise<ros_study_2::Pos>("sendMsg", 1);
    //[node 인스턴스].advertise<[패키지명]::[msg 파일 이름]>("[Topic 이름]", 큐 사이즈);

    ros_study_2::Pos Msg; // 구조체 변수 선언

    //while(1)
    while(ros::ok()) // Code가 끝나지 않도록 While문 구성
    {
    	// Msg의 변수에 값 할당
        Msg.x = 10; 
        Msg.y = 1;

        msgPub.publish(Msg); // msgPub 인스턴스의 Publish 메소드를 이용하여 Message Publish

        ROS_INFO("Publish X: [%f]", Msg.x);
        ROS_INFO("Publish Y: [%f]", Msg.y);
    }
}