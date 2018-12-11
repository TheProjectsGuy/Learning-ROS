// Header files for ROS
#include "ros/ros.h"
// For service
#include "intro_pkg1/FloatIO.h"
// For atof
#include "stdlib.h"

int main(int argc, char **argv) {
    // Initialize the node
    ros::init(argc, argv, "FloatIO_ServiceClient");
    // Create a node handler
    ros::NodeHandle nodeHandler;
    // Create a Service Client
    ros::ServiceClient client = nodeHandler.serviceClient<intro_pkg1::FloatIO>("equation_service");
    // Service object
    intro_pkg1::FloatIO srv;
    // Assign value to request
    srv.request.input = atof(argv[1]);
    // Call the service
    if (client.call(srv)) {
        // srv.response now has value
        ROS_INFO("X = %f, Y = %f", srv.request.input, srv.response.output);
    } else {
        ROS_ERROR("Service call failed");
    }
    return 0;
}