#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void flood_fill(int x, int y, int fil_col, int old_col){
	if(getpixel(x, y) == old_col){
		delay(5);
		putpixel(x, y, fil_col);
		flood_fill(x + 1, y, fil_col, old_col);
		flood_fill(x - 1, y, fil_col, old_col);
		flood_fill(x, y + 1, fil_col, old_col);
		flood_fill(x, y - 1, fil_col, old_col);
		flood_fill(x + 1, y + 1, fil_col, old_col);
		flood_fill(x - 1, y - 1, fil_col, old_col);
		flood_fill(x - 1, y + 1, fil_col, old_col);
		flood_fill(x + 1, y - 1, fil_col, old_col);
	}
}

int main(){
    int x, y, fil_col, old_col;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a rectangle
    rectangle(100, 100, 200, 200);

    // Get the colors for filling and old background color
    printf("Enter the seed point (x, y): ");
    scanf("%d %d", &x, &y);
    printf("Enter the fill color: ");
    scanf("%d", &fil_col);

    old_col = getpixel(x, y);

    // Call flood fill algorithm
    flood_fill(x, y, fil_col, old_col);

    getch();
    closegraph();
    return 0;
}

