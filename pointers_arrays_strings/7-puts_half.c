#include"main.h"
/**
 * puts_half - Imprime la seconde moitieé d'une chaîne de caractè
 * @str: La chaîne de caractères à parcourir et �mpri
 */

void puts_half(char *str)

{
	int length = 0;
	int n;


	while (str[length] != '\0') /**Trouver la longueur de la chaîne de caractre*/
	{
		length++;

	}
	if (length % 2 == 0)	/**Calculer le point de départ de la moitié de chain*/
	{
		n = length / 2;

	}
	else
	{
		n = (length + 1) / 2;
	}
	while (str[n] != '\0')	/**  Imprimer la seconde moitié de la chaî*/
	{

		_putchar(str[n]);
		n++;
	}

	_putchar('\n');


}
