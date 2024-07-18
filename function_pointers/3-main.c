#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Point d'entrée du programme
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau des arguments passés au programme
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("error\n");
		return (98);
}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];


	operation = get_op_func(operator);

	if (operation == NULL)
{
		printf("Error\n");
		return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
