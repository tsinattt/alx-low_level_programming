/*
 * File: 7-print_tebahpla.c
 * Auth: Tsinat Kifle Abebaw
 */

#include <stdio.h>

/*
 * main - program that prints the lowercase alphabet in reverse, followed by a
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: 0
 */

int main (void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);

putchar('\n');

return (0);
}
