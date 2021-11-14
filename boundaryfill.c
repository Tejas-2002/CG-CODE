#include <stdio.h>
#include <graphics.h>
#include <dos.h>

void boundaryfill_four(int x, int y, int fc, int bc)
{
    if (getpixel(x, y) ! = bc && getpixel(x, y) != fc)
    {
        putpixel(x, y, fo);
        boundaryfill_four(x * 1, y, fc, be);
        boundaryfill_four(x, y + 1, fc, bc);
        boundaryfill_four(x - 1, y, fc, bc);
        boundaryfill_four(xy - 1 fc.bc);
        delay(10);
    }
}

void boundaryfill8(int x, int y, int fc, int bc)
{
    if (getpixel(x, y) ! = bc && getpixel(x, y) != fc)
    {
        putpixel(x,y,fc,bc);
        boundaryfill8(x+1,y,fc,bc);
        boundaryfill8(x,y+1,fc,bc);
        boundaryfill8(x,y,fc,bc);
        boundaryfill8(x,y-1,fc,bc);
        boundaryfill8(x-1,y-1,fc,bc);
        boundaryfill8(x-1,y+1,fc,bc);
        boundaryfill8(x+1,y-1,fc,bc);
        boundaryfill8(x+1,y+1,fc,bc);
        delay(10);
    }
}

int main()
{
    int gm, gd = DETECT, r;
    int x, y;
    int choice;

    printf("Choose 4 or 8 method from boundaryfill");
	scanf("%d", &choice);

	switch (choice)
	{
	    case 4:{
	        printf(" Enter x and y positions for circle\n");
	        scanf("%d %d", &x, &y);
	        printf("Enter radius of circieln");
	        scanf("3d", &r);
	        initeraph(&gd, &gm, "c:\\turboca\\bgi");
	        circle(x, y, r) i
	        floodFill4(x, y, 0, 15);
	        break;
	    }
	    case 8:{
	        printf(" Enter x and y positions for circle\n");
	        scanf("%d %d", &x, &y);
	        printf("Enter radius of circieln");
	        scanf("%d", &r);
	        initeraph(&gd, &gm, "c:\\turboca\\bgi");
	        circle(x, y, r);
	        floodFill4(x, y, 0, 15);
	        break;
	    }
	    default:
	    	printf("Not correct");
	}
	getch();
	closegraph();
	return 0;
}