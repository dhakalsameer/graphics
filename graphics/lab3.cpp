#include<stdio.h>
#include<graphics.h>
int main(){
	int x1,y1,x2,y2,tx,ty,x3,y3,x4,y4;
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	printf("Enter the starting point of the line segment:");
	scanf("%d %d",&x1,&y1);
	printf("Enter the ending point of the line segment:");
	scanf("%d %d",&x2,&y2);
	printf("Enter the translation distances tx,ty:/n");
	scanf("%d %d",&tx,&ty);
	setcolor(5);
	line(x1,y1,x2,y2);
	outtextxy(x2+2,y2+2,"original line");
	x3=x1+tx;
	y3=y1+ty; 
	x4=x2+tx;
	y4=y2+ty;
	setcolor(7);
	line(x3,y3,x4,y4);
	outtextxy(x4+2,y4+2,"line after translation");
	getch();
	
}
