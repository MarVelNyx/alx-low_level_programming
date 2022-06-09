#include "main.h"

/**
 * _isdigit - function that checks for a digit from 0-9
 * @c: input integer
 * Return: 1(digit) or 0(otherwise)
 */

int _isdigit(int c)
{
	char num = '0';
	int isdigit = 0;

	for (; num <= '9'; num++)
	{
		if (num == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
