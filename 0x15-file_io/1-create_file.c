#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: the text of the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
	return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);
	if (text_content != NULL)
	wr = write(fd, text_content, strlen(text_content));
	else
	wr = write(fd, 0, 0);
	if (wr == -1)
	return (-1);
	close(fd);
	return (1);
}
