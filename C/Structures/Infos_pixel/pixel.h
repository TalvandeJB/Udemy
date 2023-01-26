#ifndef PIXEL_H
#define PIXEL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pixel
{
    int x;
    int y;
    char couleur[20];
} pixel;

void affiche_info(pixel p);

#endif