#include "write_file.h"

int write_character()
{
    FILE *pt_fichier = fopen("fichier_write.txt", "w");
    if (fputc('X', pt_fichier) == 0)
    {
        printf("Probleme d'ouverture de fichier\n");
        return -1;
    }
    else
    {
        fputc('A', pt_fichier);
    }
    return 0;
}

int write_file()
{
    FILE *pt_fichier = fopen("fichier_write.txt", "w+");
    if (pt_fichier == NULL)
    {
        printf("Probleme d'ouverture de fichier\n");
        return -1;
    }
    // ecriture d'un caractère
    fputc('A', pt_fichier);
    fputc('B', pt_fichier);
    // ecriture d'une chaine de caractère
    fputs("Bonjour a tous !", pt_fichier);
    // ecriture d'une chaine formatee
    fprintf(pt_fichier, "\nJe m'appelle %s et j'ai %d ans.\n", "Mathieu", 24);
    int resultat = fclose(pt_fichier);
    if (resultat != 0)
    {
        printf("Erreur de fermeture de fichier \n");
        return -2;
    }
    return 0;
}