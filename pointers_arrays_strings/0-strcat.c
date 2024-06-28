#include"main.h"
/**
 *  _strcat -  fonction pour concaténer deux chaînes de cactere.
 *
 *  Ajoute la chaîne src à la fin de la chaîne dest.
 *        ecrase '\0', puis ajoute un nouveau '\0'.
 * @dest: dest Chaîne de destination.
 * @src: Chaîne source à ajouter.
 * Return: pointer source de la chaine.
 *
 * @ dest doit avoir suffisamment d'espace pour le résulta.
 */


char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++, length++)
{
	dest[length] = src[i];
}
	dest[length] = '\0';


	return (dest);
}
