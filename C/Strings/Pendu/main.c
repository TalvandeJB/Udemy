#include "pendu.h"

int main()
{
    int i, taille;
    char mot_secret[TAILLE_MAX];
    int coups_restants, nb_coups;
    // char caractere_lu;

    printf("\nTapez le mot caché(Joueur 1)\n");
    lire_mot(mot_secret);

    taille = strlen(mot_secret);

    char motActuel[TAILLE_MAX];
    for (i = 0; i < taille; i++)
    {
        motActuel[i] = '*';
    }
    motActuel[taille] = '\0';

    char diff[TAILLE_MAX];
    printf("\nNombre de tentatives\n");
    lire_mot(diff);

    coups_restants = strtol(diff, NULL, 10);
    nb_coups = coups_restants;

    printf("\n\n\nNombre de coups : %d \n\n", coups_restants);

    while (coups_restants > 0)
    {
        affichage_mot_actuel(coups_restants, mot_secret, motActuel);
        coups_restants--;

        if (strcmp(motActuel, mot_secret) == 0)
        {
            partie_gagnee(mot_secret, nb_coups, coups_restants);
            coups_restants = 0;
        }
        else if (coups_restants == 0)
            partie_perdue(mot_secret);
    }
    return 0;
}