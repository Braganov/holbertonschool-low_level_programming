#include "lists.h"

/**
 * sum_dlistint - calcule la somme des données des nœuds.
 * @head: pointeur vers la tête de la liste.
 *
 * Return: la somme des données des nœuds.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
