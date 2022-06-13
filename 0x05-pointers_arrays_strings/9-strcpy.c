#include "main.h"

/**
 * _strcpy - function that copies string pointed
 * to by src, including terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to destination of string
 * @src: pointer to source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (tmp);
}
