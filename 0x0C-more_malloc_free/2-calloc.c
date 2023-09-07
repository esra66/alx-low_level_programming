#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * *_calloc - entry point,
 * @nmemb: number of elements
 * @size: size of bytes
 *Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ar[i] = 0;
	}
	return (ar);
}
