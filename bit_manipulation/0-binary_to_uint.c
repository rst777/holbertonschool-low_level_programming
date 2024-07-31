#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number represented as a string to an
 * unsigned integer.
 * @b: A pointer to a string containing the binary number.
 *
 * Description: This function converts a string of binary digits (0 and 1)
 * to its equivalent unsigned integer value. The string is
 * expected to be composed of characters '0' and '1' only. If
 * the string is NULL or contains any invalid characters, the
 * function returns 0. Leading and trailing spaces are not
 * allowed.
 *
 * Return: The converted unsigned integer value if successful, otherwise 0.
 */
unsigned int binary_to_uint(const char *b)

{
	unsigned int val = 0;
	int i = 0;
/* Vérifie si pointeur est NULL */
	if (b == NULL)
		return (0);
/* Parcours chaque caractère de la chaine */
	while (b[i] != '\0')
	{
/* Vérifie si le caractère est un 0 ou 1 */
		if (b[i] != '0' && b[i] != '1')
			return (0); /*Retourne 0 si caractère non trouvé */

/* Décale val d'un bit vers la gauche et ajoute le bit courant */
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
