#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - Fonction qui sélectionne la fonction appropriée
 * pour effectuer l'opération demandée par l'utilisateur.
 * @s: L'opérateur passé en argument au programme
 *
 * Return: Pointeur vers la fonction qui correspond à
 * l'opérateur donné en paramètre
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

	while (ops[i].op != NULL)

	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;

	}
		return (NULL);
}
