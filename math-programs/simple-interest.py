'''Program created by Akul Umamageswaran.'''

'''NOTE:
This program finds either the principal, rate, time, or
interest.
It solves for one of the above given the other three values.
It does this using the simple interest formula:
i = prt

The program will prompt you for integer values.
During those prompts, please ONLY ENTER integers.
Otherwise, the program WILL NOT WORK!

'''
choice = input("What are you solving for? Enter 'p' for principal, 'r' for rate, 't' for time, or 'i' for interest")
if choice == "p":
    r = int(input("What is the rate? Type an integer."))
    t = int(input("What is the time? Type an integer."))
    i = int(input("What is the interest? Type an integer."))
    p = i / (r * t)
    print "the principal is", p, "dollars"
elif choice == "r":
    p = int(input("What is the principal? Type an integer."))
    t = int(input("What is the time? Type an integer."))
    i = int(input("What is the interest? Type an integer."))
    r = i / (p * t)
    print "the rate is", r
elif choice == "t":
    p = int(input("What is the principal? Type an integer."))
    r = int(input("What is the rate? Type an integer."))
    i = int(input("What is the interest? Type an integer."))
    t = i / (p * r)
    print "the time is", t
else:
    p = int(input("What is the principal? Type an integer."))
    r = int(input("What is the rate? Type an integer."))
    t = int(input("What is the time? Type an integer."))
    i = p * r * t
    print "the interest is", i, "dollars"
