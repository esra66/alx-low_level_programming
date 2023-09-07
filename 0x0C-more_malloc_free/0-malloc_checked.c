#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * *malloc_checked - entry point,
 * @b: size of memory to be allocated.
 *Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *ar;

	ar = (int *)malloc(b);

	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
