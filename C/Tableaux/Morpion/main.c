#include "morpion.h"

int main()
{
    char grille[3][3] = {{'+', '+', '+'},
                         {'+', '+', '+'},
                         {'+', '+', '+'}};
    affichage_morpion(*grille);
    partie(*grille);
    printf("%d", partie(*grille));
    if (partie(*grille) == 1)
    {
        return -1;
    }
    return 0;
}