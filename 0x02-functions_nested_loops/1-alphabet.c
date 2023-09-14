#include "main.h"
/*
 * print_alpahbet - prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
