#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function searches string for set of bytes
 * @s: input string
 * @accept: input character to find
 * Return: pointer to byte in s/NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
