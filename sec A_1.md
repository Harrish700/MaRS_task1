Question 1 — Blinking LED with different time interval

Components used: 3 LEDS , Aurdino UNO , bread board ,jumper wires, 3 x 200 ohm resistors

Description and Logic behind the code : Here I have used 3 LEDS with resisitors . to make the leds to blink in the seperate intervals , I used millis fucntion , which
stores the runtime . To get the effective runtime I used the previous_time variable which stores the time value where the last state of the LED was changed .

Difficluties faced : Initially LEDS werent bliking simulataneously , i corrected the if condition and then fixed it .
