#include"main.h"
#include"2-strlen.c"
/**
 * rev_string - Inverse la chaîne s en place.
 * @s: La chaîne à inverser.
 *
 * Description : prend une chaîne de caractères comme argument
 * et inverse les caractères
 * modifie la chaîne d'entrée sans utiliser de mémoire supmenta
 */

void rev_string(char *s)

{
		int length = _strlen(s);
		int i;

			for (i = 0; i < length / 2; i++)
	{
			char temp = s[i];

			s[i] = s[length - i - 1];
			s[length - i - 1] = temp;
	}

}
