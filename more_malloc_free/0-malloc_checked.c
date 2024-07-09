#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire et vérifie si l'allocation réussi.
 * @b: Le nombre d'octets à allouer.
 *
 * Description: Cette fonction alloue une quantité de mémoire
 *		spécifiée parle paramètre `b` en utilisant `malloc`.
 *		Si l'allocation échoue,
 *		la fonction termine le programme en appelant `exit(98)`.
 *		Si l'allocation réussit, elle retourne
 *		un pointeur vers la mémoire allouée.
 *
 * Return: Un pointeur vers la mémoire allouée si l'allocation réussit.
 *		Si l'allocation échoue, le programme termine avec le statut 98.
 *
 */
void *malloc_checked(unsigned int b)

{
	void *p;

	p = malloc(b);	/* Allouer b octets */

	if (p == NULL)	/* Verifier si malloc a echoué */
	{
		exit(98);	/* Quitte le prog avec le statut 98 */
	}
	return (p);	/* Retourner le pointeur alloué si réussi */
}
