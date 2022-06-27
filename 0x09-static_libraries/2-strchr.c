#include "main.h"
#include <stdio.h>

/**
 * _strchr - function locates character in string
 * @s: input string to search
 * @c: input character to find
 * Return: pointer to position c
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
