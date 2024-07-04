#include "main.h"
#include <stdio.h>
/**
 * main - Affiche le nom du programme.
 * @argc: Nombre d'arguments.
 * @argv: Tableau de chaînes contenant les arguments.
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])

{
	(void)argc;	 /* Marque le paramètre 'argc' comme inutilisé */
	printf("%s\n", argv[0]);/*print le 1er argument (le nom du programme)*/
	return (0);
}
