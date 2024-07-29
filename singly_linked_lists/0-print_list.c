#include "lists.h"
#include<stdio.h>
/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the list_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)


/*On initialise count à 0 pour compter le nombre de nœuds.*/
{
	size_t count = 0;

	while (h != NULL)	/*On utilise une boucle while pour parcourir la liste.*/
	{
		if (h->str == NULL)	/*Si str est NULL, on imprime [0] (nil).*/
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);/*Sinon, on print len et str lui-même*/
		}
		h = h->next;
		count++;
	}
	return (count);
}
