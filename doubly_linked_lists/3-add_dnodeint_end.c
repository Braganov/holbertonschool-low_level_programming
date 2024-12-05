#include "lists.h"

/**
 * add_dnodeint_end - ajoute un nœud à la fin de la liste.
 * @head: pointeur vers la tête de la liste.
 * @n: valeur à insérer dans le nœud.
 *
 * Return: le nouveau nœud ou NULL si l'allocation échoue.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
