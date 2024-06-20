#include "main.h"

/**
* print_alphabet - prints the alphabet
*
* Description: Prints the alphabet from 'a' to 'z' followed by a newline.
*/


void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
