#include"main.h"

/**
 * read_textfile - entry point
 * @filename: filename
 * @letters: number of letters
 * Return: number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nt;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	nt = read(file, text, sizeof(char) * letters);
	if (nt == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	nt = write(STDOUT_FILENO, text, nt);
	if (nt == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (nt);
}
