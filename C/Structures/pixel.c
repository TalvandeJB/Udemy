#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pixel
{
    int x;
    int y;
    char couleur[20];
} pixel;

void affiche_info(pixel p)
{
    printf("X : %d\n", p.x);
    printf("Y : %d\n", p.y);
    printf("Couleur : %s", p.couleur);
}

int main()
{
    pixel p1 = {1, 2, "red"};
    affiche_info(p1);
}