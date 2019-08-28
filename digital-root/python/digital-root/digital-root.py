#! /usr/bin/env python3

def digital_root(n):
    r = sum(int(digit) for digit in str(n))
    if r < 10:
        return r
    else:
        return digital_root(r)

def readint(prompt):
    while True:
        s = input("{}: ".format(prompt))
        try:
            return int(s)
        except ValueError:
            print("'{}' is not a valid integer. Try again.".format(s))

num = readint("Enter an integer")
print("The digital root of {} is {}".format(num, digital_root(num)))
