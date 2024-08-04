#include "main.h"
/**
 * set_bit - Met à 1 la valeur du bit à un index donné
 * @n: Pointeur vers le nombre dont on veut modifier le bit
 * @index: Index du bit que l'on veut mettre à 1, en commençant par 0
 *
 * Return: 1 si ça a fonctionné, ou -1 en cas d'erreur
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int mask;
/* Vérifier si l'index est hors des limites */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
/* Créer un masque un 1 à la position de l'index */
	mask = 1ul << index;

/* Utiliser l'opération de OU bit à bit pour mettre le bit à 1 */
	*n |= mask;

	return (1);
}
