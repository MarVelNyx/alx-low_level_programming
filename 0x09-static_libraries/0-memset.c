#include "main.h"

/**
 * _memset - function fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: pointer to location
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (tmp);
}
