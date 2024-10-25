#include "main.h"

/**
 * _isalpha - Checks if input character is alphacharacter
 *@c: arg to be checked
 *
 * Return: 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
