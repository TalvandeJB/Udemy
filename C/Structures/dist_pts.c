#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct st_points
{
    int x;
    int y;
} Point;

float distance(Point p1, Point p2)
{
    float distance = (sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)));
    return distance;
}

int main()
{
    Point p1 = {1.0, 5.0}, p2 = {13.0, 4.0};

    printf("La distance entre P1 et P2 est de %4f\n", distance(p1, p2));
}