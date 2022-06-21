#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area to copy
 * @src: source to copy from
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (tmp);
}
