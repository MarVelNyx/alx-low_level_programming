#include "main.h"
#include <stdio.h>

/**
 * main - program prints its name followed by
 * new line
 * @argc: argument count
 * @argv: argument value
 * Return: 0 = success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
