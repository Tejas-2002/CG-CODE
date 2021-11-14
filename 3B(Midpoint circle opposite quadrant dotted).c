#include<graphics.h>
#include<stdio.h>
void pixel(int xc,int yc,int x,int y);
int main()
{
int gd,gm,xc,yc,r,x,y,p;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("Enter center of circle :");
scanf("%d%d",&xc,&yc);
printf("Enter radius of circle :");
scanf("%d",&r);
x=0;
y=r;
p=1-r;
pixel(xc,yc,x,y);
while(x<y)
{
if(p<0)
{
x++;
p=p+2*x+1;
}
else
{
x++;
y--;
p=p+2*(x-y)+1;
}
pixel(xc,yc,x,y);
}
getch();
closegraph();
getch();
return 0;
}
void pixel(int xc,int yc,int x,int y)
{
int i =0;
for (i=0; i<=x; i++){
	if (i%2==1){
		putpixel(xc+x,yc+y,0);
		putpixel(xc+y,yc+x,0);
		putpixel(xc-y,yc-x,0);
		putpixel(xc-x,yc-y,0);
	}
	else{
		putpixel(xc+x,yc+y,GREEN);
		putpixel(xc+y,yc+x,GREEN);
		putpixel(xc-y,yc-x,GREEN);
		putpixel(xc-x,yc-y,GREEN);		
	}
}
putpixel(xc+x,yc-y,GREEN);
putpixel(xc-x,yc+y,GREEN);
putpixel(xc+y,yc-x,GREEN);
putpixel(xc-y,yc+x,GREEN);
}