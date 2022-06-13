#include "main.h"

/**
 * print_rev - function prints string in reverse
 * followed by new line
 * @s: input string pointer
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
