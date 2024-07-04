#include "main.h"
/**
 * _pow_recursion - Calcule la puissance d'un nombre de manière récursive.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: La valeur de `x` à la puissance `y`.
 *         Retourne -1 si `y` est négatif.
 */
int _pow_recursion(int x, int y)

{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));

}
