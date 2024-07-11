#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau, en utilisant malloc.
 * @nmemb: Nombre d'éléments dans le tableau.
 * @size: Taille en octets de chaque élément.
 *
 * Return: Pointeur vers la mémoire allouée, ou NULL en cas d'échec.
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *ptr;
	unsigned int total_size, i;

	/* Verifier si nmemb ou size est 0 */

	if (nmemb == 0 || size == 0)

		return (NULL);

	/* Calculer la taille totale */
	total_size = (nmemb * size);

	/* Allouer la mémoire */
	ptr = malloc(total_size);

	/* Verifier si malloc a échoué */

	if (ptr == NULL)

	return (NULL);


	/* Initialiser la mémoire à zéro */

	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;

	}
	return (ptr);
}
