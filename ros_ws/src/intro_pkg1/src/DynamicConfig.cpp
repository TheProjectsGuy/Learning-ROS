// Header files
#include "ros/ros.h"
// Dynamic reconfigure server file
#include "dynamic_reconfigure/server.h"
// Configuration file
#include "intro_pkg1/SampleConfig.h"

void callback_function(intro_pkg1::SampleConfig &conf, uint32_t level) {
    // Accessing parameters
    ROS_INFO("Reconfiguration results: %i %f %s %s %i", 
             conf.Integer_param, 
             conf.Double_param, 
             conf.String_param.c_str(), 
             conf.Bool_param ? "True" : "False", 
             conf.Size);
}

int main(int argc, char **argv) {
    //Initialize the node
    ros::init(argc, argv, "Dynamic_CPP_Node");
    // Setup the dynamic configuration server
    dynamic_reconfigure::Server<intro_pkg1::SampleConfig> server;
    // Dynamic configuration function callback
    dynamic_reconfigure::Server<intro_pkg1::SampleConfig>::CallbackType fc;
    // Bind the function callback with two placeholders (two arguments)
    fc = boost::bind(&callback_function, _1, _2);
    // Set the callback for the server
    server.setCallback(fc);
    // Spin the node
    ROS_INFO("Spinning the node");
    ros::spin();
    return 0;
}