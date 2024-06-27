#include"main.h"
/**
 * puts2 - Imprime chaque deuxième caractère d'une cha�
 * @str: La chaîne de caractèr
 *
 * Description :
 * Cette fonction parcourt la chaîne de caractères st
 *
 */

void puts2(char *str)

{


	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;

	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
