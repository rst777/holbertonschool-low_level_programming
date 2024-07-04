#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplie deux nombres passés en arguments et affiche le résultat.
 * @argc: Nombre d'arguments.
 * @argv: Tableau de chaînes contenant les arguments.
 *
 * Return: 0 si le programme réussit,
 * 1 si le nombre d'arguments est incorrect.
 */
int main(int argc, char *argv[])

{

	int num1, num2, result;


	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
