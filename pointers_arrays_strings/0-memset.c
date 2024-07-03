#include "main.h"
/**
 * _memset - Remplit les premiers n octets de la zone m�moire pointée p
 *           avec l'octet constant b.
 *
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: L'octet de valeur à utiliser pour remplir.
 * @n: Le nombre d'octets à remplir avec cette valeur.
 *
 * Return: Un pointeur vers la zone mémoire s.
 */
char *_memset(char *s, char b, unsigned int n)

{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
