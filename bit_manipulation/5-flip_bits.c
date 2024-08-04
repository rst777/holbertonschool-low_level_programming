#include "main.h"

/**
 * flip_bits - Retourne le nombre de bits à inverser pour passer de n à m
 * @n: Premier nombre
 * @m: Deuxième nombre
 *
 * Return: Nombre de bits à inverser
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1; /* Ajouter 1 si le bit le plus à droite est 1 */
		xor_result >>= 1; /* Décaler vers la droite pour vérifier le bit suivant */
	}

	return (count);
}
