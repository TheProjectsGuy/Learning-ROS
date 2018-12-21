#!/usr/bin/env python
import rospy
from intro_pkg1.msg import Equ

# Callback function
def MsgReceived(message):
    # Print on screen
    rospy.loginfo("Info: \"{info}\" Value: \"{value}\"".format(info=message.info, value=message.value))

def main():
    # Initialize the node
    rospy.init_node('MSG_Subscriber', anonymous=True)
    # Subscriber
    rospy.Subscriber('equation', Equ, MsgReceived)
    # Spinoff
    rospy.spin()

if __name__ == "__main__":
    try:
        main()
    except rospy.ROSInterruptException:
        rospy.logfatal("Node crashed")
