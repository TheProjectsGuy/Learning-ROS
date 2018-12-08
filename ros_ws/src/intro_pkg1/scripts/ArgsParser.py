#!/usr/bin/env python
# Import files
import rospy
import sys

# Only if the script is directly run
if __name__ == "__main__":
    # Initialize node
    rospy.init_node('ArgumentParser_Python', anonymous=True)
    # Print all the arguments used
    print('{num} argument(s)'.format(num=len(sys.argv)))
    for num, i in enumerate(sys.argv, start=1):
        print('Argument {0}: {1}'.format(num, i))
