#include <stdio.h>

/**
* main - Entry point
* Description: 'Print numberz with for and putchar'
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
