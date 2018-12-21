#!/usr/bin/env python
import rospy
from sensor_msgs.msg import JointState
import math

def main():
    # Initialize the node
    rospy.init_node("Py_JointStates")
    # Publisher object
    publisherObject = rospy.Publisher("joint_states", JointState, queue_size=10)
    # Rate controller
    rateController = rospy.Rate(20)
    # Variables
    msg = JointState()
    msg.header.frame_id = ""
    msg.name = ["joint1"]       # Joint name (array assignment)
    angle = 0
    increment = True
    # Main loop
    while(not rospy.is_shutdown()):
        # Initialize the time of publishing
        msg.header.stamp = rospy.Time.now()
        # Joint angle values
        msg.position = [angle]
        # Publish message
        publisherObject.publish(msg)
        # Increase sequence
        msg.header.seq += 1
        # Change angle value
        if increment:
            angle += 90.0/20.0 * math.pi / 180.0
        else:
            angle -= 90.0/20.0 * math.pi / 180.0
        if angle > math.pi or angle < - math.pi:
            increment = not increment
        # Delay execution to match rate
        rateController.sleep()

if __name__ == "__main__":
    try:
        main()
    except rospy.ROSInternalException:
        rospy.logfatal("Node crashed due to an internal exception")
