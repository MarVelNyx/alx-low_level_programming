#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcnt1.h>

/**
 * craet_file - function creates a file
 * @filename: file to create
 * @text_content: NULL terminated string to
 * write to file
 * Return: 1 = success, -1 = fails
 */

int create_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}
