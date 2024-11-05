#include "main.h"
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: source string
 * @needle: searching string
 *
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)
			;
		if (!(needle[count]))
			return (haystack);
	}
	return (0);
}
