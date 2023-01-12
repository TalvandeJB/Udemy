#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longueurchaine(char *chaine)
{
    printf("Taille de la chaine: %d\n", strlen(chaine));
    return strlen(chaine);
}

void premiereoccurrence(char *chaine, char caractere)
{
    char *p_chaine = strchr(chaine, caractere);
    if (p_chaine == NULL)
    {
        printf("Le caractere %c n'est pas present dans la chaine\n", caractere);
    }
    else
    {
        printf("Le caractere apparait dans la chaine :%s.\n", p_chaine);
    }
}

void compare(char *chaine1, char *chaine2)
{
    int compare = strcmp(chaine1, chaine2);
    switch (compare)
    {
    case 0:
        printf("Les chaines sont identiques");
        break;
    case -1:
        printf("La chaine 1 est inferieure alphabetiquement par rapport a la chaine 2\n");
    case 1:
        printf("La chaine 2 est inferieure alphabetiquement par rapport a la chaine 1\n");
    }
}

void copy(char *chaine1, char *chaine2)
{
    char *copie = strcpy(chaine1, chaine2);
    printf("Copie de la chaine2 dans la chaine 1 :%s\n", copie);
}

void concatenation(char *chaine1, char *chaine2)
{
    char *concatenation = strcat(chaine1, chaine2);
    printf("La concatenation des chaines donne :%s\n", concatenation);
}

void nb_chaine(char *chaine, char *pt_fin, int base)
{
    long int_chaine = strtol(chaine, NULL, base);
    printf("L'entier present dans la chaine : ''%s'' est %ld \n", chaine, int_chaine);
}

int main()
{
    char chaine[] = "Hello world";
    char caractere = 'w';
    longueurchaine(chaine);
    premiereoccurrence(chaine, 'w');
    compare("Bonjour", "Hello");
    copy(chaine, " Hello tout le monde ");
    concatenation(chaine, "How are you ?");
    nb_chaine("30euros", NULL, 10);
    char chaine1[] = "";
    sprintf(chaine1, "Le prix est de %d euros", 45);
    printf("%s", chaine1);
}