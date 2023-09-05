#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - entry point,,
 * @width: char to initialize the array c
 * @height: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */
int **alloc_grid(int width, int height)
{

	int **ar;
	int i;
	int j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == 0)
		{
			while (i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
