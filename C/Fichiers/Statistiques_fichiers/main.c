#include "statistiques.h"

int main()
{

    FILE *pt_fichier = fopen("fichier_stats.txt", "r");
    if (pt_fichier == NULL)
    {
        printf("Probleme lors de l'ouverture du fichier");
        return -1;
    }
    compteur_fichier(pt_fichier);
    // affichage_resultat(n_char, n_voyelle, n_consonne, n_mots);
    fclose(pt_fichier);
}