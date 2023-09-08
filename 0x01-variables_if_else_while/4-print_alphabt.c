#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line
 * Print all the letters except q and e
 *
 * Return: return 0
 */

int main(void)
{
	char tsiletter = 'a';

	while (tsiletter <= 'z')
	{
		if ((tsiletter != 'q') && (tsiletter != 'e'))
		{
			putchar(tsiletter);
		}
		tsiletter++;
	}
	putchar('\n);
	return (0);
}
