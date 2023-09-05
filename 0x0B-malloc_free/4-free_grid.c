#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - entry point
 * @grid: char to initialize the array c
 * @height: char to initialize the array c
 * Return: pointer to the array (Success), NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
