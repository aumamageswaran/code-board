'''Program created by Akul Umamageswaran.'''
'''
This program creates a stopwatch and utilizes it in a game.
The player starts and stops the stopwatch, trying to stop it at an exact second (i.e. 0:06:0).
If the player stops the stopwatch at an exact second, he/she gets a point. The program will record the total number of attempts (stops).
'''

import simplegui

# define global variables
t = 0
time = str(t)
a = 0
b = 0
c = 0
d = 0
started = False
wins = 0
num_attempts = 0

# define helper function format that converts time
# in tenths of seconds into formatted string A:BC.D
def format(t):
    """converts tenths of seconds to A:BC.D"""
    global a, b, c, d
    d = t % 10 
    c = int(t / 10)
    b = c % 60
    a = int(c / 60)
     
    if b < 10:
        game_string = "0" + str(b)  
    else:
        game_string = str(b)
    return str(a) + ":" + game_string + "." + str(d)
    
# define event handlers for buttons; "Start", "Stop", "Reset"
def start():
    global started
    timer.start()
    started = True

def stop():
    global started, wins, num_attempts, d
    timer.stop()
    # increment the no. of wins and attempts as stop is pressed
    if started:
        if d == 0:
            wins += 1
        started = False
        num_attempts += 1

def reset():
    global t, started, wins, num_attempts
    timer.stop()
    started = False
    t = 0
    wins = 0
    num_attempts = 0

# define event handler for timer with 0.1 sec interval
def increment():
    global t
    global time
    t += 1
    time = str(t)
    #print t

# define draw handler
def draw(canvas):
    global t, time, wins, num_attempts
    canvas.draw_text(format(t), (90,110), 50, "White")
    canvas.draw_text("wins/attemps: " + str(wins) + "/" + str(num_attempts), (150,20), 20, "Green")
    
# create frame
frame = simplegui.create_frame("Stop Watch", 300, 200)

# register event handlers
frame.set_draw_handler(draw)
frame.add_button("Start", start, 200)
frame.add_button("Stop", stop, 200)
frame.add_button("Reset", reset, 200)

# start frame
timer = simplegui.create_timer(100, increment)
frame.start()
timer.stop()
