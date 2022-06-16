#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: passed arguments
 * Return: return last digit
 */
int print_last_digit(int)
{
	int x;

	x = n % 10;

	if (n < 0)
	{
		x = (-1 * x);
	}

	_putchar(x + '0');
	return (x);
}
