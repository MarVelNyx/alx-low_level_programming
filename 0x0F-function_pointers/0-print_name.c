#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function prints names
 * @name: pointer to name
 * @f: function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name;
}
