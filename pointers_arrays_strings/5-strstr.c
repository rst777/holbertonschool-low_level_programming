#include "main.h"
/**
 * _strstr - Locates the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: The main string to be examined.
 * @needle: The substring to be searched in haystack.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)

{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

	while (*h && *n && (*h == *n))
	{
		h++;
		n++;
	}

		if (*n == '\0')
		{
		return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
