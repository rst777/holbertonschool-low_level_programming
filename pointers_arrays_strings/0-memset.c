#include "main.h"
/**
 * _memset - Remplit les premiers n octets de la zone memoire pointee p
 *           avec l'octet constant b.
 *
 * @s: Pointeur vers la zone memoire a  remplir.
 * @b: L'octet de valeur a  utiliser pour remplir.
 * @n: Le nombre d'octets a  remplir avec cette valeur.
 *
 * Return: Un pointeur vers la zone memoire s.
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
