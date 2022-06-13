#include <stdio.h>

/**
 * main - Write a function that takes a pointer to an int as parameter and upda
 * es the value it points to to 98.
 * Prototype: void reset_to_98(int *n);
 * @n: input
 * Return: n
 */
void reset_to_98(int *n)
{
	*n = 98;
}
