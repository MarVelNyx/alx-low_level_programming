#include "main.h"

/**
 * _strcpy - function copies string at point src
 * include '\0', to buffer point by dest
 * @dest: dest string
 * @src: source string to copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (aux);
}
