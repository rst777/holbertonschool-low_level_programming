#include"main.h"

/**
 * print_line - imprime une ligne de caractères '_'.
 * @n: nombre de fois où le caractère '_' doit être imprimé.
 *
 * Description: imprime une ligne de caractères '_' n fois.
 * La ligne doit se terminer par un '\n'.
 * Si n est 0 ou moins, imprime seulement '\n'.
 */

void print_line(int n)

{
		int a;

		if (n > 0)
		{
			for (a = 0; a < n; a++)
			{
				_putchar('_');
			}
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
}
