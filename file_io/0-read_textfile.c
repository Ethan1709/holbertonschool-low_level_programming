#include "main.h"

/**
 * read_textfile - reads a text file and printsto POSIX
 * @filename: ptr on char
 * @letters: int
 * Return: the text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char *buf;

	buf  = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	if (!letters)
		return (0);
	if (write == -1)
		return (0);

	i = open(filename, O_RDONLY); 

	read(i, buf, letters);
	return (letters);
}

