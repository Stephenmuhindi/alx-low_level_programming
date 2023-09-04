#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- display text to STDOUT.
 * @filename: text file to read
 * @letters: amount of chars to be read
 * Return: q - bytes amount to display, failure 0 or filename = NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t q;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	q = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (q);
}
