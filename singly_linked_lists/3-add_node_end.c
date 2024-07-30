#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

/* Allouer la memoire */
	new_node = malloc(sizeof(list_t));
	{
		if (new_node == NULL)
		return (NULL);
	}
/* Dupliquer la chaine*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
/* Assigner la longueur de la chaine */

	new_node->len = strlen(str);

/* Initialise le new_node */
	new_node->next = NULL;

/* Verifier si la liste est vide */
	if (*head == NULL)
{
	*head = new_node; /* le nouveau nod devient le debut de la liste */
	return (new_node);
}
/* Trouver la fin de la liste */
	temp = *head;

	while (temp->next != NULL)
	{
	temp = temp->next;
	}
/* Ajouter le new_nod à la fin */
		temp->next = new_node;
	return (new_node);
}
