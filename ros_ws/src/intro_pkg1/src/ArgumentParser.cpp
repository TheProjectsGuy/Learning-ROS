// Include the main header file
#include "ros/ros.h"

int main(int argc, char **argv) {
    // Initialize the node
    ros::init(argc, argv, "CPP_ArgumentParser");
    // Print information about the arguments passed
    std::cout<<argc<<" arguments"<<std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout<<"Argument "<<i<<": "<<argv[i]<<std::endl;
    }
    // End program
    return 0;
}