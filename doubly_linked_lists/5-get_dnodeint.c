#include "lists.h"

/**
 * get_dnodeint_at_index - récupère un nœud à un index donné.
 * @head: pointeur vers la tête de la liste.
 * @index: l'index du nœud à récupérer.
 *
 * Return: le nœud à l'index donné ou NULL si l'index est invalide.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
