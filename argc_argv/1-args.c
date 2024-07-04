#include "main.h"
#include <stdio.h>
/**
 * main - Affiche le nombre d'arguments passés au programme.
 * @argc: Nombre d'arguments.
 * @argv: Tableau de chaînes contenant les arguments (non utilisé ici).
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])

{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
