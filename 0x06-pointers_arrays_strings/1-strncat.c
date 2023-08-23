#include "main.h"
/**
 * *_strncat- function that cat two strings.
 * Description: function cat two strings.
 * @dest: destination string.
 * @src:source string.
 * Return: pointer
 */
char *_strncat(char *dest, char *src)
{
	int i;
	int j;
	int k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	for (k = 0; k <= j; k++)
	{
		dest[i + k] = src[k];
	}
	return (dest);
