#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns pointer to 2D array
 * of integers
 * @width: input integer columns
 * @height: input integer rows
 * Return: pointer to 2D array/ NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
