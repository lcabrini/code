#! /usr/bin/env python3

import math

for i in range(-1, 11):
    try:
        f = math.factorial(i)
    except ValueError:
        f = "Not defined"
    print("{:2} {:>15}".format(i, f))
