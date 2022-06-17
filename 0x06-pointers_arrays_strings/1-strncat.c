#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: The first string to be overwritten
 * @src: The second string to be append to dest
 * @n: number if integers to concatenate
 * Description:appends the src string to the oldest
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	    i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (dest[i - 1] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
