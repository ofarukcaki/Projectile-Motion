import turtle
import math

PI = 3.14159265
V = 70
aci = 70
g = 10

Vx = V*math.cos(math.radians(aci)) # Vx hızı
Vy = V*math.sin(math.radians(aci)) # Vy hızı
#print("Hello world ",  math.cos(math.radians(45)))  # aci*PI/180

Xo = 0
Yo = 0

#print("Tucus: ", Tucus)
turtle.setup(width=1250,height=600)
turtle.setworldcoordinates(0, 0, 1250, 600)

while Xo<1250:
    Tucus = (2 * Vy) / g
    t =0
    while t<=Tucus:
        x = Xo + Vx*t
        y = (Vy*t) - ((g*t**2)/2)

        turtle.shape("circle")
        turtle.shapesize(1)
        turtle.goto(x,y)

        t=t+0.5
    Xo = Xo + Tucus*Vx
    Vy = Vy*0.8
turtle.done()
