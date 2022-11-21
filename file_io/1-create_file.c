#include "main.h"

/**
 * create_file - create a file
 * @filename: ptr on char
 * @text_content: ptr on char
 * Return: the file created
 */

int create_file(const char *filename, char *text_content)
{
	int o, i;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	
	if (o == -1)
		return (-1);
	for (i = 0; i < text_content; i++)
		;
	if (text_content != NULL)
	{
		write(o, text_content, i);
	}
	close(o);
	return (1);
}

