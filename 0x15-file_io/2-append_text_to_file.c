#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, app, words = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_APPEND | O_WRONLY);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		app = write(f, text_content, words);
		if (app == -1)
			return (-1);
	}

	close(f);
	return (1);
}
