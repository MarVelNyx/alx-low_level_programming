#include "main.h"

/**
 * _strpbrk - function searches string for any of a set of bytes
 * @s: input string
 * @accept: input character to locate
 * Return: pointer to bytes in s/NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	char *tmp = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);

			accept++;
		}
		accept = tmp;
		s++;
	}
	return (NULL);
}
