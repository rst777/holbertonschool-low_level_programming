#include "main.h"
/**
 * _sqrt_helper - Fonction auxiliaire pour trouver la racine carrée.
 * @n: Le nombre dont on veut trouver la racine carrée.
 * @guess: La supposition actuelle pour la racine carrée.
 *
 * Return: La racine carrée naturelle de `n` ou -1 si `n`
 * n'a pas de racine carrée naturelle.
 */

int _sqrt_helper(int n, int guess)

{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - Renvoie la racine carrée naturelle d'un nombre.
 * @n: Le nombre dont on veut trouver la racine carrée.
 *
 * Return: La racine carrée naturelle de `n`.
 *         Retourne -1 si `n` n'a pas de racine carrée naturelle.
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
