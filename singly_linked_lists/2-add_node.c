#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Ajoute un nouveau nœud au début de la liste_t.
 * @head: Double pointeur vers la tête de la liste.
 * @str: Chaîne de caractères à dupliquer et ajouter au nouveau nœud.
 *
 * Return: Adresse du nouvel élément, ou NULL si l'ajout échoue.
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


