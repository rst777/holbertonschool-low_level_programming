#include "main.h"
/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères
 * de manière récursive.
 * @s: La chaîne de caractères dont la longueur doit être calculée.
 *
 * Return: La longueur de la chaîne de caractères.
 */
int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));

}
