#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Imprime des nombres suivis d'un séparateur.
 * @separator: La chaîne à imprimer entre les nombres.
 * @n: Le nombre d'entiers à imprimer.
 *
 * Description: Si separator est NULL, il n'est pas imprimé.
 *              Une nouvelle ligne est imprimée à la fin.
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

	/* Imprime le nombre*/
	printf("%d", num);

	/*
	*Imprime le séparateur si ce n'est pas le dernier nbre
	*et si le séparateur n'est pas null
	*/
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);

		}
	}

		printf("\n");

	va_end(args);

}
