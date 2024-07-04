#include "main.h"
/**
 * check_prime - Fonction auxiliaire pour vérifier si un nombre est premier.
 * @n: Le nombre à vérifier.
 * @i: Le diviseur à tester.
 *
 * Return: 1 si `n` est premier, 0 sinon.
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - Vérifie si un nombre est un nombre premier.
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si `n` est un nombre premier, 0 sinon.
 */
int is_prime_number(int n)

{
	if (n <= 1)
	return (0);

		return (check_prime(n, 2));

}
