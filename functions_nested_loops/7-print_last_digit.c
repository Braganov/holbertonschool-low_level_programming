#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: argument to be check
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
{
	int baptiste;

	absVal = n % 10;

	if (baptiste < 0)
	{
		baptiste = baptiste * -1;
	}
	_putchar(baptiste + '0');
	return (baptiste);
}
