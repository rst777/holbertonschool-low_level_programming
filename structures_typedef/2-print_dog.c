#include "dog.h"
#include <stdio.h>
/**
 * struct dog - Structure contenant les informations d'un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (flottant)
 * @owner: Propriétaire du chien (chaîne de caractères)
 */
void print_dog(struct dog *d)

{
	/* Si d = null return rien */
	if (d == NULL)
		return;

	/* Si les élément de d = NULL imprime nil */
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
}
