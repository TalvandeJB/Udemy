#ifndef PENDU_H
#define PENDU_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define TAILLE_MAX 100

char lire_caractere();
void lire_mot(char *mot);
char *affichage_mot_actuel(int coups_restants, char mot_secret[], char mot_actuel[]);
void partie_gagnee(char motsecret[], int nb_coups, int nb_coups_restants);
void partie_perdue(char motsecret[]);

#endif