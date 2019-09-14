#! /usr/bin/env python3

import math

def is_prime(n):
    if n < 2:
        return False
    else:
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0:
                return False
        return True

num = int(input("Enter a positive integer: "))
print("{} {} a prime number".format(num, 
    'is' if is_prime(num) else 'is not'))
