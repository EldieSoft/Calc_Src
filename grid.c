#include "grid.h"
#include <stdio.h>
#include <stdlib.h>

//printing functions
void print_grid(int w, int h) //to print grid
{//really only works with odd numbers
	int j, k, x, y;//variables for for-loops, and drawing the x,y axis of grid
	if (w %= 2 == 0) { x = w/2; }
	else {	x = (w-1)/2; }
	if (h %= 2 == 0) { y = h/2; }
	else {	y = (h-1)/2; }
	for (j = 0; j < w; j++)
	{
		for (k = 0; k < h; k++)
		{
			if (k == y){	printf(" | "); } //prints vertical axis
			else if (j == x) { printf(" - "); } //prints horizontal axis
			else {	printf(" * "); } //prints rest of grid
		}
		printf("\n");
	}
}
//grid mode activation
void grid_mode()
{
	int w,h;
	printf("Grid Mode: ACTIVATED\n");
	printf("How wide is the grid?\n");
	scanf("%d", &w);
	printf("How high is the grid?\n");
	scanf("%d", &h);
	print_grid(w, h);
}

