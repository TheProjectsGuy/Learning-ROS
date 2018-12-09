#!/usr/bin/env python
import rospy
# Message class
from std_msgs.msg import Float64

# Main function
def main():
    # Initialize node
    rospy.init_node('NumberPublisher', anonymous= True)
    # Publisher object
    publishingObj = rospy.Publisher('floating_numbers', Float64, queue_size=10)
    # Rate controller. 2 time a second, 2 Hz
    rateHandler = rospy.Rate(2)
    # Variable that we'll publish
    a = 0.0
    # Main loop while ROS is running
    while(not rospy.is_shutdown()):
        # Make a message
        msg = Float64()
        msg.data = a
        # Update the variable that we'll send
        # Could also do: a = 0 if a > 10 else a + 0.5
        a += 0.5
        if a > 10.0:
            a = 0.0
        # Publish the message
        publishingObj.publish(msg)
        # Hold execution using the rate handler
        rateHandler.sleep()


# If node run directly
if __name__ == "__main__":
    # Main try ... except ... case
    try:
        main()
    except rospy.ROSInterruptException:
        rospy.logfatal("Node interrupted from operating, terminating operations")
