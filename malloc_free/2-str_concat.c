#include "main.h"
#include "stdlib.h"
/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 *
 * Return: Pointeur vers la nouvelle chaîne allouée contenant s1 suivi de s2
 * ou NULL en cas d'échec.
 */
char *str_concat(char *s1, char *s2)

{
	char *result;
	int i, j, length1 = 0, length2 = 0;

	/** Gérer les cas ou s1 et s2 son NULL */

	if (s1 == NULL)
	{
		s1 = "";	/* Traiter s1 comme une chaine vide si NULL */
	}

	if (s2 == NULL)
	{
		s2 = "";	/* Traiter s2 comme une chaine vide si NULL */
	}

	for (length1 = 0; s1[length1] != '\0'; length1++)


	for (length2 = 0; s2[length2] != '\0'; length2++)


	/* Allouer la mem pour la nouvelle chaine */
	result = malloc((length1 + length2 + 1) * sizeof(char));
		if (result == NULL)
	{
		return (NULL);
	}
	/* Copier les caractères de s1 dans result */
	for (i = 0; i < length1; i++)
	{
		result[i] = s1[i];
	}
	/* Copier les caracteres de s2 dans result */
	for (j = 0; j < length2; j++)
	{
		result[length1 + j] = s2[j];
	}
	/* Ajoute le caractère de fin de chaine */
		result[length1 + length2] = '\0';
		return (result);
}
