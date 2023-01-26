#include "palindrome.h"

int main()
{
    char chaine[50];
    printf("Rentrez une chaine de caracteres:");
    scanf("%s", chaine);
    to_upper(chaine, strlen(chaine));
    if (is_palindrome(chaine) == 0)
    {
        printf("Ce n'est pas un palindrome ! \n");
    }
    else
    {
        printf("C'est un palindrome ! \n");
    };
}