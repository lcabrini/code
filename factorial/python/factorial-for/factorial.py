#! /usr/bin/env python3

def fact(n):
    if n < 0:
        raise ValueError
    elif n in [0, 1]:
        return 1
    else:
        f = 1
        for i in range(2, n+1):
            f *= i
        return f

for i in range(-1, 11):
    try:
        f = fact(i)
    except ValueError:
        f = "Not defined"
    print("{:2} {:>15}".format(i, f))
