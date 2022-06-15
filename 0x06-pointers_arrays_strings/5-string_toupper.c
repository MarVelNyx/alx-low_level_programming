#include "main.h"

/**
 * string_toupper - function that changes lowercase to upper
 * @s: input string
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	char *word = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (word);
}
