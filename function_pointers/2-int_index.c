#include "function_pointers.h"
/**
 * int_index - Cherche un entier dans un tableau
 * @array: Le tableau dans lequel chercher
 * @size: Le nombre d'éléments dans le tableau
 * @cmp: Le pointeur vers la fonction utilisée pour comparer les valeurs
 *
 * Return: L'index du premier élément pour lequel
 * la fonction cmp ne retourne pas 0, ou -1 si aucun élément ne correspond
 * ou si size <= 0 ou si array est NULL
 */
int int_index(int *array, int size, int (*cmp)(int))

{
	/* Déclaration de la variable i pour l'itération */
	int i;

	/* Vérification si la taille est <=0 */
	if (size <= 0)
	{
	return (-1);
	}
	/* Vérification si le tableau est nul */
	if (array == 0)
	{
	return (-1);
	}
	/* Boucle pour parcourir chaque élement du tableau */
	for (i = 0; i < size; i++)
	{
	/* Utilisation de la fonction comparaison cmp sur l'élement actuel */
		if (cmp(array[i]) != 0)
		{
	/* Retourne l'indice de l'élement si cmp retourne une valeur diff de 0 */
		return (i);
		}
	}
	return (-1);
}
