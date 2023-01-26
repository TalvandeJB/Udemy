#ifndef DISTANCE_PTS_H
#define DISTANCE_PTS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct st_points
{
    int x;
    int y;
} Point;

float distance(Point p1, Point p2);

#endif