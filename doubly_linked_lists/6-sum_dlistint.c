#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all the data (n) in the list. If the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;

	while (head != NULL) /* Traverse la list */
{
	sum += head->n; /* Ajouter la valeur du nod actuel à la somme */
	head = head->next; /* Bouge vers l'autre nod */
}
return (sum); /* return sum de toutes les données */
}
