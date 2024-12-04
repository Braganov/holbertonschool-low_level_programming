#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t list.
 * @str: string to be added to the new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *temp;

    new = malloc(sizeof(list_t));
    if (!new)
        return (NULL);

    new->str = strdup(str);
    if (!new->str)
    {
        free(new);
        return (NULL);
    }

    new->len = strlen(str);
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
    }

    return (new);
}
