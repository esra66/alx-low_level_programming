#include"main.h"
/**
 *  * _puts - Write a function that prints a string, followed by a new line, to
 *   * stdout.
 *    *
 *     * @str: This is my input string
 *      *
 */

void _puts(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
	_putchar('\n');
}
