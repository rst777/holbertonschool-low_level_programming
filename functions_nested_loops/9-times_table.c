#include"main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the 9 times table, starting with 0,
 *              with each product separated by a comma and a space.
 */


void times_table(void)
{
	int rang;
	int colon;
	int produit;

	for (rang = 0; rang <= 9; rang++)
	{

		for (colon = 0; colon <= 9; colon++)
		{

			produit = rang * colon;

			if (colon != 0)
			{
				_putchar(',');
				_putchar('.');
			}


			if (produit <= 9)
			{
				_putchar('.');
				_putchar(produit + '0');

			}
			else
			{
				_putchar(produit / 10 + '0');
				_putchar(produit % 10 + '0');
			}
		}
			_putchar('\n');
	}
}
