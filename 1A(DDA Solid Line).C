#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void main()
 {
     int x1,y1,x2,y2,dx,dy,steps,i;
     float x,y,xinc,yinc;
     int gd=DETECT,gm;
     
     initgraph(&gd,&gm,"C:\\turboc3\\bgi");
     printf("enter the starting cordinates: ");
     scanf("%d%d",&x1,&y1);
     printf("enter the ending cordinates: ");
     scanf("%d%d",&x2,&y2);

     dx=x2-x1;
     dy=y2-y1;

     if(abs(dx)>abs(dy))
        steps=abs(dx);
     else
        steps=abs(dy);

     xinc=dx/(float)steps;
     yinc=dy/(float)steps;

     x=x1;
     y=y1;

     putpixel(x,y,10);
     
     for(i=0;i<steps;i++)
       {
           putpixel(x,y,10);
           x=x+xinc;
           y=y+yinc;
           delay(10);
       }
    getch();
    closegraph();
 }