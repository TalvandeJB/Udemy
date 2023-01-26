#include "dist_pts.h"

float distance(Point p1, Point p2)
{
    float distance = (sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)));
    return distance;
}
