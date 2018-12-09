// Include the ROS header file
#include "ros/ros.h"
// Message data type
#include "std_msgs/Float64.h"

// Caller function  
void receivedMessage(const std_msgs::Float64::ConstPtr &msg) {
    ROS_INFO("Number received: %f", msg->data);
}

int main(int argc, char **argv) {
    // Initialize the ROS node
    ros::init(argc, argv, "NumberSubscriber");
    // Node Handler
    ros::NodeHandle nodeHandler;
    // Subscribe to the topic: "floating_numbers"
    ros::Subscriber sub = nodeHandler.subscribe<std_msgs::Float64>("floating_numbers", 2, receivedMessage);
    // Spin node
    ros::spin();
    return 0;
}