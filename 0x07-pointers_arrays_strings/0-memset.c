#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: location to fill
 * @b: char to fill location
 * @n: number of bytes to fill
 * Return: pointer to location filled
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
