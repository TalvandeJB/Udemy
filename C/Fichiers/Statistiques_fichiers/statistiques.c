#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void affichage_resultat(int *pt_tab)
{
    printf("Statistiques sur le fichier:\n");
    printf("\tNombre de caracteres: %d\n", *pt_tab);
    printf("\tNombre de voyelles: %d\n", *(pt_tab + 1));
    printf("\tNombre de consonnes: %d\n", *(pt_tab + 2));
    printf("\tNombre de mots: %d", *(pt_tab + 3));
}

void compteur_fichier(FILE *pt_fichier)
{
    int lecture = 0;
    int nouveau_mot = 1;
    int nb_voyelle = 0, nb_consonne = 0, nb_mots = 0, nb_char = 0;
    int tab[4] = {0};
    do
    {
        lecture = fgetc(pt_fichier);
        if (lecture == EOF)
        {
            break;
        }
        if (lecture == ' ' || lecture == '\n')
        {
            nouveau_mot = 1;
        }
        if (isalpha(lecture))
        {
            nouveau_mot = 0;
            if (lecture == 'a' || lecture == 'e' || lecture == 'i' || lecture == 'o' || lecture == 'u' || lecture == 'y')
            {
                nb_voyelle++;
                tab[0] = nb_voyelle;
            }
            else
            {
                nb_consonne++;
                tab[1] = nb_consonne;
            }
        }
        else if (nouveau_mot)
        {
            nouveau_mot = 0;
            nb_mots++;
            tab[2] = nb_mots;
        }
        nb_char++;
        tab[3] = nb_char;
    } while (lecture != EOF);
    affichage_resultat(tab);
}
