#include "main.h"
#include <stdio.h>
#include <limits.h> /* Pour les constantes comme ULONG_MAX */

/**
 * get_bit - retourne la valeur du bit à un index donné
 * @n: nombre dont on veut obtenir le bit
 * @index: index du bit que l'on veut obtenir
 *
 * Return: valeur du bit à l'index donné ou -1 en cas d'erreur
 */
int get_bit(unsigned long int n, unsigned int index)
{
/* Vérifier si l'index est hors des limites */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

/* Décalage à droite du nombre et obtenir le bit le plus à droite */
	return ((n >> index) & 1);
}

