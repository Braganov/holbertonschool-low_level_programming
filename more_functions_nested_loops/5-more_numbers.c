#include "main.h"

/**
 *more_numbers - Entry point
 *
 *
 *
 *   Return: Always 0 (Success)
 *
*/

void more_numbers(void)
{
	int i;
	char tobeprinted[20] = {48, 49, 50, 51, 52, 53, 54,
55, 56, 57, 49, 48, 49, 49, 49, 50, 49, 51, 49, 52};

	for (i = 0; i < 10; i++)
	{
		int a = 0;

		while (a < 20)
		{
		_putchar(tobeprinted[a]);
		a++;
		}
		_putchar(10);
	}
}

