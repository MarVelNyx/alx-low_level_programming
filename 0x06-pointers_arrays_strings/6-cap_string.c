#include "main.h"

/**
 * cap_string - function that capitalises all words of a string
 * @s: input string
 * Return: changed input
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (check_separator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;

		i++;
	}

	return (s);
}

/**
 * check_separator - checks for word separator
 * space, tabulation, new line, ,, ;, ., !, ?, \", (, ), {, and }
 * @c: input from above function
 * Return: 1 if separator or 0 otherwise
 */

int check_separator(char c)
{
	int i = 0;
	char separator[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	for (; i < 13; i++)
	{
		if (c == separator[i])
			return (1);
	}

	return (0);
}
