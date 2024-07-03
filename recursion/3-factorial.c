#include "main.h"
/**
 * factorial - Calcule la factorielle d'un nombre donné
 * de manière récursive.
 * @n: Le nombre dont on veut calculer la factorielle
 *
 * Return: La factorielle de `n`.
 * Retourne -1 si `n` est négatif, car la factorielle
 * d'un nombre négatif n'est pas définie.
 */
int factorial(int n)

{
	if (n < 0)	/**Vérifie si `n` est négatif*/

		return (-1);

	if (n == 0)	/** La factorielle de 0 est 1*/

		return (1);


	return (n * factorial(n - 1));/**Ap récursif calculer la factorielle*/
}
