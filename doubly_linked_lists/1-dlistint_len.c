#include "lists.h"

/**
 * dlistint_len - retourne le nombre d'éléments dans la liste.
 * @h: pointeur vers la tête de la liste.
 *
 * Return: le nombre d'éléments dans la liste.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
