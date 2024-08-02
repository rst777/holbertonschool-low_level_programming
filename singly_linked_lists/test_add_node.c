#include <stdio.h>
#include "lists.h"

/* Fonction pour afficher la liste - utile pour les tests */
void print_listf(const list_t *h)
{
    while (h != NULL)
    {
        printf("str: %s, len: %u\n", h->str, h->len);
        h = h->next;
    }
}

/* Fonction principale pour tester add_node */
int main(void)
{
    list_t *list = NULL;

    /* Test avec une chaîne NULL */
    if (add_node(&list, NULL) == NULL)
    {
        printf("Test avec NULL réussi.\n");
    }
    else
    {
        printf("Test avec NULL échoué.\n");
    }

    /* Test avec une chaîne valide */
    if (add_node(&list, "Hello") != NULL)
    {
        printf("Test avec chaîne valide réussi.\n");
    }
    else
    {
        printf("Test avec chaîne valide échoué.\n");
    }

    /* Afficher la liste après les ajouts */
    printf("Contenu de la liste après ajouts:\n");
    print_list(list);

    /* Libération de la liste */
    free_list(list);

    return 0;
}
