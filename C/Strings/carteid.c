#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char datedenaissance[10] = "";
    char nom[10] = "";
    char prenom[10] = "";
    printf("Donnez les différentes informations suivantes:\n");
    printf("Date de naissance:");
    scanf("%s", datedenaissance);
    printf("Nom:");
    scanf("%s", nom);
    printf("Date de naissance:");
    scanf("%s", prenom);
    printf("Vous vous appelez %s %s, vous etes né le %s")
}