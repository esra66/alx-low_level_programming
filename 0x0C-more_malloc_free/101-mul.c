#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *  * *string_nconcat - entry point,
 *   * @s1: string to append to
 *    * @s2: string to concatenate from
 *     * @n: number of bytes from s2 to concatenate to s1
 *      *Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{}
	size1 = i;
	for (i = 0; s2[i] != '\0'; i++)
		;
	size2 = i;
	if (n >= size2)
	{
		n = size2;
	}

	ar = malloc(sizeof(char) * (size1 + n + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ar[size1] = s2[i];
		size1++;
	}
	ar[size1] = '\0';
	return (ar);
}
