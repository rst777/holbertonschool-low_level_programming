#include "main.h"
/**
 * _strchr - Localise la première occurrence du caractère c dans la chaîne
 *
 * @s: La chaîne dans laquelle chercher
 * @c: Le caractère à cherche
 *
 * Return: Un pointeur vers la première occurrence du caractère c da
 *         ou NULL si le caractère n'est pas trouv�
 */
char *_strchr(char *s, char c)

{

	while (*s != '\0')

	{

		if (*s == c)
	{
		return ((char *)s);
	}
		s++;
	}

		return ('\0');
}
