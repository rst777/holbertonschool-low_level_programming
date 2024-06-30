#include "main.h"
/**
 * _strncpy - Copie jusqu'à n caractères de la chaîne src à haine dest.
 *   Si src est plus courte que n, complète avec des caractères '\0
 * @dest : Chaîne de destination.
 * @src : Chaîne source à copier.
 * @n : Nombre maximal de caractères à copier.
 * Return: Pointeur vers la chaîne dest après la copie.
 *
 */

char *_strncpy(char *dest, char *src, int n)

{

	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}


	for (; i < n; i++)
{
	dest[i] = '\0';
}

	return (dest);
}
