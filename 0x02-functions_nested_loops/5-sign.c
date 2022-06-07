#include "main.h"
/**
 * print_sign - check description
 * @n: input number
 * Description: prints the sign of a number
 * Return: 1(positive) or 0(zero) or
 * -1(negative)
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}	
	return (value);
}
