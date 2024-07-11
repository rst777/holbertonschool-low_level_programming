#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Crée un tableau d'entiers contenant
 * toutes les valeurs de min à max.
 * @min: La valeur minimale de la plage.
 * @max: La valeur maximale de la plage.
 *
 * Return: Un pointeur vers le tableau nouvellement créé
 * ou NULL en cas d'échec.
 */
int *array_range(int min, int max)

{
	int *ptr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	/* Calculer la taille du tableau */
	size = max - min + 1;

	/* Allouer la mémoire */
	ptr = malloc(sizeof(int) * size);

	/* Verifier si malloc a échoué */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Initialiser le tableau avec les valeurs de min à max */

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
