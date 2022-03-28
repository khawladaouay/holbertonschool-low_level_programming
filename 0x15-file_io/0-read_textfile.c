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
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
	return (0);
	

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);
	fr = read(fd, buf, letters);
	buf[letters] = '\0';
	testwrite =  write(1, buf, letters);
	if (testwrite == -1)
	return (0);
	close(fd);
	return (fr);
}
