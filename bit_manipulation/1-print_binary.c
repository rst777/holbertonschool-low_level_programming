#include "main.h"
/**
 * print_binary - Affiche la représentation binaire d'un entier non signé.
 * @n: Le nombre à convertir en binaire.
 *
 * Description: Cette fonction affiche la représentation binaire du nombre
 * donné en utilisant des opérations sur les bits et putchar
 * pour éviter les tableaux, malloc, et les opérateurs %
 * et /.
 */
void print_binary(unsigned long int n)

{
	/* Masque pour le bit le plus significatif */
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int started = 0; /* Indicateur pour éviter les zéros initiaux */

/* Parcours chaque bit du plus significatif au moins significatif */
	while (mask > 0)
	{
		if (n & mask) /* Vérifie si le bit courant est à 1 */
		{
			_putchar('1');
			started = 1; /* On a commencé à afficher les bits non nuls */
		}
		else if (started)
		{
			/* Affiche '0' après avoir commencé à afficher des bits non nuls */
			_putchar('0');
		}
		mask >>= 1; /* Passe au bit suivant */
	}

	if (!started) /* Si le nombre est 0, affiche un seul '0' */
	{
		_putchar('0');
	}
}

