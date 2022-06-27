#include "main.h"

/**
 * _isdigit - function checks for digit
 * @c: input integer
 * Return: 1 if c = digit/ 0 otherwise
 */

int _isdigit(int c)
{
	char i = '0';
	int check = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			check = 1;
			break;
		}
	}
	return (check);
}
