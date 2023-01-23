#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int write_file()
{
    FILE *pt_fichier = fopen("fichier_write.txt", "w");
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
}

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
}

int main()
{
    // write_file();
    //  write_character();
    // read_character_file();
    // read_string_file();
    read_formatted_string_file();
}