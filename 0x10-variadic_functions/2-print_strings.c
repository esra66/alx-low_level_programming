#include "variadic_functions.h"

/**
 *  * print_strings - Print numbers using a separator
 *   * @separator: The string separator
 *    * @n: The quantity of numbers
 *     * @...: The list of numbers
 *       * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	var_list args;
	unsigned int i;
	char *p;

	var_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(args, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	var_end(args);
	printf("\n");
}
