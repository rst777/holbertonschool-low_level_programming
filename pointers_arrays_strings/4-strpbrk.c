#include "main.h"
/**
 * _strpbrk - Locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 * @s: The main C string to be scanned.
 * @accept: The string containing the list of characters to match in s.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)

{
	char *a;

	while (*s)	/**Parcour chaque caractere*/
	{
		for (a = accept; *a; a++)	/**puis accept pour la correspondance*/


		{
			if (*s == *a)	/** si caractere trouve renvoi sa valeur dans s */
				return (s);
		}
		s++;
	}
	return ('\0');	/** Si aucun caractère trouvé, retourner NUL*/
}
