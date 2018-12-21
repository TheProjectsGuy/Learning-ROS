#!/usr/bin/env python
import rospy
from intro_pkg1.msg import Equ
import math

def main():
    # Initialize the node
    rospy.init_node("MSG_Publisher", anonymous=True)
    # Publisher
    publisherObject = rospy.Publisher("equation", Equ, queue_size=2)
    # Rate handler. 2 Hz
    rateHandler = rospy.Rate(2)
    # Loop
    while(not rospy.is_shutdown()):
        # Message
        msg = Equ()
        msg.info = "PI"
        msg.value = math.pi
        # publish message
        publisherObject.publish(msg)
        # Delay section
        rateHandler.sleep()

if __name__ == "__main__":
    try:
        main()
    except rospy.ROSInterruptException:
        rospy.logfatal("Node crashed")
