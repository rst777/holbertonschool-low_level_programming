#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Imprime des chaînes de caractères suivies d'un séparateur
 * @separator: Le séparateur entre les chaînes de caractères
 * @n: Le nombre de chaînes de caractères à imprimer
 *
 * Return: Rien
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	/* Obtenir le prochain argument comme une chaine de caractère */
		str = va_arg(args, char*);

	/* Si str est NULL */
		if (str == NULL)
			printf("(nil)");

		else

			printf("%s", str);

	/* Ajouter le séparateur sauf après le dernier élément */
		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}

