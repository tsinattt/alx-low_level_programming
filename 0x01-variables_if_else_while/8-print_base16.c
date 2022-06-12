/*
 * File: 8-print_base16.c
 * Auth: Tsinat Kifle Abebaw
 */

#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: 0
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);

	putchar('\n');

	return (0);
}
