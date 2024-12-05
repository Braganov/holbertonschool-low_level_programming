#include "lists.h"

/**
 * free_dlistint - libère la mémoire utilisée par la liste.
 * @head: pointeur vers la tête de la liste.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
