#include "main.h"

/**
 *  * flip_bits - returns the number of bits you would
 *   * need to flip to get from one number to another
 *    * @n: number one.
 *     * @m: number two.
 *      *
 *       * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (int i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & 1) != (m & 1))
			x++;
		n >>= 1;
		m >>= 1;
}
return (x);
}
