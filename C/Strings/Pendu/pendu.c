#include "pendu.h"

char lire_caractere()
{
	char lettre = 0;

	lettre = getchar();
	if (islower(lettre))
	{
		lettre = toupper(lettre);
	}
	while (getchar() != '\n')
		;

	return lettre;
}

void partie_perdue(char motsecret[])
{
	printf("\n\nVous avez perdu!\nLe mot etait %s !!\n\n", motsecret);
}

void partie_gagnee(char motsecret[], int nb_coups, int nb_coups_restants)
{
	printf("\n%s\nBravo, vous avez gagne en %d coups!\n\n", motsecret, nb_coups - nb_coups_restants);
}

void lire_mot(char *mot)
{
	int i = 0;

	while ((mot[i] = getchar()) != '\n')
	{
		if (islower(mot[i]))
		{
			mot[i] = toupper(mot[i]);
		}

		i++;
	}
	mot[i] = '\0';
}

char *affichage_mot_actuel(int coups_restants, char mot_secret[], char mot_actuel[])
{
	printf("\nQuel est le mot secret ? %s\n", mot_actuel);
	printf("Il vous reste %d coups a jouer\n", coups_restants);
	char caractere_lu = lire_caractere();

	for (int i = 0; i < strlen(mot_secret); i++)
	{

		if (mot_secret[i] == caractere_lu)
		{
			mot_actuel[i] = caractere_lu;
		}
	}
	return mot_actuel;
}
