#!/usr/bin/env python
# Import libraries
import rospy
# Service files
from intro_pkg1.srv import *
# System files
import sys

def main():
    # Initialize the node
    rospy.init_node("FloatIO_ServiceClient", anonymous=True)
    # Initialize Service Client
    serviceClient = rospy.ServiceProxy("equation_service", FloatIO)
    # Call the service and then receive response
    response = serviceClient(float(sys.argv[1]))
    rospy.loginfo("X = {0}, Y = {1}".format(float(sys.argv[1]), response))

if __name__ == "__main__":
    try:
        main()
    except rospy.ROSInterruptException:
        rospy.logfatal("Node crashed")
