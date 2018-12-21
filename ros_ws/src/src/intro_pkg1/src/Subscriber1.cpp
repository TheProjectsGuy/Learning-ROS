// Header files
#include "ros/ros.h"
#include "intro_pkg1/Equ.h"

// Callback function
void msg_received(const intro_pkg1::Equ::ConstPtr &msg) {
    ROS_INFO("Received, info: %s, value: %f", msg->info.c_str(), msg->value);
}

// Main function
int main(int argc, char **argv) {
    // Initialize node
    ros::init(argc, argv, "MSG_Subscriber");
    // Node Handler
    ros::NodeHandle nodeHandler;
    // Subscriber
    ros::Subscriber subscriberObject = nodeHandler.subscribe<intro_pkg1::Equ>("equation", 2, msg_received);
    // Spinoff
    ros::spin();
    return 0;
}