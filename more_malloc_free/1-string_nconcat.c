#include "main.h"
#include "stdlib.h"
/**
 * string_nconcat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne.
 * @s2: La deuxième chaîne.
 * @n: Le nombre maximal d'octets de s2 à concaténer à s1.
 *
 * Return: Un pointeur vers l'espace nouvellement alloué en mémoire
 * contenant s1,
 * suivi des n premiers octets de s2, et terminé par un caractère nul.
 * Si la fonction échoue, elle renvoie NULL. Si n est supérieur ou égal
 * à la longueur de s2, la chaîne entière s2 est utilisée. Si NULL est
 * passé, il est traité comme une chaîne vide.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, length1 = 0, length2 = 0;


	/** Gérer les cas ou s1 et s2 son NULL */

	if (s1 == NULL)
		s1 = "";	/* Traiter s1 comme une chaine vide si NULL */


	if (s2 == NULL)
		s2 = "";	/* Traiter s2 comme une chaine vide si NULL */


	for (length1 = 0; s1[length1] != '\0'; length1++)


	for (length2 = 0; s2[length2] != '\0'; length2++)

	/* Si n est superieur ou égal a s2, utiliser toute la chaine */
		if (n >= length2)
			n = length2;


	/* Allouer la mem pour la nouvelle chaine */
	result = malloc((length1 + n + 1) * sizeof(char));
		if (result == NULL)
		return (NULL);

	/* Copier les caractères de s1 dans result */
	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	/* Copier les n premier  caracteres de s2 dans result */
	for (j = 0; j < n; j++)
		result[length1 + j] = s2[j];

	/* igned joute le caractère de fin de chaine */
		result[length1 + n] = '\0';
		return (result);
}
