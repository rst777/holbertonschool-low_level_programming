#include"main.h"
/**
 * _isdigit - Vérifie sila presence d'un chiffre
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si c'est un chiffre, 0 sinon.
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
