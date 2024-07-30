#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Value to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)



{

	dlistint_t *new_node;
	dlistint_t *temp = *head;
/* Allouer la memoire */

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Fixer la valeur du new_nod */
	new_node->next = NULL; /* Le new_nod sera le premier, donc prev est NULL */

	if (*head == NULL) /* si la liste est vide NULL */

{
	new_node->prev = NULL; /* New_nod est le 1er nod */
	*head = new_node; /* Mettre à jour le head pour pointer vers le new_nod */
	return (new_node); /* Renvoie l'adresse du new_nod */
}

	while (temp->next != NULL) /* Aller jusqu'à la fin de la list */
	temp = temp->next;

	temp->next = new_node; /* Fixer le nod suivant du last nod au new_nod */
	new_node->prev = temp; /* Fixer le prev du nouveau nod au dernier nod */

	return (new_node); /* Return adresse de new_nod */

}
