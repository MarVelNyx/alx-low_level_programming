#include "main.h"

/**
 * print_numbers - function prints numbers 0-9
 * followed by new line
 * Return: Nothing
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
