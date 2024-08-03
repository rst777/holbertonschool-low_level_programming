#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - supprime le nœud à l'index
 * d'une liste dlistint_t
 * @head: tête de la liste
 * @index: index du nœud à supprimer
 *
 * Return: 1 si réussi, -1 en cas d'échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{


	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

/* Avancer jusqu'au noeud à l'index donné */
		for (i = 0; current != NULL && i < index; i++)
		current = current->next;

/* Vérifier si l'index est hors des limites */
		if (current == NULL)
		return (-1);

/* Si le noeud à supprimer est le 1er noeud */
	if (current == *head)
		*head = current->next;

/* Mettre a jour le pointeur prev du noeud suivant */
	if (current->next != NULL)
	current->next->prev = current->prev;

/* Mettre a jour le pointeur next du noeud précédent */
	if (current->prev != NULL)
		current->prev->next = current->next;

/* Libérer la mémoire du noeud */
	free(current);

	return (1);
}
