#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
* print_a_char - Affiche un caractère.
* @separator: Séparateur pour l'affichage.
* @args: Liste des arguments contenant un caractère à afficher.
*/
void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
* print_a_integer - Affiche un entier.
* @separator: Séparateur pour l'affichage.
* @args: Liste des arguments, contenant un entier à afficher.
*/
void print_a_integer(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
* print_a_float - Affiche un flottant.
* @separator: Séparateur pour l'affichage.
* @args: Liste des arguments, contenant un flottant à afficher.
*/
void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
* print_a_char_ptr - Affiche une chaîne de caractères.
* @separator: Séparateur pour l'affichage.
* @args: Liste des arguments, contenant une chaîne de
* caractères à afficher.
*/
void print_a_char_ptr(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "nil";
	printf("%s%s", separator, str);
}

/**
 * print_all - Affiche divers types de données.
 * @format: Chaîne de format spécifiant les types de données à afficher.
 * @...: Arguments à afficher selon le format spécifié.
 *
 * Cette fonction affiche des arguments de divers types (caractère, entier,
 * flottant, chaîne de caractères) en fonction
 * de la chaîne de format fournie.
 */
void print_all(const char * const format, ...)

{
	op_t ops[] = {
		{"c", print_a_char},
		{"i", print_a_integer},
		{"f", print_a_float},
		{"s", print_a_char_ptr},
		{NULL, NULL}
	};

	va_list args;
	int i = 0, j;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
{
		j = 0;

		while (ops[j].op != NULL)
		{
			if (format[i] == *(ops[j].op))
			{
				ops[j].f(separator, args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
