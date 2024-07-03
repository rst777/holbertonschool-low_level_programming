#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: The destination buffer where the content is to be copied.
 * @src: The source buffer from which the content is to be copied.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination buffer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	char *p_dest = dest;
	char *p_src = src;

	while (n--)
	{
		*p_dest++ = *p_src++;
	}
	return (dest);
}
