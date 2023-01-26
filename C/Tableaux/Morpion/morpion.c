#include "morpion.h"

void affichage_morpion(char *tab)
{
    char *p_ligne = 0;
    for (int i = 0; i < 3; i++)
    {
        p_ligne = tab + (i * 3);
        for (int j = 0; j < 3; j++)
        {

            printf("|");
            printf("%c", *(p_ligne + j));
            printf("|");
        }
        printf("\n");
    }
}

int combinaison(char *tab)
{
    if (((*(tab) == *(tab + 4)) && (*(tab + 4) == *(tab + 8)) && (*(tab + 8)) != '+') || ((*(tab) == *(tab + 4)) && (*(tab + 2) == *(tab + 4)) && (*(tab + 6)) != '+'))
    {
        printf("La partie est terminee: diagonale\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < 9; i += 3)
        {
            // lignes horizontales
            if ((*(tab + i) == *(tab + i + 1)) && (*(tab + i + 1) == *(tab + i + 2)) && (*(tab + i + 2) != '+'))
            {
                printf("La partie est terminee :horizontale\n");
                return 1;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if ((*(tab + i) == *(tab + i + 3)) && (*(tab + i + 3) == *(tab + i + 6)) && (*(tab + i + 6) != '+'))
            {
                printf("La partie est terminee: verticale\n");
                return 1;
            }
        }
    }
    return 0;
}

int partie(char *tab)
{
    char *p_ligne;
    for (int i = 0; i < 5; i++)
    {
        int x = 0,
            y = 0;
        printf("Joueur 1 :");
        scanf("%d %d", &x, &y);
        p_ligne = tab + (x * 3);
        *(p_ligne + y) = 'O';
        affichage_morpion(tab);
        combinaison(tab);
        if (combinaison(tab) == 1)
        {
            return 1;
        }
        printf("Joueur 2 :");
        scanf("%d %d", &x, &y);
        while ((x < 0 || x > 3) || (y < 0 || y > 3))
        {
            printf("Déplacement impossible !");
            scanf("%d %d", &x, &y);
        }
        p_ligne = tab + (x * 3);
        *(p_ligne + y) = 'X';
        affichage_morpion(tab);
        combinaison(tab);
        if (combinaison(tab) == 1)
        {
            return 1;
        }
    }
    return 0;
}
