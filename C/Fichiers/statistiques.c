#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void affichage_resultat(int nb_caracteres, int nb_voyelles, int nb_consonnes, int nb_mots)
{
    printf("Statistiques sur le fichier:\n");
    printf("\tNombre de caracteres: %d\n", nb_caracteres);
    printf("\tNombre de voyelles: %d\n", nb_voyelles);
    printf("\tNombre de consonnes: %d\n", nb_consonnes);
    printf("\tNombre de mots: %d", nb_mots);
}

int main()
{
    FILE *pt_fichier = fopen("fichier_stats.txt", "r");
    if (pt_fichier == NULL)
    {
        printf("Probleme lors de l'ouverture du fichier");
        return -1;
    }
    int lecture = 0;
    int nb_char = 0;
    int nb_voyelle = 0;
    int nb_consonne = 0;
    int nb_mots = 0;
    int new_word = 1;

    do
    {
        lecture = fgetc(pt_fichier);
        if (lecture == EOF)
        {
            break;
        }
        if (lecture == ' ' || lecture == '\n')
        {
            new_word = 1;
        }
        if (isalpha(lecture))
        {
            new_word = 0;
            if (lecture == 'a' || lecture == 'e' || lecture == 'i' || lecture == 'o' || lecture == 'u' || lecture == 'y')
            {

                nb_voyelle++;
            }
            else
            {
                nb_consonne++;
            }
        }

        else if (new_word)
        {
            new_word = 0;
            nb_mots++;
        }
        nb_char++;
    } while (lecture != EOF);
    affichage_resultat(nb_char, nb_voyelle, nb_consonne, nb_mots);

    fclose(pt_fichier);
}