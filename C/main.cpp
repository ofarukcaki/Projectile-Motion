#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>

#define PI 3.14159265

int main()
{
    double ret, val,V,aci,cosA,sinA;
    float x,y,t,g=10,Tucus,Vx,Vy;
    int z;

    V=70;
    aci=70;

    val = PI / 180.0;
    cosA = cos( aci*val );
    sinA = sin( aci*val );




    initwindow(1200,500);

    int Xo;
    int Yo = 480;

    Vx = V*cosA;
    Vy = V*sinA;

LOOP:

    Tucus = (2*Vy)/g;

    for(t=0 ; t<=Tucus ; t+=.1) // Tucus = (2*V)/g
    {
        x = Xo + Vx*t;
        y = Yo + -(Vy*t) + (g*t*t)/2;

        circle(x,y,15);
        floodfill(x,y,WHITE);

        delay(10);
        cleardevice();

    }
    Xo = Xo + Tucus*Vx;
    Vy *=0.8;



    goto LOOP;
    getch();
    closegraph();

    return 0;
}
