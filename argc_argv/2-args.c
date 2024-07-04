#include "main.h"
#include <stdio.h>
/**
 * main - Affiche tous les arguments reçus, un par ligne.
 * @argc: Nombre d'arguments.
 * @argv: Tableau de chaînes contenant les arguments.
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{

	printf("%s\n", argv[i]);
	}
	return (0);
}
