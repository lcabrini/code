#! /usr/bin/env python3

def readint(prompt):
    while True:
        s = input("{}: ".format(prompt))
        try:
            return int(s)
        except ValueError:
            print("Cannot convert '{}' into an int. Try again.".format(s))

n = readint("Enter an integer")
print("Thank you. I got: {}".format(n))
