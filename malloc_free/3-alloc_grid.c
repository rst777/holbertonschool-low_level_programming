#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Alloue un tableau 2D d'entiers et initialise à 0
 * @width: Largeur du tableau (colonnes)
 * @height: Hauteur du tableau (lignes)
 *
 * Retourne un pointeur vers le tableau 2D alloué et initialisé,
 * ou NULL en cas
 * d'erreur ou si les dimensions sont invalides.
 *
 * Return: Pointeur vers le tableau 2D ou NULL en cas d'échec.
 */
int **alloc_grid(int width, int height)

{
	int i = 0, j = 0, **grid;

	/* Verifier les dimensions son valide */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Allouer de la mem pour les lignes */
	grid = malloc(height * sizeof(int *));
		if (grid == NULL)
		{
			return (NULL);
		}
	/* Pour chaque lignes allouer de la mem pour les colonnes*/
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
	/* Si l'allocation échoue, libéré la mem déja allouée */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

		free(grid);
		return (NULL);
		}
	/* Initialiser chaque élément a 0 */
		for (j = 0; j < width; j++)
		{
		grid[i][j] = 0;
		}
	}
	/* retourner le pointeur vers le tableau 2D */
	return (grid);
}
