#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
void main()
{
    int x1, y1, x2, y2, dx, dy, steps, i;
    float x, y, xinc, yinc;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    printf("TEJAS DEVRUKHKAR \nROLL N0.15-A\n");
    printf("Enter the starting coordinates");
    scanf("%d%d", &x1, &y1);
    printf("Enter the ending coordinates");
    scanf("%d%d", &x2, &y2);
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    xinc = dx / (float)steps;
    yinc = dy / (float)steps;
    x = x1;
    y = y1;
    putpixel(x, y, 10);
    for (i = 0; i < steps; i++)
    {
        if (i % 8)
        {
            putpixel(x, y, 10);
        }
        else
        {
            putpixel(x, y, 0);
        }
        x = x + xinc;
        y = y + yinc;
        delay(10);
    }
    getch();
    closegraph();
}