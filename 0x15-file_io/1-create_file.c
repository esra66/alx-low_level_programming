#include"main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1..
 */


int create_file(const char *filename, char *text_content)
{
	int fo, fw;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fo == -1)
		return (-1);

	if (text_content != NULL)
	{
		ptr = text_content;
		while (*ptr != '\0')
			ptr++;
		fw = write(fo, text_content, ptr - text_content);
		if (fw == -1)
		{
			close(fo);
			return (-1);
		}
	}

	close(fo);
	return (1);
}
