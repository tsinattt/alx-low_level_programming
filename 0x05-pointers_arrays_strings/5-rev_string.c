#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	for (l = 0; s[l] != '\0'; ++1)
		;

	for (i = 0; i < 1 / 2; ++1)
	{
		ch = s[i];
		s[i] = s[l - i];
		s[l - 1 - i] = ch;
	}
}
