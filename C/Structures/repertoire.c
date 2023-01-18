#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PERSONNE
{
    char nom[20];
    char numero[20];
} Personne;

void saisir_Personne(Personne *p_pers);
void afficher_Personne(Personne pers);
void saisir_Repertoire(Personne repertoire[], int taille);
void afficher_Repertoire(Personne repertoire[], int taille);

Personne *rechercher_personne(Personne repertoire[], int nb, char *nom);

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
    scanf("%s", &recherche);
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
        Personne *personne;
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
}