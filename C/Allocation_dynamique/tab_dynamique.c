#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int taille_max_nom = 20;
    const int taille_liste = 3;

    char **liste_nom = NULL;
    liste_nom = (char **)malloc(taille_liste * sizeof(char *));

    if (liste_nom == NULL)
    {
        return -1;
    }
    for (int i = 0; i < taille_liste; i++)
    {
        char *nom = NULL;
        nom = (char *)malloc((taille_max_nom + 1) * sizeof(char));
        if (nom == NULL)
        {
            free(liste_nom);
            return -2;
        }
        printf("Indiquez le nom:");
        scanf("%s", nom);
        *(liste_nom + i) = nom;
    }
    for (int i = 0; i < taille_liste; i++)
    {
        printf("Bonjour %s\n", *(liste_nom + i));
    }
    for (int i = 0; i < taille_liste; i++)
    {
        free(*(liste_nom + i));
    }
    free(liste_nom);
}