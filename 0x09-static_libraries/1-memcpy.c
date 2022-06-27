#include "main.h"

/**
 * _memcpy - function that copys memory area
 * @dest: area dest to copy
 * @src: area source to copy from
 * @n: number of bytes
 * Return: pointer to copy location
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
