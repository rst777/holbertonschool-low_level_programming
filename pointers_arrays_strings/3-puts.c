#include"main.h"
#include <stdio.h>

/**
 * _puts - Imprime une chaîne de caractères sur stdo
 * @str: La chaîne de caractères à imprimer.
 */

void _puts(char *str)

{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}
