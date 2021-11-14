
	#include <stdio.h>
#include <graphics.h>
#include <dos.h>
void floodFill4(int x, int y, int oldcolor, int newcolor)
{
	if (getpixel(x, y) == oldcolor)
	{
		putpixel(x, y, newcolor);
		floodFil14(x + 1, y, oldcolor, newcolor);
		floodFil14(x, y + 1, oldcolor, newcolor);
		floodFill4(x - 1, y, oldcolor, newcolor);
		floodFil14(x, y - 1, oldcolor, newcolor);
	}
}

void floodFill8(int x, int y, int oldcolor, int newcolor)
{
	if (getpixel(x, y) == oldcolor)
	{
		putpixel(x, y, newcolor);

		floodFill8(x + 1, y, oldcolor, newcolor);
		floodFill8(x, y + 1, oldcolor, newcolor);
		floodFill8(x - 1, y, oldcolor, newcolor);
		floodFill8(x, y - 1, oldcolor, newcolor);
		floodFill8(x - 1, y - 1, oldcolor, newcolor);
		floodFill8(x - 1, y + 1, oldcolor, newcolor);
		floodFill8(x + 1, y - 1, oldcolor, newcolor);
		floodFill8(x + 1, y + 1, oldcolor, newcolor);


	}
}

int main()
{
	int gm, gd = DETECT, r;
	int x, y;
	int choice;
	printf("Choose 4 or 8 method from flood fill");
	scanf("%d", &choice);

	switch (choice)
	{
	case 4:
	{
		printf(" Enter x and y positions for circle\n");
		scanf("%d %d", &x, &y);
		printf("Enter radius of circle\n");
		scanf("%d", &r);
		initgraph(&gd, &gm, "c:\\turboca\\bgi");
		circle(x,y,r);
		floodFill4(x, y, 0, 15);
		break;
	}
	case 8:
	{
		printf(" Enter x and y positions for circle\n");
		scanf("%d %d", &x, &y);
		printf("Enter radius of circieln");
		scanf("%d", &r);
		initgraph(&gd, &gm, "c:\\turboca\\bgi");
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