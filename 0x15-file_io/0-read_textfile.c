#include"main.h"

/**
 * read_textfile - entry point
 * @filename: filename
 * @letters: number of letters
 * Return: number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fr, fw, fo;
	char *ptr;

	if (filename == NULL)
		return (0);
	if (!letters)
		return (0);

	ptr = malloc(sizeof(char) * letters);

	if (ptr == NULL)
		return (0);
	fo = open(filename, O_RDONLY);

	if (fo == -1)
		return (0);

	fr = read(fo, ptr, letters);
	if (fr == -1)
		return (0);

	fw = write(STDOUT_FILENO, ptr, fr);
	if (fw == -1)
		return (0);
	close(fo);
	return (fw);
}
