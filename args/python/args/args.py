#! /usr/bin/env python3

import sys

print("Number of arguments: {}".format(len(sys.argv[1:])))
for i, arg in enumerate(sys.argv[1:], start=1):
    print("{:2}. {}".format(i, arg))
