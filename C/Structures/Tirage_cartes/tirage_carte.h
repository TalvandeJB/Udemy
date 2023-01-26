#ifndef TIRAGE_CARTE_H
#define TIRAGE_CARTE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum COULEUR
{
    PIQUE,
    CARREAU,
    TREFLE,
    COEUR
} Couleur;

typedef enum FIGURE
{
    AS,
    DEUX,
    TROIS,
    QUATRE,
    CINQ,
    SIX,
    SEPT,
    HUIT,
    NEUF,
    DIX,
    VALET,
    DAME,
    ROI

} Figure;

typedef struct CARTE
{
    Couleur couleur;
    Figure figure;
} Carte;

void info_carte(Carte);
void tirage_carte(Carte *);

#endif