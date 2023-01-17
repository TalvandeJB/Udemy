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

int main()
{
    srand(time(NULL));
    Carte ma_carte;

    tirage_carte(&ma_carte);
    info_carte(ma_carte);
}

void info_carte(Carte carte)
{
    printf("Tirage d'une carte aleatoire : \n");
    switch (carte.figure)
    {
    case AS:
        printf("AS");
        break;
    case DEUX:
        printf("DEUX");
        break;
    case TROIS:
        printf("TROIS");
        break;
    case QUATRE:
        printf("QUATRE");
        break;
    case CINQ:
        printf("CINQ");
        break;
    case SIX:
        printf("SIX");
        break;
    case SEPT:
        printf("SEPT");
        break;
    case HUIT:
        printf("HUIT");
        break;
    case NEUF:
        printf("NEUF");
        break;
    case DIX:
        printf("DIX");
        break;
    case VALET:
        printf("VALET");
        break;
    case DAME:
        printf("DAME");
        break;
    case ROI:
        printf("ROI");
        break;
    default:
        break;
    }
    printf(" de ");
    switch (carte.couleur)
    {
    case PIQUE:
        printf("PIQUE");
        break;
    case COEUR:
        printf("COEUR");
        break;
    case CARREAU:
        printf("CARREAU");
        break;
    case TREFLE:
        printf("TREFLE");
        break;

    default:
        break;
    }
    putchar('\n');
}

void tirage_carte(Carte *p_carte)
{
    if (p_carte == NULL)
        return;

    p_carte->figure = (rand() % (ROI - AS + 1)) + AS;
    p_carte->couleur = (rand() % (TREFLE - PIQUE + 1)) + PIQUE;
};
