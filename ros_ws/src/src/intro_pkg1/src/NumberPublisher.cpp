// Header file for ROS
#include "ros/ros.h"
// Header file for messages
#include "std_msgs/Float64.h"

int main(int argc, char **argv)
{
    // Initialize the node, name it NumberPublisher
    ros::init(argc, argv, "NumberPublisher");
    // Create a node handler
    ros::NodeHandle nodeHandler;
    // Create a publisher object. Topic name: "/floating_numbers", queue_size: 10
    ros::Publisher publishingObj = nodeHandler.advertise<std_msgs::Float64>("floating_numbers", 2);
    // Rate handler. 2 times a second = 2Hz
    ros::Rate rateHandler = ros::Rate(2);

    // Floating point numbers
    double number = 0.0;
    // While loop to publish messages
    while(ros::ok()) {
        // Message
        std_msgs::Float64 pubMsg;
        // Floating number
        if (number > 10) {
            number = 0.0;
        }
        pubMsg.data = number;  // Assign the number to the message to be published
        number += 0.5;
        // Publish the message
        publishingObj.publish(pubMsg);

        // Delay for satisfying the rate
        rateHandler.sleep();
    }

    return 0;
}
