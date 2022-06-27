#include "main.h"

/**
 * _puts - function prints string followed by \n
 * @str: input string
 * Return: Nothing
 */

void _puts(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
