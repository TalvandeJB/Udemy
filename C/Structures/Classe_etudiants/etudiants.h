#ifndef ETUDIANTS_H
#define ETUDIANTS_H

#include <stdio.h>

#define TAILLE_CLASSE 5
#define MOYENNE 10
#define TAILLE_STRING 20

typedef struct ETUDIANT
{
    char nom[TAILLE_STRING];
    char prenom[TAILLE_STRING];
    float moyenne;

} Etudiant;

#endif