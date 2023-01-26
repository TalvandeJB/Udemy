#ifndef FCT_CHAINE
#define FCT_CHAINE

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int longueurchaine(char *chaine);
void premiereoccurrence(char *chaine, char caractere);
void compare(char *chaine1, char *chaine2);
void copy(char *chaine1, char *chaine2);
void concatenation(char *chaine1, char *chaine2);
void nb_chaine(char *chaine, char *pt_fin, int base);

#endif