#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: pointer for a
 * @b: pointer for b
 * Description: swaps the value of a and b
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
