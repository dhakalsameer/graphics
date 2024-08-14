#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main(){
	float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4;
	int gd = DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	printf("Enter the starting point coordinate:");
	scanf("%f %f",&x1,&y1);
	printf("Enter the ending point coordinate:");
	scanf("%f %f",&x2,&y2);
	printf("Enter the scaling factors sx,sy:\n");
	scanf("%f %f",&sx,&sy);
	setcolor(5);
	line(x1,y1,x2,y2);
	outtextxy(x2+2,y2+2,"original line");
	x3=x1*sx;
	y3=y1*sy;
	x4=x2*sx;
	y4=x2*sy;
	setcolor(7);
	line(x3,y3,x4,y4);
	outtextxy(x3+2,y3+2,"line after scaling");
	getch();
}
