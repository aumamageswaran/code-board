'''Program created by Akul Umamageswaran.'''

'''NOTE:
This program finds side a, b, or c in a right triangle.
It solves for one of the values, given the other two.
It does this using the Pythagorean theorem.

The program will prompt you for integer values.
During those prompts, please ONLY ENTER integers.
Otherwise, the program WILL NOT WORK!

'''
import math
choice = input("Which variable are you solving for? Please specify either 'a', 'b', or 'c'.")

if choice == "a":
    b = int(input("What is b?"))
    c = int(input("What is c?"))
    bsquared = b*b
    csquared = c*c
    asquared = csquared - bsquared
    a = math.sqrt(asquared)
    print "a is equal to", int(a)
elif choice == "b":
    a = int(input("What is a?"))
    c = int(input("What is c?"))
    asquared = a*a
    csquared = c*c
    bsquared = csquared - asquared
    b = math.sqrt(bsquared)
    print "b is equal to", int(b)
else:
    a = int(input("What is a?"))
    b = int(input("What is b?"))
    asquared = a*a
    bsquared = b*b
    csquared = asquared + bsquared
    c = math.sqrt(csquared)
    print "c is equal to", int(c)
