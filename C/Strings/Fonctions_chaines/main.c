#include "chainefonctions.h"

int main()
{
    char chaine[] = "Hello world";
    char caractere = 'w';
    longueurchaine(chaine);
    premiereoccurrence(chaine, caractere);
    compare("Bonjour", "Hello");
    copy(chaine, " Hello tout le monde ");
    concatenation(chaine, "How are you ?");
    nb_chaine("30euros", NULL, 10);
    char chaine1[] = "";
    sprintf(chaine1, "Le prix est de %d euros", 45);
    printf("%s", chaine1);
}