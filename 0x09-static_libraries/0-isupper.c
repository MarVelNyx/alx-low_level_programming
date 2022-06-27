#include "main.h"

/**
 * _isupper - function checks for uppercase character
 * @c: input string
 * Return: 1 if uppercase/ 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int check = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			check = 1;
			break;
		}
	}
	return (check);
}
