#! /usr/bin/env python3

def digital_root(n, a=1):
    r = sum(int(digit) for digit in str(n))
    if r < 10:
        return r, a
    else:
        return digital_root(r, a+1)

def readint(prompt):
    while True:
        s = input("{}: ".format(prompt))
        try:
            return int(s)
        except ValueError:
            print("'{}' is not a valid integer. Try again.".format(s))

num = readint("Enter an integer")
root, persistence = digital_root(num)
print("The digital root of {} is {}".format(num, root))
print("The additive persitence of {} is {}".format(num, persistence))
