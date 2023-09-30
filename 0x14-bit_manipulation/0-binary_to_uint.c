#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to the binary string.
 * Return: The unsigned integer value of the binary string.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int length;
	unsigned int x = 0;

	if (b == NULL)
		return (0);

	for (length = strlen(b) - 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		if (b[length] == '1')
		{
			x += (1 << n);
		}
		if (b[length] == '0')
		{
			x += (0 << n);
		}
		n++;
	}
	return (x);
}
