#include "main.h"
/**
 * read_textfile - that reads a text file and prints it ot the POSIX
 * @filename: name of the file
 * @letters: the number of letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fr;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);
	fr = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, fr);
	free(buf);
	close(fd);
	return (fr);
}
