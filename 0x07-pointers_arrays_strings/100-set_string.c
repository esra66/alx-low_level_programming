#include "main.h"
#include <math.h>
/**
 *  * print_diagsums- function print sum of diagonals of a square.
 *   * Description: diagonals od square.
 *    * @a:pointer of array
 *     * @size: input
 *      * Return: void no return,
 */
void print_diagsums(int *a, int size)
{

	int k, sum1 = 0, sum2 = 0;

	for (k =  0; k < size; k++)
	{
		sum1 += *(a + k * size + k);
		sum2 += *(a + k * size + (size - k - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
