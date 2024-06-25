#include"main.h"
/**
 * print_triangle - Prints a triangle of size 'size' using '#'
 * @size: The size of the triangle
 *
 * Description: Prints a right-aligned triangle of size 'size'.
 * Each line of the triangle should end with a new line.
 * If size is 0 or less, only a new line is printed.
 */
void print_triangle(int size)

{

	int i, j, k;


	if (size > 0)

	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		{

			_putchar('\n');
	}
}
