#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function executes function given
 * in parameter on array
 * @array: pointer to array
 * @size: size of array
 * @action: to iterate array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
