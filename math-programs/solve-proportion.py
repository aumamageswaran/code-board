'''Program created by Akul Umamageswaran.'''

'''NOTE:
This program solves for the missing value in a proportion.
It solves for either x1, x2, y1, or y2, given the other 3.
The following layout is used.

x1 / x2 = y1 / y2

The program will prompt you for integer values.
During those prompts, please ONLY ENTER integers.
Otherwise, the program WILL NOT WORK!

'''
choice = input("Which variable are you solving for? Please specify either 'X1', 'X2', 'Y1', or 'Y2'.")

if choice == "X1":
    y1 = int(input("What is y1?"))
    x2 = int(input("What is x2?"))
    y2 = int(input("What is y2?"))
    x1 = (y1 * x2) / y2
    print "x1 is equal to", x1
elif choice == "X2":
    x1 = int(input("What is x1?"))
    y1 = int(input("What is y1?"))
    y2 = int(input("What is y2?"))
    x2 = (x1 * y2) / y1
    print "x2 is equal to", x2
elif choice == "Y1":
    x1 = int(input("What is x1?"))
    x2 = int(input("What is x2?"))
    y2 = int(input("What is y2?"))
    y1 = (x1 * y2) / x2
    print "y1 is equal to", y1
else:
    x1 = int(input("What is x1?"))
    y1 = int(input("What is y1?"))
    x2 = int(input("What is x2?"))
    y2 = (y1 * x2) / x1
    print "y2 is equal to", y2
