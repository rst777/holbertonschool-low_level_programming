#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à une position donnée.
 * @h: Double pointeur vers la tête de la liste.
 * @idx: Index de la position où insérer le nouveau nœud.
 * @n: Valeur du nouveau nœud.
 *
 * Return: Adresse du nouveau nœud, ou NULL si l'insertion échoue.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	/* Créer un nouveau node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

/* Insérer au début */
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
/* Traverser jusqu'à la position avant l'index */
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

/* Vérifier si l'index est valide */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
/* Insérer le node à la bonne position */
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
