#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Retourne un pointeur vers un nouvel espace alloué en mémoire,
 *           qui contient une copie de la chaîne donnée en paramètre.
 * @str: La chaîne à dupliquer.
 *
 * Return: Un pointeur vers la chaîne dupliquée, ou NULL si str est NULL
 *           ou si une mémoire insuffisante était disponible.
 */
char *_strdup(char *str)

{
	char *duplicate;
	unsigned int i, length;

	/* Verifie si la chaine est NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Calcul la longueur de la chaine d'entree */
	for (length = 0; str[length] != '\0'; length++)
	{
		/* Boucle vide pour calculer la longueur */
	}

	/* Alloue de la memoire pour la copie de la chaine*/
		duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	/* Copie de la chaine d'entrée dans l'espace memoire new alloué*/

	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	/* Ajoute le caractère de fin de chaine*/
		duplicate[length] = '\0';

	return (duplicate);
}
