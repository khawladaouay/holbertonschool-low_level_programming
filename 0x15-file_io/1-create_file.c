#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: the text of the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, length = strlen(text_content) - 1;
	char *buf = malloc(sizeof(char) * length);

	if (filename == NULL || text_content == NULL)
	return (-1);
	fd = open(filename, O_RDONLY | O_WRONLY);

	if (fd == -1)
	return (-1);
	for (i=0; text_content[i] != '\0'; i++)
	write(1, buf, length);
	close(fd);
	return (1);
}
