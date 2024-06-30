#include "main.h"
/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Première chaîne à comparer.
 * @s2: Deuxième chaîne à comparer.
 *
 * Return: Un entier négatif, nul, ou positif si s1 est respectivement
 *         inférieur, égal ou supérieur à s2.
 */
int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
