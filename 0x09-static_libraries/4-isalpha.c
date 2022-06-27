#include "main.h"

/**
 * _isalpha - function returns if character is a letter
 * @c: input character
 * Return: 1 = letter/ 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int isLetter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			isLetter = 1;
		}
	}
	return (isLetter);
}
