#include "lists.h"

/**
 * insert_dnodeint_at_index - insère un nœud à un index donné.
 * @h: pointeur vers la tête de la liste.
 * @idx: l'index où insérer le nouveau nœud.
 * @n: valeur à insérer.
 *
 * Return: le nouveau nœud ou NULL si l'allocation échoue.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
