#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - check the code.
 *
 * Create a duplicate of a string
 *
 *
 * @str: the string to copy
 * Return: Pointer to string or null if faillure
 */
char *_strdup(char *str)
{
	char *newstr;
	int size = 0;

	if (str == 0)
		return (NULL);

	for (; str[size] != '\0';)
		size++;
	size++;

	newstr = malloc(size);
	if (newstr == NULL)
		return (0);

	for (; size >= 0; size--)
		newstr[size] = str[size];

	return (newstr);
}
