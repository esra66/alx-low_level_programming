#include"main.h"

/**
 *  *  * swap_int - function that takes a pointer to an int as parameter and
 *   *   *
 *    *    *
 *     *     * @a: This is the entry
 *      *      *@b: This is the entry
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

