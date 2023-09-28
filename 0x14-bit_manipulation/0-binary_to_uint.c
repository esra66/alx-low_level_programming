#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to the binary string.
 * Return: The unsigned integer value of the binary string.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		x = x << 1;
		x = x | (b[i] - '0');

		i++;
	}

	return (x);
}
