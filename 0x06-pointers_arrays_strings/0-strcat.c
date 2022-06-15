#include "main.h"

/**
 * _strcat - function concatenates two strings
 * @dest: input string
 * @src: input string
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';
	return (dest);
}
