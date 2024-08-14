#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

int boundary_fill(int x, int y, int fil_col, int b_col){
	if((getpixel(x,y)!=b_col) && (getpixel(x,y)!=fil_col)){
		putpixel(x,y,fil_col);
		boundary_fill(x+1,y,fil_col,b_col);
		boundary_fill(x-1,y,fil_col,b_col);
		boundary_fill(x,y+1,fil_col,b_col);
		boundary_fill(x,y-1,fil_col,b_col);
		boundary_fill(x+1,y+1,fil_col,b_col);
		boundary_fill(x+1,y-1,fil_col,b_col);
		boundary_fill(x-1,y+1,fil_col,b_col);
		boundary_fill(x-1,y-1,fil_col,b_col);
	}
}

int main(){
	int x,y,fil_col,b_col;
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	printf("Enter the seed point(x,y):");
	scanf("%d %d",&x,&y);
	printf("Enter the boundary color:");
	scanf("%d",&b_col);
	printf("Enter the New color:");
	scanf("%d",&fil_col);
	rectangle(100,100,300,200);
	boundary_fill(x,y,fil_col,b_col);
	getch();
	
}
