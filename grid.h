/*grid.h*/
#ifndef PRIMARY_HEADER_H
#define PRIMARY_HEADER_H
#define MAX_POINTS 10
#include <stdio.h>

typedef struct points{
	int x;
	int y;
	int rel_x;
	int rel_y;
}point;

void print_grid(int w, int h, point num_pts[MAX_POINTS], int pts_index);

point* sort_arr(point num_pts[], int pts_index);

void grid_mode(void);

#endif /*PRIMARY_HEADER_H*/
