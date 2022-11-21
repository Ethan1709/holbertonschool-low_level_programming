#include "main.h"

/**
 * read_textfile - reads a text file and printsto POSIX
 * @filename: ptr on char
 * @letters: int
 * Return: the text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t r;
	char *buf;

	if (!filename || !letters)
		return (0);

	buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}	
	r = read(fd, buf, letters);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	write(1, buf, r);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (letters);
}

