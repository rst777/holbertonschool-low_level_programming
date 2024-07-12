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
	/* Allouer de la mémoire pour le nouveau chien */
	dog_t *new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
	{
		return (NULL);
	}
	/* Allouer de la mémoire pour le nom du chien */
	new_dog->name = malloc(strlen(name) + 1);
		if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	/* Allouer de la mémoire pour le nom du propriétaire */
	new_dog->owner = malloc(strlen(owner) + 1);
		if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	/* Affecter l'age du chien */
	new_dog->age = age;

	return (new_dog);
}
