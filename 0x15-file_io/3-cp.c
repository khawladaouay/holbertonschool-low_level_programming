#include "main.h"
void cp(const char *file_from, const char *file_to);
/**
 * main - copies from file to file
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);

}
/**
 * cp - copy from source to dest
 * @file_from: argv[1]
 * @file_to: argv[2]
 */
void cp(const char *file_from, const char *file_to)
{
	int fDfrom, fDto, sZ;
	char buf[1024];

	fDfrom = open(file_from, O_RDONLY);
	if (fDfrom == -1 || file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fDto = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((sZ = read(fDfrom, buf, 1024)) > 0)
	{
		if (write(fDto, buf, sZ) != sZ || fDto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (sZ == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fDto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fDto);
		exit(100);
	}
	if (close(fDfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fDfrom);
		exit(100);
	}
}
