#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int tableau_mot_secret(int *tab)
// {
//     for (int i = 0; i < strlen(tab); i++)
//     {
//         tab[i] = 0;
//     }
//     return *tab;
// }

// char affichage_mot_secret(char *mot_secret, int *tab)
// {
//     for (int i = 0; i < strlen(mot_secret); i++)
//     {
//         if (*(tab + i) == 0)
//         {
//             printf(" - ");
//         }
//         else
//         {
//             printf(" %c ", mot_secret[i]);
//         }
//     }
//     return mot_secret;
// }

int main()
{
    char mot_secret[20] = "";
    char lettre;
    int tab_zero_un[20] = {0};
    int nombre_vie = 10;
    printf("Rentrez le mot secret:");
    scanf("%s", &mot_secret);
    printf("bonjour\n");
    int size_word = strlen(mot_secret);
    for (int i = 0; i < size_word; i++)
    {
        *(tab_zero_un + i) = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Rentrez une lettre:");
        scanf("%c", &lettre);
        printf(" %c", lettre);
        printf("\n");
        for (int i = 0; i < size_word; i++)
        {
            if (mot_secret[i] == lettre)
            {
                tab_zero_un[i] = 1;
            }
        }
        for (int i = 0; i < size_word; i++)
        {
            if (tab_zero_un[i] == 0)
            {
                printf(" - ");
            }
            else if (tab_zero_un[i] == 1)
            {
                printf(" %c ", mot_secret[i]);
            }
        }
        printf("\n");
        printf("%d", nombre_vie);
    }
}