#include"main.h"
/**
 * _isupper - Vérifie si un caractère est une lettrmajuscule.
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si le caractère est une lettremajuscule, 0 sinon.
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)

		return (1);
	return (0);
}
