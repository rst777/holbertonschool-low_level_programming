#include "main.h"
/**
 * Trouver la longueur de la chaîne str en parcourant les caractères
 * Boucle pour imprimer chaque deuxième caractère de la chaîne
 * Ajouter un saut de ligne 
 *
 */

void puts2(char *str)

{
	int i;
	int j;

	while (str[i] != '\0')
	{
		i++;

	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
