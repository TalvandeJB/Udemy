#include "repertoire.h"

int main()
{
    Personne repertoire[5];
    Personne *p_personne = NULL;
    char recherche[20];

    // Creation du repertoire
    saisir_Repertoire(repertoire, 5);
    afficher_Repertoire(repertoire, 5);

    // Recherche dans le repertoire
    printf("Tapez le nom a rechercher :");
    scanf("%s", recherche);
    p_personne = rechercher_personne(repertoire, 5, recherche);

    // Affichage resultat
    if (p_personne == NULL)
    {
        printf("Personne non trouvee\n");
    }
    else
    {
        afficher_Personne(*p_personne);
    }

    return 0;
}