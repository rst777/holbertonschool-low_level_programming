#include"main.h"
/**
 * _islower - Vérifie si un caractère est une lettre minuscule.
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si le caractère est une lettre minuscule, 0 sinon.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
