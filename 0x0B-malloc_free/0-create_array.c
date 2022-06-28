#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars,
 * initalises it with a specific char
 * @size: size of array
 * @c: character to initialise
 * Return: pointer to array/ NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
