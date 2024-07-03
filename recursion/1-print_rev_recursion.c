#include "main.h"
/**
 * _print_rev_recursion - Affiche une chaîne de caractères
 * en sens inverse en utilisant la récursivité.
 * @s: La chaîne de caractères à afficher en sens inverse.
 *
 * Description:
 * Cette fonction utilise la récursivité pour parcourir une chaîne
 * de caractères jusqu'à son caractère nul ('\0') et affiche chaque
 * caractère en revenant en arrière, ce qui permet
 * d'afficher la chaîne de caractères en sens inverse.
 * La fonction ne retourne aucune valeur.
 *
 * Exemple d'utilisation:
 * char str[] = "Hello";
 * _print_rev_recursion(str);
 * // Ce code affichera "olleH".
 */
void _print_rev_recursion(char *s)

{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	_putchar(*s);
	}

}
