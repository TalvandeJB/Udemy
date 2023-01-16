#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char *chaine)
{
    int compteur = 0;
    int compteur_dec = strlen(chaine) - 1;
    for (int i = 0; i < strlen(chaine); i++)
    {
        if (*(chaine + i) == *(chaine + compteur_dec))
        {
            compteur++;
        }
        compteur_dec--;
    }
    printf("%d", compteur);
    if (compteur == strlen(chaine))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// int main()
// {
//     char chaine[] = "kayak";
//     is_palindrome(chaine);
// }