// Include header files
#include "ros/ros.h"
// The service header file
#include "intro_pkg1/FloatIO.h"

// Definition function
bool equation(intro_pkg1::FloatIO::Request &req, intro_pkg1::FloatIO::Response &res) {
    // Relation between output and input
    res.output = 2 * (req.input) + 1;
    ROS_INFO("Request: [%f], Response: [%f]", req.input, res.output);
    return true;
}

int main(int argc, char **argv)
{
    // Initialize the Node, name is "Server_FloatIO"
    ros::init(argc, argv, "Server_FloatIO");
    // Node Handler
    ros::NodeHandle nodeHandler;
    // Service server
    ros::ServiceServer serviceHandler = nodeHandler.advertiseService("equation_service", equation);
    ROS_INFO("Service setup complete. Equation is Y = 2 * X + 1, Y is output and X is input.");
    // Go into listening mode, spin the node
    ros::spin();
    return 0;
}
