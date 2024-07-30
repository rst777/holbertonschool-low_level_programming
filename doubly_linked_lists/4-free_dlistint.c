#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)

{
	dlistint_t *temp;

	while (head != NULL) /* Traverse la list */
	{
		temp = head; /* Stock l'adresse du nod dans temp */
		head = head->next; /* Bouge sur le nod suivant */
		free(temp); /* Libère le nod courant */
	}
}
