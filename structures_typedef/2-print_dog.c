#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Imprime les informations d'un chien
 * @d: Pointeur vers la structure dog à imprimer
 *
 * Description: Imprime le nom, l'âge et le propriétaire du chien.
 * Si un élément est NULL, imprime (nil) à la place.
 * Si le pointeur d est NULL, ne fait rien.
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
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
