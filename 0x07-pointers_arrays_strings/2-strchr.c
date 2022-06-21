#include "main.h"
#include <stdio.h>

/**
 * _strchr - function locates character in a string
 * @s: input string
 * @c: input character
 * Return: pointer of first occurence/NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);

		s++;
	}
	if (c == *s)
		return (s);

	return (NULL);
}
