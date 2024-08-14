#include<stdio.h>
#include<graphics.h>
int main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	line(100,100,200,200);
	closegraph();
	return 0;
}
