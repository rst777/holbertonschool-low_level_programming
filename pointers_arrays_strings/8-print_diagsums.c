#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calcule et affiche les sommes des diagonales
 * principales d'un tableau carré de taille spécifiée.
 * @a: Pointeur vers le tableau carré d'entiers.
 * @size: Taille du côté du tableau carré (nombre de lignes et de colonnes).
 *
 * Description:
 * Cette fonction parcourt les éléments du tableau carré `a` et calcule
 * deux sommes distinctes :
 * sum 1. La somme des éléments de la première diagonale
 * (de l'angle supérieur gauche à l'angle inférieur droit).
 * sum 2. La somme des éléments de la seconde diagonale
 * (de l'angle supérieur droit à l'angle inférieur gauche).
 *
 * La fonction utilise deux boucles imbriquées pour parcourir le tableau et
 * additionner les valeurs des deux diagonales. Une fois les sommes calculées,
 * elles sont affichées à l'aide de la fonction `printf`.
 */
void print_diagsums(int *a, int size)

{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i]; /** somme de la 1ere diago*/

		sum2 += a[i * size + (size - 1 - i)]; /**somme de la 2eme diago*/
	}
	printf("%d, %d\n", sum1, sum2);
}
