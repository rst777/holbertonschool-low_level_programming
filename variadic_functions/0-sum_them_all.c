#include "variadic_functions.h"
#include <stdarg.h>
/*
 * sum_them_all - Fonction qui retourne la somme de tous ses paramètres.
 * @n: Nombre de paramètres
 *
 * Cette fonction prend un nombre variable d'arguments et retourne la somme
 * de tous ces arguments.
 *
 * Return: Somme de tous les paramètres
 */

	/* Déclaration de la fonction variadique ... */
int sum_them_all(const unsigned int n, ...)

	/*
	 * Cette ligne déclare un objet de type va_list qui est utilisé
	 * pour accéder aux arguments variables.
	 **/
{
	va_list args;
	unsigned int i;
	int somme = 0;

	/* Initialise args pour commencer à parcourir les arguments après n */
	va_start(args, n);


	for (i = 0; i < n; i++)
	{
	/* Récupère chaque argument dans args avec le type spécifié (int). */
		somme += va_arg(args, int);
	}
	/*
	 * Termine l'utilisation de args une fois que
	 *  tous les arguments ont été traités.
	 */
	va_end(args);

	return (somme);
}
