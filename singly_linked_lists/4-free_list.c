#include "lists.h"
#include "stdlib.h" /* Pour la fonction free */
/**
 * free_list - Libère une liste chaînée de type list_t
 * @head: Pointeur vers le premier nœud de la liste à libérer
 *
 * Cette fonction parcourt chaque nœud de la liste, libère la mémoire
 * allouée pour la chaîne de caractères dans chaque nœud, puis libère
 * la mémoire du nœud lui-même. La fonction continue jusqu'à ce que
 * tous les nœuds soient libérés.
 */

void free_list(list_t *head)

{
/* Déclare pointeur temporaire pour parcourir la liste */
	list_t *temp;


	while (head != NULL)
	{
		temp = head; /* Sauvegarde l'adresse du nod actuel */
		head = head->next; /* passe au nod suivant */

/* Libère la mémoire de str si elle n'est pas NULL */
	if (temp->str != NULL)
	{
		free(temp->str);
	}

/* Libère la mémoire du noeud actuel */
		free(temp);
	}
}
