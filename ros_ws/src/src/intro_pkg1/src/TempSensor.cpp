#include "ros/ros.h"
#include "std_msgs/Header.h"
#include "sensor_msgs/Temperature.h"

int main(int argc, char **argv) {
    // Initialize the ROS node
    ros::init(argc, argv, "TemperatureSensor", ros::init_options::AnonymousName);
    // Node handler
    ros::NodeHandle nodeHandler;
    // Publisher object
    ros::Publisher publisherObject = nodeHandler.advertise<sensor_msgs::Temperature>("temp_readings", 5);
    // Rate handler (5 Hz)
    ros::Rate rateHandler = ros::Rate(5);
    // Buffer variables
    float tempValue = 30.0;
    bool increment = true;
    // Publishing message
    sensor_msgs::Temperature msg;
    // Default properties
    msg.header.frame_id = "source";
    msg.variance = 0.05;
    while(ros::ok()) {
        // Assign it time
        msg.header.stamp = ros::Time::now();
        // Temperature value
        msg.temperature = tempValue;
        ROS_DEBUG("Temperature value : %f", tempValue);
        // Modify the temperature value
        tempValue += (increment) ? 0.1 : -0.1;
        if (tempValue >= 50 || tempValue <= 20) {
            increment = !increment;
        }
        // Publish the message
        publisherObject.publish(msg);
        // Increase sequence number
        msg.header.seq++;
        // Sleep for the rate satisfaction
        rateHandler.sleep();
    }
    return 0;
}