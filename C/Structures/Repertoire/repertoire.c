#include "repertoire.h"

void saisir_Personne(Personne *p_pers)
{
    printf("\tNom : ");
    scanf("%s", p_pers->nom);
    printf("\tNumero de telephone : ");
    scanf("%s", p_pers->numero);
}

void saisir_Repertoire(Personne repertoire[], int taille)
{

    for (int i = 0; i < taille; i++)
    {
        // Personne *personne;
        printf("Ajout d'une nouvelle personne dans le repertoire :\n");
        saisir_Personne(&repertoire[i]);
    }
}

void afficher_Personne(Personne pers)
{
    printf("\tNom :%s\n", pers.nom);
    printf("\tNumero de telephone :%s\n", pers.numero);
}

void afficher_Repertoire(Personne repertoire[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        afficher_Personne(repertoire[i]);
    }
}

Personne *rechercher_personne(Personne repertoire[], int nb, char *nom)
{
    for (int i = 0; i < nb; i++)
    {
        if (nom == repertoire[i].nom)
        {
            afficher_Personne(repertoire[i]);
        }
    }
    return 0;
}