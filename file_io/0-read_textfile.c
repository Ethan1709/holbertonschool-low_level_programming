#include "main.h"

/**
 * read_textfile - reads a text file and printsto POSIX
 * @filename: ptr on char
 * @letters: int
 * Return: the text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i = 0;

	if (!filename)
		return (0);
	if (!letters)
		return (0);

	while (i < filename)
		_putchar(filename);

	return (letters);
}

