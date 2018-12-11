#!/usr/bin/env python
# Import rospy
import rospy
# Main dynamic reconfiguration files
from dynamic_reconfigure.server import Server
# Configuration made in the devel folder
from intro_pkg1.cfg import SampleConfig
# Callback function
def callback(config, level):
    rospy.loginfo("Values: {0}, {1}, {2}, {3}, {4}".format(config.Integer_param, 
            config.Double_param, config.String_param, 
            "True" if config.Bool_param else "False", config.Size))
    return config
# Main code
if __name__ == "__main__":
    # Initialize the node
    rospy.init_node("python_configure", anonymous=True)
    # Server assignment
    srv = Server(SampleConfig, callback)
    # Spin the node
    rospy.spin()
