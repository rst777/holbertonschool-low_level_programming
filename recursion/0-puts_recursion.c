#include "main.h"
/**
 * _puts_recursion - Affiche une chaîne suivie d'un
 * saut de ligne en utilisant la récursivité.
 * @s: La chaîne à afficher.
 *
 * Cette fonction affiche chaque caractère de la chaîne `s`
 * un par un de manière récursive
 * jusqu'à ce qu'elle atteigne le caractère nul,
 * après quoi elle affiche un saut de ligne.
 */
void _puts_recursion(char *s)

{
	if (*s)	/**Si la chaine n'ai pas vide (*s) imprime le caractere*/
	{
		_putchar(*s);	/*Affiche le caractere*/
		 _puts_recursion(s + 1); /**Appel recursif avec le pointeur avance*/
	}
	else
	{

		_putchar('\n'); /**Si la chaine est vide imprime un saut de ligne*/

	}
}
