#include"main.h"
/**
* print_most_numbers - imprime les nombres de 0 Ã 9, sauf  && 4,
* suivi d'un retour a la ligne
*/
void print_most_numbers(void)

{
	int n;

	for (n = 0; n <= 9; ++n)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
		
}
