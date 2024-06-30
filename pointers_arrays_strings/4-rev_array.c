#include "main.h"
/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers.
 * @a: Pointeur vers le tableau d'entiers.
 * @n: Nombre d'éléments dans le tableau.
 */
void reverse_array(int *a, int n)

{
	int i, temp;

	/** Parcourt le tableau jusqu'� la moitie */

		for (i = 0; i < n / 2; i++)
	{
		/** echange les elements */

		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
