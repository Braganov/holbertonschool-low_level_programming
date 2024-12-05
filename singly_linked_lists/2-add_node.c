#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to add as the new node's str
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t i;

if (!str)
return (NULL);
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
;
new_node->len = i;
new_node->next = *head;
*head = new_node;
return (new_node);
}
