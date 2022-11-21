#include "main.h"

/**
 * read_textfile - reads a text file and printsto POSIX
 * @filename: ptr on char
 * @letters: int
 * Return: the text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, o, w;
	char *buf;

	if (!filename || !letters)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(1, buf, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	close(o);
	return (w);
}

