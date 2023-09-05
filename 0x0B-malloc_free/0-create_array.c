#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;

ar = malloc(size * sizeof(c));
if (ar == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	ar[i] = c;
}
return (ar);
}

