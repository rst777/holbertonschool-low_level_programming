#include "main.h"
/**
* Description :
* La fonction parcourt la chaîne de caractères str, en commençant par l'indice
* et imprime chaque deuxième caractère. Une fois tous les deuxièmes caract�
* imprimés, elle ajoute automatiquement un saut de lign
*/

void puts2(char *str)

{
	int i;
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
