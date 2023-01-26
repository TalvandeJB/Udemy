#include "read_file.h"

int read_character_file()
{
    FILE *pt_fichier = fopen("fichier_read.txt", "r");
    // Lire un caractere dans un fichier
    if (pt_fichier == NULL)
    {
        printf("Probleme d'ouverture de fichier\n");
        return -1;
    }
    char mon_char;
    do
    {
        mon_char = fgetc(pt_fichier);
        printf("%c", mon_char);

    } while (mon_char != EOF);

    int resultat = fclose(pt_fichier);
    if (resultat != 0)
    {
        printf("Erreur de fermeture de fichier \n");
        return -2;
    }
    return 0;
}

int read_string_file()
{
    FILE *pt_fichier = fopen("fichier_read.txt", "r");
    // Lire un caractere dans un fichier
    if (pt_fichier == NULL)
    {
        printf("Probleme d'ouverture de fichier\n");
        return -1;
    }
    char lecture[100];
    fgets(lecture, 100, pt_fichier);
    printf("%s\n", lecture);
    fgets(lecture, 100, pt_fichier);
    printf("%s\n", lecture);

    int resultat = fclose(pt_fichier);
    if (resultat != 0)
    {
        printf("Erreur de fermeture de fichier \n");
        return -2;
    }
    return 0;
}

int read_formatted_string_file()
{
    FILE *pt_fichier = fopen("fichier_read.txt", "r");
    if (pt_fichier == NULL)
    {
        printf("Probleme d'ouverture de fichier\n");
        return -1;
    }
    char lecture[100];
    fgets(lecture, 100, pt_fichier);
    printf("%s\n", lecture);
    fgets(lecture, 100, pt_fichier);
    printf("%s\n", lecture);

    int age;
    float taille;
    fscanf(pt_fichier, "%d %f", &age, &taille);
    printf("J'ai %d et je mesure %.2fm.\n", age, taille);

    int resultat = fclose(pt_fichier);
    if (resultat != 0)
    {
        printf("Erreur de fermeture de fichier \n");
        return -2;
    }
    return 0;
}