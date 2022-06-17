#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: The destination value
 * @src: The source value
 * Description:the second string to the dest
 * Return: A pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src)
{
	int i, j;

	i = 0

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];
		return (dest);
}
