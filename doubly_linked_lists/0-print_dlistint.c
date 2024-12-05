#include "lists.h"

/**
 * print_dlistint - affiche les éléments de la liste.
 * @h: pointeur vers la tête de la liste.
 *
 * Return: le nombre de nœuds affichés.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
