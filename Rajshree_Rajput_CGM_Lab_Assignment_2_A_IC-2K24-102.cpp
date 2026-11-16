#include <graphics.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    float x1 = 100, y1 = 100;
    float x2 = 400, y2 = 300;

    // Graphics mode initialize 
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // DDA Algorithm calculations
    float dx = x2 - x1;
    float dy = y2 - y1;
    
    float steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    
    float x_inc = dx / steps;
    float y_inc = dy / steps;

    float x = x1;
    float y = y1;

    // Pixel-by-pixel line plot 
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += x_inc;
        y += y_inc;
    }

    
    getch();
    
    // close Graphics mode 
    closegraph();
    
    return 0;
}
