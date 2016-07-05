'''Program created by Akul Umamageswaran.'''

'''NOTE:
This program finds the nth term of an arithmetic sequence.
It prompts for the first and second terms of the sequence.
It then prompts for n, which is the number of term you
are solving for (1st, 2nd, 3rd, etc.)
It does this using the arithmetic sequence formula:
t of n = a + (n - 1)d

The program will prompt you for integer values.
During those prompts, please ONLY ENTER integers.
Otherwise, the program WILL NOT WORK!

'''
term1 = int(input("Please enter the first term."))
term2 = int(input("Please enter the second term."))
n = int(input("What term do you want to find? Enter '1' for first, '2' for second, etc."))
d = term2 - term1
tOfN = term1 + d * (n - 1)
print "term", n, "is", tOfN
