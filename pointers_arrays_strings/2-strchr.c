#include "main.h"
/**
 * _strchr - Localise la premiere occurrence du caractere c dans la chaine
 *
 * @s: La chaine dans laquelle chercher
 * @c: Le caractere a  cherche
 *
 * Return: Un pointeur vers la premiere occurrence du caractere c da
 *         ou NULL si le caractere n'est pas trouve
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
