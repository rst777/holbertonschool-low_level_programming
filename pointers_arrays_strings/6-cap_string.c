#include "main.h"
/**
 * cap_string - Capitalise toutes les premières lettres des mots dans une ch
 * @str: La chaîne à modifier.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)

{
	char *ptr = str;
	int maj = 0;
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')

	{
		str[i] = str[i] - ' ';
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
		str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"'
	       	|| str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')

			{
			maj = 2;
			}

		if ((maj == 1) && (str[i] > 'z' || str[i] < 'a'))
		{
		maj = 0;
		}

		if ((maj == 1) && (str[i] >= 'a' && str[i] <= 'z'))

		{
			str[i] = str[i] - ' ';
			maj = 0;
		}

		maj--;
		i++;

		return (ptr);

		}
}
