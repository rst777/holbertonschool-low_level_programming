#include "main.h"
#include <stdlib.h>
/**
 * create_array - Crée un tableau de caractères
 * et le remplit avec un caractère spécifié.
 * @size: Taille du tableau à créer.
 * @c: Caractère avec lequel remplir le tableau.
 *
 * Return: Pointeur vers le tableau de caractères.
 * NULL si la taille est zéro ou si l'allocation de mémoire échoue.
 */
char *create_array(unsigned int size, char c)

{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
