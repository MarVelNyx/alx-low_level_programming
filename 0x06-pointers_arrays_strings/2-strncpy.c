#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
