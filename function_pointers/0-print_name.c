#include "function_pointers.h"
/**
 * print_name - Appelle une fonction donnée avec un nom en argument
 * @name: Pointeur vers une chaîne de caractères représentant le nom
 * @f: Pointeur vers une fonction qui prend un char * en argument
 * et ne retourne rien
 *
 * Description: Cette fonction prend un nom et une fonction en arguments. Elle
 * appelle la fonction pointée par f en lui passant le nom comme argument.
 */
void print_name(char *name, void (*f)(char *))

{
	f(name);
}
