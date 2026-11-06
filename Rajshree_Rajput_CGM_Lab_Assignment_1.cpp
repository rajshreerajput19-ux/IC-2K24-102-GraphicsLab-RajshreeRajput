#include <graphics.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // 1. Draw a Straight Line
    line(100, 100, 300, 100);
    outtextxy(150, 75, "Straight Line");

    // 2. Draw a Circle
    circle(450, 150, 50);
    outtextxy(420, 220, "Circle");

    // 3. Draw a Rectangle
    rectangle(100, 300, 300, 420);
    outtextxy(170, 430, "Rectangle");

    // 4. Draw a Triangle
    line(450, 350, 550, 350);
    line(450, 350, 500, 250);
    line(500, 250, 550, 350);
    outtextxy(470, 370, "Triangle");

    getch();
    closegraph();

    return 0;
}