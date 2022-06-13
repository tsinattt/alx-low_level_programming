#include "main.h"

/**
 * print_rev - prints a string , in reverse
 * @s: a string that will be reversed
 * Description: reverese a string
 * Return: string in reverese
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (n = n - 1; n >= 0; n--)
	{
		_putchar (s[n]);
	}
	_putchar ('\n');
}
