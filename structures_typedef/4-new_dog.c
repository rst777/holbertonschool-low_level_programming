#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Crée un nouveau chien avec un nom,
 * un âge et un propriétaire donnés.
 * @name: Nom du chien.
 * @age: Âge du chien.
 * @owner: Propriétaire du chien.
 *
 * Cette fonction alloue de la mémoire pour une nouvelle structure
 * de chien et copie
 * le nom et le propriétaire fournis dans la mémoire allouée.
 * Si l'allocation mémoire
 * échoue à un moment donné, la fonction nettoie et retourne NULL.
 *
 * Return: Pointeur vers la nouvelle structure de chien créée,
 * ou NULL si l'allocation échoue.
 */
dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newD;
	/* Allouer de la mémoire pour le nouveau chien */
	newD = malloc(sizeof(dog_t));
		if (newD == NULL)
			return (NULL);
	/* Allouer de la mémoire pour le nom du chien */
		if (name == NULL)
	{
		free(newD);
		free(name);
		return (NULL);
	}
	/* Allouer de la mémoire pour le nom du propriétaire */

		if (owner == NULL)
	{
		free(newD);
		free(name);
		return (NULL);
	}
	/* Affecter l'age du chien */
		newD->name = name;
		newD->age  = age;
		newD->owner = owner;

	return (newD);
}
