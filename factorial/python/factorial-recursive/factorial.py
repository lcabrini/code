#! /usr/bin/env python3

def fact(n):
    if n < 0:
        raise ValueError
    elif n in [0, 1]:
        return 1
    else:
        return n * fact(n-1)

for i in range(-1, 11):
    try:
        f = fact(i)
    except ValueError:
        f = "Not defined"
    print("{:2} {:>15}".format(i, f))
