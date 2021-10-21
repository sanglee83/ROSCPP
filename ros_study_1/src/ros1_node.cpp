#include <iostream>
 
int main(int argc, char **argv) //c++ 의 기본 함수형태
{
    uint8_t cnt;
    std::cout << "~~~~ WELCOME TO ROS WORLD ~~~~~~" << std::endl; // Print 

    while(1)
    {
        cnt++;
        std::cout << "cnt:" << cnt <<std::endl; // Print 
    }

    return 0;

}