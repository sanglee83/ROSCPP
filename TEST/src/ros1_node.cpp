//#include "ros/ros.h"  //ROS 기본 헤더파일
#include <iostream>
 
int main(int argc, char **argv) //c++ 의 기본 함수형태
{
    //ros::init(argc, argv, "test_node"); //노드명 초기화
    // ros::NodeHandle nh; //ROS시스템과 통신을 위한 노드핸들 선언
 
 
    std::cout << "~~~~ WELCOME TO ROS WORLD ~~~~~~" << std::endl; // Print 

    while(1)
    {}

    //ros::spin();
    return 0;

}