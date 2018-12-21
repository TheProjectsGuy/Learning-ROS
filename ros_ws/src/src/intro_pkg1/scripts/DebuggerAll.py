#!/usr/bin/env python
import rospy

if __name__ == "__main__":
    # Initialize the node
    rospy.init_node("Debugger_Python", anonymous=True)
    # Rate of 2 times a second (2 Hz)
    rateHandler = rospy.Rate(2)
    
    while (not rospy.is_shutdown()):
        # Print all kinds of debugger messages
        rospy.logdebug("This is a debug message")
        rospy.loginfo("This is an info message")
        rospy.logwarn("This is a warning message")
        rospy.logerr("This is an error message")
        rospy.logfatal("This is a fatal message")
        # Cause the delay to satisfy rate
        rateHandler.sleep()
