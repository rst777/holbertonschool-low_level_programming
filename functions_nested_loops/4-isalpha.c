#include"main.h"

/**
* _isalpha - vérifie si le caractèr
*
* @c: Elle renvoie 1 si le caractère est une lettre alphabétique et
* 
* Return: renvoi 0 ou 1.
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 122))
		return (1);
	return (0);

}
