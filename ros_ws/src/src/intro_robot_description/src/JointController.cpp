#include "ros/ros.h"
#include "math.h"
#include "ros/time.h"
#include "sensor_msgs/JointState.h"

int main(int argv, char **argc) {
    // Initialize node
    ros::init(argv, argc, "CPP_Joint_State_Controller");
    // Node handler
    ros::NodeHandle nodeHandler;
    // Publisher
    ros::Publisher publisherObject = nodeHandler.advertise<sensor_msgs::JointState>("joint_states", 10);
    // Rate controller 5 Hz
    ros::Rate rateController = ros::Rate(20);
    // Variables
    float angle = 0.0;              // Angle
    bool increment = true;
    sensor_msgs::JointState msg;    // Message to be published
    msg.header.frame_id = "";           // Empty frame ID
    msg.name.resize(1);                 // A 1 unit size vector
    msg.position.resize(1);             // A 1 unit size vector
    msg.name[0] = "joint1";
    // Main iterative code
    while(ros::ok()) {
        // Update header
        msg.header.stamp = ros::Time::now();    // Assign time
        msg.position[0] = angle;
        publisherObject.publish(msg);
        msg.header.seq ++;                      // Next sequence
        if (increment) {
            angle += 90.0/20.0 * M_PI / 180.0;
        } else {
            angle -= 90.0/20.0 * M_PI / 180.0;
        }
        if (angle > M_PI || angle < -M_PI) {
            increment = !increment;
        }
        // Control rate
        rateController.sleep();
    }
    // End code
    return 0;
}
