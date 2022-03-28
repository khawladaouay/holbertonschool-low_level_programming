#include "main.h"
/**
 * read_textfile - that reads a text file and prints it ot the POSIX
 * @filename: name of the file
 * @letters: the number of letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fr, testwrite;

	if (filename == NULL)
	return (0);
	char *buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);
	fr = read(fd, buf, letters);
	testwrite =  write(STDOUT_FILENO, buf, fr);
	if (testwrite == -1)
	return (0);
	free(buf);
	close(fd);
	return (fr);
}
