#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: Address of the pointer to the first node of the list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new node if successful, or NULL if it fails.
 *
 * Description: This function allocates memory for a new node, duplicates
 * the string passed as a parameter, updates the pointers to insert the
 * new node at the beginning of the list, and returns the address of the
 * new node. If memory allocation or string duplication fails, it frees
 * the allocated memory and returns NULL.
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
/* Allouer la memoire */

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

/* Dupliquer la chaine*/

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
/* Assigner la longueur de la chaine */

	new_node->len = strlen(str);

/* Mettre à jour le nouveau node */

	new_node->next = *head;

/* Mettre à jour le head de la liste*/

	*head = new_node;

/* Retourner l'adresse du new_node */

	return (new_node);
}

