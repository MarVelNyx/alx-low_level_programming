#include "main.h"
/**
 * _isalpha - check description
 * @c: input character
 * Description: function to check for alphabetic
 * character
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	char lower, upper;
	int isLetter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isLetter = 1;
		}
	}
	return (isLetter);
}
