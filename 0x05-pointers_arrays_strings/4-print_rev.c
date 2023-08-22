#include "main.h"

/**
 *  * print_rev - This function prints a reverse string
 *   *
 *    * @s: This is the input string
 */
void print_rev(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	for (size = size - 1; s[size] != '\0'; size--)
	{
		_putchar(s[size]);
	}
	_putchar('\n');
}
