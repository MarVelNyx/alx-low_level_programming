#include "main.h"

/**
 * _strncat - function concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: input int
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (n--)
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';

	return (dest);
}
