#include"main.h"

/**
 * print_rev - Imprime une chaîne de caractères à l'envers
 * @s: La chaîne de caractères à imprimer
 */

void print_rev(char *s)

{
	int length = 0;
	int i;

	while (s[length] != '\0')

	{
		length++;
	}
		for (i = length - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');

}
