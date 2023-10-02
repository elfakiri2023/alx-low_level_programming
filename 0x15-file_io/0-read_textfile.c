#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file.
 * @filename: file to read
 * @letters: number of letters.
 * Return: number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *b;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, b, letters);
	close(fd);
	if (lenr == -1)
	{
		free(b);
		return (0);
	}
	lenw = write(STDOUT_FILENO, b, lenr);
	free(b);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
