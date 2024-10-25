#include "main.h"

/**
 * main - Entry point
 *
 *prints the alphabet - only use _putchar
 *
 *Return: Always 0 (Success)
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
