#include "main.h"

/**
* print_alphabet - prints the alphabet 10 X
*
* Description: Prints the alphabet from 'a' to 'z' followed by a newline.
*/

void print_alphabet_x10(void);


void print_alphabet_x10(void)
{
	int n; 
	char letter;

	for (n = 0; n < 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
	{
			_putchar(letter);
	}
		_putchar('\n');

	}
}
