#include "etudiants.h"

int main()
{
    Etudiant promo[TAILLE_CLASSE] = {{"Mathieu", "Caro", 15.34},
                                     {"Guillaume", "Paris", 10.34},
                                     {"Mathilde", "Munier", 8.09},
                                     {"Lisa", "Le Clerc", 18.34},
                                     {"Maxime", "Boulanger", 9.6}};

    printf("Liste des eleves ayant eu la moyenne:\n");
    for (int i = 0; i < TAILLE_CLASSE; i++)
    {
        Etudiant etudiant = promo[i];
        if (etudiant.moyenne >= 10.0)
        {
            printf("%s,%s,%2.2f\n", etudiant.prenom, etudiant.nom, etudiant.moyenne);
        }
    }

    return 0;
}