#include "3-calc.h"
/**
 * op_add - Fonction qui additionne deux entiers.
 * @a: Premier entier
 * @b: Deuxième entier
 *
 * Return: Résultat de l'addition
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Fonction qui soustrait deux entiers.
 * @a: Premier entier
 * @b: Deuxième entier
 *
 * Return: Résultat de la soustraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Fonction qui multiplie deux entiers.
 * @a: Premier entier
 * @b: Deuxième entier
 *
 * Return: Résultat de la multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Fonction qui divise deux entiers.
 * @a: Premier entier (dividende)
 * @b: Deuxième entier (diviseur)
 *
 * Return: Résultat de la division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Fonction qui calcule le reste de la division de deux entiers.
 * @a: Premier entier (dividende)
 * @b: Deuxième entier (diviseur)
 *
 * Return: Reste de la division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		exit(100);
	}
	return (a % b);
}
