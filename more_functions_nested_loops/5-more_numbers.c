#include"main.h"
/**
* more_numbers - imprime 10 fois les nombres de 0Ã| 14.
*/

void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)

			{

				_putchar('1');

			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
