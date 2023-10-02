#include "main.h"
/**
 *  * main - copies the content of a file to another file
 *   * @argc: argument count
 *    * @argv: argument vector
 *     * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int f1, f2, read, c1, c2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((_read = read(f1, buffer, 1024)) > 0)
	{
		if (f2 < 0 || (write(f2, buffer, _read) != _read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(f1);
	if (c1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1), exit(100);
	}
	c2 = close(f2);
	if (c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2), exit(100);
	}
	return (0);
}
