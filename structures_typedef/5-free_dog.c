#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire allouée pour un chien.
 * @d: Pointeur vers la structure dog_t à libérer.
 *
 * Description: Cette fonction libère la mémoire allouée pour les membres
 *              name et owner de la structure dog_t, ainsi que la mémoire
 *              allouée pour la structure elle-même. Avant de libérer la
 *              mémoire, elle vérifie que le pointeur n'est pas NULL.
 */

void free_dog(dog_t *d)

{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
