#include"main.h"

/**
* print_diagonal - imprime une ligne diagonale de caractères '\'.
* @n: nombre de fois où le caractère '\' doit être imprimé.
*
* Description: imprime une ligne diagonale de caractères '\' n fois.
* La ligne doit se terminer par un '\n'.
* Si n est 0 ou moins, imprime seulement '\n'.
*/

void print_diagonal(int n)

{
		if (n > 0)
		{
			int a, b;

			for (a = 0; a < n; a++)
			{
				for (b = 0; b < a; b++)
				{
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
