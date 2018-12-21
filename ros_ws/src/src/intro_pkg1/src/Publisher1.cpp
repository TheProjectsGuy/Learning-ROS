// Include header files
#include "ros/ros.h"
#include "intro_pkg1/Equ.h"
#include "math.h"

int main(int argc, char **argv) {
    // Initialize the node
    ros::init(argc, argv, "Msg_Publisher");
    // Create a node handler
    ros::NodeHandle nodeHandler;
    // Publisher object. Topic name: /equation
    ros::Publisher publisherObject = nodeHandler.advertise<intro_pkg1::Equ>("equation", 2);
    // Rate controller. 2 times a second, 2 Hz
    ros::Rate rateController = ros::Rate(2);
    // Main loop
    while(ros::ok()) {
        // Message object
        intro_pkg1::Equ msg;
        msg.info.assign("Value of PI");
        msg.value = M_PI;
        // Publish the message
        publisherObject.publish(msg);
        // Delay for handling rate
        rateController.sleep();
    }
    return 0;
}
