#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Additionne des nombres positifs passés en arguments.
 * @argc: Nombre d'arguments.
 * @argv: Tableau de chaînes contenant les arguments.
 *
 * Return: 0 si le programme réussit,
 * 1 si l'un des arguments n'est pas un nombre positif.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i = 1;

	for (; i < argc; i++)
	{
	num = atoi(argv[i]);	/**convertit l'argument en entier*/
	if (num <= 0)
	{
		printf("Error\n");
		return (1);
	}
	sum += num;	/**Ajoute l'entier a la somme*/
	}
	printf("%d\n", sum);	/**Affiche la somme des nombres positifs*/
	return (0);
}
