#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Libère la mémoire allouée pour un tableau 2D
 * @grid: Pointeur vers le tableau 2D à libérer
 * @height: Nombre de lignes du tableau 2D
 *
 * Description: Libère d'abord chaque ligne, puis le tableau de pointeurs.
 */
void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
