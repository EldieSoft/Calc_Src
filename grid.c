#include "grid.h"
#include <stdio.h>
#include <stdlib.h>

void print_grid(int w, int h, point num_pts[], int pts_index) //to print grid  | I'm keeping the variables, even though it's going to be a standard size
{
	point* sorted_pts;
	sorted_pts = sort_arr(num_pts, pts_index);
	int x, y, i = 0;//variables for for-loops, and drawing the x,y axis of grid
	if (w %= 2 == 0) { x = w/2; }
	else {	x = (w-1)/2; }
	if (h %= 2 == 0) { y = h/2; }
	else {	y = (h-1)/2; }
	for (int j = 0; j < w; j++)
	{
		for (int k = 0; k < h; k++)
		{
			if (k == sorted_pts[i].rel_x && j == sorted_pts[i].rel_y)
			{
				printf(" @ ");
				i++;
			}
			else if (k == y){	printf(" # "); } //prints vertical axis
			else if (j == x) { printf(" # "); } //prints horizontal axis
			else {	printf(" * "); } //prints rest of grid
		}
		printf("\n");	
	}
	for (int i = 0; i < pts_index; i++)
	{
		printf("Point %d: %d,%d\t", i+1, num_pts[i].x, num_pts[i].y);
	}
	free(sorted_pts);
}
void swap(point* xp, point* yp)
{
	point temp = *xp;
	*xp = *yp;
	*yp = temp;
}
point* sort_arr(point num_pts[], int pts_index)
{
	point *sorted_pts = malloc(sizeof(int) * pts_index);//[pts_index];
	//function to sort the num_pts[] array from smallest x,y to largest x,y
	for (int i = 0; i <  pts_index - 1; ++i)
	{
		for (int j = 0; j < pts_index - i - 1; ++j)
		{
			if (num_pts[j].rel_y > num_pts[j + 1].rel_y)
			{
				swap(&num_pts[j], &num_pts[j + 1]);
			}
			else if (num_pts[j].rel_y ==num_pts[j + 1].rel_y && num_pts[j].rel_x > num_pts[j + 1].rel_x)
			{
				swap(&num_pts[j], &num_pts[j+1]);
			}
		}
	}
	for (int i = 0; i < pts_index; i++)
	{
		sorted_pts[i] = num_pts[i];
	}
	return sorted_pts;
}
//grid mode activation
void grid_mode()
{
	int pts_index; char answer; point num_pts[MAX_POINTS]; //the struct from my header file 
	printf("Do you want to map points?\n(Y for Yes, N for No)\n");
	scanf(" %c",&answer);
	switch (answer)
	{
		case 'Y':
		case 'y':
			printf("How many points do you want to map?\n");
			scanf("%d", &pts_index);
			if (pts_index > 10)
			{
				printf("Number too high\n");
				pts_index = MAX_POINTS;
			}	
			for (int i = 0; i < pts_index; i++)
			{
				printf("What are the x,y coords for point %d?\nFORMAT X Y\n", i + 1);
				scanf("%d%d",&num_pts[i].x, &num_pts[i].y);
				num_pts[i].rel_x = 15 + num_pts[i].x; num_pts[i].rel_y = 15 - num_pts[i].y;//to get the x and y coords relative to the size of the grid (31x31)
			}		//rel x is based on the left of the grid, rel y is based on the top of the grid
		//	sorted_pts = sort_arr(num_pts, pts_index); might come back, rn not sure
			print_grid(31, 31, num_pts, pts_index); //prints a grid with points
			break;
		case 'N':
		case 'n':
			print_grid(31, 31, num_pts, 0); //prints a grid without the points
			break;
		default:
			printf("ERROR\n");
			grid_mode();
			break;
	}
}

