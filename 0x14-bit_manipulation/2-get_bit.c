#include "main.h"

/**
 *  * get_bit - Returns the value of a bit at a given index.
 *   * @n: Unsigned long int from which to get the bit value.
 *    * @index: Index of the bit to retrieve, starting from 0.
 *     *
 *      * Return: Value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}

