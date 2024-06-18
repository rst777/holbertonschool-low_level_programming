#include <stdio.h>

/**
* main - Entry point
*
* Description: 'the program's print the size of various type'
*
* Return: Always 0 (Success)
*/

int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));

return (0);
}

