#include "main.h"

/**
 * print_square - Draws a diagonal line on the terminal.
 *
 * @n: n is the number of times the character \ should be printed
 *
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}






