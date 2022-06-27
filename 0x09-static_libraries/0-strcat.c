#include "main.h"

/**
 * _strcat - function concatenates two strings
 * @dest: input string
 * @src: input string
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
