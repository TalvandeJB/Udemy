#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb_tour = 0;
    char codesecret[4] = {'R', 'V', 'J', 'B'};
    char choix_joueur[4];

    // printf("%s\n", choix_joueur);
    //  couleurs mal placées
    while (nb_tour < 5)
    {
        int nb_couleurs_ok = 0;
        int nb_presente = 0;
        fflush(stdin);
        scanf("%c%c%c%c", choix_joueur, (choix_joueur + 1), (choix_joueur + 2), (choix_joueur + 3));
        for (int i = 0; i < 4; i++)
        {
            int couleur_presente = 0;
            for (int j = 0; j < 4; j++)
            {
                if ((*(choix_joueur + i) == *(codesecret + j)))
                {

                    couleur_presente = 1;
                    if (i == j)
                    {
                        nb_couleurs_ok++;
                        break;
                    }
                }
            }
            nb_presente += couleur_presente;
            // printf("kjkjk:%d", nb_couleurs_ok);
        }
        printf("Couleurs mal placees: %d\n", nb_presente - nb_couleurs_ok);
        printf("Couleurs bien placees: %d\n", nb_couleurs_ok);
        nb_tour++;
    }
    return 0;
}