#include <stdio.h>

/**
* main - Entry point
* Description: 'Print combinaison'
*
* Return: Always 0 (Success)
*/

int main(void)

{
	int c;

	for (c = 0; c <= 9; ++c)
	{
	putchar(c + '0');
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
