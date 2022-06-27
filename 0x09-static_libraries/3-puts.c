#include "main.h"

/**
 * _puts - function prints string followed by \n
 * @s: input string
 * Return: Nothing
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
