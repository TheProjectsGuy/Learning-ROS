#include "ros/ros.h"
#include "stdlib.h"

int main(int argc, char **argv) {
    // Initialize ROS node
    ros::init(argc, argv, "DebuggerCheck");

    // Node handler
    ros::NodeHandle nodeHandler;

    // Perform cycle 2 times a second (2 Hz)
    ros::Rate rateHandler = ros::Rate(2);

    // Condition for the conditional debugger statements
    bool printCondition = true;

    while(ros::ok()) {
        // Clear screen
        system("clear");
        // Publish all kinds of messages
        // As a continuous chunk of data to be written
        ROS_DEBUG("This is a continuous debug message");
        ROS_INFO("This is a continuous info message");
        ROS_WARN("This is a continuous warning message");
        ROS_ERROR("This is a continuous error message");
        ROS_FATAL("This is a continuous fatal message");
        // As C++ stream
        ROS_DEBUG_STREAM("This is a " << "streamed " << "debug message");
        ROS_INFO_STREAM("This is a " << "streamed " << "info message");
        ROS_WARN_STREAM("This is a " << "streamed " << "warning message");
        ROS_ERROR_STREAM("This is a " << "streamed " << "error message");
        ROS_FATAL_STREAM("This is a " << "streamed " << "fatal message");
        // As a conditional statement
        ROS_DEBUG_COND(printCondition, "This is a conditional debug message");
        ROS_INFO_COND(printCondition, "This is a conditional info message");
        ROS_WARN_COND(printCondition, "This is a conditional warning message");
        ROS_ERROR_COND(printCondition, "This is a conditional error message");
        ROS_FATAL_COND(printCondition, "This is a conditional fatal message");
        // Cause a delay
        rateHandler.sleep();
    }

    return 0;
}