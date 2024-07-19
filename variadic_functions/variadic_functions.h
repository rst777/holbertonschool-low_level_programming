#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>


typedef struct op
{
	char *op;
	void (*f)(char *separator, va_list args);
} op_t;

/* Prototype de functions*/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * print_a_char - Imprime un caractère.
 * @separator: Le séparateur à imprimer avant le caractère.
 * @args: Une va_list contenant le caractère à imprimer.
 *
 * Description : Cette fonction imprime un seul caractère précédé du
 * séparateur donné.
 */
void print_a_char(char *separator, va_list args);

/**
 * print_a_integer - Imprime un entier.
 * @separator: Le séparateur à imprimer avant l'entier.
 * @args: Une va_list contenant l'entier à imprimer.
 *
 * Description : Cette fonction imprime un entier
 *  précédé du séparateur donné.
 */
void print_a_integer(char *separator, va_list args);

/**
 * print_a_float - Imprime un flottant.
 * @separator: Le séparateur à imprimer avant le flottant.
 * @args: Une va_list contenant le flottant à imprimer.
 *
 * Description : Cette fonction imprime un flottant
 * précédé du séparateur donné.
 */
void print_a_float(char *separator, va_list args);

/**
 * print_a_char_ptr - Imprime une chaîne de caractères.
 * @separator: Le séparateur à imprimer avant la chaîne de caractères.
 * @args: Une va_list contenant la chaîne de caractères à imprimer.
 *
 * Description : Cette fonction imprime une chaîne de caractères
 *  précédée du
 * séparateur donné. Si la chaîne est NULL, elle imprime "(nil)"
 *  à la place.
 */
void print_a_char_ptr(char *separator, va_list args);

#endif
