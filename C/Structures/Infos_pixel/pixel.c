#include "pixel.h"

void affiche_info(pixel p)
{
    printf("X : %d\n", p.x);
    printf("Y : %d\n", p.y);
    printf("Couleur : %s", p.couleur);
}
