#include "main.h"

/**
 * _isupper - function that checks for uppercase char
 * @c: input character
 * Return: 1(Uppercase) or 0 (Otherwise)
 */

int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
