#include "main.h"
/**
 * print_chessboard - Affiche un échiquier partir d'un tableau bidimensionnel
 * @a: Tableau bidimensionnel de 8x8 représentant l'échiquier.
 *
 * Parcourt chaque case du tableau `a` e imprime chaque caractère à la sortie
 * standard en utilisant la fonction `_putchar`.
 * Chaque caractère du tableau représente une
 * pièce d'échecs ou un espace vide.
 * Après avoir imprimé une ligne complète de l'échiquier,
 * la fonction passe à la ligne suivante pour simuler la structure échiquier.
 */
void print_chessboard(char (*a)[8])

{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)

		{
			_putchar (a[i][j]);	/** Imprime chaque caractère du tableau a[i][j] */

		}

		_putchar ('\n');	 /** Passage à la ligne après chaque ligne du tableau */
	}
}
