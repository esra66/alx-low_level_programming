
#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * *array_range - entry point,
 * @min: minimum value
 * @max: maximum value
 *Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
