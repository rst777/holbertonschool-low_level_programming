#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main C string to be scanned.
 * @accept: The string containing the list of characters to match in s.
 *
 * Return: The number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)

{
	unsigned int length = 0;
	int i, j;
	int found;
	/** Traverse each character of s */
	for (i = 0; s[i] != '\0'; i++)

	{
		found = 0;
	/** Check if the character s[i] is in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			found = 1;
			break;
		}

		}
		/** If the character s[i] is not in accept, break the loop */
	if (!found)
	{
		break;
	}

	 /** If found, increment the length */
	length++;
	}
	return (length);
}
