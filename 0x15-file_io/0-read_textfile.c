#include"main.h"

/**
 * read_textfile - entry point
 * @filename: filename
 * @letters: number of letters
 * Return: number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (wr);
}
