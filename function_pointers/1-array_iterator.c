#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Exécute une fonction donnée sur
 * chaque élément d'un tableau
 * @array: Pointeur vers le tableau d'entiers
 * @size: Taille du tableau
 * @action: Pointeur vers la fonction à exécuter sur
 * chaque élément du tableau
 *
 * Description: Cette fonction parcourt un tableau d'entiers et applique
 * la fonction pointée par action à chaque élément du tableau.
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
