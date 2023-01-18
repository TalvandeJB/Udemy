#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_STRING 20
#define TAILLE_CLASSE 5
#define MOYENNE 10

typedef struct ETUDIANT
{
    char nom[TAILLE_STRING];
    char prenom[TAILLE_STRING];
    float moyenne;

} Etudiant;

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