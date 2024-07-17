#include "3-calc.h"
/**
 * get_op_func - Fonction qui sélectionne la fonction appropriée
 * pour effectuer l'opération demandée par l'utilisateur.
 * @s: L'opérateur passé en argument au programme
 *
 * Return: Pointeur vers la fonction qui correspond à
 * l'opérateur donné en paramètre
 */

int (*get_op_func(char *s))(int, int) {
	int i;

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	(void)s;
	for (i = 0; ops[i].op != NULL; i++)
	{
	if (*(ops[i].op) == *s && s[1] == '\0')
		return (ops[i].f);

	}
		return (NULL);
}
