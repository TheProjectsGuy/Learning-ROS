#!/usr/bin/env python
# Import files
import rospy
from intro_pkg1.srv import *

# Service server function
def equation(request):
    # Response object
    response = FloatIOResponse()
    # Relation between request and response
    response.output = 2 * (request.input) + 1
    rospy.loginfo("Request: {0}, response: {1}".format(request.input, response.output))
    # Return the response object
    return response

def main():
    # Initialize the node
    rospy.init_node("Equation_server", anonymous=True)
    # Setup the server
    rospy.Service("equation_service", FloatIO, equation)
    rospy.loginfo("FloatIO service activated. Equation: Y = 2 * X + 1, Y is output and X is input")
    # Spin the node
    rospy.spin()

# Main code that will be executed
if __name__ == "__main__":
    try:
        # Main function
        main()
    except rospy.ROSInterruptException:
        rospy.logfatal("Node crashed")