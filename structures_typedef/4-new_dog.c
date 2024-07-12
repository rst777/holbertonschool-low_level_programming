#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	/* Allouer de la mémoire pour la structure du chien */
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	/* Allouer de la mémoire pour copier le nom du chien */
	newDog->name = strdup(name);
		if (newDog->name == NULL)
		{
		free(newDog);
		return (NULL);
		}

	/* Allouer de la mémoire pour copier le nom du propriétaire */
	newDog->owner = strdup(owner);
		if (newDog->owner == NULL)
		{
		free(newDog->name);
		free(newDog);
		return (NULL);
		}
	/* Affecter l'age du chien */
	newDog->age = age;

	return (newDog);
}
