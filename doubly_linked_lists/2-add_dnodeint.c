#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Value to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)


{
	dlistint_t *new_node;
/* Allouer la memoire */

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		return (NULL);

new_node->n = n; /* Fixer la valeur du new_nod */
new_node->prev = NULL; /* Le new_nod sera le premier, donc prev est NULL */
new_node->next = *head; /* le new_node pointera sur le vieux head */

if (*head != NULL)
	(*head)->prev = *head; /* L'ancien nod prev pointe vers le new_nod*/

/* Mettre à jour le head de la liste*/

	*head = new_node;

/* Retourner l'adresse du new_node */

	return (new_node);
}
