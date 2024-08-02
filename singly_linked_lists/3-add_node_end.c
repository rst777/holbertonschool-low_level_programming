#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Ajoute un nouveau nœud à la fin de la liste_t.
 * @head: Double pointeur vers la tête de la liste.
 * @str: Chaîne de caractères à dupliquer et ajouter au nouveau nœud.
 *
 * Return: Adresse du nouvel élément, ou NULL si l'ajout échoue.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	char *new_str;
	int len;
	/* Dupliquer la chaine */
	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)

	/* Allouer de la mémoire pour le nouveau node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str); /* Libérer la mémoire allouée pour la chaîne */
		return (NULL);
	}
	/* Initialiser le nouveau node */
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL; /* Le new node est le dernier donc next est NULL */

	/* Ajoute le new node aà la fin de la liste */
		if (*head == NULL)
	{
		/* La liste est vide le new node devient le head */
			*head = new_node;
	}
	else
	{
		/* Trouver le dernier node */
		temp = *head;
		while (temp->next != NULL)
		{
		temp = temp->next;
		}
		temp->next = new_node; /* Ajouter le nouveau node à la fin */
	}
	return (new_node);
}
