#include"main.h"
/**
 * swap_int - Échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le deuxième entier
 */
void swap_int(int *a, int *b)

{
	int ptr;

	ptr = *a;
	*a  = *b;
	*b = ptr;
}
