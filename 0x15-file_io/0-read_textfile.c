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
	int x, z;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	x = read(fd, buf, letters);
	if (x < 0)
	{
		free(buf);
		return (0);
	}
	buf[x] = '\0';
	close(fd);
	z = write(STDOUT_FILENO, buf, x);
	if (z < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (z);
}
