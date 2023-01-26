#ifndef REPERTOIRE_H
#define REPERTOIRE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PERSONNE
{
    char nom[20];
    char numero[20];
} Personne;

void saisir_Personne(Personne *p_pers);
void afficher_Personne(Personne pers);
void saisir_Repertoire(Personne repertoire[], int taille);
void afficher_Repertoire(Personne repertoire[], int taille);

Personne *rechercher_personne(Personne repertoire[], int nb, char *nom);

#endif