#include "main.h"
/**
 * _strncat - Concatène deux chaînes de caractères.
 *
 * @dest: Un pointeur vers la chaîne de destination.
 *        Cette chaîne doit avoir assez d'espace pour accueillir les caractèr
 *        supplémentaires de src.
 * @src: Un pointeur vers la chaîne source qui sera ajoutée à la chaîne de
 *       destination.
 * @n: Le nombre maximum de caractères à copier depuis la chaîne source.
 *
 * Description: Cette fonction ajoute jusqu'� n caractères de la chaîne sou
 *  la fin de la chaîne de destination (dest).
 * sera toujours terminée par un caractère nul ('\0').
 *
 * Return: Un pointeur vers la chaîne de destination dest.
 */

char *_strncat(char *dest, char *src, int n)

{

	int length = 0;

	int i;

	/** Trouver la fin de la chaîne de destination */

	while (dest[length] != '\0')
	{
		length++;
	}

	/** Ajouter jusqu' n caractères de rc a dest */

	for (i = 0; i < n && src[i] != '\0'; i++, length++)
{
	dest[length] = src[i];

	/** Terminer la chaîne résultante avec un caractènul */
}
	dest[length] = '\0';


	return (dest);
}
