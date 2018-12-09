#!/usr/bin/env python
import rospy
from std_msgs.msg import Float64

# Function callback
def msgReceived(msg):
    # Parse the received message as Float 64 type
    message = Float64(msg)
    # Log that as INFO
    rospy.loginfo("Received: {0}".format(message.data))

def main():
    # Initialize the node
    rospy.init_node("NumberSubscriber", anonymous=True)
    # Setup the subscription
    subscriberObject = rospy.Subscriber("floating_numbers", Float64, msgReceived)
    # Wait for the messages forever
    rospy.spin()

# Code entrypoint
if __name__ == "__main__":
    try:
        main()
    except rospy.ROSInterruptException:
        rospy.logerr("An error has occurred")
